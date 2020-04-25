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

struct dostime_t {
    unsigned char   hour;       /* 0-23 */
    unsigned char   minute;     /* 0-59 */
    unsigned char   second;     /* 0-59 */
    unsigned char   hsecond;    /* 1/100 second; 0-99 */
};

    extern struct tm TimeInit;

    extern dword ___199fb8h;
    extern dword ___199fbch;
    extern dword CONNECTION_TYPE;
    extern dword ___24e4c8h;
    extern NetPage * ___24e4ach;
    extern dword ___24cf18h;
    extern NetPage * ___24cee0h;
    extern NetPage * ___24cee4h;
    extern NetPage * ___24cee8h;
    extern dword ___24cf1ch;
    extern dword ___24cf20h;
    extern dword ___24cf24h;
    extern dword ___24e4b8h;
    extern NetPage * ___24e4c0h;
    extern NetPage * ___24ceech;
    extern dword ___24e484h;
    extern IPX_InternetworkAddress * ___24e4b4h;
    extern dword ___24e460h;
    extern dword ___24e448h;
    extern dword ___24e454h;
    extern dword ___24e3f0h[];
    extern dword ___199fa0h;
    extern dword ___199f9ch;
    extern byte ___24e552h[];
    extern dword ___24e458h;
    extern IPX_EventControlBlock * ___24e45ch;
    extern IPX_EventControlBlock * ___24e54eh;
    extern IPX_Header * ___24e548h;
    extern dword ___24e44ch;
    extern byte ___24e54ch[];
    extern byte ___24e58eh[];
    extern IPX_Header * ___24cd00h[];
    extern dword ___24ce60h[];
    extern dword ___24ce20h[];
    extern byte * ___24cdc0h[];
    extern IPX_EventControlBlock * ___24cd60h[];
    extern byte * ___24e58ah;
    extern byte ___24cd64h[];
    extern byte * ___24e464h;
    extern dword ___24cea0h[];
    extern byte ___24cd04h[];
    extern byte ___24cdc4h[];

void * ___61b00h(dword A0, dword * A1);
void ___637cch(dword);
dword ___632c4h(dword);
dword ___638ech(void);
dword NovellNetWare_IPX_OpenSocket(dword socket_no, dword longevity);
void NovellNetWare_IPX_GetInternetworkAddress(IPX_InternetworkAddress * ia);
void _dos_gettime(struct dostime_t * __time);

dword DPMI_ALLOCATE_DOS_MEMORY_BLOCK(dword size, dword * sel);

void * ___61b00h(dword A0, dword * A1){

    return (void *)(DPMI_ALLOCATE_DOS_MEMORY_BLOCK(A0, A1) << 4);
}

dword ___61cd0h(void){

    dword   eax, edx;

    int     n;
    struct dostime_t esp;

	if(!(___24e4ach = ___61b00h(sizeof(NetPage), &___24e4c8h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
	if(!(___24cee0h = ___61b00h(sizeof(NetPage), &___24cf18h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
	if(!(___24cee4h = ___61b00h(sizeof(NetPage), &___24cf1ch))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
	if(!(___24cee8h = ___61b00h(sizeof(NetPage), &___24cf20h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
	if(!(___24ceech = ___61b00h(sizeof(NetPage), &___24cf24h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
	if(!(___24e4c0h = ___61b00h(sizeof(NetPage), &___24e4b8h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));

    memset(___24e4ach, 0, sizeof(NetPage));
	memset(___24cee0h, 0, sizeof(NetPage));
	memset(___24cee4h, 0, sizeof(NetPage));
	memset(___24cee8h, 0, sizeof(NetPage));
	memset(___24ceech, 0, sizeof(NetPage));
	memset(___24e4c0h, 0, sizeof(NetPage));

    if(CONNECTION_TYPE == 2){

        if(!(___24e4b4h = ___61b00h(0x10, &___24e484h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
        if(!(___24e54eh = ___61b00h(0x40, &___24e460h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
        if(!(___24e45ch = ___61b00h(0x40, &___24e448h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
        if(!(___24e548h = ___61b00h(0x40, &___24e454h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
        if(!(___24e58ah = ___61b00h(0x7d0, &___24e458h))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
        if(!(___24e464h = ___61b00h(0xa, &___24e44ch))) return (CONNECTION_TYPE = !(___199fbch = 0x64));

		n = -1;
		while(++n < 0x10){

			if(!(___24cd60h[n] = ___61b00h(0x40, &___24ce20h[n]))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
		}

		n = -1;
		while(++n < 0x10){

			if(!(___24cd00h[n] = ___61b00h(0x40, &___24cea0h[n]))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
		}

		n = -1;
		while(++n < 0x10){

			if(!(___24cdc0h[n] = ___61b00h(0x7d0, &___24ce60h[n]))) return (CONNECTION_TYPE = !(___199fbch = 0x64));
		}

        if(!___638ech()) return (CONNECTION_TYPE = !(___199fbch = 0x65));

		NovellNetWare_IPX_GetInternetworkAddress(___24e4b4h);
        if(NovellNetWare_IPX_OpenSocket(___632c4h(___199fa0h+0x5000+___199f9ch), 0) == 0xfe) {
			
			return (CONNECTION_TYPE = !(___199fbch = 0x66));
		}

		n = -1;
		while(++n < 0x10){
				
			___637cch(n);
            ___24cd60h[n]->InUse = ECB_INUSE_AWAITINGPACKET;
		}
	}

	_dos_gettime(&esp);
	___199fb8h = esp.hour<<0x18;
	___199fb8h += esp.minute<<0x10;
	___199fb8h += esp.second<<8;
	___199fb8h += esp.hsecond;
		
    eax = 0;
	n = -1;
	while(++n < 0x7530){

		eax += 2;

		//edx = B(eax);		// ???
			edx = eax&0xff;
			//edx = 0;
			
		___199fb8h += edx;
    }

	___24e3f0h[(n = 0)] = ___199fb8h;
	while(++n < 0xa) ___24e3f0h[n] = 0;

    return 1;
}
