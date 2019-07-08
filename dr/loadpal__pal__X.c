#include "x86.h"

    extern byte MENU_BPA[];
    extern byte Pal8to24_1[];

    void read__bpa(const char *, void *, const char *);

static dword idiv_quo(dword, dword, dword);
#pragma aux idiv_quo =      \
    "idiv   ebx"            \
    parm [eax][edx][ebx]


// 3d154h
void loadPalette(const char * A0){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x400];
	byte * 	esp = __esp + 0x400;

	PUSH(0);

	eax = A0;

//		push    31ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 300h
	esp -= 0x300;
//		mov     edx, esp
	edx = esp;
//		mov     ebx, eax
	ebx = eax;
//		xor     esi, esi
	esi = 0;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		xor     ecx, ecx
	ecx = 0;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebp, 640000h
	ebp = 0x640000;
___3d181h:
//		lea     edi, [esi+esi*2]
	edi = esi+esi*2;
//		xor     edx, edx
	edx = 0;
//		mov     dl, [esp+edi]
	dl = B(esp+edi);
//		mov     ebx, ebp
	ebx = ebp;
//		shl     edx, 10h
	edx <<= 0x10;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		add     ecx, byte 0ch
	ecx += 0xc;
//		mov     dl, [esp+edi+1]
	dl = B(esp+edi+1);
//		mov     ebx, ebp
	ebx = ebp;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-0ch], eax
	D(ecx+Pal8to24_1-0xc) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		inc     esi
	esi++;
//		mov     dl, [esp+edi+2]
	dl = B(esp+edi+2);
//		mov     ebx, ebp
	ebx = ebp;
//		shl     edx, 10h
	edx <<= 0x10;
//		mov     [ecx+__CEXT_V(Pal8to24_1)-8], eax
	D(ecx+Pal8to24_1-8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
    eax = idiv_quo(eax, edx, ebx);
//		mov     [ecx+__CEXT_V(Pal8to24_1)-4], eax
	D(ecx+Pal8to24_1-4) = eax;
//		cmp     esi, 100h
//		jl      ___3d181h
	if((int)esi < 0x100) goto ___3d181h;
//		add     esp, 300h
	esp += 0x300;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}
