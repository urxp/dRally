#include "drally.h"

	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___243328h[];
	extern __BYTE__ ___243324h[];
	extern __POINTER__ BACKBUFFER;
	extern __POINTER__ GEN_FLA_BPK;
	extern __BYTE__ ___24332ch[];

// FINISH LINE FLAG
void race___4207ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	int 	i, j;
	

	if((int)(D(___243328h)-D(___243334h)) <= 0){

		D(___243328h) = 0;
	}
	else {
	
		D(___243328h) -= D(___243334h);
	}

	edx = (int)(D(___243324h)+0x8000)>>0x10;

	__BYTE__* s = GEN_FLA_BPK + 0x12c0 * edx;
	__BYTE__* d = BACKBUFFER + 0x150 + D(___243328h);
	j = 0x3c;
	do {
		memcpy(d, s, 0x50);
		s += 0x50;
		d += 0x200;
	} while (--j);

	D(___243324h) += D(___24332ch);
	eax = (int)(D(___243324h)+0x8000)>>0x10;

	if((int)eax > 0x3f) D(___243324h) = 0;
}
