#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1e7086h[];
	extern byte ___196dc8h[];
	extern byte ___1e70a2h[];
	extern byte ___196dcch[];
	extern byte ___196d98h[];
	extern byte ___1e70a6h[];
	extern byte ___1de5e0h[];
	extern byte ___1de604h[];
	extern byte ___243298h[];
	extern byte ___1e6edch[];
	extern byte ___243d80h[];
	extern byte ___1de5dch[];

void race___50a48h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];

		ecx = D(___243c60h);
		eax = 0x35e*ecx;
		if(D(eax+___1e7086h) == 0) goto ___50b63h;
		ebx = D(___196dc8h);
		edx = D(eax+___1e70a2h);
		esi = D(___196dcch);
		edx -= ebx;
		ebx = D(___196d98h);
		eax = D(eax+___1e70a6h);
		ebx += edx;
		eax -= esi;
		D(esp) = ebx;
		if((int)ebx < 0) goto ___50b55h;
		edx = ebx+8;
		if((int)edx >= 0x140) goto ___50b55h;
		if((int)eax < 0) goto ___50b55h;
		edx = eax+8;
		if((int)edx >= 0xc8) goto ___50b55h;
		eax <<= 9;
		ebp = 0;
		D(esp+0x4) = eax;
		D(esp+0x8) = ebp;
___50ad6h:
		edi = D(esp+0x4);
		ebp = D(esp+0x8);
		ebx = 0;
___50ae0h:
		eax = 0x94*ecx;
		edx = D(eax+___1de5e0h);
		eax = D(eax+4*edx+___1de604h);
		edx = 0x35e*ecx;
		eax = D(4*eax+___243298h);
		eax += ebx;
		esi = eax+ebp;
		eax = D(edx+___1e6edch);
		edx = eax;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		eax <<= 6;
		eax += esi;
		if(B(eax) == 0) goto ___50b31h;
		esi = D(esp);
		edx = D(___243d80h);
		edx += esi;
		edx += ebx;
		L(eax) = B(eax);
		B(edx+edi+0x60) = L(eax);
___50b31h:
		ebx++;
		if((int)ebx < 8) goto ___50ae0h;
		ebp = D(esp+0x4);
		edi = D(esp+0x8);
		ebp += 0x200;
		edi += 0x8;
		D(esp+0x4) = ebp;
		D(esp+0x8) = edi;
		if(edi != 0x40) goto ___50ad6h;
___50b55h:
		eax = 0x35e*ecx;
		edx = 0;
		D(eax+___1e7086h) = edx;
___50b63h:
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		eax <<= 2;
		ebx = D(eax+___1de5e0h);
		edx = D(eax+___1de5dch);
		ebx++;
		edx--;
		D(eax+___1de5e0h) = ebx;
		if((int)edx >= (int)ebx) goto ___50b94h;
		edi = 0;
		D(eax+___1de5e0h) = edi;
___50b94h:
		D(___243c60h) = ecx;
}
