#include <stdio.h>

extern unsigned int ___19bd54h;
extern unsigned int ___19bd60h;
extern char * ___19bd20h[];

extern char ___1800f8h[];
extern unsigned char B8000[]; 
extern char ___1800f0h[];
extern char ___180004h[];

extern void (*___2432c8h)(void);

void ___100dch(void);
void dRally_System_init(void);
void dRally_System_clean(void);
void ___60466h(unsigned int, unsigned int);
void ___3e720h(void);
void ___623d4h(void);
void bpa_read_cdecl(char *, void *, char *);
void VGA3_PRESENTSCREEN(unsigned int);

#define MAX_CL_ARGS 	10

static void ___10060h(void){

    printf("%s", ___180004h);
}

int dRally_main(int argc, char * argv[]){
/*
	// [TODO]
	if(argc > MAX_CL_ARGS) printf("[dRally.Main] Max %d command line arguments handled\n", MAX_CL_ARGS);

	___19bd54h = 0;
	while((___19bd54h < argc)&&(___19bd54h < MAX_CL_ARGS)){

		___19bd20h[___19bd54h] = argv[___19bd54h];
		___19bd54h++;
	}
*/
	___10060h();
	dRally_System_init();
	___60466h(0x46, 1);
	___2432c8h = ___100dch;
	___3e720h();

	if(___19bd60h) ___623d4h();

	dRally_System_clean();
	bpa_read_cdecl(___1800f8h, B8000, ___1800f0h);
	VGA3_PRESENTSCREEN(0x17);

	return 0;
}
