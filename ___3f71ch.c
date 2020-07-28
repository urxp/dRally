#include "drally.h"

	extern byte ___19bd60h[];

void * dRally_Memory_alloc(dword, dword);
void dRally_System_clean(void);
void __VGA3_SETMODE(void);
void ___623d4h(void);

void * ___3f71ch__allocateMemory(dword size){

    void *  p;

    if(!(p = dRally_Memory_alloc(size, 0))){

        dRally_System_clean();
        __VGA3_SETMODE();
        printf("DEATH RALLY Error: Cannot allocate memory!\n");
        printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

        if(D(___19bd60h)) ___623d4h();

        exit(0x70);
    }

    return p;
}
