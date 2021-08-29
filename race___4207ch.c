#include "drally.h"

	extern byte ___243334h[];
	extern byte ___243328h[];
	extern byte ___243324h[];
	extern void * ___243d80h;
	extern void * ___243d50h;
	extern byte ___24332ch[];

// FINISH LINE FLAG
void race___4207ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	int 	i, j;
	

	if((int)(D(___243328h)-D(___243334h)) <= 0){

		D(___243328h) = 0;
	}
	else {
	
		D(___243328h) -= D(___243334h);
	}

	edx = (int)(D(___243324h)+0x8000)>>0x10;

	j = -1;
	while(++j < 0x3c){

		i = -1;
		while(++i < 0x50){

			B(___243d80h+0x150+D(___243328h)+0x200*j+i) = B(___243d50h+0x12c0*edx+0x50*j+i);
		}
	}

	D(___243324h) += D(___24332ch);
	eax = (int)(D(___243324h)+0x8000)>>0x10;

	if((int)eax > 0x3f) D(___243324h) = 0;
}
