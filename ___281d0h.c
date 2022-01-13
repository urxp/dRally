#include "drally.h"

	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;

// SHOP, MARKET, RACE SIGNUP REMOVE COPPER FRAME
void ___281d0h_cdecl(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3, __DWORD__ A4){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x18];

	eax = A1;
	edx = A2;
	ebx = A3;
	ecx = A4;


	ebp = eax;
	D(esp) = edx;
	D(esp+0x4) = ecx;
	eax = edx;
	edx <<= 0x2;
	eax += edx;
	eax <<= 0x7;
	edx = eax;
	eax += 0xc80;
	D(esp+0x10) = eax;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp, ___1a1138h__VESA101h_DefaultScreenBufferB+edx+ebp, ebx);

		edx += 0x280;
		if(edx == D(esp+0x10)) break;
	}

	eax = D(esp+0x4);
	edi = 4*eax;
	edi += eax;
	eax = D(esp);
	edx = 4*eax;
	edi <<= 0x7;
	eax += edx;
	esi = edi+0xfffff380;
	eax <<= 0x7;
	edx = esi+eax;
	eax += edi;
	D(esp+0xc) = eax;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp, ___1a1138h__VESA101h_DefaultScreenBufferB+edx+ebp, ebx);
		edx += 0x280;
		esi = D(esp+0xc);
		if(edx == esi) break;
	}

	if((int)D(esp+4) <= 0) goto ___282f7h;

	eax = D(esp);
	edi = 4*eax;
	edi += eax;
	eax = D(esp+0x4);
	edx ^= esi;
	esi = 4*eax;
	esi += eax;
	edi <<= 0x7;
	esi <<= 0x7;
	edx += edi;
	edi += esi;
	D(esp+0x8) = edi;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp, ___1a1138h__VESA101h_DefaultScreenBufferB+edx+ebp, 0x5);
		edx += 0x280;
	
		if((int)edx >= (int)D(esp+8)) break;
	}

___282f7h:
		if((int)D(esp+4) <= 0) goto ___28364h;
		eax = D(esp);
		edi = D(esp+0x4);
		edx = 4*eax;
		esi = 4*edi;
		eax += edx;
		esi += edi;
		eax <<= 0x7;
		esi <<= 0x7;
		edx = eax;
		eax += esi;
		D(esp+0x14) = eax;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+ebp+ebx-0x5, ___1a1138h__VESA101h_DefaultScreenBufferB+edx+ebp+ebx-0x5, 0x5);

		edx += 0x280;
		if((int)edx >= (int)D(esp+0x14)) break;
	}

___28364h:
		return;
}
