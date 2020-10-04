#include "drally.h"

	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];
	extern byte ___1a1f4dh[];
	extern byte ___1a202fh[];
	extern byte ___195494h[];
	extern byte ___1a1b62h[];
	extern byte ___1a1bf8h[];
	extern byte ___1a1f5fh[];
	extern byte ___1a1c8eh[];
	extern byte ___1a1f60h[];
	extern byte ___1a1d24h[];
	extern byte ___1a1f61h[];
	extern byte ___1a2148h[];
	extern byte ___1a1f62h[];

int rand_watcom106(void);

void ___3deb8h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];


		edx = ___1a116ch;
		edx += 0x96;
		ebp ^= ebp;
		D(esp) = edx;
___3dedbh:
		ecx = ___1a116ch;
		ebx = D(esp);
		edx ^= edx;
___3dee5h:
		esi = ebx;
		edi = ecx;
		edx++;
		strcpy(edi, esi);
		ecx += 0x96;
		L(eax) = B(edx+___1a1f4eh);
		ebx += 0x96;
		B(edx+___1a1f4dh) = L(eax);
		if((int)edx < 0x15) goto ___3dee5h;
		ebp++;
		if((int)ebp < 6) goto ___3dedbh;
		ebx = 0x13;
___3df2ch:
		eax = rand_watcom106();
		edx = eax;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if(B(edx+___1a202fh) == 1) goto ___3df2ch;
		B(edx+___1a202fh) = 1;
		ebx = edx;
		edx <<= 0x3;
		edx += ebx;
		edx <<= 0x2;
		edx -= ebx;
		edx <<= 0x3;
		edx = ___195494h+edx;
		edi = ___1a1b62h;
		esi = edx;
		H(ebx) = 1;
		strcpy(edi, esi);
		edi = ___1a1bf8h;
		esi = edx+0x46;
		B(___1a1f5fh) = H(ebx);
		strcpy(edi, esi);
		edi = ___1a1c8eh;
		esi = edx+0x8c;
		B(___1a1f60h) = H(ebx);
		strcpy(edi, esi);
		edi = ___1a1d24h;
		esi = edx+0xd2;
		B(___1a1f61h) = H(ebx);
		strcpy(edi, esi);
		H(eax) = B(___1a2148h);
		H(eax) += H(ebx);
		B(___1a1f62h) = H(ebx);
		B(___1a2148h) = H(eax);
		if(H(eax) <= 0x12) goto ___3e030h;
		ecx = 0x13;
		eax = ___1a202fh;
		edx ^= edx;
		memset(eax, edx, ecx);
		H(edx) = 0;
		B(___1a2148h) = H(edx);
___3e030h:
		return;
}
