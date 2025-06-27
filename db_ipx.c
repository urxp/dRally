#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "drally_ipx.h"

#ifdef IPXNET
#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

#define SOCKTABLESIZE	150 // DOS IPX driver was limited to 150 open sockets
#define IPXBUFFERSIZE 	1424

#define CONVIPX(hostvar) hostvar[0], hostvar[1], hostvar[2], hostvar[3], hostvar[4], hostvar[5]

typedef unsigned char   Bit8u;
typedef signed short    Bit16s;
typedef unsigned short  Bit16u;
typedef int             Bit32s;
typedef unsigned int    Bit32u;
typedef Bit32s          Bits;
typedef __POINTER__ RealPt;
typedef unsigned int Bitu;


typedef struct ECBClass {
    
    RealPt ECBAddr;
	bool isInESRList;
   	struct ECBClass * prevECB;	// Linked List
	struct ECBClass * nextECB;
	
	Bit8u iuflag;		// Need to save data since we are not always in
	Bit16u mysocket;	// real mode

	Bit8u* databuffer;	// received data is stored here until we get called
	Bitu buflen;		// by Interrupt
} ECBClass;

IPX_Address LocalIPXAddress;

typedef struct packetBuffer {
	Bit8u buffer[1024];
	Bit16s packetSize;  // Packet size remaining in read
	Bit16s packetRead;  // Bytes read of total packet
	bool inPacket;      // In packet reception flag
	bool connected;		// Connected flag
	bool waitsize;
} packetBuffer;

#pragma pack(push,1)

typedef struct PackedIP {
	Uint32 host;
	Uint16 port;
} PackedIP;

#pragma pack(pop)

void UnpackIP(PackedIP ipPack, IPaddress * ipAddr) {
	ipAddr->host = ipPack.host;
	ipAddr->port = ipPack.port;
}

void PackIP(IPaddress ipAddr, PackedIP *ipPack) {
	ipPack->host = ipAddr.host;
	ipPack->port = ipAddr.port;
}
#endif

typedef unsigned int __DWORD__;
__DWORD__ reg_ax;
__DWORD__ reg_bx;
__DWORD__ reg_cx;
__DWORD__ reg_dx;
__DWORD__ sreg_es;
__POINTER__ sreg_es_vp;
__DWORD__ reg_si;
#define reg_al  *(unsigned char *)(&reg_ax)


#ifdef IPXNET
int SDLNetInited = 0;
int IPX_ClientLoopRunning = 0;

Bit32u udpPort;
bool isIpxServer;
bool isIpxConnected;
IPaddress ipxServConnIp;			// IPAddress for client connection to server
UDPsocket ipxClientSocket;
int UDPChannel;						// Channel used by UDP connection
Bit8u recvBuffer[IPXBUFFERSIZE];	// Incoming packet buffer

//static RealPt ipx_callback;

SDLNet_SocketSet clientSocketSet;

packetBuffer incomingPacket;

static Bit16u socketCount;
static Bit16u opensockets[SOCKTABLESIZE]; 

static Bit16u swapByte(Bit16u sockNum) {
	return (((sockNum>> 8)) | (sockNum << 8));
}

Bit8u packetCRC(Bit8u *buffer, Bit16u bufSize) {
	Bit8u tmpCRC = 0;
	Bit16u i;
	for(i=0;i<bufSize;i++) {
		tmpCRC ^= *buffer;
		buffer++;
	}
	return tmpCRC;
}


ECBClass * ECBList;  // Linked list of ECB's
ECBClass * ESRList;	// ECBs waiting to be ESR notified



Bit16u getSocket(ECBClass *);
Bit8u getInUseFlag(ECBClass *);
void setInUseFlag(ECBClass *, Bit8u flagval);
void setCompletionFlag(ECBClass *, Bit8u flagval);
Bit16u getFragCount(ECBClass *);
bool writeData(ECBClass *);
void writeDataBuffer(ECBClass *, Bit8u* buffer, Bit16u length);
void getFragDesc(ECBClass *, Bit16u descNum, IPX_Fragment * fragDesc);
RealPt getESRAddr(ECBClass *);
void NotifyESR(ECBClass *);
void setImmAddress(ECBClass *, Bit8u *immAddr);
void getImmAddress(ECBClass *, Bit8u* immAddr);
void del_ECBClass(ECBClass *);


ECBClass * newECBClass(__POINTER__ addr, Bit16u offset){

    ECBClass * this = malloc(sizeof(ECBClass));

	this->ECBAddr = (RealPt)(addr + offset);
	this->databuffer = 0;

	this->isInESRList = false;
	this->prevECB = NULL;
	this->nextECB = NULL;
	
	if (ECBList == NULL)
		ECBList = this;
	else {
		// Transverse the list until we hit the end
		ECBClass *useECB = ECBList;
		
		while(useECB->nextECB != NULL)
			useECB = useECB->nextECB;

		useECB->nextECB = this;
		this->prevECB = useECB;
	}

	this->iuflag = getInUseFlag(this);
	this->mysocket = getSocket(this);

	return this;
}

void writeDataBuffer(ECBClass * this, Bit8u* buffer, Bit16u length){

	if(this->databuffer != 0) free(this->databuffer);	//delete [] this->databuffer;
	this->databuffer = malloc(length*sizeof(Bit8u));	//new Bit8u[length];
	memcpy(this->databuffer,buffer,length);
	this->buflen=length;
}

bool writeData(ECBClass * this){
	
	Bitu length=this->buflen;
	Bit8u* buffer = this->databuffer;
	IPX_Fragment tmpFrag;
	setInUseFlag(this, ECB_INUSE_AVAILABLE);
	Bitu fragCount = getFragCount(this); 
	Bitu bufoffset = 0;
	for(Bitu i = 0;i < fragCount;i++) {
		getFragDesc(this, i,&tmpFrag);
		for(Bitu t = 0;t < tmpFrag.Size;t++) {

			((Bit8u *)tmpFrag.Address)[t] = buffer[bufoffset];

			bufoffset++;
			if(bufoffset >= length) {
				setCompletionFlag(this, ECB_CMPL_SUCCESS);
				setImmAddress(this, &buffer[22]);  // Write in source node
				return true;
			}
		}
	}
	if(bufoffset < length) {
		setCompletionFlag(this, ECB_CMPL_MALFORMED);
		return false;
	}
	return false;
}


Bit16u getSocket(ECBClass * this) {

	return swapByte(((IPX_EventControlBlock *)this->ECBAddr)->SocketNumber);
}

Bit8u getInUseFlag(ECBClass * this) {

	return ((IPX_EventControlBlock *)this->ECBAddr)->InUse;
}

void setInUseFlag(ECBClass * this, Bit8u flagval) {

	this->iuflag = flagval;
	((IPX_EventControlBlock *)this->ECBAddr)->InUse = flagval;
}

void setCompletionFlag(ECBClass * this, Bit8u flagval) {

	((IPX_EventControlBlock *)this->ECBAddr)->CompletionCode = flagval;
}

Bit16u getFragCount(ECBClass * this) {

	return ((IPX_EventControlBlock *)this->ECBAddr)->FragmentCount;
}

IPX_Fragment * getIPXFragment(IPX_EventControlBlock * ecb, int n){

	__POINTER__ rslt;

	rslt = (__POINTER__)0;

	if((n >= 0)&&(n < ecb->FragmentCount)){

		rslt = (__POINTER__)ecb+sizeof(IPX_EventControlBlock)+n*sizeof(IPX_Fragment);
	}

	return (IPX_Fragment *)rslt;
}

int setIPXFragment(IPX_EventControlBlock * ecb, int n, __POINTER__ p, int size){

	IPX_Fragment * ipxfrag;

	if((ipxfrag = getIPXFragment(ecb, n)) != 0){

		ipxfrag->Address = p;
		ipxfrag->Size = size;
		return 0;
	}

	return -1;
}


void getFragDesc(ECBClass * this, Bit16u descNum, IPX_Fragment * fragDesc) {

	memcpy(fragDesc, getIPXFragment((IPX_EventControlBlock *)this->ECBAddr, descNum), sizeof(IPX_Fragment));
}

__POINTER__ getESRAddr(ECBClass * this) {

	return ((IPX_EventControlBlock *)this->ECBAddr)->ESRAddress;
}

void NotifyESR(ECBClass * this) {

	if(this->databuffer != NULL){
		
		if(this->prevECB == NULL) {	// was the first in the list

			ECBList = this->nextECB;
			if(ECBList != NULL) ECBList->prevECB = NULL;
		} else {		// not the first

			this->prevECB->nextECB = this->nextECB;
			if(this->nextECB != NULL) this->nextECB->prevECB = this->prevECB;
		}

		writeData(this);
	}
	else del_ECBClass(this);

	return;

/*
	//Bit32u ESRval = real_readd(RealSeg(ECBAddr), RealOff(ECBAddr)+4);
	Bit32u ESRval = *(Bit32u *)(this->ECBAddr+4);

	if(ESRval || this->databuffer) { // databuffer: write data at realmode/v86 time
		// printf("ECB: SN%7d to be notified.\n", SerialNumber);
		// take the ECB out of the current list
		if( this->prevECB == NULL) {	// was the first in the list
			ECBList =  this->nextECB;
			if(ECBList != NULL) ECBList->prevECB = NULL;
		} else {		// not the first
			this->prevECB->nextECB =  this->nextECB;
			if( this->nextECB != NULL)  this->nextECB->prevECB =  this->prevECB;
		}

		this->nextECB = NULL;
		// put it to the notification queue
		if(ESRList==NULL) {
			ESRList = this;
			this->prevECB = NULL;
		} else  {// put to end of ESR list
			ECBClass* useECB = ESRList;
		
			while(useECB->nextECB != NULL)
				useECB = useECB->nextECB;

			useECB->nextECB = this;
			this->prevECB = useECB;
		}
		this->isInESRList = true;
		//PIC_ActivateIRQ(11);
	}
	// this one does not want to be notified, delete it right away
	else del_ECBClass(this);	//delete this;
*/
}

void setImmAddress(ECBClass * this, Bit8u *immAddr) {

	memcpy(((IPX_EventControlBlock *)this->ECBAddr)->ImmediateAddress, immAddr, 6);
}

void getImmAddress(ECBClass * this, Bit8u* immAddr) {

	memcpy(immAddr, ((IPX_EventControlBlock *)this->ECBAddr)->ImmediateAddress, 6);
}

void del_ECBClass(ECBClass * this) {

	if(this->isInESRList) {
		// in ESR list, always the first element is deleted.
		ESRList=this->nextECB;
	} else {
		if(this->prevECB == NULL) {	// was the first in the list
			ECBList = this->nextECB;
			if(ECBList != NULL) ECBList->prevECB = NULL;
		} else {	// not the first
			this->prevECB->nextECB = this->nextECB;
			if(this->nextECB != NULL) this->nextECB->prevECB = this->prevECB;
		}
	}
	if(this->databuffer!=0) free(this->databuffer);

	free(this);
}



static bool sockInUse(Bit16u sockNum) {
	for(Bitu i=0;i<socketCount;i++) {
		if (opensockets[i] == sockNum) return true;
	}
	return false;
}

static void OpenSocket(void) {
	Bit16u sockNum, sockAlloc;
	sockNum = swapByte(reg_dx);

	if(socketCount >= SOCKTABLESIZE) {
		reg_al = 0xfe; // Socket table full
		return;
	}

	if(sockNum == 0x0000) {
		// Dynamic socket allocation
		sockAlloc = 0x4002;
		while(sockInUse(sockAlloc) && (sockAlloc < 0x7fff)) sockAlloc++;
		if(sockAlloc > 0x7fff) {
			// I have no idea how this could happen if the IPX driver
			// is limited to 150 open sockets at a time
			printf("IPX: Out of dynamic sockets\n");
		}
		sockNum = sockAlloc;
	} else {
		if(sockInUse(sockNum)) {
			reg_al = 0xff; // Socket already open
			return;
		} 
	}

	opensockets[socketCount] = sockNum;
	socketCount++;

	reg_al = 0x00; // Success
	reg_dx = swapByte(sockNum);  // Convert back to big-endian
}

static void CloseSocket(void) {
	Bit16u sockNum, i;
	ECBClass* tmpECB = ECBList;
	ECBClass* tmp2ECB = ECBList;

	sockNum = swapByte(reg_dx);
	if(!sockInUse(sockNum)) return;

	for(i=0;i<socketCount-1;i++) {
		if (opensockets[i] == sockNum) {
			// Realign list of open sockets
			memcpy(&opensockets[i], &opensockets[i+1], SOCKTABLESIZE - (i + 1));
			break;
		}
	}
	--socketCount;
	
	// delete all ECBs of that socket
	while(tmpECB!=0) {
		tmp2ECB = tmpECB->nextECB;
		if(getSocket(tmpECB)==sockNum) {
			setCompletionFlag(tmpECB, ECB_CMPL_CANCELLED);
			setInUseFlag(tmpECB, ECB_INUSE_AVAILABLE);
			del_ECBClass(tmpECB);
		}
		tmpECB = tmp2ECB;
	}
}

static void IPX_AES_EventHandler(__POINTER__ param)
{
	ECBClass* tmpECB = ECBList;
	ECBClass* tmp2ECB;
	while(tmpECB!=0) {
		tmp2ECB = tmpECB->nextECB;
		if(tmpECB->iuflag==ECB_INUSE_AESCOUNTDOWN && param==(__POINTER__)tmpECB->ECBAddr) {
			setCompletionFlag(tmpECB, ECB_CMPL_SUCCESS);
			setInUseFlag(tmpECB, ECB_INUSE_AVAILABLE);
			NotifyESR(tmpECB);
			// printf("AES Notification: ECB S/N %d\n",tmpECB->SerialNumber);
			return;
		}
		tmpECB = tmp2ECB;
	}
	printf("!!!! Rouge AES !!!!\n");
}

static void sendPacket(ECBClass* sendecb);
Bitu IPX_ESRHandler(void);
#endif

void handleIpxRequest(void) {
#ifdef IPXNET
	ECBClass *tmpECB;

	switch (reg_bx) {
		case 0x0000:	// Open socket
			OpenSocket();
			printf("IPX: Open socket %4x\n", swapByte(reg_dx));
			break;
		case 0x0001:	// Close socket
			printf("IPX: Close socket %4x\n", swapByte(reg_dx));
			CloseSocket();
			break;
		case 0x0003:		// Send packet
			tmpECB = newECBClass(sreg_es_vp,reg_si);
			if(!incomingPacket.connected) {
				setInUseFlag(tmpECB, ECB_INUSE_AVAILABLE);
				setCompletionFlag(tmpECB, ECB_CMPL_UNDELIVERABLE);
				//delete tmpECB;	// not notify?
				del_ECBClass(tmpECB);
				reg_al = 0xff; // Failure
			} else {
				setInUseFlag(tmpECB, ECB_INUSE_SENDINGPACKET);
				//printf("IPX: Sending packet on %4x\n", tmpECB->getSocket());
				reg_al = 0x00; // Success
				sendPacket(tmpECB);
			}
			break;
		case 0x0004:  // Listen for packet
			tmpECB = newECBClass(sreg_es_vp,reg_si);
			// printf("ECB: SN%7d RECEIVE.\n", tmpECB->SerialNumber);
			if(!sockInUse(getSocket(tmpECB))) {  // Socket is not open
				reg_al = 0xff;
				setInUseFlag(tmpECB, ECB_INUSE_AVAILABLE);
				setCompletionFlag(tmpECB, ECB_CMPL_PHYSICALERROR);
				//delete tmpECB;
				del_ECBClass(tmpECB);
			} else {
				reg_al = 0x00;  // Success
				setInUseFlag(tmpECB, ECB_INUSE_AWAITINGPACKET);
			}
			break;
		case 0x0006:	// cancel operation
		{
			RealPt ecbaddress = (RealPt)(sreg_es_vp+reg_si); //RealMake(SegValue(es),reg_si);
			ECBClass* tmpECB= ECBList;
			ECBClass* tmp2ECB;
			while(tmpECB) {
				tmp2ECB=tmpECB->nextECB;
				if(tmpECB->ECBAddr == ecbaddress) {
					if(getInUseFlag(tmpECB)==ECB_INUSE_AESCOUNTDOWN){
						//PIC_RemoveSpecificEvents(IPX_AES_EventHandler,(Bitu)ecbaddress);
					}
					setInUseFlag(tmpECB, ECB_INUSE_AVAILABLE);
					setCompletionFlag(tmpECB, ECB_CMPL_CANCELLED);
					//delete tmpECB;
					del_ECBClass(tmpECB);
					reg_al=0;	// Success
					printf("IPX: ECB canceled.\n");
					return;
				}
				tmpECB=tmp2ECB;
			}
			reg_al=0xff;	// Fail
			break;
		}
		case 0x0009:		// Get internetwork address
		{
			printf("IPX: Get internetwork address %d:%d:%d:%d:%d:%d\n", CONVIPX(LocalIPXAddress.NetworkNode));
		
			Bit8u * addrptr = (Bit8u *)&LocalIPXAddress;
			for(Bit16u i=0;i<10;i++){

				//*(Bit8u *)((sreg_es<<4)+reg_si+i) = addrptr[i];
				*(Bit8u *)(sreg_es_vp+reg_si+i) = addrptr[i];
			}

			break;
		}
		case 0x000a:		// Relinquish control
			break;			// Idle thingy
		case 0x001a:		// get driver maximum packet size
			reg_cx=0;		// retry count
			reg_ax=IPXBUFFERSIZE;	// max packet size: something near the 
									// ethernet packet size
			break;
		default:
			printf("Unhandled IPX function: %4x\n", reg_bx);
			break;
	}
#endif
}

#ifdef IPXNET
static void pingAck(IPaddress retAddr){

	IPX_Header regHeader2;
	UDPpacket regPacket;
	Bits result;

	SDLNet_Write16(0xfff, &regHeader2.Checksum);
	SDLNet_Write16(sizeof(regHeader2), &regHeader2.Length);
	
	SDLNet_Write32(0, regHeader2.Dst.Address.NetworkNumber);
	PackIP(retAddr, (PackedIP *)regHeader2.Dst.Address.NetworkNode);
	SDLNet_Write16(0x2, &regHeader2.Dst.Socket);

	SDLNet_Write32(0, regHeader2.Src.Address.NetworkNumber);
	memcpy(regHeader2.Src.Address.NetworkNode, LocalIPXAddress.NetworkNode, sizeof(regHeader2.Src.Address.NetworkNode));
	SDLNet_Write16(0x2, &regHeader2.Src.Socket);
	regHeader2.TransportControl = 0;
	regHeader2.PacketType = 0;

	regPacket.data = (Uint8 *)&regHeader2;
	regPacket.len = sizeof(regHeader2);
	regPacket.maxlen = sizeof(regHeader2);
	regPacket.channel = UDPChannel;
	
	result = SDLNet_UDP_Send(ipxClientSocket, regPacket.channel, &regPacket);
}

Bitu IPX_ESRHandler(void);

static void receivePacket(Bit8u *buffer, Bit16s bufSize) {

	ECBClass *useECB;
	ECBClass *nextECB;
	Bit16u *bufword = (Bit16u *)buffer;
	Bit16u useSocket = swapByte(bufword[8]);
	PackedIP *		tmpPackedIP;
	IPaddress 		tmpAddr;

	// Check to see if ping packet
	if(useSocket == 0x2) {
		// Is this a broadcast?
		tmpPackedIP = (PackedIP *)((IPX_Header *)buffer)->Dst.Address.NetworkNode;
		if((tmpPackedIP->host == 0xffffffff)&&(tmpPackedIP->port == 0xffff)){
			// Yes.  We should return the ping back to the sender
			UnpackIP(*(PackedIP *)((IPX_Header *)buffer)->Src.Address.NetworkNode, &tmpAddr);
			pingAck(tmpAddr);
			return;
		}
	}

	useECB = ECBList;
	while(useECB != NULL)
	{
		nextECB = useECB->nextECB;
		//printf("ECB->socket: 0x%04X, useSocket: 0x%04X\n", useECB->mysocket, useSocket);
		if(useECB->iuflag == ECB_INUSE_AWAITINGPACKET && useECB->mysocket == useSocket) {
			writeDataBuffer(useECB, buffer, bufSize);
			NotifyESR(useECB);
			return;
		}
		useECB = nextECB;
	}
	printf("IPX: RX Packet loss!\n");
}

static void IPX_ClientLoop(void) {
	int numrecv;
	UDPpacket inPacket;
	inPacket.data = (Uint8 *)recvBuffer;
	inPacket.maxlen = IPXBUFFERSIZE;
	inPacket.channel = UDPChannel;

	// Its amazing how much simpler UDP is than TCP
	numrecv = SDLNet_UDP_Recv(ipxClientSocket, &inPacket);
	if(numrecv) receivePacket(inPacket.data, inPacket.len);
}


void DisconnectFromServer(bool unexpected) {
	if(unexpected) printf("IPX: Server disconnected unexpectedly\n");
	if(incomingPacket.connected) {
		incomingPacket.connected = false;
		//TIMER_DelTickHandler(&IPX_ClientLoop);
		IPX_ClientLoopRunning = 0;
		SDLNet_UDP_Close(ipxClientSocket);
	}
}

static void sendPacket(ECBClass* sendecb) {

	Bit8u outbuffer[IPXBUFFERSIZE];
	IPX_Header * tmpHeader;
	IPX_Fragment tmpFrag; 
	Bit16u i, fragCount,t;
	Bit16s packetsize;
	Bits result;
	UDPpacket outPacket;
		
	setInUseFlag(sendecb, ECB_INUSE_AVAILABLE);
	packetsize = 0;
	fragCount = getFragCount(sendecb); 

	for(i = 0; i < fragCount; i++) {

		getFragDesc(sendecb, i, &tmpFrag);

		if(i == 0) {

			// Fragment containing IPX header
			// Must put source address into header
			
			tmpHeader = (IPX_Header *)tmpFrag.Address;

			// Source NetworkNumber
			memcpy(tmpHeader->Src.Address.NetworkNumber, LocalIPXAddress.NetworkNumber, 4);

			// Source NetworkNode
			memcpy(tmpHeader->Src.Address.NetworkNode, LocalIPXAddress.NetworkNode, 6);

			// Source Socket
			tmpHeader->Src.Socket = swapByte(getSocket(sendecb));
			
			// Blank checksum
			tmpHeader->Checksum = 0xffff;
		}

		for(t = 0; t < tmpFrag.Size; t++) {

			outbuffer[packetsize] = *(Bit8u *)(tmpFrag.Address + t);
			packetsize++;

			if(packetsize >= IPXBUFFERSIZE) {

				printf("IPX: Packet size to be sent greater than %d bytes.\n", IPXBUFFERSIZE);
				setCompletionFlag(sendecb, ECB_CMPL_UNDELIVERABLE);
				NotifyESR(sendecb);
				return;
			}
		}
	}
	
	// Add length and source socket to IPX header
	// Blank CRC
	((IPX_Header *)&outbuffer)->Checksum = 0xffff;
	// Length
	((IPX_Header *)&outbuffer)->Length = swapByte(packetsize);
	// Source socket
	((IPX_Header *)&outbuffer)->Src.Socket = swapByte(getSocket(sendecb));
	
	getFragDesc(sendecb, 0,&tmpFrag);
	((IPX_Header *)tmpFrag.Address)->Length = swapByte(packetsize);
	

	Bit8u immedAddr[6];
	getImmAddress(sendecb, immedAddr);
	// filter out broadcasts and local loopbacks
	// Real implementation uses the ImmedAddr to check wether this is a broadcast

	bool islocalbroadcast=true;
	bool isloopback=true;

	Bit8u * addrptr;

	for(Bitu m = 0; m < 4; m++) {

		if(LocalIPXAddress.NetworkNumber[m] != ((IPX_Header *)outbuffer)->Dst.Address.NetworkNumber[m]) isloopback = false;
	}

	addrptr = (Bit8u *)&LocalIPXAddress.NetworkNode;
	
	for(Bitu m = 0; m < 6; m++) {

		if(LocalIPXAddress.NetworkNode[m] != ((IPX_Header *)outbuffer)->Dst.Address.NetworkNode[m]) isloopback = false;
		if(immedAddr[m] != 0xff) islocalbroadcast = false;
	}

	printf("SEND crc:%2x\n",packetCRC(&outbuffer[0], packetsize));
	
	if(!isloopback){

		outPacket.channel = UDPChannel;
		outPacket.data = (Uint8 *)&outbuffer;
		outPacket.len = packetsize;
		outPacket.maxlen = packetsize;
		// Since we're using a channel, we won't send the IP address again
		result = SDLNet_UDP_Send(ipxClientSocket, UDPChannel, &outPacket);
		
		if(result == 0) {

			printf("IPX: Could not send packet: %s\n", SDLNet_GetError());
			setCompletionFlag(sendecb, ECB_CMPL_PHYSICALERROR);
			NotifyESR(sendecb);
			DisconnectFromServer(true);

			return;
		}
		else {

			setCompletionFlag(sendecb, ECB_CMPL_SUCCESS);
			printf("Packet sent: size: %d\n", packetsize);
		}
	}
	else setCompletionFlag(sendecb, ECB_CMPL_SUCCESS);

	if(isloopback||islocalbroadcast) {
		// Send packet back to ourselves.
		receivePacket(outbuffer, packetsize);
		printf("Packet back: loopback:%d, broadcast:%d\n", isloopback, islocalbroadcast);
	}

	NotifyESR(sendecb);
}

Bitu IPX_ESRHandler(void);

int IPX_ThreadFunction(__POINTER__ data){

	while(IPX_ClientLoopRunning){

		IPX_ClientLoop();
		//IPX_ESRHandler();
		SDL_Delay(1);
	}

	return 0;
}


bool ConnectToServer(char const *strAddr) {

	int numsent;
	UDPpacket regPacket;
	IPX_Header regHeader2;
	
	if(!SDLNet_ResolveHost(&ipxServConnIp, strAddr, (Bit16u)udpPort)) {

		// Generate the MAC address.  This is made by zeroing out the first two
		// octets and then using the actual IP address for the last 4 octets.
		// This idea is from the IPX over IP implementation as specified in RFC 1234:
		// http://www.faqs.org/rfcs/rfc1234.html

		// Select an anonymous UDP port
		ipxClientSocket = SDLNet_UDP_Open(0);
		if(ipxClientSocket) {
			// Bind UDP port to address to channel
			UDPChannel = SDLNet_UDP_Bind(ipxClientSocket,-1,&ipxServConnIp);
			//ipxClientSocket = SDLNet_TCP_Open(&ipxServConnIp);
			SDLNet_Write16(0xffff, &regHeader2.Checksum);
			SDLNet_Write16(sizeof(regHeader2), &regHeader2.Length);

			// Echo packet with zeroed dest and src is a server registration packet
			SDLNet_Write32(0, regHeader2.Dst.Address.NetworkNumber);
			((PackedIP *)regHeader2.Dst.Address.NetworkNode)->host = 0;
			((PackedIP *)regHeader2.Dst.Address.NetworkNode)->port = 0;
			SDLNet_Write16(0x2, &regHeader2.Dst.Socket);

			SDLNet_Write32(0, regHeader2.Src.Address.NetworkNumber);
			((PackedIP *)regHeader2.Src.Address.NetworkNode)->host = 0;
			((PackedIP *)regHeader2.Src.Address.NetworkNode)->port = 0;
			SDLNet_Write16(0x2, &regHeader2.Src.Socket);
			regHeader2.TransportControl = 0;

			regPacket.data = (Uint8 *)&regHeader2;
			regPacket.len = sizeof(regHeader2);
			regPacket.maxlen = sizeof(regHeader2);
			regPacket.channel = UDPChannel;
			// Send registration string to server.  If server doesn't get
			// this, client will not be registered
			numsent = SDLNet_UDP_Send(ipxClientSocket, regPacket.channel, &regPacket);
			
			if(!numsent) {

				printf("IPX: Unable to connect to server: %s\n", SDLNet_GetError());
				SDLNet_UDP_Close(ipxClientSocket);

				return false;
			} else {

				// Wait for return packet from server.
				// This will contain our IPX address and port num
				Bits result;
				Bit32u ticks, elapsed;
				ticks = SDL_GetTicks();

				while(true) {

					elapsed = SDL_GetTicks() - ticks;

					if(elapsed > 1000){		// 5000

						printf("Timeout connecting to server at %s\n", strAddr);
						SDLNet_UDP_Close(ipxClientSocket);

						return false;
					}

					result = SDLNet_UDP_Recv(ipxClientSocket, &regPacket);

					if (result != 0) {

						memcpy(LocalIPXAddress.NetworkNode, regHeader2.Dst.Address.NetworkNode, sizeof(LocalIPXAddress.NetworkNode));
						memcpy(LocalIPXAddress.NetworkNumber, regHeader2.Dst.Address.NetworkNumber, sizeof(LocalIPXAddress.NetworkNumber));
						break;
					}
					
				}

				printf("IPX: Connected to server.  IPX address is %d:%d:%d:%d:%d:%d\n", CONVIPX(LocalIPXAddress.NetworkNode));

				incomingPacket.connected = true;

				if(!IPX_ClientLoopRunning){
				
					IPX_ClientLoopRunning = 1;

					if(!SDL_CreateThread((SDL_ThreadFunction)IPX_ThreadFunction, "IPX_ClientLoop", (__POINTER__)NULL)){

						IPX_ClientLoopRunning = 0;
					}
				}

				return true;
			}
		} else {

			printf("IPX: Unable to open socket\n");
		}
	} else {

		printf("IPX: Unable resolve connection to server\n");
	}

	return false;
}

void IPX_NetworkInit() {

	LocalIPXAddress.NetworkNumber[0] = 0x0;
	LocalIPXAddress.NetworkNumber[1] = 0x0;
	LocalIPXAddress.NetworkNumber[2] = 0x0;
	LocalIPXAddress.NetworkNumber[3] = 0x1;
	LocalIPXAddress.NetworkNode[0] = 0x00;
	LocalIPXAddress.NetworkNode[1] = 0x00;
	LocalIPXAddress.NetworkNode[2] = 0x00;
	LocalIPXAddress.NetworkNode[3] = 0x00;
	LocalIPXAddress.NetworkNode[4] = 0x00;
	LocalIPXAddress.NetworkNode[5] = 0x00;

	socketCount = 0;
	return;
}

/*
Bitu IPX_ESRHandler(void) {

	while(ESRList!=NULL) {

		if(ESRList->databuffer) writeData(ESRList);
		del_ECBClass(ESRList);
	}

	return 0;
}
*/
#endif

int ipx_connect(const char * addr, int port){
#ifdef IPXNET
	if(!SDLNetInited) {
		if(SDLNet_Init() == -1){
			printf("SDLNet_Init failed: %s\n", SDLNet_GetError());
			return 0;
		}
		SDLNetInited = true;

		ECBList = NULL;
		ESRList = NULL;
		isIpxServer = false;
		isIpxConnected = false;
		IPX_NetworkInit();
	}

	char strHost[1024];
	if(incomingPacket.connected) {
		printf("IPX Tunneling Client already connected.\n");
		return 1;
	}

	strcpy(strHost, addr);
	udpPort = port;

	if(ConnectToServer(strHost)) {

		printf("IPX Tunneling Client connected to server at %s.\n", strHost);
		return 1;

	} else {

		printf("IPX Tunneling Client failed to connect to server at %s.\n", strHost);
	}
#endif
	return 0;
}

#ifdef IPXNET
void ipx_disconnect(void) {

	//PIC_RemoveEvents(IPX_AES_EventHandler);

	if(!incomingPacket.connected) {
		printf("IPX Tunneling Client not connected.\n");
		return;
	}
	// TODO: Send a packet to the server notifying of disconnect
	printf("IPX Tunneling Client disconnected from server.\n");
	DisconnectFromServer(false);

	if(SDLNetInited == 1){

		SDLNet_Quit();
		SDLNetInited = 0;
	}

	return;
}
#endif
