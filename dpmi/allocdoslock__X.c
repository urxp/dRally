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
void allocdoslock__dpmi(dword A0, dword A1, dword lock){
    
	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[4];

	eax = A0;
	edx = A1;
	ebx = lock;

//		push    ecx
//		push    esi
//		sub     esp, byte 4
//		mov     ecx, eax
	ecx = eax;
//		mov     esi, edx
	esi = edx;
//		mov     [esp], bl
	B(esp) = bl;
//		mov     edx, 100h
	edx = 0x100;
//		lea     eax, [esi+0fh]
	eax = esi+0xf;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = &REGS1;
//		shr     eax, 4
	eax >>= 4;
//		mov     [__CEXT_V(REGS1_EAX)], dx
	W(&REGS1.eax) = dx;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(&REGS1.ebx) = ax;
//		mov     edx, ebx
	edx = ebx;
//		mov     eax, 31h
	eax = 0x31;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
//		cmp     dword [__CEXT_V(REGS1_CFLAG)], byte 0
//		je      ___5f77ch
	if(REGS1.cflag == 0) goto ___5f77ch;
//		push    byte 1
//		call    __CEXT_F(___58b20h)
	___58b20h(1);
//		add     esp, byte 4
___5f77ch:
//		mov     ax, [__CEXT_V(REGS1_EAX)]
	ax = W(&REGS1.eax);
//		mov     [ecx+0ah], ax
	W(ecx+0xa) = ax;
//		xor     eax, eax
	eax = 0;
//		mov     ax, [__CEXT_V(REGS1_EAX)]
	ax = W(&REGS1.eax);
//		shl     eax, 4
	eax <<= 4;
//		mov     [ecx], eax
	D(ecx) = eax;
//		mov     ax, [__CEXT_V(REGS1_EDX)]
	ax = W(&REGS1.edx);
//		mov     [ecx+8], ax
	W(ecx+8) = ax;
//		mov     [ecx+4], esi
	D(ecx+4) = esi;
//		mov     al, [esp]
	al = B(esp);
//		mov     [ecx+0ch], al
	B(ecx+0xc) = al;
//		test    al, al
//		je      ___5f7f3h
	if(al == 0) goto ___5f7f3h;
//		mov     ebx, 600h
	ebx = 0x600;
//		mov     eax, [ecx]
	eax = D(ecx);
//		mov     si, [ecx]
	si = W(ecx);
//		mov     [__CEXT_V(REGS1_EAX)], bx
	W(&REGS1.eax) = bx;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     [__CEXT_V(REGS1_ECX)], si
	W(&REGS1.ecx) = si;
//		mov     ebx, __CEXT_V(REGS1)
	ebx = &REGS1;
//		mov     [__CEXT_V(REGS1_EBX)], ax
	W(&REGS1.ebx) = ax;
//		mov     eax, [ecx+4]
	eax = D(ecx+4);
//		mov     edx, ebx
	edx = ebx;
//		shr     eax, 10h
	eax >>= 0x10;
//		mov     cx, [ecx+4]
	cx = W(ecx+4);
//		mov     [__CEXT_V(REGS1_ESI)], ax
	W(&REGS1.esi) = ax;
//		mov     eax, 31h
	eax = 0x31;
//		mov     [__CEXT_V(REGS1_EDI)], cx
	W(&REGS1.edi) = cx;
//		call    __CEXT_F(int386__clib3r)
	int386__clib3r(eax, edx, ebx);
___5f7f3h:
//		add     esp, byte 4
//		pop     esi
//		pop     ecx
//		retn    
	return;
}
