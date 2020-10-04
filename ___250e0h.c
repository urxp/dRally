#include "drally.h"

	extern byte ___185bedh[];

dword ___250e0h(dword A1){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;

		eax = A1;
		esi = eax;
		edx = eax;
		ebx ^= ebx;
		ebp ^= ebp;
		goto ___2510eh;
___250fah:
		ecx ^= ecx;
		L(ecx) = B(edx);
		L(ecx) = B(ecx+___185bedh);
		ecx &= 0xff;
		edx++;
		ebx++;
		ebp += ecx;
___2510eh:
		edi = esi;
		ecx = strlen(edi);
		if(ebx < ecx) goto ___250fah;
		edx = 0x60;
		edx -= ebp;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		return eax;
}
