#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs.h"

	extern byte ___19bd60h[];
	extern byte kmap[];
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___196a94h[];
	extern byte ___1a01e0h[];
	extern byte ___243d44h[];
	extern byte ___196ab4h[];
	extern byte ___1a0a50h[];

void * ___3f71ch__allocateMemory(dword);
void dRally_Memory_free(void *);
void dR_encodeSavedGame(saved_game_t *);
void dR_decodeSavedGame(saved_game_t *);

// QUICK SAVE/LOAD
dword ___2a6a8h(void){

	FILE * 			fd;
	int 			n, rslt;
	saved_game_t * 	sg;

	rslt = 0;

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

		if(kmap[DR_SCAN_F2]){	// QUICK SAVE

			sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
			memset(sg, 0, sizeof(saved_game_t));
			sg->me = B(___1a1ef8h);
			sg->weapons = B(___185a14h_UseWeapons);
			sg->difficulty = B(___196a94h);
			strcpy(sg->name, "Quicksave Slot");
			memcpy(sg->racers, ___1a01e0h, 20*sizeof(racer_t));
			dR_encodeSavedGame(sg);
			fd = strupr_fopen("DR.SG7", "wb");
			fwrite(sg, sizeof(saved_game_t), 1, fd);
			fclose(fd);
			dRally_Memory_free(sg);
			rslt = 1;
		}

		if(kmap[DR_SCAN_F3]){	// QUICK LOAD

			D(___243d44h) = 0;
			D(___196ab4h) = 0;
		
			if((fd = strupr_fopen("DR.SG7", "rb"))){
			
				sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
				memset(sg, 0, sizeof(saved_game_t));
				fread(sg, sizeof(saved_game_t), 1, fd);
				fclose(fd);
				dR_decodeSavedGame(sg);
				D(___1a1ef8h) = sg->me;
				D(___185a14h_UseWeapons) = sg->weapons;
				D(___196a94h) =  sg->difficulty;
				memcpy(___1a01e0h, sg->racers, 20*sizeof(racer_t));
				dRally_Memory_free(sg);
				D(___1a0a50h) = !(D(___1a01e0h+0x5c+0x6c*D(___1a1ef8h)) == 8);
				D(___1a0a50h+4) = !(D(___1a01e0h+0x60+0x6c*D(___1a1ef8h)) == 1);
				D(___1a0a50h+8) = !(D(___1a01e0h+0x64+0x6c*D(___1a1ef8h)) == 1);
				D(___1a0a50h+0xc) = !(D(___1a01e0h+0x68+0x6c*D(___1a1ef8h)) == 1);
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
