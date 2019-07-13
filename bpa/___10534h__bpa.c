#include "x86.h"

	static dword idiv_rem(dword, dword, dword);
    #pragma aux idiv_rem =		\
        "idiv   ebx"           	\
        parm [eax][edx][ebx]  	\
        value [edx]

// 10534h, NOT USED
void ___10534h(int A0, byte * A1){

	int 	n;

	n = -1;
	while(++n < A0){

		A1[n] = ((0x101*A1[n] >> (8 - (n % 7))) & 0x93) - 0x11*n;
	}
}
