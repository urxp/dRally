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

    extern dwordregs REGS1;

    int int386__clib3r(int inter_no, dwordregs *, dwordregs *);

void int386_REGS1(int inter_no){
    
    int386__clib3r(inter_no & 0xff, &REGS1, &REGS1); 
}
