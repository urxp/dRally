#include "drally.h"

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
	extern byte ___1e6ed0h[];
	extern byte ___1f2488h[];
#define SPECTATORS ___1df720h
	extern spectator_t ___1df720h[];
	extern byte ___243d30h[];
	extern byte ___243d04h[];
	extern byte ___243cf8h[];
	extern byte ___243d10h[];

void bpa_read(const char *, void *, const char *);

void race___49bd4h(void){

	dword 	n;
	tr_inf_t * TrxInf;

	TrxInf = (tr_inf_t *)___1a54d0h;
	strcpy(___243dd0h, ___19bd64h);
	strcat(___243dd0h, ".BPA");
	strcpy(___243d90h, ___19bd64h);
	strcat(___243d90h, "-INF.BIN");
	bpa_read(___243dd0h, TrxInf, ___243d90h);

	D(___243d28h) = TrxInf->w;
	D(___243d2ch) = TrxInf->h;
	D(___243cech) = TrxInf->unk0;

	F32(___1e6ed0h+0xb4) = (float)TrxInf->startups[0].x;
	F32(___1e6ed0h+0xb8) = (float)TrxInf->startups[0].y;
	D(___1e6ed0h+0xc) = TrxInf->startups[0].rot;

	F32(___1e6ed0h+0xb4+0x35e) = (float)TrxInf->startups[1].x;
	F32(___1e6ed0h+0xb8+0x35e) = (float)TrxInf->startups[1].y;
	D(___1e6ed0h+0xc+0x35e) = TrxInf->startups[1].rot;

	F32(___1e6ed0h+0xb4+2*0x35e) = (float)TrxInf->startups[2].x;
	F32(___1e6ed0h+0xb8+2*0x35e) = (float)TrxInf->startups[2].y;
	D(___1e6ed0h+0xc+2*0x35e) = TrxInf->startups[2].rot;

	F32(___1e6ed0h+0xb4+3*0x35e) = (float)TrxInf->startups[3].x;
	F32(___1e6ed0h+0xb8+3*0x35e) = (float)TrxInf->startups[3].y;
	D(___1e6ed0h+0xc+3*0x35e) = TrxInf->startups[3].rot;

	n = -1;
	while(++n < 0x10){

		D(0x120*n+___1f2488h) = TrxInf->powerups[n].x;
		D(0x120*n+___1f2488h+4) = TrxInf->powerups[n].y;
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
