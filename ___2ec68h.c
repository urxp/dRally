#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a0a50h[];
	extern byte ___19bd60h[];
	extern byte ___1a0a5ch[];
	extern byte ___1a0224h[];

void ___2ec68h_cdecl(void){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;

		esi = D(___1a1ef8h);
		ecx = 4;
		edx = 1;
		eax = ___1a0a50h;
		while(ecx&&ecx--) D(4*ecx+eax) = edx;
		if(D(___19bd60h) == 0) goto ___2ecb6h;
		ecx = 4;
		edx = 1;
		eax = ___1a0a50h;
		ebx = 0;
		while(ecx&&ecx--) D(4*ecx+eax) = edx;
		D(___1a0a5ch) = ebx;
___2ecb6h:
		esi = D(___1a1ef8h);
		edx = 0;
		eax = 0;
		ebx = 0;
___2ecc2h:
		ecx = D(eax+___1a0224h);
		if((int)ebx >= (int)ecx) goto ___2ecd2h;
		if(edx == esi) goto ___2ecd2h;
		ebx = ecx;
___2ecd2h:
		edx++;
		eax += 0x6c;
		if((int)edx < 0x14) goto ___2ecc2h;
		edi = D(___19bd60h);
		if(edi) goto ___2ed04h;
		eax = esi*8;
		eax -= esi;
		eax <<= 2;
		eax -= esi;
		if((int)ebx >= (int)D(eax*4+___1a0224h)) goto ___2ed04h;
		D(___1a0a5ch) = edi;
		goto ___2ed0eh;
___2ed04h:
		D(___1a0a5ch) = 1;
___2ed0eh:
		if(D(___19bd60h) == 0) goto ___2ed1fh;
		ecx = 0;
		D(___1a0a5ch) = ecx;
___2ed1fh:
		D(___1a1ef8h) = esi;
}
