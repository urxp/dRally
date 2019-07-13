#include "x86.h"

    extern byte MENU_BPA[];
    extern byte pal_menu[];
    extern byte Pal8to24_0[];
    extern byte Pal8to24_1[];

    void read__bpa(const char *, void *, const char *);

    static dword idiv_quo(dword, dword, dword);
    #pragma aux idiv_quo =      \
        "idiv   ebx"            \
        parm [eax][edx][ebx]	\
		value [eax]


// 12940h
void loadMenuPalette(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x304];
	byte * 	esp = __esp + 0x304;

//		push    320h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		sub     esp, 304h
	esp -= 0x304;
//		mov     ebx, __CEXT_V(pal_menu)
	ebx = pal_menu;
//		mov     edx, esp
	edx = esp;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		xor     edx, edx
	edx = 0;
//		xor     ecx, ecx
	ecx = 0;
//		mov     [esp+300h], edx
	D(esp+0x300) = edx;
___12972h:
//		mov     esi, [esp+300h]
	esi = D(esp+0x300);
//		lea     esi, [esi+esi*2]
	esi = esi+esi*2;
//		xor     eax, eax
	eax = 0;
//		mov     al, [esp+esi]
	al = B(esp+esi);
//		movzx   ebp, byte [esp+esi+1]
	ebp = B(esp+esi+1);
//		movzx   edi, byte [esp+esi+2]
	edi = B(esp+esi+2);
//		mov     esi, eax
	esi = eax;
//		mov     ebx, 640000h
	ebx = 0x640000;
//		shl     esi, 10h
	esi <<= 0x10;
//		shl     ebp, 10h
	ebp <<= 0x10;
//		mov     edx, esi
	edx = esi;
//		shl     edi, 10h
	edi <<= 0x10;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, 640000h
	ebx = 0x640000;
//		mov     edx, ebp
	edx = ebp;
//		mov     [ecx+__CEXT_V(Pal8to24_1)], eax
	D(ecx+Pal8to24_1) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, 640000h
	ebx = 0x640000;
//		mov     edx, edi
	edx = edi;
//		mov     [ecx+__CEXT_V(Pal8to24_1)+4], eax
	D(ecx+Pal8to24_1+4) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, 640000h
	ebx = 0x640000;
//		mov     edx, esi
	edx = esi;
//		mov     [ecx+__CEXT_V(Pal8to24_1)+8], eax
	D(ecx+Pal8to24_1+8) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, 640000h
	ebx = 0x640000;
//		mov     edx, ebp
	edx = ebp;
//		mov     [ecx+__CEXT_V(Pal8to24_0)], eax
	D(ecx+Pal8to24_0) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, 640000h
	ebx = 0x640000;
//		mov     edx, edi
	edx = edi;
//		mov     [ecx+__CEXT_V(Pal8to24_0)+4], eax
	D(ecx+Pal8to24_0+4) = eax;
//		xor     eax, eax
	eax = 0;
//		shrd    eax, edx, 10h
	eax = (eax >> 0x10) | (edx << 0x10);
//		sar     edx, 10h
	edx = (int)edx >> 0x10;
//		idiv    ebx
	eax = idiv_quo(eax, edx, ebx);
//		mov     ebx, [esp+300h]
	ebx = D(esp+0x300);
//		add     ecx, byte 0ch
	ecx += 0xc;
//		inc     ebx
	ebx++;
//		mov     [ecx+__CEXT_V(Pal8to24_0)-4], eax
	D(ecx+Pal8to24_0-4) = eax;
//		mov     [esp+300h], ebx
	D(esp+0x300) = ebx;
//		cmp     ebx, 100h
//		jl      ___12972h
	if((int)ebx < 0x100) goto ___12972h;
//		add     esp, 304h
	esp += 0x304;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}
