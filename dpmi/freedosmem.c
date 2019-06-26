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

void freedosmem__dpmi(DOSAllocStruct * A){

    if(A->lock){

        // UNLOCK LINEAR REGION
        REGS1.eax = 0x601;
        // BX:CX = starting linear address
        REGS1.ebx = A->linear >> 0x10;
        REGS1.ecx = A->linear;
        // SI:DI = size of region in bytes
        REGS1.esi = A->nbytes >> 0x10;
        REGS1.edi = A->nbytes;
        int386__clib3r(0x31, &REGS1, &REGS1);
    }

    // FREE DOS MEMORY BLOCK
    REGS1.eax = 0x101;
    // DX = selector of block
    REGS1.edx = A->selector;
    int386__clib3r(0x31, &REGS1, &REGS1);

    if(REGS1.cflag) ___58b20h(2);

    A->linear = 0;
    A->nbytes = 0;
    A->selector = 0;
    A->segment = 0;
    A->lock = 0;
}
