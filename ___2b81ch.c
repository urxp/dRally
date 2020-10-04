#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___1a01fch[];
	extern byte ___18e974h[];

dword ___2b81ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(___185a14h_UseWeapons);
		eax <<= 2;
		if(edx == 0) goto ___2b872h;
		edx = D(eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		eax -= edx;
		edx = eax;
		edx <<= 5;
		eax = D(edx+___18e974h);
		edx = eax;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		return eax;
___2b872h:
		edx = D(eax+___1a01fch);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		eax -= edx;
		eax <<= 5;
		eax = D(eax+___18e974h);
		return eax;
}
