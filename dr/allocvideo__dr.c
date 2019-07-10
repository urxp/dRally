#include "x86.h"

    extern void * VGABufferPtr_0;
    extern void * ___VGABufferPtr_0;

    void * allocMemSafe(dword size);


// ~(1170ah-12200h)
void allocVGABuffer(void){

    ___VGABufferPtr_0 = VGABufferPtr_0 = allocMemSafe(0x4b000);
}
