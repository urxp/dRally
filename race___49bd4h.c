#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct tr_startup_s {
	__DWORD__ 		x;
	__DWORD__ 		y;
	__DWORD__ 		rot;
} tr_startup_t;

typedef struct tr_powerup_s {
	__DWORD__ 		x;
	__DWORD__ 		y;
} tr_powerup_t;

typedef struct tr_spectator_s {
	__DWORD__ 		x;
	__DWORD__ 		y;
	__DWORD__ 		type;
	__DWORD__ 		rot;
} tr_spectator_t;

typedef struct tr_inf_s {
	__DWORD__			w;
	__DWORD__			h;
	__DWORD__			unk0;
	tr_startup_t	startups[4];
	tr_powerup_t	powerups[16];
	tr_spectator_t	spectators[20];
} tr_inf_t;

typedef struct spectator_s {
	__DWORD__		x;
	__DWORD__		y;
	__DWORD__		type;
	__DWORD__		z_mov;
	__DWORD__		rot;
	__DWORD__		frame;
	__DWORD__		dead;
	__DWORD__		timestamp;
} spectator_t;

	extern char ___19bd64h[16];
	extern char TRX_BPA[14];
	extern __BYTE__ ___243d90h[];
	extern __BYTE__ ___1a54d0h[];
	extern int TRX_WIDTH;
	extern int TRX_HEIGHT;
	extern __BYTE__ ___243cech[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___1f2488h[];
#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern int TRX_WIDTH_QTR;
	extern int TRX_HEIGHT_QTR;

void old_bpa_read(const char *, __POINTER__, const char *);

void race___49bd4h(void){

	int 			n;
	tr_inf_t * 		TrxInf;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;
	TrxInf = (tr_inf_t *)___1a54d0h;
	old_bpa_read(strcat(strcpy(TRX_BPA, ___19bd64h), ".BPA"), (__POINTER__)TrxInf, strcat(strcpy(___243d90h, ___19bd64h), "-INF.BIN"));

	TrxInf->w = SDL_SwapLE32(TrxInf->w);
	TrxInf->h = SDL_SwapLE32(TrxInf->h);
	TrxInf->unk0 = SDL_SwapLE32(TrxInf->unk0);
	for (int i = 0; i < 4; i++) {
		tr_startup_t* startup = &TrxInf->startups[i];
		startup->x = SDL_SwapLE32(startup->x);
		startup->y = SDL_SwapLE32(startup->y);
		startup->rot = SDL_SwapLE32(startup->rot);
	}
	for (int i = 0; i < 16; i++) {
		tr_powerup_t* powerup = &TrxInf->powerups[i];
		powerup->x = SDL_SwapLE32(powerup->x);
		powerup->y = SDL_SwapLE32(powerup->y);
	}
	for (int i = 0; i < 20; i++) {
		tr_spectator_t* spectator = &TrxInf->spectators[i];
		spectator->x = SDL_SwapLE32(spectator->x);
		spectator->y = SDL_SwapLE32(spectator->y);
		spectator->type = SDL_SwapLE32(spectator->type);
		spectator->rot = SDL_SwapLE32(spectator->rot);
	}

	TRX_WIDTH = TrxInf->w;
	TRX_HEIGHT = TrxInf->h;
	D(___243cech) = TrxInf->unk0;

	n = -1;
	while(++n < 4){

		s_35e[n].ImgIndex = TrxInf->startups[n].rot;
		s_35e[n].XLocation = (float)TrxInf->startups[n].x;
		s_35e[n].YLocation = (float)TrxInf->startups[n].y;
	}

	n = -1;
	while(++n < 0x10){

		D(___1f2488h+0x120*n) = TrxInf->powerups[n].x;
		D(___1f2488h+0x120*n+4) = TrxInf->powerups[n].y;
	}

	n = -1;
	while(++n < 0x14){

		SPECTATORS[n].x 		= TrxInf->spectators[n].x;
		SPECTATORS[n].y 		= TrxInf->spectators[n].y;
		SPECTATORS[n].type 		= TrxInf->spectators[n].type;
		SPECTATORS[n].z_mov 	= 0;
		SPECTATORS[n].rot 		= TrxInf->spectators[n].rot;
		SPECTATORS[n].frame 	= 0;
		SPECTATORS[n].dead 		= 0;
		SPECTATORS[n].timestamp	= 0;
	}

	TRX_WIDTH_QTR = TRX_WIDTH>>2;
	TRX_HEIGHT_QTR = TRX_HEIGHT>>2;
}
