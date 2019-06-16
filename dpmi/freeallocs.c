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

typedef struct AllocTableInfo {
    AllocEntry * AllocEntries;
	dword       nbytes;
    dword       handle;
    word        selector;
	byte        lock;
} AllocTableInfo;

    extern AllocTableInfo AllocTable;
    extern dwordregs REGS1;

	int int386__clib3r(int inter_no, dwordregs *, dwordregs *);
    void ___58b20h(int errn);
    void ___600b0h(void);
    void freeMemory(void *);
    void ___5ff99h(void);

void freeAllocInfoTable(void){

	dword n;

	___5ff99h();

    n = 0xe38;

    while(n--){

        if(AllocTable.AllocEntries[n].type)
            freeMemory(AllocTable.AllocEntries[n].linear);
    }

	if(AllocTable.lock){

        // UNLOCK LINEAR REGION
        REGS1.eax = 0x601;
        // BX:CX = starting linear address
        REGS1.ebx = (dword)AllocTable.AllocEntries >> 0x10;
        REGS1.ecx = (dword)AllocTable.AllocEntries;
        // SI:DI = size of region in bytes
        REGS1.esi = AllocTable.nbytes >> 0x10;
        REGS1.edi = AllocTable.nbytes;
        int386__clib3r(0x31, &REGS1, &REGS1);
    }

    // FREE MEMORY BLOCK
	REGS1.eax = 0x502;
    // SI:DI = handle of memory block
	REGS1.esi = AllocTable.handle >> 0x10;
	REGS1.edi = AllocTable.handle;
	int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag) ___58b20h(5);

    // FREE LDT DESCRIPTOR
	REGS1.eax = 1;
    //BX = selector to free
	REGS1.ebx = AllocTable.selector;
	int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag) ___58b20h(9);

	AllocTable.AllocEntries = 0;
    AllocTable.nbytes = 0;
    AllocTable.handle = 0;
    AllocTable.selector = 0;
    AllocTable.lock = 0;

	___600b0h();
}
