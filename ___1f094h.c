#include "drally.h"

	extern byte ___185ba9h[];

dword ___1f094h_cdecl(dword A1){
	
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

	edx = A1;
	ebx = 0;
	esi = 0;
	ecx = strlen(A1);

	if(ebx < ecx){
		
		while(1){

			ecx = B(___185ba9h+B(edx)-0x1e);
			edx++;
			ebx++;
			esi += ecx;
			ecx = strlen(A1);

			if(ebx >= ecx) break;
		}
	}

	return esi;
}
