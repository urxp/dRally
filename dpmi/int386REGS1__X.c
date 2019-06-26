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

    dword   eax, ebx, edx;

    eax = inter_no;

//		push    ebx
//		push    edx
//		mov     ebx, __CEXT_V(REGS1)
    ebx = &REGS1;
//		and     eax, 0ffh
    eax &= 0xff;
//		mov     edx, ebx
    edx = ebx;
//		call    __CEXT_F(int386__clib3r)
    int386__clib3r(eax, edx, ebx);
//		pop     edx
//		pop     ebx
//		retn    
}
