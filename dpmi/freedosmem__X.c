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
    dword   ___0;
    dword   ___1;
    word    ___2;
    word    ___3;
    byte    lock;
} DOSAllocStruct;

    extern byte REGS1_EBX[];
    extern byte REGS1_ECX[];
    extern byte REGS1_EDX[];
    extern byte REGS1[];
    extern byte REGS1_EAX[];
    extern byte REGS1_ESI[];
    extern byte REGS1_EDI[];
    extern byte REGS1_CFLAG[];

    int int386__clib3r(int inter_no, dwordregs *, dwordregs *);
    void ___58b20h(int errn, ...);

void freedosmem__dpmi(DOSAllocStruct * A){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;

    eax = (dword)A;

//		push    ebx
//		push    ecx
//		push    edx
//		mov     ecx, eax
    ecx = eax;
//		cmp     byte [eax+0ch], 0
//		je      ___5f84eh
    if(B(eax+0xc) == 0) goto ___5f84eh;
//		mov     eax, [ecx]
    eax = D(ecx);
//		shr     eax, 10h
    eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EBX)], ax
    W(REGS1_EBX) = ax;
//		mov     ax, [ecx]
    ax = W(ecx);
//		mov     edx, 601h
    edx = 0x601;
//		mov     [__CEXT_V(REGS1_ECX)], ax
    W(REGS1_ECX) = ax;
//		mov     eax, [ecx+4]
    eax = D(ecx+4);
//		mov     ebx, __CEXT_V(REGS1)
    ebx = REGS1;
//		shr     eax, 10h
    eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_EAX)], dx
    W(REGS1_EAX) = dx;
//		mov     [__CEXT_V(REGS1_ESI)], ax
    W(REGS1_ESI) = ax;
//		mov     ax, [ecx+4]
    ax = W(ecx+4);
//		mov     edx, ebx
    edx = ebx;
//		mov     [__CEXT_V(REGS1_EDI)], ax
    W(REGS1_EDI) = ax;
//		mov     eax, 31h
    eax = 0x31;
//		call    __CEXT_F(int386__clib3r)
    eax = int386__clib3r(eax, edx, ebx);
___5f84eh:
//		mov     ebx, 101h
    ebx = 0x101;
//		mov     ax, [ecx+8]
    ax = W(ecx+8);
//		mov     [__CEXT_V(REGS1_EAX)], bx
    W(REGS1_EAX) = bx;
//		mov     [__CEXT_V(REGS1_EDX)], ax
    W(REGS1_EDX) = ax;
//		mov     ebx, __CEXT_V(REGS1)
    ebx = REGS1;
//		mov     eax, 31h
    eax = 0x31;
//		mov     edx, ebx
    edx = ebx;
//		call    __CEXT_F(int386__clib3r)
    eax = int386__clib3r(eax, edx, ebx);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
//		je      ___5f888h
    if(D(REGS1_CFLAG) == 0) goto ___5f888h;
//		push    byte 2
//		call    __CEXT_F(___58b20h)
    ___58b20h(2);
//		add     esp, byte 4
___5f888h:
//		mov     dword [ecx], 0
    D(ecx) = 0;
//		mov     word [ecx+8], 0
    W(ecx+8) = 0;
//		mov     dword [ecx+4], 0
    D(ecx+4) = 0;
//		mov     word [ecx+0ah], 0
    W(ecx+0xa) = 0;
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
    return;
}
