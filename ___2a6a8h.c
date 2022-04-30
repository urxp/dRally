#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ kmap[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___243d44h;
	extern __BYTE__ ___196ab4h[];
	extern __BYTE__ ___1a0a50h[];

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void dREncryption_encodeSavedGame(saved_game_t *);
void dREncryption_decodeSavedGame(saved_game_t *);

// QUICK SAVE/LOAD
__DWORD__ ___2a6a8h(void){

	FILE * 			fd;
	int 			n, rslt;
	saved_game_t * 	sg;
	racer_t * 		s_6c;

	rslt = 0;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER

		s_6c = (racer_t *)___1a01e0h;

		if(kmap[DR_SCAN_F2]){	// QUICK SAVE

			sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
			memset(sg, 0, sizeof(saved_game_t));
			sg->me = B(___1a1ef8h);
			sg->weapons = B(___185a14h_UseWeapons);
			sg->difficulty = ___196a94h_difficulty;
			strcpy(sg->name, "Quicksave Slot");
			memcpy(sg->racers, s_6c, 20*sizeof(racer_t));
			dREncryption_encodeSavedGame(sg);
			fd = strupr_fopen("DR.SG7", "wb");
			fwrite(sg, sizeof(saved_game_t), 1, fd);
			fclose(fd);
			dRMemory_free((__POINTER__)sg);
			rslt = 1;
		}

		if(kmap[DR_SCAN_F3]){	// QUICK LOAD

			___243d44h = 0;
			D(___196ab4h) = 0;
		
			if((fd = strupr_fopen("DR.SG7", "rb"))){
			
				sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
				memset(sg, 0, sizeof(saved_game_t));
				fread(sg, sizeof(saved_game_t), 1, fd);
				fclose(fd);
				dREncryption_decodeSavedGame(sg);
				D(___1a1ef8h) = sg->me;
				D(___185a14h_UseWeapons) = sg->weapons;
				___196a94h_difficulty =  sg->difficulty;
				memcpy(s_6c, sg->racers, 20*sizeof(racer_t));
				dRMemory_free((__POINTER__)sg);
				D(___1a0a50h) = !(s_6c[D(___1a1ef8h)].mines == 8);
				D(___1a0a50h+4) = !(s_6c[D(___1a1ef8h)].spikes == 1);
				D(___1a0a50h+8) = !(s_6c[D(___1a1ef8h)].rocket_fuel == 1);
				D(___1a0a50h+0xc) = !(s_6c[D(___1a1ef8h)].sabotage == 1);
				rslt = 2;
			}
			else {

				rslt = 3;
			}
		}
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	return rslt;
}
