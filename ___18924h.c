#include "drally.h"
#include "drmemory.h"
#include "drally_structs_fixed.h"
#include "sfx.h"

	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___1866b8h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a48h[];
	extern __BYTE__ ___185a44h[];
	extern __BYTE__ ___185a40h[];
	extern __BYTE__ ___185a3ch[];
	extern __DWORD__ ___243d44h;
	extern __BYTE__ ___196ab4h[];
	extern __POINTER__ ___1a0f9ch;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___1a0a50h[];


__DWORD__ ___146c4h_cdecl(__DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
__DWORD__ GET_FILE_SIZE(const char *);
void ___18808h_cdecl(char * A1, const char * A2);
void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___2a608h_cdecl(const char *);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

static __BYTE__ ROL_BYTE(__BYTE__ b, int n){

    return (b<<n)|(b>>(8-n));
}

// LOAD GAME
__DWORD__ ___18924h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x28];
	__BYTE__ 	key;
	int 		n;
	FILE *		fd;
	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;

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

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101_BACKGROUND+0x10680, 0x28f00);
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
		___243d44h = 0;
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
		memcpy(s_6c, ___1a0f9ch+0x13, 20*sizeof(racer_t));
		for (int i = 0; i < 20; i++) {
			racer_t* rc = &s_6c[i];
			rc->damage = SDL_SwapLE32(rc->damage);
			rc->engine = SDL_SwapLE32(rc->engine);
			rc->tires = SDL_SwapLE32(rc->tires);
			rc->armor = SDL_SwapLE32(rc->armor);
			rc->car = SDL_SwapLE32(rc->car);
			rc->color = SDL_SwapLE32(rc->color);
			rc->money = SDL_SwapLE32(rc->money);
			rc->loanshark_type = SDL_SwapLE32(rc->loanshark_type);
			rc->loanshark_counter = SDL_SwapLE32(rc->loanshark_counter);
			rc->refund = SDL_SwapLE32(rc->refund);
			rc->face = SDL_SwapLE32(rc->face);
			rc->points = SDL_SwapLE32(rc->points);
			rc->rank = SDL_SwapLE32(rc->rank);
			rc->wins = SDL_SwapLE32(rc->wins);
			rc->races = SDL_SwapLE32(rc->races);
			rc->bonus = SDL_SwapLE32(rc->bonus);
			rc->income = SDL_SwapLE32(rc->income);
			rc->mines = SDL_SwapLE32(rc->mines);
			rc->spikes = SDL_SwapLE32(rc->spikes);
			rc->rocket_fuel = SDL_SwapLE32(rc->rocket_fuel);
			rc->sabotage = SDL_SwapLE32(rc->sabotage);
		}
		dRMemory_free(___1a0f9ch);
		D(___1a0a50h) = !!(s_6c[D(___1a1ef8h)].mines != 8);
		D(___1a0a50h+4) = !!(s_6c[D(___1a1ef8h)].spikes != 1);
		D(___1a0a50h+8) = !!(s_6c[D(___1a1ef8h)].rocket_fuel != 1);
		D(___1a0a50h+0xc) = !!(s_6c[D(___1a1ef8h)].sabotage != 1);
		___2a608h_cdecl("Game Loaded.");
		eax = 1;
	}

	return eax;
}
