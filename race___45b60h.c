#include "drally.h"

	extern byte ___196e70h[];
	extern byte ___1a33c0h[];
	extern byte ___1a4ec0h[];
	extern byte ___1a4ec1h[];
	extern byte ___1a33c4h[];
	extern byte ___1a4ec2h[];
	extern byte ___1a33c8h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

// RACE, INFO SCREEN FADE OUT
void ___45b60h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[8];


		ebx = D(___196e70h);
		edx ^= edx;
		esi ^= esi;
		ebx++;
		D(esp+0x4) = edx;
		D(___196e70h) = ebx;
___45b86h:
		ebx = D(esp+0x4);
		edx = D(___196e70h);
		ebx = ebx+ebx*2;
		ecx ^= ecx;
		eax = D(esi+___1a33c0h);
		L(ecx) = B(ebx+___1a4ec0h);
		edx <<= 0x10;
		ecx <<= 0x10;
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		ecx -= eax;
		edx = D(___196e70h);
		eax = ecx+0x8000;
		edx <<= 0x10;
		eax = (int)eax>>0x10;
		ecx ^= ecx;
		D(esp) = eax;
		L(ecx) = B(ebx+___1a4ec1h);
		eax = D(esi+___1a33c4h);
		ecx <<= 0x10;
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		ecx -= eax;
		ecx += 0x8000;
		L(ebx) = B(ebx+___1a4ec2h);
		ecx = (int)ecx>>0x10;
		edx = D(___196e70h);
		ebx &= 0xff;
		eax = D(esi+___1a33c8h);
		edx <<= 0x10;
		ebx <<= 0x10;
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		ebx -= eax;
		eax ^= eax;
		L(eax) = B(esp+4);
		nn = eax;
		eax ^= eax;
		L(eax) = B(esp);
		rr = eax;
		eax ^= eax;
		ebx += 0x8000;
		L(eax) = L(ecx);
		ebx = (int)ebx>>0x10;
		gg = eax;
		eax ^= eax;
		L(eax) = L(ebx);
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp+0x4);
		ecx++;
		esi += 0xc;
		D(esp+0x4) = ecx;
		if((int)ecx < 0x100) goto ___45b86h;
		return;
}
