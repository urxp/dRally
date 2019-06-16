typedef unsigned char   byte;
typedef unsigned short 	word;
typedef unsigned long   dword;

#pragma pack(1)

typedef struct {
	dword   eax;
	dword   ebx;
	dword   ecx;
	dword   edx;
    dword   esi;
	dword   edi;
	dword   cflag;
} dwordregs;

typedef struct AllocEntry {
	byte 	type;		// +0
	void * 	linear;		// +1
	dword 	nbytes;		// +5
	dword 	handle;		// +9
	word 	selector;	// +0dh
	word 	segment;	// +0dh
	byte 	lock;		// +11h
} AllocEntry;

    extern AllocEntry * AllocEntries;
    extern dwordregs REGS1;

    void ___58b20h(int errn);
	int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void freeMemory(void * mem){

    dword n;

	n = 0;

    while((dword)mem != (dword)AllocEntries[n].linear){

        if(n++ == 0xe38) ___58b20h(0xe);
    }

	if(AllocEntries[n].type == 0) return; //___58b20h(0xe);

	if(AllocEntries[n].lock){

        // UNLOCK LINEAR REGION
        REGS1.eax = 0x601;
        // BX:CX = starting linear address
        REGS1.ebx = (dword)AllocEntries[n].linear >> 0x10;
        REGS1.ecx = (dword)AllocEntries[n].linear;
        // SI:DI = size of region in bytes
        REGS1.esi = AllocEntries[n].nbytes >> 0x10;
        REGS1.edi = AllocEntries[n].nbytes;
        int386__clib3r(0x31, &REGS1, &REGS1);
        AllocEntries[n].lock = 0;
    }

	switch(AllocEntries[n].type){ 
    case 1:
        // FREE MEMORY BLOCK
        REGS1.eax = 0x502;
        // SI:DI = handle of memory block
        REGS1.esi = AllocEntries[n].handle >> 0x10;
        REGS1.edi = AllocEntries[n].handle;
        break;
    case 2:
        // FREE DOS MEMORY BLOCK
        REGS1.eax = 0x101;
        // DX = selector of block
        REGS1.edx = AllocEntries[n].selector;
        break;
    default:
        ___58b20h(0xe);
    }

    int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag) ___58b20h(0xe);

	AllocEntries[n].type = 0;
}
