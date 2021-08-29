#include "drally.h"

    extern __BYTE__ ___1a202fh[0x13];
	extern __DWORD__ ___199fa0h;
	extern __BYTE__ ___1a2148h;
	extern __DWORD__ ___1a1f3ch_counter;
	extern void_cb ___2432c8h;
	extern __BYTE__ CONFIG_SOUND_TYPE;
	extern __BYTE__ CONFIG_SOUND_IRQ;
	extern __BYTE__ CONFIG_SOUND_DMA;
	extern __DWORD__ CONFIG_SOUND_ADDR;

#if defined(DR_MULTIPLAYER)
extern byte ___1a116ch[];
extern byte ___1a01e0h[];
extern byte ___1a1ef8h[];
extern byte ___1a1f4eh[];
extern byte ___1866b8h[];
extern dword ___19bd60h;
extern dword CONNECTION_TYPE;
void ___23488h_cdecl(dword, dword, dword);
void ___61278h(void);
void ___623d4h(void);
#endif // DR_MULTIPLAYER

void ___3aaf8h(void);
void ___24ec0h(void);
void ___2fc50h(void);
void ___12200h(void);
void ___12a54h(void);
void ___3d79ch(void);
void ___3e3cch(void);
void ___3e164h(void);
void ___3e1c4h(void);
void ___2415ch(void);
void CONFIG_READ(void);
void CONFIG_WRITE(void);
void ___3d908h(void);
void dRally_Sound_release(void);
void menu_main();
void dRally_Sound_init(byte);

void ___3e720h(void){

#if defined(DR_MULTIPLAYER)
    dword   ebx;
#endif // DR_MULTIPLAYER
	
	___3e3cch();		// read CDROM.INI
	___3e164h();		// "check" available memory
	___3e1c4h();		// check assets
	___199fa0h = 0;
	memset(___1a202fh, 0, 0x13);
	___1a2148h = 0;
	___2415ch();
	CONFIG_READ();
    dRally_Sound_init(CONFIG_SOUND_TYPE||!(CONFIG_SOUND_IRQ||CONFIG_SOUND_DMA||CONFIG_SOUND_ADDR)); 
	___2432c8h = &___3aaf8h;
	___1a1f3ch_counter++;
	CONFIG_WRITE();
	printf("\nLoading music & effects, please wait...\n");
	___3d908h();	// play intro

	menu_main();

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		ebx = 6;
		strcat(strcat(strcpy(___1a116ch+0xc4e, "-- "), ___1a01e0h+0x6c*D(___1a1ef8h)), " has left from Death Rally.");
		B(___1a1f4eh+0x15) = 0;

		if(strcmp(___1866b8h+0x3b6, "Abort Current Game") == 0){

			___23488h_cdecl(___1a116ch+0xc4e, 0x64, 0x14);
			strcat(strcat(strcpy(___1a116ch+0xc4e, "-- "), ___1a01e0h+0x6c*D(___1a1ef8h)), " aborted current netgame.");
			B(___1a1f4eh+0x15) = 0;

			if(CONNECTION_TYPE != 2) ebx = 9;
		}

		___23488h_cdecl(___1a116ch+0xc4e, 0x64, ebx);
		___61278h();
		___623d4h();
		___19bd60h = 0;
		CONNECTION_TYPE = 0;
	}
#endif

	___3d79ch();
	CONFIG_WRITE();
	___12200h();
	___12a54h();
	___24ec0h();
	___2fc50h();
	
    dRally_Sound_release(); 
}
