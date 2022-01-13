#include "drally.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void CONFIG_WRITE(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void dRally_Sound_release(void);
void __VGA3_SETMODE(void);
void dRally_System_clean(void);
void ___623d4h(void);


void ___3aaf8h(void){

	CONFIG_WRITE();
	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	dRally_Sound_release();

#if defined(DR_MULTIPLAYER)
    if(___19bd60h != 0) ___623d4h();
#endif // DR_MULTIPLAYER

    dRally_System_clean();
	__VGA3_SETMODE();
    printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed.\n");
	exit(0x70); 
}
