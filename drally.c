#include "drally.h"

extern dword ___19bd60h;
extern byte * B800; 
extern void_cb ___2432c8h;

void dRally_Keyboard_init(void);
void ___60466h(dword, dword);
void ___3e720h(void);
void ___623d4h(void);
void bpa_read(char *, void *, char *);
void VGA3_PRESENTSCREEN(dword);
void __VGA3_SETMODE(void);
void dRally_System_init(void);
void dRally_Display_init(void);
int dRally_main(int, char *[]);
void dRally_Sound_quit(void);
void dRally_Display_clean(void);
void dRally_System_clean(void);

static void ___10060h(void){

	printf("\nDeath Rally *** Full Version 1.1\n");
}

static void ___100dch(void){

	__VGA3_SETMODE();
	printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n");
	exit(0x70);
}

int main(int argc, char * argv[]){

	dRally_System_init();
	dRally_Display_init();
	___10060h();
	___60466h(0x46, 1);
	___2432c8h = ___100dch;
	dRally_Keyboard_init();
	___3e720h();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h) ___623d4h();
#endif
/*
	bpa_read("MENU.BPA", B800, "dr.bin");
	VGA3_PRESENTSCREEN(0x17);
*/
	dRally_Sound_quit();
	dRally_Display_clean();
	dRally_System_clean();

	return 0;
}
