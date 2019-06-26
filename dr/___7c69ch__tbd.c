#include "x86.h"

    extern byte ___24f760h[];

    void freedosmem__dpmi(void *);

// 7c69ch
void ___7c69ch(dword sound_dma){

	freedosmem__dpmi(___24f760h + 13*sound_dma);
}
