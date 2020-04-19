#include "drally.h"

unsigned int DPMI_ALLOCATE_DOS_MEMORY_BLOCK(dword size, dword * sel);

void * ___61b00h(dword A0, dword * A1){

    return (void *)(DPMI_ALLOCATE_DOS_MEMORY_BLOCK(A0, A1) << 4);
}
