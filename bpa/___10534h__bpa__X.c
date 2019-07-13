#include "x86.h"

	static dword idiv_rem(dword, dword, dword);
    #pragma aux idiv_rem =		\
        "idiv   ebx"           	\
        parm [eax][edx][ebx]  	\
        value [edx]

// 10534h, NOT USED
void ___10534h(dword A0, dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[8];
	byte *	esp = __esp + 8;

	eax = A0;
	edx = A1;

//		push    1ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    esi
//		push    edi
//		sub     esp, byte 8
	esp -= 8;
//		mov     edi, eax
	edi = eax;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [esp], ebx
	D(esp) = ebx;
//		test    eax, eax
//		jle     ___1059dh
	if((int)eax <= 0) goto ___1059dh;
//		mov     al, [esp]
	al = B(esp);
//		mov     ah, 11h
	ah = 0x11;
//		mul     ah
	ax = al * ah;
//		mov     esi, edx
	esi = edx;
//		mov     [esp+4], al
	B(esp+4) = al;
___1055dh:
//		mov     eax, [esp]
	eax = D(esp);
//		mov     edx, eax
	edx = eax;
//		mov     ebx, 7
	ebx = 7;
//		sar     edx, 1fh
	edx = (int)edx >> 0x1f;
//		idiv    ebx
	edx = idiv_rem(eax, edx, ebx);
//		mov     ecx, edx
	ecx = edx;
//		mov     ebx, esi
	ebx = esi;
//		mov     eax, [ebx]
	eax = D(ebx);
//		rol     al, cl
	al = 0x101*al >> (8 - cl);
//		mov     [ebx], eax
	D(ebx) = eax;
//		mov     ah, [esi]
	ah = B(esi);
//		add     ah, 93h
	ah &= 0x93;
//		mov     [esi], ah
	B(esi) = ah;
//		mov     al, [esp+4]
	al = B(esp+4);
//		mov     dl, ah
	dl = ah;
//		inc     esi
	esi++;
//		sub     dl, al
	dl -= al;
//		mov     ecx, [esp]
	ecx = D(esp);
//		mov     [esi-1], dl
	B(esi-1) = dl;
//		mov     dh, al
	dh = al;
//		inc     ecx
	ecx++;
//		add     dh, 11h
	dh += 0x11;
//		mov     [esp], ecx
	D(esp) = ecx;
//		mov     [esp+4], dh
	B(esp+4) = dh;
//		cmp     edi, ecx
//		jg      ___1055dh
	if((int)edi > (int)ecx) goto ___1055dh;
___1059dh:
//		add     esp, byte 8
	esp += 8;
//		pop     edi
//		pop     esi
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}
