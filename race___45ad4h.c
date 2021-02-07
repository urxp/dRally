#include "drally.h"

	extern byte ___1a4ec0h[];
	extern byte ___1a33c0h[];

// RACE F1 INFOSCREENS COLORS
void race___45ad4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


	ecx = 0;
	esi = 0;
	ebp = 0x3f0000;

	while(1){

		edi = esi+esi*2;
		edx = B(edi+___1a4ec0h);
		ebx = ebp;
		edx <<= 0x10;
		eax = 0;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		edx = B(edi+___1a4ec0h+1);
		ebx = ebp;
		edx <<= 0x10;
		D(ecx+___1a33c0h) = eax;
		eax = 0;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		esi++;
		edx = B(edi+___1a4ec0h+2);
		ebx = ebp;
		edx <<= 0x10;
		D(ecx+___1a33c0h+4) = eax;
		eax = 0;
		eax = (eax>>0x10)|(edx<<0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		D(ecx+___1a33c0h+8) = eax;
		ecx = ecx+0xc;
	
		if((int)esi >= 0x100) break;
	}
}
