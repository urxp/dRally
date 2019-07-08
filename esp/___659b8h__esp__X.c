#include "x86.h"

    extern byte ___68d4ch[];


// 659b8h
dword ___659b8h(dword A0){
    
    dword   eax;
    eax = A0;

//		test    al, al
//		setnz   al
    al = al ? 1 : 0;
//		and     eax, 0ffh
    eax &= 0xff;
//		mov     [__CEXT_V(___68d4ch)], al
    B(___68d4ch) = al;
//		retn    
    return eax;
}
