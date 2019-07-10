#include "x86.h"

    extern byte VGABufferPtr_0[];
    extern byte ___VGABufferPtr_0[];

    void * allocMemSafe(dword size);


// ~(1170ah-12200h)
void allocVGABuffer(void){

    dword   eax;

//		push    4
//		call    __CHK
//		mov     eax, 4b000h
    eax = 0x4b000;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(VGABufferPtr_0)], eax
    D(VGABufferPtr_0) = eax;
//		mov     [__CEXT_V(___VGABufferPtr_0)], eax
    D(___VGABufferPtr_0) = eax;
//		retn   
    return;
}
