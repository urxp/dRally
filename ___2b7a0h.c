#include "drally.h"

	extern byte ___1866b8h[];
	extern byte ___1807ech[];
	extern byte ___185b58h[];
	extern byte ___180814h[];
	extern byte ___185a48h[];
	extern byte ___185a44h[];
	extern byte ___185a40h[];
	extern byte ___185a3ch[];
	extern byte ___185a5ch[];
	extern byte ___243d44h[];

void ___2415ch(void);

void ___2b7a0h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

		H(eax) = 1;
		ebp = 1;
		edi = ___1866b8h+0x1c2;
		esi = ___1807ech;
		L(edx) = 0;
		B(___185b58h+1) = H(eax);
		B(___185b58h+0xa) = L(edx);
		B(___185b58h+0xb) = L(edx);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);
		B(___185b58h+0xd) = L(edx);
		edi = ___1866b8h;
		edx = 0;
		esi = ___180814h;
		D(___185a48h) = edx;
		D(___185a44h) = edx;
		D(___185a40h) = edx;
		D(___185a3ch) = edx;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);
		___2415ch();
		D(___185a5ch+0x34) = edx;
		D(___243d44h) = ebp;
		return;
}
