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

    extern NetPage * ___24e4c0h;
    extern byte ___199fb6h[];
    extern byte ___24e3f0h[];
    extern byte ___199fb8h[];
    extern NetPage * ___24e4ach;
    extern byte ___199fd0h[];
    extern byte ___24cf28h[];
    extern byte ___24e596h[];

void ___6168ch(void);
dword __GET_TIMER_TICKS(void);

static void npg_writeb(NetPage * npg, byte b){

	npg->data[pg(npg->write_p++)] = b;
}

static void npg_override(NetPage * npg, byte b){

	npg->data[pg(npg->read_p++)] = b;
}

static void npg_readb(NetPage * npg, void * b){

	B(b) = npg->data[pg(npg->read_p++)];
}

static void npg_skipb(NetPage * npg, dword n){

	npg->read_p += n;
}

static byte npg_peekb(NetPage * npg, dword offset){

	return npg->data[pg(npg->read_p+offset)];
}

static int npg_stopb(NetPage * npg, byte b){

	return (npg_peekb(npg, 0) == b)||!(++npg->read_p);
}

static int npg_done(NetPage * npg){

	return (npg->write_p == npg->read_p);
}

dword ___60b60h(dword A1, dword A2, dword A3, int A4){

    dword   eax, ebx, edx, edi;
    byte    esp[0x18];


	D(esp+0xc) = 0;

	npg_writeb(___24e4c0h, 0xd3);
	npg_writeb(___24e4c0h, A1);
	npg_writeb(___24e4c0h, B(___199fb6h));
	npg_writeb(___24e4c0h, B(___199fb8h));
	npg_writeb(___24e4c0h, D(___199fb8h)>>8);
	npg_writeb(___24e4c0h, D(___199fb8h)>>0x10);
	npg_writeb(___24e4c0h, D(___199fb8h)>>0x18);

	eax = -1;
	while(++eax < A4) npg_writeb(___24e4c0h, B(eax+A3));

	npg_writeb(___24e4c0h, 0xff);
	___6168ch();

	if(B(___199fb6h) != A2){

		if(npg_done(___24e4ach)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;

		while(1){

			if(B(___199fb6h) == A2) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
			if(npg_stopb(___24e4ach, 0xd3)) break;
			if(npg_done(___24e4ach)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
		}

		D(___199fd0h) = __GET_TIMER_TICKS();

		edx = 0;
		while(1){

			if((npg_peekb(___24e4ach, A4+7) == 0xff)||(edx != 0)){

				if(edx != 1){
						
					if(npg_peekb(___24e4ach, 1) != A1){

						npg_skipb(___24e4ach, A4+8);
					}
					else {
							
						ebx = npg_peekb(___24e4ach, 3);
						ebx += (npg_peekb(___24e4ach, 4)<<8);
						ebx += (npg_peekb(___24e4ach, 5)<<0x10);
						ebx += (npg_peekb(___24e4ach, 6)<<0x18);
						edi = 0;

						eax = -1;
						while(++eax < 4){
							
							if(ebx == D(4*eax+___24e3f0h)) edi = 1;
						}

						if(edi == 0){

							D(4*B(___199fb6h)+___24e3f0h) = ebx;

							eax = -1;
							while(++eax < A4){

								B(___24cf28h+(B(___199fb6h)<<0xa)+eax) = npg_peekb(___24e4ach, eax+7);
							}

							B(___199fb6h)++;
						}

						eax = 0;
						while(1){

							if(ebx == D(4*eax+___24e3f0h)){

								B(eax+___24e596h) = npg_peekb(___24e4ach, 2);
								break;
							}

							if(++eax >= 4) break;
						}

						eax = -1;
						while(++eax < (A4+8)) npg_override(___24e4ach, 0);
					}
				}

				if(npg_done(___24e4ach)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;

				while(1){

					if(B(___199fb6h) == A2) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
					if(npg_stopb(___24e4ach, 0xd3)) break;
					if(npg_done(___24e4ach)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
				}

				D(___199fd0h) = __GET_TIMER_TICKS();
				edx = 0;
			}
			else {

				___6168ch();
				
				eax = D(___199fd0h)+5;
				if(eax <= __GET_TIMER_TICKS()){
						
					edx = 1;
					npg_skipb(___24e4ach, 1);
				}
			}
		}
	}
	else {

		edi = D(___24e3f0h);

		eax = 0;
		while(++eax < B(___199fb6h)){
		
			if((int)edi > (int)D(4*eax+___24e3f0h)) edi = D(4*eax+___24e3f0h);
		}

        if(edi == D(___199fb8h)){

			edi = 0;
			edx = B(___199fb6h);

			eax = -1;
			while(++eax < edx){

				if(D(___199fb8h) != D(4*eax+___24e3f0h)){
				
					if((B(eax+___24e596h) = B(___199fb6h)) != 0) edi++;
				}
			}

			edx--;

			if(edi == edx){

				edx = __GET_TIMER_TICKS()+2;
				while(edx > __GET_TIMER_TICKS());

				npg_writeb(___24e4c0h, 0xc5);
				npg_writeb(___24e4c0h, A1);
				npg_writeb(___24e4c0h, B(___199fb6h));
				npg_writeb(___24e4c0h, B(___199fb8h));
				npg_writeb(___24e4c0h, D(___199fb8h)>>8);
				npg_writeb(___24e4c0h, D(___199fb8h)>>0x10);
				npg_writeb(___24e4c0h, D(___199fb8h)>>0x18);

				eax = -1;
				while(++eax < A4) npg_writeb(___24e4c0h, B(eax+A3));

				npg_writeb(___24e4c0h, 0xff);
				___6168ch();
				D(esp+0xc) = 0xffffffff;
			}

			return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
		}

		while(1){

			if(npg_done(___24e4ach)||(D(esp+0xc) == 0xffffffff)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
			if(npg_stopb(___24e4ach, 0xc5)) break;
		}

		D(___199fd0h) = __GET_TIMER_TICKS();

		edx = 0;
		while(1){

			if((npg_peekb(___24e4ach, A4+7) == 0xff)||(edx != 0)){

				if(edx != 1){

					if(npg_peekb(___24e4ach, 1)  != A1){

						npg_skipb(___24e4ach, A4+8);
					}
					else {

						eax = -1;
						while(++eax < (A4+8)) npg_override(___24e4ach, 0);

						D(esp+0xc) = 0xffffffff;
					}
				}

				while(1){

					if(npg_done(___24e4ach)||(D(esp+0xc) == 0xffffffff)) return (D(esp+0xc) != 0xffffffff) ? B(___199fb6h) : 0xff;
					if(npg_stopb(___24e4ach, 0xc5)) break;
				}

				D(___199fd0h) = __GET_TIMER_TICKS();
				edx = 0;
			}
			else {

				___6168ch();

				eax = D(___199fd0h)+5;
				if(eax <= __GET_TIMER_TICKS()){

					edx = 1;
					npg_skipb(___24e4ach, 1);
				}
			}
		}
	}
}
