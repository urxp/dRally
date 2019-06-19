#include "x86.h"

    extern byte string__SCRM[];
    extern byte ___24e868h[];

    void * extract__musics_bpa(const char * elm, dword lock);
    int strncmp__clib3r(const char *, const char *, dword);
    void ___58b20h(int errn, ...);
    dword getentrysize__musics_bpa(const char * elm);

// 71590h
void * loadS3M(dword A, dword B, dword C, dword D){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[4];

	eax = A;
	edx = B;
	ebx = C;
	ecx = D;

//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 4
//		mov     ebp, eax
	ebp = eax;
//		mov     esi, edx
	esi = edx;
//		mov     [esp], ebx
	D(esp) = ebx;
//		mov     edi, ecx
	edi = ecx;
//		mov     edx, 1
	edx = 1;
//		mov     eax, esi
	eax = esi;
//		mov     ebx, 4
	ebx = 4;
//		call    __CEXT_F(extract__musics_bpa)
	eax = extract__musics_bpa(eax, edx);
//		mov     edx, __CEXT_V(string__SCRM)
	edx = string__SCRM;
//		mov     ecx, eax
	ecx = eax;
//		add     eax, 2ch
	eax += 0x2c;
//		call    __CEXT_F(strncmp__clib3r)
	eax = strncmp__clib3r(eax, edx, ebx);
//		test    eax, eax
//		je      ___715ceh
	if(eax == 0) goto ___715ceh;
//		push    esi
//		push    28h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x28, esi);
//		add     esp, 8
___715ceh:
//		test    ebp, ebp
//		je      ___715e9h
	if(ebp == 0) goto ___715e9h;
//		cmp     byte [ecx+60h], 0ffh
//		jne     ___715e3h
	if(B(ecx+0x60) != 0xff) goto ___715e3h;
//		push    esi
//		push    29h
//		call    __CEXT_F(___58b20h)
	___58b20h(0x29, esi);
//		add     esp, 8
___715e3h:
//		mov     [__CEXT_V(___24e868h)], ecx
	D(___24e868h) = ecx;
___715e9h:
//		mov     eax, esi
	eax = esi;
//		mov     esi, [esp]
	esi = D(esp);
//		call    __CEXT_F(getentrysize__musics_bpa)
	eax = getentrysize__musics_bpa(eax);
//		mov     [esi], eax
	D(esi) = eax;
//		xor     eax, eax
	eax = 0;
//		mov     ax, [ecx+22h]
	ax = D(ecx+0x22);
//		mov     [edi], eax
	D(edi) = eax;
//		mov     eax, ecx
	eax = ecx;
//		add     esp, 4
//		pop     ebp
//		pop     edi
//		pop     esi
//		retn    

	return eax;
}
