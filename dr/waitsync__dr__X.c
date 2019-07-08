#include "x86.h"

	extern  dword ___60436h;

// 606d9h
dword ___606d9h(void){

    dword   eax;

//		mov     eax, [__CEXT_V(___60436h)]
    eax = ___60436h;
//		retn
    return eax;
}

// 58c60h
void waitSync__dr(void){

    dword   eax, edx;

//		push    8
//		call    __CHK
//		push    edx
//		call    __CEXT_F(___606d9h)
    eax = ___606d9h();
//		mov     edx, eax
    edx = eax;
___58c72h:
//		call    __CEXT_F(___606d9h)
    eax = ___606d9h();
//		cmp     edx, eax
//		je      ___58c72h
    if(edx == eax) goto ___58c72h;
//		pop     edx
//		retn    
}
