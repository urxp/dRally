#include "drally.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void dREncryption_decodeSavedGame(saved_game_t *);

void ___18808h_cdecl(char * A1, const char * A2){

	FILE * 	fd;
	int 	n;
	saved_game_t * sg;


	sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
	memset(sg, 0, sizeof(saved_game_t));
	fd = strupr_fopen(A2, "rb");
	fread(sg, sizeof(saved_game_t), 1, fd);
	fclose(fd);
	
	dREncryption_decodeSavedGame(sg);
	for (int i = 0; i < 20; i++) {
		racer_t* rc = &sg->racers[i];
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

	n = -1;
	while(++n < 0xf) A1[n] = sg->name[n];

	dRMemory_free((__POINTER__)sg);
}
