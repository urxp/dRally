#include "drally.h"

	extern byte ___1a4ec0h[];
	extern byte ___1a33c0h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);

void race___45a24h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x4];


		edx = 0;
		esi = 0;
		D(esp) = edx;
		edi = 0x3f0000;
___45a42h:
		eax = 0;
		L(eax) = B(esp);
		__DISPLAY_SET_PALETTE_COLOR(0, 0, 0, eax);
		ecx = D(esp);
		ecx = ecx+2*ecx;
		edx = 0;
		L(edx) = B(ecx+___1a4ec0h);
		ebx = edi;
		edx <<= 0x10;
		eax = 0;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx = 0;
		L(edx) = B(ecx+___1a4ec0h+1);
		ebx = edi;
		edx <<= 0x10;
		D(esi+___1a33c0h) = eax;
		eax = 0;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx = 0;
		L(edx) = B(ecx+___1a4ec0h+2);
		ebx = edi;
		edx <<= 0x10;
		D(esi+___1a33c0h+4) = eax;
		eax = 0;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		ebx = D(esp);
		ebx++;
		D(esi+___1a33c0h+8) = eax;
		esi += 0xc;
		D(esp) = ebx;
		if((int)ebx < 0x100) goto ___45a42h;
		return;
}
