#include "drally.h"

	extern __BYTE__ ___185ba9h[];

int ___252e0h_cdecl(const char * A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	int 	n, rslt;


	esi = 0;

	n = -1;
	while(A1[++n]) esi += B(___185ba9h+A1[n]-0x1e);
		
	edx = (int)esi>>0x1f;
	eax = esi-edx;
	eax = (int)eax>>1;

	return eax;
}
