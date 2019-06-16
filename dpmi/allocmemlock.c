#define al 	((byte *)&eax)[0]
#define ah 	((byte *)&eax)[1]
#define ax 	((word *)&eax)[0]
#define bl 	((byte *)&ebx)[0]
#define bh 	((byte *)&ebx)[1]
#define bx 	((word *)&ebx)[0]
#define cl 	((byte *)&ecx)[0]
#define ch 	((byte *)&ecx)[1]
#define cx 	((word *)&ecx)[0]
#define dl 	((byte *)&edx)[0]
#define dh 	((byte *)&edx)[1]
#define dx 	((word *)&edx)[0]
#define di 	((word *)&edi)[0]

#define B(b)	(*(byte *)(b))
#define W(w)	(*(word *)(w))
#define D(d)	(*(dword *)(d))

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

typedef struct {
	byte 	el0;	// +0
	dword 	el1;	// +1
	dword 	el2;	// +5
	dword 	el3;	// +9
	dword 	el4;	// +0dh
	byte 	el5;	// +11h
} UnkStruct;

    extern UnkStruct * ___24ccb0h;
    extern dwordregs REGS1;

    void ___58b20h(int errn);
	int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void * allocMemoryLock(dword nsize, dword lock){

	dword 	eax, ebx, n, edx, edi, ebp;

	n = 0;

	while((___24ccb0h[n].el0)&&(++n < 0xe38));
	
	if(n == 0xe38) ___58b20h(0xd);

	if(nsize >= 0x100000){

		nsize |= 0x00000fff;
		nsize++;
	}

	REGS1.eax = 0x501;
	REGS1.ebx = nsize >> 0x10;
	REGS1.ecx = nsize;
	int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag){

		REGS1.eax = 0x100;
		REGS1.ebx = (nsize+0xf) >> 4;
		int386__clib3r(0x31, &REGS1, &REGS1);

		if(REGS1.cflag) ___58b20h(0xd);

		___24ccb0h[n].el0 = 2;
		___24ccb0h[n].el1 = REGS1.eax << 4;
		___24ccb0h[n].el4 = (word)REGS1.edx + (REGS1.eax << 0x10);
	}
	else {

		___24ccb0h[n].el0 = 1;
		___24ccb0h[n].el1 = (word)REGS1.ecx + (REGS1.ebx << 0x10);
		___24ccb0h[n].el3 = (word)REGS1.edi + (REGS1.esi << 0x10);
	}

	___24ccb0h[n].el2 = nsize;

	if(lock){

		REGS1.eax = 0x600;
		REGS1.ebx = ___24ccb0h[n].el1 >> 0x10;
		REGS1.esi = ___24ccb0h[n].el2 >> 0x10;
		REGS1.edi = ___24ccb0h[n].el2;
		REGS1.ecx = ___24ccb0h[n].el1;
		int386__clib3r(0x31, &REGS1, &REGS1);
	}

	___24ccb0h[n].el5 = lock; 

	return ___24ccb0h[n].el1;
}
