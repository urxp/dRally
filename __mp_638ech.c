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

    extern IPX_EventControlBlock * ___24cd60h[];
    extern dword ___199fa0h;
    extern dword ___199f9ch;
    extern IPX_Header * ___24cd00h[];
    extern byte * ___24cdc0h[];
    extern IPX_Header * ___24e548h;
    extern IPX_EventControlBlock * ___24e54eh;
    extern byte * ___24e58ah;
    extern dword ___199fc0h;


dword NovellNetWare_IPX_InstallationCheck(void);
dword NovellNetWare_IPX_GetDriverMaximumPacketSize(void);
dword ___632c4h(dword);

dword ___638ech(void){

	int 	n;

    if(NovellNetWare_IPX_InstallationCheck() == 0xff){

		n = -1;
		while(++n < 0x10){

			___24cd60h[n]->InUse = 1;
			___24cd60h[n]->ESRAddress = 0;
			___24cd60h[n]->SocketNumber = ___632c4h(___199fa0h+0x5000+___199f9ch);
			___24cd60h[n]->FragmentCount = 2;
			___24cd60h[n]->Fragment[0].Address = ___24cd00h[n];
			___24cd60h[n]->Fragment[0].Size = 0x1e;
			___24cd60h[n]->Fragment[1].Address = ___24cdc0h[n];
			___24cd60h[n]->Fragment[1].Size = 0x222;
		}

		___24e548h->DestinationNetwork = 0;
		memset(___24e548h->DestinationNode, 0xff, 6);
		___24e548h->DestinationSocket = ___632c4h(___199fa0h+0x5000+___199f9ch);
		___24e548h->PacketType = 4;

		memset(___24e54eh->ImmediateAddress, 0xff, 6);
		___24e54eh->SocketNumber = ___632c4h(___199fa0h+0x5000+___199f9ch);
		___24e54eh->ESRAddress = 0;
		___24e54eh->FragmentCount = 2;
		___24e54eh->Fragment[0].Address = ___24e548h;
		___24e54eh->Fragment[0].Size = 0x1e;
		___24e54eh->Fragment[1].Address = ___24e58ah;
		___24e54eh->Fragment[1].Size = 1;
		___199fc0h = NovellNetWare_IPX_GetDriverMaximumPacketSize()-0x1e;

		return 1;
	}

    return 0;
}
