#include <stdio.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

typedef int             bool;
#define true            1
#define false           0

typedef unsigned char   Bit8u;
typedef signed short    Bit16s;
typedef unsigned short  Bit16u;
typedef int             Bit32s;
typedef unsigned int    Bit32u;
typedef Bit32s          Bits;

//#include "ipxserver.h"
typedef struct packetBuffer {
	Bit8u buffer[1024];
	Bit16s packetSize;  // Packet size remaining in read
	Bit16s packetRead;  // Bytes read of total packet
	bool inPacket;      // In packet reception flag
	bool connected;		// Connected flag
	bool waitsize;
} packetBuffer;

#define SOCKETTABLESIZE 16
#define CONVIP(hostvar) hostvar & 0xff, (hostvar >> 8) & 0xff, (hostvar >> 16) & 0xff, (hostvar >> 24) & 0xff
#define CONVIPX(hostvar) hostvar[0], hostvar[1], hostvar[2], hostvar[3], hostvar[4], hostvar[5]


void IPX_StopServer();
bool IPX_StartServer(Bit16u portnum);

Bit8u packetCRC(Bit8u *buffer, Bit16u bufSize);


//#include "ipx.h"
#define IPXBUFFERSIZE 1424

#pragma pack(push,1)

typedef struct PackedIP {
	Uint32 host;
	Uint16 port;
} PackedIP;

typedef struct nodeType {
	Uint8 node[6];
} nodeType;

typedef struct IPXHeader {
	Uint8 checkSum[2];
	Uint8 length[2];
	Uint8 transControl; // Transport control
	Uint8 pType; // Packet type

	struct transport {
		Uint8 network[4];
		union addrtype {
			nodeType byNode;
			PackedIP byIP;
		} addr;
		Uint8 socket[2];
	} dest, src;
} IPXHeader;
#pragma pack(pop)

void UnpackIP(PackedIP ipPack, IPaddress * ipAddr) {
	ipAddr->host = ipPack.host;
	ipAddr->port = ipPack.port;
}

void PackIP(IPaddress ipAddr, PackedIP *ipPack) {
	ipPack->host = ipAddr.host;
	ipPack->port = ipAddr.port;
}


int isServerRunning = 0;
unsigned int udpPort = 213;

IPaddress ipxServerIp;  // IPAddress for server's listening port
UDPsocket ipxServerSocket;  // Listening server socket

packetBuffer connBuffer[SOCKETTABLESIZE];

Bit8u inBuffer[IPXBUFFERSIZE];
IPaddress ipconn[SOCKETTABLESIZE];
SDLNet_SocketSet serverSocketSet;

Bit8u packetCRC(Bit8u *buffer, Bit16u bufSize) {

	Bit8u tmpCRC = 0;
	Bit16u i;

	for(i = 0; i < bufSize; i++) tmpCRC ^= *buffer++;

	return tmpCRC;
}

static void sendIPXPacket(Bit8u *buffer, Bit16s bufSize) {

	Bit16u srcport, destport;
	Bit32u srchost, desthost;
	Bit16u i;
	Bits result;
	UDPpacket outPacket;
	outPacket.channel = -1;
	outPacket.data = buffer;
	outPacket.len = bufSize;
	outPacket.maxlen = bufSize;
	IPXHeader *tmpHeader;
	tmpHeader = (IPXHeader *)buffer;

	srchost = tmpHeader->src.addr.byIP.host;
	desthost = tmpHeader->dest.addr.byIP.host;

	srcport = tmpHeader->src.addr.byIP.port;
	destport = tmpHeader->dest.addr.byIP.port;
	

	if(desthost == 0xffffffff) {
		// Broadcast
		for(i=0;i<SOCKETTABLESIZE;i++) {
			if(connBuffer[i].connected && ((ipconn[i].host != srchost)||(ipconn[i].port!=srcport))) {
				outPacket.address = ipconn[i];
				result = SDLNet_UDP_Send(ipxServerSocket,-1,&outPacket);
				if(result == 0) {
					printf("IPXSERVER: %s\n", SDLNet_GetError());
					continue;
				}
			}
		}
	} else {
		// Specific address
		for(i=0;i<SOCKETTABLESIZE;i++) {
			if((connBuffer[i].connected) && (ipconn[i].host == desthost) && (ipconn[i].port == destport)) {
				outPacket.address = ipconn[i];
				result = SDLNet_UDP_Send(ipxServerSocket,-1,&outPacket);
				if(result == 0) {
					printf("IPXSERVER: %s\n", SDLNet_GetError());
					continue;
				}
			}
		}
	}
}

static void ackClient(IPaddress clientAddr) {
	IPXHeader regHeader;
	UDPpacket regPacket;
	Bits result;

	SDLNet_Write16(0xffff, regHeader.checkSum);
	SDLNet_Write16(sizeof(regHeader), regHeader.length);
	
	SDLNet_Write32(0, regHeader.dest.network);
	PackIP(clientAddr, &regHeader.dest.addr.byIP);
	SDLNet_Write16(0x2, regHeader.dest.socket);

	SDLNet_Write32(1, regHeader.src.network);
	PackIP(ipxServerIp, &regHeader.src.addr.byIP);
	SDLNet_Write16(0x2, regHeader.src.socket);
	regHeader.transControl = 0;

	regPacket.data = (Uint8 *)&regHeader;
	regPacket.len = sizeof(regHeader);
	regPacket.maxlen = sizeof(regHeader);
	regPacket.address = clientAddr;
	// Send registration string to client.  If client doesn't get this, client will not be registered
	result = SDLNet_UDP_Send(ipxServerSocket,-1,&regPacket);

}

void IPX_ServerLoop(void){

	UDPpacket inPacket;
	IPaddress tmpAddr;
	Bit16u i;
	Bit32u host;
	Bits result;

	inPacket.channel = -1;
	inPacket.data = &inBuffer[0];
	inPacket.maxlen = IPXBUFFERSIZE;

	result = SDLNet_UDP_Recv(ipxServerSocket, &inPacket);
	if (result != 0) {
		// Check to see if incoming packet is a registration packet
		// For this, I just spoofed the echo protocol packet designation 0x02
		IPXHeader *tmpHeader;
		tmpHeader = (IPXHeader *)&inBuffer[0];
	
		// Check to see if echo packet
		if(SDLNet_Read16(tmpHeader->dest.socket) == 0x2) {
			// Null destination node means its a server registration packet
			if(tmpHeader->dest.addr.byIP.host == 0x0) {
				UnpackIP(tmpHeader->src.addr.byIP, &tmpAddr);
				for(i=0;i<SOCKETTABLESIZE;i++) {
					if(!connBuffer[i].connected) {
						// Use prefered host IP rather than the reported source IP
						// It may be better to use the reported source
						ipconn[i] = inPacket.address;

						connBuffer[i].connected = true;
						host = ipconn[i].host;
						printf("IPXSERVER: Connect from %d.%d.%d.%d\n", CONVIP(host));
						ackClient(inPacket.address);
						return;
					} else {
						if((ipconn[i].host == tmpAddr.host) && (ipconn[i].port == tmpAddr.port)) {

							printf("IPXSERVER: Reconnect from %d.%d.%d.%d\n", CONVIP(tmpAddr.host));
							// Update anonymous port number if changed
							ipconn[i].port = inPacket.address.port;
							ackClient(inPacket.address);
							return;
						}
					}
					
				}
			}
		}

		// IPX packet is complete.  Now interpret IPX header and send to respective IP address
		sendIPXPacket((Bit8u *)inPacket.data, inPacket.len);
	}
}

void IPX_StopServer() {

	SDLNet_UDP_Close(ipxServerSocket);
	isServerRunning = 0;

	printf("\n");
	printf("IPX Tunneling Server terminated\n");
}

int IPX_StartServer(Bit16u portnum) {
	
	int i;

	if(!SDLNet_ResolveHost(&ipxServerIp, NULL, portnum)) {
	
		if(!(ipxServerSocket = SDLNet_UDP_Open(portnum))) return 0;

		for(i = 0; i < SOCKETTABLESIZE; i++) connBuffer[i].connected = 0;

		isServerRunning = 1;
		printf("IPX Tunneling Server is running\n");

		return 1;
	}

	return 0;
}

int main(int argc, char * argv[]){

	SDL_Event e;

	if(SDL_Init(SDL_INIT_EVENTS) == -1){

        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
    }
	else {

		if(SDLNet_Init() == -1) {

   			SDL_Log("SDLNet_Init: %s\n", SDLNet_GetError());
		}
		else {
			
			if(argc > 1) udpPort = strtol(argv[1], NULL, 10);

			if(IPX_StartServer(udpPort)){

				while(isServerRunning){

					IPX_ServerLoop();
					SDL_Delay(1);

					while(SDL_PollEvent(&e)){

						if(e.type == SDL_QUIT) IPX_StopServer();
					}
				}

			}
			else {
			
				printf("IPX Tunneling Server failed to start.\n");
				if(udpPort < 1024) printf("Try a port number above 1024. See IPXNET HELP CONNECT on how to specify a port.\n");
			}
			
			SDLNet_Quit();
		}
		
		SDL_Quit();
	}

    return 0;
}