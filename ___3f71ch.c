#include "drally.h"
#include "drmemory.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void dRally_System_clean(void);
void __VGA3_SETMODE(void);
#if defined(DR_MULTIPLAYER)
void ___623d4h(void);
#endif // DR_MULTIPLAYER

__POINTER__ ___3f71ch__allocateMemory(__DWORD__ size){

    __POINTER__  p;
 
    if(!(p = dRMemory_alloc(size))){

        dRally_System_clean();
        __VGA3_SETMODE();
        printf("DEATH RALLY Error: Cannot allocate memory!\n");
        printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

#if defined(DR_MULTIPLAYER)
        if(___19bd60h != 0) ___623d4h();
#endif // DR_MULTIPLAYER

        exit(0x70);
    }

    return p;
}
