#include "drally.h"

	extern byte ___185c5ch[];
	
dword ___25230h(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

		eax = A1;
		esi = eax;
		edx = eax;
		ebx ^= ebx;
		ebp ^= ebp;
		goto ___2525eh;
___2524ah:
		ecx ^= ecx;
		L(ecx) = B(edx);
		L(ecx) = B(ecx+___185c5ch);
		ecx &= 0xff;
		edx++;
		ebx++;
		ebp += ecx;
___2525eh:
		edi = esi;
		ecx = strlen(edi);
		if(ebx < ecx) goto ___2524ah;
		edx = 0x60;
		edx -= ebp;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		return eax;
}
