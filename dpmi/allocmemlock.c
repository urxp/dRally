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

void * allocMemoryLock(dword nsize, dword lock){

	dword n;

	n = 0;

	while((AllocEntries[n].type)&&(++n < 0xe38));
	
	if(n == 0xe38) ___58b20h(0xd);

	if(nsize >= 0x100000){

		nsize |= 0x00000fff;
		nsize++;
	}

	// ALLOCATE MEMORY BLOCK
	REGS1.eax = 0x501;				
	// BX:CX = size in bytes	
	REGS1.ebx = nsize >> 0x10;
	REGS1.ecx = nsize;					
	int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag){	
		// failed

		// ALLOCATE DOS MEMORY BLOCK
		REGS1.eax = 0x100;			
		// BX = number of paragraphs to allocate	
		REGS1.ebx = (nsize + 0xf) >> 4;	
		int386__clib3r(0x31, &REGS1, &REGS1);

		if(REGS1.cflag) ___58b20h(0xd);

		AllocEntries[n].type = 2;
		// AX = real mode segment of allocated block
		AllocEntries[n].linear = (void *)(REGS1.eax << 4);
		AllocEntries[n].segment = REGS1.eax;
		// DX = first selector for allocated block
		AllocEntries[n].selector = REGS1.edx;
	}
	else {				
		// succeed

		AllocEntries[n].type = 1;
		// BX:CX = linear address of block
		AllocEntries[n].linear = (void *)((word)REGS1.ecx + (REGS1.ebx << 0x10));
		// SI:DI = memory block handle for resizing and freeing block
		AllocEntries[n].handle = (word)REGS1.edi + (REGS1.esi << 0x10);
	}

	AllocEntries[n].nbytes = nsize;

	if(lock){

		// LOCK LINEAR REGION
		REGS1.eax = 0x600;
		// BX:CX = starting linear address
		REGS1.ebx = (dword)AllocEntries[n].linear >> 0x10;
		REGS1.ecx = (dword)AllocEntries[n].linear;
		// SI:DI = size of region in bytes
		REGS1.esi = AllocEntries[n].nbytes >> 0x10;
		REGS1.edi = AllocEntries[n].nbytes;
		int386__clib3r(0x31, &REGS1, &REGS1);
	}

	AllocEntries[n].lock = lock; 

	return AllocEntries[n].linear;
}
