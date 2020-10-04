#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];

// SHOP, MARKET, RACE SIGNUP REMOVE COPPER FRAME
void ___281d0h_cdecl(dword A1, dword A2, dword A3, dword A4){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

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
___281feh:
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = ebx;
		esi += edx;
		edi += edx;
		esi += ebp;
		edi += ebp;
		memcpy(edi, esi, ecx);
		edx += 0x280;
		if(edx != D(esp+0x10)) goto ___281feh;
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
___2825eh:
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = ebx;
		esi += edx;
		edi += edx;
		esi += ebp;
		edi += ebp;
		memcpy(edi, esi, ecx);
		edx += 0x280;
		esi = D(esp+0xc);
		if(edx != esi) goto ___2825eh;
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
___282c2h:
		ecx = 0x5;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += edx;
		edi += edx;
		esi += ebp;
		edi += ebp;
		memcpy(edi, esi, ecx);
		edx += 0x280;
		if((int)edx < (int)D(esp+8)) goto ___282c2h;
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
___28325h:
		ecx = 0x5;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += edx;
		edi += edx;
		esi += ebp;
		edi += ebp;
		esi += ebx;
		edi += ebx;
		esi -= 5;
		edi -= 5;
		edx += 0x280;
		memcpy(edi, esi, ecx);
		if((int)edx < (int)D(esp+0x14)) goto ___28325h;
___28364h:
		return;
}
