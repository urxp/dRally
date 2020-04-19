#include "drally.h"

#pragma pack(1)

typedef struct IPX_Header {
    word	Checksum;          		//00H	2	h-l i's comlement integer
	word	Length;					//02H	2	high-low unsigned integer
	byte	TransportControl;		//04H	1	unsigned integer
	byte	PacketType;				//05H	1	 unsigned integer
	dword	DestinationNetwork;		//06H	4	high-low unsigned integer
	byte	DestinationNode[6];		//0AH	6	high-low unsigned integer
	word	DestinationSocket;		//10H	2	high-low unsigned integer
	dword	SourceNetwork;			//12H	4	high-low unsigned integer
	byte	SourceNode[6];			//16H	6	high-low unsigned integer
	word	SourceSocket;			//1CH	2	high-low unsigned integer
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

    extern dword ___199fd4h;
    extern dword ___199fa0h;
    extern dword ___199f9ch;

    extern byte * ___24e464h;
    extern IPX_Header * ___24e548h;
    extern IPX_EventControlBlock * ___24e45ch;

dword NovellNetWare_IPX_SendPacket(IPX_EventControlBlock *);
dword ___632c4h(dword);

void ___63b20h(dword A1, dword A2){

	//printf("[dRally.___63b20h] ___199fd4h=0x%X\n", ___199fd4h);

        if((++___199fd4h <= 0x22)&&A1) return;

		___24e464h[0] = 0xb4;
		___24e464h[1] = 0xb5;
		___24e464h[2] = --A2;
		___24e464h[3] = A1;
		___24e464h[4] = 2;
		___24e464h[5] = 0xb6;
		___24e464h[6] = 0xb7;

        ___24e548h->DestinationSocket = ___632c4h(___199fa0h+0x5000);

        ___24e45ch->ImmediateAddress[0] = 0xff;
        ___24e45ch->ImmediateAddress[1] = 0xff;
        ___24e45ch->ImmediateAddress[2] = 0xff;
        ___24e45ch->ImmediateAddress[3] = 0xff;
        ___24e45ch->ImmediateAddress[4] = 0xff;
        ___24e45ch->ImmediateAddress[5] = 0xff;

		___24e45ch->SocketNumber = ___632c4h(___199fa0h+0x5000);
		___24e45ch->ESRAddress = 0;
		___24e45ch->FragmentCount = 2;

		___24e45ch->Fragment[0].Address = ___24e548h;
		___24e45ch->Fragment[0].Size = 0x1e;

		___24e45ch->Fragment[1].Address = ___24e464h;
		___24e45ch->Fragment[1].Size = 7;

        NovellNetWare_IPX_SendPacket(___24e45ch);

		___24e548h->DestinationSocket = ___632c4h(___199fa0h+0x5000+___199f9ch);
		___199fd4h = 0;
}
