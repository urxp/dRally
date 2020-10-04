#include "drally.h"

	extern byte ___19eb50h[];
	extern byte ___19eb54h[];
	extern byte ___19eb58h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void ___2b5f0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[4];

		edx = 0;
		esi = 0;
		D(esp) = edx;
		edi = 0x640000;
___2b60eh:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = edi;
		eax = D(esi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = edi;
		eax = D(esi+___19eb54h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = edi;
		eax = D(esi+___19eb58h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax >> 0x10)|(edx << 0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ebx = D(esp);
		ebx++;
		esi += 0xc;
		D(esp) = ebx;
		if((int)ebx < 0x100) goto ___2b60eh;
		return;
}
