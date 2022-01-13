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

	n = -1;
	while(++n < 0xf) A1[n] = sg->name[n];

	dRMemory_free((__POINTER__)sg);
}
