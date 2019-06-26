#include "x86.h"

	extern byte ___24e9dah[];
	extern byte ___19a804h[];

// 71b70h

dword ___71b70h(dword A1){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

	eax = A1;

//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		mov     ebx, eax
	ebx = eax;
//		cmp     byte [__CEXT_V(___24e9dah)], 0
//		jne     ___71b97h
	if(B(___24e9dah) != 0) goto ___71b97h;
//		xor     eax, eax
	eax = 0;
//		or      ebx, ebx
//		je      ___71b92h
	if(ebx == 0) goto ___71b92h;
//		xor     edx, edx
	edx = 0;
//		mov     eax, ebx
	eax = ebx;
//		shr     eax, 1
	eax >>= 1;
//		add     eax, 2820000h
	eax += 0x02820000;
//		idiv    ebx
	edx = eax % (int)ebx;
	eax = eax / (int)ebx;
___71b92h:
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
___71b97h:
//		cmp     ebx, 1e00h
//		jbe     ___71ba4h
	if(ebx <= 0x1e00) goto ___71ba4h;
//		mov     ebx, 1e00h
	ebx = 0x1e00;
___71ba4h:
//		mov     eax, 1e00h
	eax = 0x1e00;
//		mov     ecx, 300h
	ecx = 0x300;
//		sub     eax, ebx
	eax -= ebx;
//		xor     edx, edx
	edx = 0;
//		mov     ebx, eax
	ebx = eax;
//		div     ecx
	edx = eax % ecx;
	eax = eax / ecx;
//		xor     esi, esi
	esi = 0;
//		mov     si, [edx*2+__CEXT_V(___19a804h)]
	si = W(2*edx+___19a804h);
//		lea     eax, [esi*8+0]
	eax = 8*esi;
//		sub     eax, esi
	eax -= esi;
//		shl     eax, 8
	eax <<= 8;
//		mov     ecx, 519h
	ecx = 0x519;
//		mov     esi, eax
	esi = eax;
//		shl     eax, 6
	eax <<= 6;
//		xor     edx, edx
	edx = 0;
//		add     eax, esi
	eax += esi;
//		div     ecx
	edx = eax % ecx;
	eax = eax / ecx;
//		mov     ecx, 300h
	ecx = 0x300;
//		mov     esi, eax
	esi = eax;
//		xor     edx, edx
	edx = 0;
//		mov     eax, ebx
	eax = ebx;
//		div     ecx
	edx = eax % ecx;
	eax = eax / ecx;
//		mov     ecx, 0ah
	ecx = 0xa;
//		sub     ecx, eax
	ecx -= eax;
//		mov     eax, esi
	eax = esi;
//		shr     eax, cl
	eax >>= cl;
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return eax;
}
