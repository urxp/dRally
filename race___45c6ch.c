#include "drally.h"

	extern byte ___196e70h[];
	extern byte ___1a33c0h[];
	extern byte ___1a33c4h[];
	extern byte ___1a33c8h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

// RACE, INFO SCREEN FADE IN
void ___45c6ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[4];


		ebx = D(___196e70h);
		edx ^= edx;
		esi ^= esi;
		ebx++;
		D(esp) = edx;
		D(___196e70h) = ebx;
___45c91h:
		edx = D(___196e70h);
		eax = D(esi+___1a33c0h);
		edx <<= 0x10;
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		edx = D(___196e70h);
		ebx = eax+0x8000;
		edx <<= 0x10;
		eax = D(esi+___1a33c4h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		edx = D(___196e70h);
		ecx = eax+0x8000;
		edx <<= 0x10;
		eax = D(esi+___1a33c8h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		edx = eax+0x8000;
		eax ^= eax;
		L(eax) = B(esp);
		ebx = (int)ebx>>0x10;
		nn = eax;
		eax ^= eax;
		L(eax) = L(ebx);
		ecx = (int)ecx>>0x10;
		rr = eax;
		eax ^= eax;
		L(eax) = L(ecx);
		edx = (int)edx>>0x10;
		gg = eax;
		eax ^= eax;
		L(eax) = L(edx);
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp);
		ecx++;
		esi += 0xc;
		D(esp) = ecx;
		if((int)ecx < 0x100) goto ___45c91h;
		return;
}
