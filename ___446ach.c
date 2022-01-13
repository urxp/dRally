#include "drally.h"

	extern __BYTE__ ___24331ch[];
	extern __POINTER__ ___24cee0h[4];
	extern __BYTE__ ___243d9eh[];
	extern __BYTE__ ___196e60h[];

void ___446ach(void){

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp;

	eax = 0;
	while(1){

		ecx = W(___24cee0h[D(___24331ch)]+2);
		ecx += eax;
		ecx &= 0xfff;
		B(___243d9eh+eax) = B(___24cee0h[D(___24331ch)]+ecx+4);
		eax++;
		if((int)eax >= 0x13) break;
	}

	eax = 0;
	while(1){

		X(edx) = W(___24cee0h[D(___24331ch)]+2);
		esi = edx;
		esi &= 0xfff;
		edx++;
		W(___24cee0h[D(___24331ch)]+2) = X(edx);
		esi &= 0xffff;
		B(___24cee0h[D(___24331ch)]+esi+4) = 0;
		eax++;
		if((int)eax >= 0x13) break;
	}

	D(___196e60h) = 1;
}
