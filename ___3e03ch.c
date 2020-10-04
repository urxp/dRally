#include "drally.h"

	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern byte ___1a1f4dh[];
	extern byte ___19695ch[];
	extern byte ___1a1b62h[];
	extern byte ___1969a2h[];
	extern byte ___1a1bf8h[];
	extern byte ___1a1f5fh[];
	extern byte ___1969e8h[];
	extern byte ___1a1c8eh[];
	extern byte ___1a1f60h[];
	extern byte ___196a2eh[];
	extern byte ___1a1d24h[];
	extern byte ___1a1f61h[];
	extern byte ___1a1f62h[];

void ___3e03ch(void){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];


		edx = ___1a116ch;
		edx += 0x96;
		ebp = 0;
		D(esp) = edx;
___3e05fh:
		ebx = ___1a116ch;
		ecx = D(esp);
		edx = 0;
___3e069h:
		esi = ecx;
		edi = ebx;
		edx++;
		strcpy(edi, esi);
		ebx += 0x96;
		L(eax) = B(edx+___1a1f4eh);
		ecx += 0x96;
		B(edx+___1a1f4dh) = L(eax);
		if((int)edx < 0x15) goto ___3e069h;
		ebp++;
		if((int)ebp < 6) goto ___3e05fh;
		esi = ___19695ch;
		edi = ___1a1b62h;
		L(edx) = 1;
		strcpy(edi, esi);
		H(eax) = 1;
		esi = ___1969a2h;
		edi = ___1a1bf8h;
		B(___1a1f5fh) = H(eax);
		strcpy(edi, esi);
		esi = ___1969e8h;
		edi = ___1a1c8eh;
		B(___1a1f60h) = L(edx);
		strcpy(edi, esi);
		esi = ___196a2eh;
		edi = ___1a1d24h;
		B(___1a1f61h) = L(edx);
		strcpy(edi, esi);
		B(___1a1f62h) = L(edx);
		return;
}
