#include "drally.h"

	extern byte ___19bd60h[];

void CONFIG_WRITE(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void dRally_Sound____64a28h(void);
void VGA3_SETMODE(void);
void dRally_System_clean(void);
void ___5a101h(void);
void ___623d4h(void);


void ___3aaf8h(void){

	CONFIG_WRITE();
	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	dRally_Sound____64a28h();
    dRally_System_clean();
	___5a101h();
    if(D(___19bd60h)) ___623d4h();
	VGA3_SETMODE();
    printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed.\n");
	exit(0x70); 
}
