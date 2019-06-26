#include "x86.h"

	extern byte ___24e9dah;
	extern word ___19a804h[];

// 71b70h
dword ___71b70h(dword A1){

	dword 	result;


	if(___24e9dah){
	
        if(A1 > 0x1e00) A1 = 0x1e00;

        result = ___19a804h[(0x1e00 - A1) % 0x300];
        result *= 0x5b00;
        result /= 0x105;
        result >>= (0xa - ((0x1e00 - A1) / 0x300));
    }
    else {

        result = A1 ? (((A1 >> 1) + 0x02820000) / A1) : 0;
    }

    return result;
}
