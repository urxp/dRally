#include "drally.h"
#include "drmemory.h"
#include "sfx.h"

	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___1866b8h[];
	extern byte ___185b58h[];
	extern byte ___1866b8h[];
	extern byte ___185a48h[];
	extern byte ___185a44h[];
	extern byte ___185a40h[];
	extern byte ___185a3ch[];
	extern byte ___243d44h[];
	extern byte ___196ab4h[];
	extern void * ___1a0f9ch;
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___1a01e0h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern byte ___1a0a50h[];


dword ___146c4h_cdecl(dword);
char * itoa_watcom106(int value, char * buffer, int radix);
dword GET_FILE_SIZE(const char *);
void ___18808h_cdecl(char * A1, const char * A2);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___2a608h_cdecl(const char *);
void * ___3f71ch__allocateMemory(dword);

static byte ROL_BYTE(byte b, int n){

    return (b<<n)|(b>>(8-n));
}

// LOAD GAME
dword ___18924h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];
	byte 	key;
	int 	n;
	FILE *	fd;


	n = -1;
	while(++n < 8){

		B(n+___185b58h+0x2d) = 1;
		strcpy(0x32*n+___1866b8h+0x8ca, "Empty Slot");
		strcpy(esp, "DR.SG");
		itoa_watcom106(n, esp+0x20, 0xa);
		strcat(esp, esp+0x20);
		B(esp+n+0x10) = 0;

		if(GET_FILE_SIZE(esp) > 0){

			B(esp+n+0x10) = 1;
			___18808h_cdecl(___1866b8h+0x8ca+0x32*n, esp);
		}
	}

	strcpy(___1866b8h+0xa28, "Quicksave Slot");

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101h_DefaultScreenBufferB+0x10680, 0x28f00);
		___13710h(0, 0);
		___13710h(1, 0);
		___13710h(5, 1);
		___12cb8h__VESA101_PRESENTSCREEN();
		n = ___146c4h_cdecl(5);

		if((B(esp+n+0x10) == 0)&&(n != -1)) dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

		if((n >= 0)&&(n <= 7)&&(B(esp+n+0x10) == 1)) break;
		if(n == -1) break;
	}

	if(n < 0){

		eax = 0;
	}
	else {

		B(___185b58h+1) = 0;
		B(___185b58h+0xa) = 1;
		B(___185b58h+0xb) = 1; 
		strcpy(___1866b8h+0x1c2, "Enter The Shop");
		B(___185b58h+0xd) = 1;
		D(___185a48h) = 0;
		D(___185a44h) = 0;
		D(___185a40h) = 0;
		D(___185a3ch) = 0;
		D(___243d44h) = 0;
		D(___196ab4h) = 0;
		strcpy(___1866b8h, "Continue Racing"); 
		___1a0f9ch = ___3f71ch__allocateMemory(0x883);
		memset(___1a0f9ch, 0, 0x883);
		strcpy(esp, "DR.SG");
		itoa_watcom106(n, esp+0x20, 0xa);
		fd = strupr_fopen(strcat(esp, esp+0x20), "rb");
		fread(___1a0f9ch, 0x883, 1, fd);
		fclose(fd);

		key = B(___1a0f9ch);

		n = 0;
		while(++n < 0x883) B(___1a0f9ch+n) = ROL_BYTE(B(___1a0f9ch+n), n%6)+key-0x11*n;

		D(___1a1ef8h) = B(___1a0f9ch+1);
		D(___185a14h_UseWeapons) = B(___1a0f9ch+2);
		___196a94h_difficulty = B(___1a0f9ch+3);
		memcpy(___1a01e0h, ___1a0f9ch+0x13, 0x870);
		dRMemory_free(___1a0f9ch);
		D(___1a0a50h) = !!(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x5c) != 8);
		D(___1a0a50h+4) = !!(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x60) != 1);
		D(___1a0a50h+8) = !!(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x64) != 1);
		D(___1a0a50h+0xc) = !!(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x68) != 1);
		___2a608h_cdecl("Game Loaded.");
		eax = 1;
	}

	return eax;
}
