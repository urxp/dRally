#include "drally.h"

#pragma pack(1)

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

    extern dword CONNECTION_TYPE;
    extern IPX_EventControlBlock * ___24e54eh;
    extern byte * ___24e58ah;
    extern dword ___199fbch;

dword NovellNetWare_IPX_SendPacket(IPX_EventControlBlock *);

void ___61418h(dword A1){

    if(CONNECTION_TYPE == 2){

        ___24e54eh->Fragment[1].Size = 1;
        ___24e58ah[0] = A1;

        if(NovellNetWare_IPX_SendPacket(___24e54eh)) ___199fbch = 0xca;
    }
}
