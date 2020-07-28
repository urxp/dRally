#include "drally.h"

	extern byte ___1a0ef4h[];

dword ___3a2ach_cdecl(dword BYTE1, dword BYTE2){

	if(BYTE2 != 0){

		if((BYTE2 != 1)||(BYTE1&0xc0)){

			if(fputc(BYTE2|0xc0, D(___1a0ef4h)) != EOF){

				if(fputc(BYTE1, D(___1a0ef4h)) != EOF) return 2;
			}
		}
		else {

			if(fputc(BYTE1, D(___1a0ef4h)) != EOF) return 1;
		}
	}

	return 0;
}
