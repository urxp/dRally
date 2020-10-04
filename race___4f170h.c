#include "drally.h"

	extern byte ___2438c4h[];
	extern byte ___243d08h[];
	extern byte ___1e8448h[];
	extern byte ___196dc8h[];
	extern byte ___1de920h[];
	extern byte ___243c6ch[];
	extern byte ___1e8048h[];
	extern byte ___1e7c48h[];
	extern byte ___1ded20h[];
	extern byte ___243c68h[];
	extern byte ___196dcch[];
	extern byte ___243c64h[];
	extern byte ___243c78h[];
	extern byte ___243c70h[];
	extern byte ___196d8ch[];
	extern byte ___243c74h[];
	extern byte ___196d94h[];
	extern byte ___196d98h[];
	extern byte ___240a48h[];

void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7);

// SHADOWS
void race___4f170h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, a1, a2, a3, a4, a5, a6, a7;


		edx ^= edx;
		ebx = D(___2438c4h);
		D(___243d08h) = edx;
		if((int)ebx <= 0) goto ___4f2f9h;
___4f195h:
		eax = D(___243d08h);
		edx = D(eax*4+___1e8448h);
		edi = D(___196dc8h);
		ebx = D(edx*4+___1de920h);
		ebx -= edi;
		D(___243c6ch) = ebx;
		ebx = D(eax*4+___1e8048h);
		ecx = D(ebx*4+___1de920h);
		eax = D(eax*4+___1e7c48h);
		ecx -= edi;
		edx = D(edx*4+___1ded20h);
		D(___243c68h) = ecx;
		ecx = D(eax*4+___1de920h);
		eax = D(eax*4+___1ded20h);
		ecx -= edi;
		edi = D(___196dcch);
		D(___243c64h) = ecx;
		edx -= edi;
		eax -= edi;
		D(___243c78h) = edx;
		D(___243c70h) = eax;
		eax = D(___243c6ch);
		edx = D(ebx*4+___1ded20h);
		ebx = D(___196d8ch);
		edx -= edi;
		eax -= ebx;
		D(___243c74h) = edx;
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		ecx = D(___196d8ch);
		if((int)eax < (int)ecx) goto ___4f25eh;
		eax = D(___243c68h);
		eax -= ecx;
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		edi = D(___196d8ch);
		if((int)eax < (int)edi) goto ___4f25eh;
		eax = D(___243c64h);
		eax -= edi;
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		if((int)eax >= (int)D(___196d8ch)) goto ___4f2deh;
___4f25eh:
		eax = D(___243c78h);
		eax -= D(___196d94h);
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		ecx = D(___196d94h);
		if((int)eax < (int)ecx) goto ___4f2a2h;
		eax = D(___243c74h);
		eax -= ecx;
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		edi = D(___196d94h);
		if((int)eax < (int)edi) goto ___4f2a2h;
		eax = D(___243c70h);
		eax -= edi;
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		if((int)eax >= (int)D(___196d94h)) goto ___4f2deh;
___4f2a2h:
		eax = D(___243c6ch);
		ebx = D(___196d98h);
		eax += ebx;
		a7 = eax;
		ecx = D(___243c78h);
		eax = D(___243c68h);
		a6 = ecx;
		eax += ebx;
		a5 = eax;
		edi = D(___243c74h);
		eax = D(___243c64h);
		a4 = edi;
		eax += ebx;
		a3 = eax;
		eax = D(___243c70h);
		a2 = eax;
		a1 = ___240a48h;
		___5e769h(a1, a2, a3, a4, a5, a6, a7);
___4f2deh:
		ecx = D(___243d08h);
		ecx++;
		esi = D(___2438c4h);
		D(___243d08h) = ecx;
		if((int)ecx < (int)esi) goto ___4f195h;
___4f2f9h:
		return;
}
