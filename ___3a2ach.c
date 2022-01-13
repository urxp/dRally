#include "drally.h"

	extern FILE * ___1a0ef4h;

__DWORD__ ___3a2ach_cdecl(__DWORD__ BYTE1, __DWORD__ BYTE2){

	if(BYTE2 != 0){

		if((BYTE2 != 1)||(BYTE1&0xc0)){

			if(fputc(BYTE2|0xc0, ___1a0ef4h) != EOF){

				if(fputc(BYTE1, ___1a0ef4h) != EOF) return 2;
			}
		}
		else {

			if(fputc(BYTE1, ___1a0ef4h) != EOF) return 1;
		}
	}

	return 0;
}
