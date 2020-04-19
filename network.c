#include "drally.h"

#pragma pack(1)
#define pg(v)	((v)&0xfff)

typedef struct NetPage {
	union {
	word 	pos;
	word 	write_p;
	};
	union {
	word	__2;
	word 	read_p;
	};
	byte 	data[0x1000];
} NetPage;

typedef struct IPX_InternetworkAddress {
	union {								//00H  	4	(big-endian) network number
	byte 	NetworkNumber[4];
	dword 	Network;
	};
	byte 	NodeNumber[6];		        //04H  	6	(big-endian) node number within network
} IPX_InternetworkAddress;

typedef struct IPX_Header {
    word	Checksum;                   //00H	2	h-l i's comlement integer
	word	Length;					    //02H	2	high-low unsigned integer
	byte	TransportControl;		    //04H	1	unsigned integer
	byte	PacketType;				    //05H	1	 unsigned integer
	union {
	struct {
	dword	DestinationNetwork;		    //06H	4	high-low unsigned integer
	byte	DestinationNode[6];		    //0AH	6	high-low unsigned integer
	};
	IPX_InternetworkAddress
			DestinationAddress;
	};
	word	DestinationSocket;		    //10H	2	high-low unsigned integer
	union {
	struct {
	dword	SourceNetwork;			    //12H	4	high-low unsigned integer
	byte	SourceNode[6];			    //16H	6	high-low unsigned integer
	};
	IPX_InternetworkAddress
			SourceAddress;
	};
	word	SourceSocket;			    //1CH	2	high-low unsigned integer
} IPX_Header;

typedef struct fragment_s {				//24H	6	Structure(s)
    void * 	Address;			        // 		4	8086 long address (off,seg)
    word 	Size; 				        // 		2	Low-high uns.integer 
} fragment_t;

typedef struct IPX_EventControlBlock {
	dword	    Link;					//00H 	4	8086 long address (offset,segment)
	dword 	    ESRAddress;				//04H 	4 	8086 long address (offset,segment)
	byte	    InUse;					//08H 	1 	Unsigned integer 
	byte	    CompletionCode;			//09H 	1	Unsigned integer 
	word	    SocketNumber;			//0AH 	2	High-low uinteger 
	dword	    IPXWorkspace;			//0CH 	4	N/A 
	byte	    DriverWorkspace[12];	//10H 	12	N/A
	byte	    ImmediateAddress[6];	//1CH 	6	High-low uns. integer
	word	    FragmentCount;			//22H 	2	Low-high uns. integer
	fragment_t  Fragment[];
} IPX_EventControlBlock;

#define ECB_INUSE_AVAILABLE			0x00		// available
#define ECB_INUSE_AESTEMPORARY		0xE0		// AES temporary
#define ECB_INUSE_IPXCRITICAL		0xF8		// IPX in critical section
#define ECB_INUSE_SPXLISTENING		0xF9		// SPX listening
#define ECB_INUSE_PROCESSING		0xFA    	// processing
#define ECB_INUSE_HOLDING			0xFB		// holding
#define ECB_INUSE_AESWAITING		0xFC		// AES waiting
#define ECB_INUSE_AESCOUNTDOWN		0xFD    	// AES couting down delay time
#define ECB_INUSE_AWAITINGPACKET	0xFE    	// awaiting packet reception
#define ECB_INUSE_SENDINGPACKET		0xFF    	// sending packet

#define ECB_CMPL_SUCCESS			0x00		// success
#define ECB_CMPL_REMOTETERM			0xEC		// remote terminated connection without acknowledging packet
#define ECB_CMPL_ABNORMTERM 		0xED		// abnormal connection termination
#define ECB_CMPL_INVALIDCONNID		0xEE		// invalid connection ID
#define ECB_CMPL_SPXTABLEFULL		0xEF		// SPX connection table full
#define ECB_CMPL_SHOULDNTCANCEL		0xF9		// event should not be cancelled
#define ECB_CMPL_CANNOTCONNECT		0xFA		// cannot establish connection with specified destination
#define ECB_CMPL_CANCELLED			0xFC		// cancelled
#define ECB_CMPL_MALFORMED			0xFD		// malformed packet
#define ECB_CMPL_UNDELIVERABLE		0xFE		// packet undeliverable
#define ECB_CMPL_PHYSICALERROR		0xFF		// physical error


void handleIpxRequest(void);
int ipx_connect(const char *, dword);
dword ___632c4h(dword);

    extern dword reg_ax;
    extern dword reg_bx;
    extern dword reg_cx;
    extern dword reg_dx;
    extern dword sreg_es;
    extern dword reg_si;
#define reg_al  B(&reg_ax)

dword NovellNetWare_IPX_InstallationCheck(void){

    //  00h not installed
    //  FFh installed

    printf("[dRally.Network] IPX_InstallationCheck\n");

    return ipx_connect("localhost", 8888) ? 0xff : 0;
}

dword NovellNetWare_IPX_GetDriverMaximumPacketSize(void){

    printf("[dRally.Network] IPX_GetDriverMaximumPacketSize\n");

    reg_bx = 0x1a;
    handleIpxRequest();

    return reg_ax;
}

void NovellNetWare_IPX_RelinquishControl(void){

    //printf("[dRally.Network] IPX_RelinquishControl\n");

    reg_bx = 0xa;
    handleIpxRequest();
}

dword NovellNetWare_IPX_ListenForPacket(IPX_EventControlBlock * ecb){

    printf("[dRally.Network] IPX_ListenForPacket\n");

    reg_bx = 4;
    reg_si = 0;
    sreg_es = (dword)ecb >> 4;
    handleIpxRequest();

    return reg_al;
}

dword NovellNetWare_IPX_SendPacket(IPX_EventControlBlock * ecb){
/*
    int i, j;

    printf("[dRally.Network] IPX_SendPacket\n");
    printf("                 Link: 0x%08X\n", ecb->Link);
    printf("                 Socket: 0x%04X\n", ecb->SocketNumber);
    printf("                 IPX workspace: 0x%08X\n", ecb->IPXWorkspace);
    printf("                 Driver workspace: 0x%08X%08X%08X\n", D(ecb->DriverWorkspace+8), D(ecb->DriverWorkspace+4), D(ecb->DriverWorkspace));
    printf("                 Immediate address: 0x%02X%08X\n", W(ecb->ImmediateAddress+4), D(ecb->ImmediateAddress));

for(i = 0; i < ecb->FragmentCount; i++){
 
    printf("                 Fragment [%d] size: %d\n", i, ecb->Fragment[i].Size);
    printf("                 ");
    for(j = 0; j < ecb->Fragment[i].Size; j++) printf("%02X ", B(ecb->Fragment[i].Address+j));
    printf("\n");
}
*/

    reg_bx = 3;
    reg_si = 0;
    sreg_es = (dword)ecb >> 4;
    handleIpxRequest();
    
    //  AL
    //  00h Success
    //  FFh Failure

    return reg_al;
}

void NovellNetWare_IPX_GetInternetworkAddress(IPX_InternetworkAddress * ia){

    printf("[dRally.Network] IPX_GetInternetworkAddress\n");

    reg_bx = 9;
    reg_si = 0;
    sreg_es = (dword)ia >> 4;
    handleIpxRequest();
}

dword NovellNetWare_IPX_OpenSocket(dword socket_no, dword longevity){

    // socket_no 0x0000 - dynamic allocation

    printf("[dRally.Network] IPX_OpenSocket: 0x%04X\n", socket_no);

    reg_bx = 0;
    reg_dx = socket_no;
    handleIpxRequest();

    //  00h success
    //  FEh socket table full
    //  FFh socket already open

    return reg_al;
}

void NovellNetWare_IPX_CloseSocket(dword socket_no){

    printf("[dRally.Network] IPX_CloseSocket\n");

    reg_bx = 1;
    reg_dx = socket_no;
    handleIpxRequest();
}

dword NovellNetWare_IPX_CancelEvent(IPX_EventControlBlock * ecb){

    printf("[dRally.Network] IPX_CancelEvent\n");

    reg_bx = 6;
    reg_si = 0;
    sreg_es = (dword)ecb >> 4;
    handleIpxRequest();

    //  00h    success
    //  F9h    event in use
    //  FCh    event cancelled
    //  FFh    unsuccessful, event not in use, or unrecognized ECB flag

    return reg_al;
}