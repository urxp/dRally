#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___243874h[];
	extern byte ___243898h[];
	extern byte ___243894h[];
	extern byte ___243878h[];
	extern byte ___243330h[];

void ___60a84h(void);
void ___60a28h(dword A1);
dword ___60b48h(dword A1, dword A2);
dword ___611c0h(dword A1, dword A2);
void ___61278h(void);

void ___44130h_cdecl(dword  A1){

    dword   eax, ebx, ecx, edx, edi, esi, ebp;

    eax = A1;
    ebx = eax;
    ___60a84h();
    
    while(1){

		eax = 2;
	    ___60a28h(eax);
		edx = D(___243cf4h);
		eax = ebx;
        eax = ___60b48h(eax, edx);
        
        if(L(eax) == 0xff) break;
    }

    edx = 0;
    eax = 0;
    eax = ___611c0h(eax, edx);
    edx = 0;
    ___61278h();
    D(___243874h) = edx;
    D(___243898h) = edx;
    D(___243894h) = edx;
    D(___243878h) = edx;
    eax = D(___243894h);
    D(___243330h) = eax;
}
