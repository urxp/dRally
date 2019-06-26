#include "x86.h"

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
    dword   linear;     // +0
    dword   nbytes;     // +4
    word    selector;   // +8
    word    segment;    // +0ah
    byte    lock;       // +0ch
} DOSAllocStruct;

    extern dwordregs REGS1;

    int int386__clib3r(int inter_no, dwordregs *, dwordregs *);
    void ___58b20h(int errn, ...);

// 5f734h
void allocdoslock__dpmi(DOSAllocStruct * A, dword nbytes, dword lock){
 
    // ALLOCATE DOS MEMORY BLOCK
	REGS1.eax = 0x100;
    // BX = number of paragraphs to allocate
	REGS1.ebx = (nbytes+0xf) >> 4;
	int386__clib3r(0x31, &REGS1, &REGS1);

	if(REGS1.cflag) ___58b20h(1);

    // AX = real mode segment of allocated block
	A->segment = REGS1.eax;
    A->linear = REGS1.eax << 4;
    // DX = first selector for allocated block
	A->selector = REGS1.edx;
	A->nbytes = nbytes;
	A->lock = lock;

	if(lock){

        // LOCK LINEAR REGION
        REGS1.eax = 0x600;
        // BX:CX = starting linear address
        REGS1.ebx = A->linear >> 0x10;
        REGS1.ecx = A->linear;
        // SI:DI = size of region in bytes
        REGS1.esi = A->nbytes >> 0x10;
        REGS1.edi = A->nbytes;
        int386__clib3r(0x31, &REGS1, &REGS1);
    }
}
