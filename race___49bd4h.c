#include "drally.h"
#include "drally_structs_free.h"

#pragma pack(1)
typedef struct tr_startup_s {
	dword 		x;
	dword 		y;
	dword 		rot;
} tr_startup_t;

typedef struct tr_powerup_s {
	dword 		x;
	dword 		y;
} tr_powerup_t;

typedef struct tr_spectator_s {
	dword 		x;
	dword 		y;
	dword 		type;
	dword 		rot;
} tr_spectator_t;

typedef struct tr_inf_s {
	dword			w;
	dword			h;
	dword			unk0;
	tr_startup_t	startups[4];
	tr_powerup_t	powerups[16];
	tr_spectator_t	spectators[20];
} tr_inf_t;

typedef struct spectator_s {
	dword		x;
	dword		y;
	dword		type;
	dword		z_mov;
	dword		rot;
	dword		frame;
	dword		dead;
	dword		timestamp;
} spectator_t;

	extern char ___19bd64h[16];
	extern byte ___243dd0h[];
	extern byte ___243d90h[];
	extern byte ___1a54d0h[];
	extern byte ___243d28h[];
	extern byte ___243d2ch[];
	extern byte ___243cech[];
	extern struct_35e_t ___1e6ed0h[4];
	extern byte ___1f2488h[];
#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern byte ___243d30h[];
	extern byte ___243d04h[];
	extern byte ___243cf8h[];
	extern byte ___243d10h[];

void old_bpa_read(const char *, void *, const char *);

void race___49bd4h(void){

	int 	n;
	tr_inf_t * TrxInf;

	TrxInf = (tr_inf_t *)___1a54d0h;
	old_bpa_read(strcat(strcpy(___243dd0h, ___19bd64h), ".BPA"), TrxInf, strcat(strcpy(___243d90h, ___19bd64h), "-INF.BIN"));

	D(___243d28h) = TrxInf->w;
	D(___243d2ch) = TrxInf->h;
	D(___243cech) = TrxInf->unk0;

	n = -1;
	while(++n < 4){

		___1e6ed0h[n].Rotation = TrxInf->startups[n].rot;
		___1e6ed0h[n].XLocation = (float)TrxInf->startups[n].x;
		___1e6ed0h[n].YLocation = (float)TrxInf->startups[n].y;
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

	D(___243d30h) = (int)D(___243d28h)>>2;
	D(___243d04h) = (int)D(___243d2ch)>>2;
	D(___243cf8h) = D(___243d30h);
	D(___243d10h) = D(___243d04h);
}
