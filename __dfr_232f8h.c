#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a10fch[];
	extern byte ___1a110ch[];

void ___12e78h_cdecl(dword, dword, dword, dword);

void ___232f8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	
	
		ebp = 0x12c00;
___2330dh:
		eax = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		eax += ebp;
		esi = eax+0xc;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ebp;
		ecx = 0x276;
		edi = eax+0xc;
		ebp += 0x280;
		memcpy(edi, esi, ecx);
		if(ebp != 0x49700) goto ___2330dh;
		edi = ___1a116ch;
		esi = 0x1298c;
		ebp = 0;
___23350h:
		if(B(ebp+___1a1f4eh) != 0) goto ___2336ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		ecx = esi;
		ebx = edi;
		___12e78h_cdecl(eax, edx, ebx, ecx);
___2336ch:
		if(B(ebp+___1a1f4eh) != 1) goto ___23388h;
		edx = ___185c0bh;
		eax = D(___1a10fch);
		ecx = esi;
		ebx = edi;
		___12e78h_cdecl(eax, edx, ebx, ecx);
___23388h:
		if(B(ebp+___1a1f4eh) != 2) goto ___233a4h;
		edx = ___185c0bh;
		eax = D(___1a110ch);
		ecx = esi;
		ebx = edi;
		___12e78h_cdecl(eax, edx, ebx, ecx);
___233a4h:
		esi += 0x2580;
		ebp++;
		edi += 0x96;
		if((int)ebp < 0x16) goto ___23350h;
		return;
}
