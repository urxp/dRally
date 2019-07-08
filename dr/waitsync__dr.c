#include "x86.h"

	extern  dword ___60436h;

// 606d9h
dword ___606d9h(void){

    return ___60436h;
}

// 58c60h
void waitSync__dr(void){
    
    dword   v;
    
    v = ___606d9h();
    while(v == ___606d9h());
}
