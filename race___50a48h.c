#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___196dc8h[];
	extern byte ___196dcch[];
	extern byte ___196d98h[];
	extern byte ___1de580h[];
	extern void * ___243298h[6];
	extern void * ___243d80h;

void race___50a48h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];
	void * 	esip;


		ecx = D(___243c60h);
		eax = 0x35e*ecx;
		if(D(eax+___1e6ed0h+0x1b6) == 0) goto ___50b63h;
		ebx = D(___196dc8h);
		edx = D(eax+___1e6ed0h+0x1d2);
		esi = D(___196dcch);
		edx -= ebx;
		ebx = D(___196d98h);
		eax = D(eax+___1e6ed0h+0x1d6);
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

		while(1){

			eax = 0x94*ecx;
			edx = D(eax+___1de580h+0x60);
			eax = D(eax+4*edx+___1de580h+0x84);
			edx = 0x35e*ecx;
			esip = ___243298h[eax]+ebx+ebp;
			eax = D(edx+___1e6ed0h+0xc);
			edx = eax;
			edx = (int)edx>>0x1f;
			eax -= edx;
			eax = (int)eax>>1;

			if(B(esip+0x40*eax) != 0){

				B(___243d80h+D(esp)+ebx+edi+0x60) = B(esip+0x40*eax);
			}

			ebx++;
			if((int)ebx >= 8) break;
		}

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
		D(eax+___1e6ed0h+0x1b6) = edx;
___50b63h:
		eax = 8*ecx;
		eax += ecx;
		eax <<= 2;
		eax += ecx;
		eax <<= 2;
		ebx = D(eax+___1de580h+0x60);
		edx = D(eax+___1de580h+0x5c);
		ebx++;
		edx--;
		D(eax+___1de580h+0x60) = ebx;
		if((int)edx >= (int)ebx) goto ___50b94h;
		edi = 0;
		D(eax+___1de580h+0x60) = edi;
___50b94h:
		D(___243c60h) = ecx;
}
