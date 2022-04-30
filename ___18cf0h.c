#include "drally.h"
#include "drally_structs_fixed.h"
#include "drally_fonts.h"
#include "drmemory.h"

	extern char ___1866b8h[9][9][50];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185b58h[9][9];

void ___2a608h_cdecl(const char * A1);
int rand_watcom106(void);
__DWORD__ ___17510h_cdecl(__POINTER__, __DWORD__, __DWORD__, __POINTER__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void ___13710h(__DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__DWORD__ ___146c4h_cdecl(__DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
__DWORD__ GET_FILE_SIZE(const char *);
void ___18808h_cdecl(char * A1, const char * A2);
void dREncryption_encodeSavedGame(saved_game_t *);

const __BYTE__ ___1858c8h[] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

static __BYTE__ ROR_BYTE(__BYTE__ b, int n){

    return (b>>n)|(b<<(8-n));
}

// SAVE GAME
void ___18cf0h(void){

	FILE * 			fd;
	__DWORD__ 		eax, esi, ebp;
	__BYTE__ 		esp[0x34];
	saved_game_t *	sg;
	int 			n;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;

	n = -1;
	while(++n < 8){

		___185b58h[5][n] = 1;
		strcpy(___1866b8h[5][n], "Empty Slot");
		strcat(strcpy(esp+0x10, "DR.SG"), itoa_watcom106(n, esp+0x2c, 0xa));

		if(GET_FILE_SIZE(esp+0x10) > 0) ___18808h_cdecl(___1866b8h[5][n], esp+0x10);
	}

	strcpy(___1866b8h[5][7], "Quicksave Slot");

	n = -1;

	while(1){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101_BACKGROUND+0x10680, 0x28f00);
		___13710h(0, 0);
		___13710h(1, 0);
		___13710h(5, 1);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = ___146c4h_cdecl(5);
		esi = eax;
		ebp = eax;

		if(((int)eax >= 0)&&((int)eax <= 7)){

			___13710h(5, 0);
			___13248h_cdecl(0x78, 0x113, 0x186, 0x46, 1);
			___12e78h_v3(___1a1108h___185c0bh, "Enter the name of save game?", 130, 282);
			___12cb8h__VESA101_PRESENTSCREEN();
			strcpy(esp, strcmp(___1866b8h[5][esi], "Empty Slot") ? ___1866b8h[5][esi] : "");
			eax = ___17510h_cdecl(esp, 0x82, 0x12a, (__POINTER__)___1858c8h, 0xf, 0x140, 1, 1, 0);
			
			if(eax != 0){

				n = ebp;
				ebp = 0xffffffff;
			}
		}

		if(ebp == 0xffffffff) break;
	}

	if(n >= 0){

		sg = (saved_game_t *)___3f71ch__allocateMemory(sizeof(saved_game_t));
		memset(sg, 0, sizeof(saved_game_t));

		sg->me = B(___1a1ef8h);
		sg->weapons = B(___185a14h_UseWeapons);
		sg->difficulty = ___196a94h_difficulty;
		strcpy(sg->name, esp);
		memcpy(sg->racers, s_6c, 20*sizeof(racer_t));
		dREncryption_encodeSavedGame(sg);
		fd = strupr_fopen(strcat(strcpy(esp+0x10, "DR.SG"), itoa_watcom106(n, esp+0x2c, 0xa)), "wb");
		fwrite(sg, sizeof(saved_game_t), 1, fd);
		fclose(fd);
		dRMemory_free((__POINTER__)sg);
		___13710h(0, 0);
		___13710h(1, 0);
		___13710h(5, 0);
		___2a608h_cdecl("Game Saved.");
		strcpy(___1866b8h[5][7], "Quicksave Slot");
	}
}
