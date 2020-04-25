#include <stdio.h>
#include <stdlib.h>

extern unsigned int ___19bd60h;

extern unsigned char * B800; 

extern void (*___2432c8h)(void);

void dRally_System_init(void);
void dRally_System_clean(void);
void ___60466h(unsigned int, unsigned int);
void ___3e720h(void);
void ___623d4h(void);
void bpa_read(char *, void *, char *);
void VGA3_PRESENTSCREEN(unsigned int);
void VGA3_SETMODE(void);

static void ___10060h(void){

	printf("%s", "\nDeath Rally *** Full Version 1.1\nCopyright (c) 1995, 1996 Remedy Entertainment, Ltd.\n");
}

static void ___100dch(void){

	VGA3_SETMODE();
	printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n");
	exit(0x70);
}

int dRally_main(int argc, char * argv[]){

	___10060h();
	dRally_System_init();
	___60466h(0x46, 1);
	___2432c8h = ___100dch;
	___3e720h();

	if(___19bd60h) ___623d4h();

	dRally_System_clean();
	bpa_read("MENU.BPA", B800, "dr.bin");
	VGA3_PRESENTSCREEN(0x17);

	return 0;
}
