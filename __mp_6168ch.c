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

    extern dword CONNECTION_TYPE;
    extern IPX_EventControlBlock * ___24cd60h[];
    extern byte * ___24cdc0h[];
    extern NetPage * ___24e4ach;
    extern IPX_Header * ___24cd00h[];
    extern NetPage * ___24e4c0h;
    extern byte * ___24e58ah;
    extern byte ___199fc0h[];
    extern IPX_EventControlBlock * ___24e54eh;

dword ___612c8h(dword);
dword ___632c4h(dword);
void ___637cch(dword);
void ___636d0h(void);
void NovellNetWare_IPX_RelinquishControl(void);

static void npg_writeb(NetPage * npg, byte b){

	npg->data[pg(npg->pos++)] = b;
}

void ___618c4h(void){

    int     n;

	n = 0;
    while(___24e4c0h->write_p != ___24e4c0h->read_p){

        if(CONNECTION_TYPE == 2){

            ___24e58ah[n++] = ___24e4c0h->data[___24e4c0h->read_p&0xfff];
            
            if(n >= (int)D(___199fc0h)){
            
                ___24e54eh->Fragment[1].Size = n;
                ___636d0h();
            }
        }

		___24e4c0h->read_p++;
    }

    if(n > 0){

        ___24e54eh->Fragment[1].Size = n;
        ___636d0h();
    }

    if(CONNECTION_TYPE == 2) NovellNetWare_IPX_RelinquishControl();
}

void ___6168ch(void){

	int 	n, m, size;

	if(CONNECTION_TYPE == 2){

		n = 0x10;
		while(n--){

			if((___24cd60h[n]->InUse == ECB_INUSE_AVAILABLE)&&(___24cd60h[n]->CompletionCode == ECB_CMPL_SUCCESS)){

				if(___612c8h(n) == 0){

					size = ___632c4h(___24cd00h[n]->Length)-0x1e;

					m = -1;
					while(++m < size){

						npg_writeb(___24e4ach, ___24cdc0h[n][m]);
					}
				}

				___24cd60h[n]->InUse = ECB_INUSE_AWAITINGPACKET;
				___637cch(n);
			}
		}
	}
	
	___618c4h();
}
