#include "drally.h"

	extern byte ___1a4ec0h[];
	extern byte ___1a4ec1h[];
	extern byte ___1a33b4h[];
	extern byte ___1a4ec2h[];
	extern byte ___1a33b8h[];
	extern byte ___1a33bch[];

// RACE F1 INFOSCREENS COLORS
void race___45ad4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx ^= ecx;
		esi ^= esi;
		ebp = 0x3f0000;
___45aedh:
		edi = esi+esi*2;
		edx ^= edx;
		L(edx) = B(edi+___1a4ec0h);
		ebx = ebp;
		edx <<= 0x10;
		eax ^= eax;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx ^= edx;
		ecx += 0xc;
		L(edx) = B(edi+___1a4ec1h);
		ebx = ebp;
		edx <<= 0x10;
		D(ecx+___1a33b4h) = eax;
		eax ^= eax;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx ^= edx;
		esi++;
		L(edx) = B(edi+___1a4ec2h);
		ebx = ebp;
		edx <<= 0x10;
		D(ecx+___1a33b8h) = eax;
		eax ^= eax;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		D(ecx+___1a33bch) = eax;
		if((int)esi < 0x100) goto ___45aedh;
		return;
}
