#include "drally.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern char ___1866b8h[9][9][50];
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___1a1ef8h[];
	extern byte ___185a14h_UseWeapons[];
	extern __DWORD__ ___196a94h_difficulty;
	extern byte ___1a01e0h[];
	extern byte ___185b58h[9][9];

void ___2a608h_cdecl(const char * A1);
int rand_watcom106(void);
dword ___17510h_cdecl(void *, dword, dword, void *, dword, dword, dword, dword, dword);
void * ___3f71ch__allocateMemory(dword);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
dword ___146c4h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
dword GET_FILE_SIZE(const char *);
void ___18808h_cdecl(char * A1, const char * A2);
void dREncryption_encodeSavedGame(saved_game_t *);

const byte ___1858c8h[] = {
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

static byte ROR_BYTE(byte b, int n){

    return (b>>n)|(b<<(8-n));
}

// SAVE GAME
void ___18cf0h(void){

	FILE * 			fd;
	dword 			eax, esi, ebp;
	byte 			esp[0x34];
	saved_game_t *	sg;
	int 			n;


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

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101h_DefaultScreenBufferB+0x10680, 0x28f00);
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
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Enter the name of save game?", 0x2c182);
			___12cb8h__VESA101_PRESENTSCREEN();
			strcpy(esp, strcmp(___1866b8h[5][esi], "Empty Slot") ? ___1866b8h[5][esi] : "");
			eax = ___17510h_cdecl(esp, 0x82, 0x12a, ___1858c8h, 0xf, 0x140, 1, 1, 0);
			
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
		memcpy(sg->racers, ___1a01e0h, 20*sizeof(racer_t));
		dREncryption_encodeSavedGame(sg);
		fd = strupr_fopen(strcat(strcpy(esp+0x10, "DR.SG"), itoa_watcom106(n, esp+0x2c, 0xa)), "wb");
		fwrite(sg, sizeof(saved_game_t), 1, fd);
		fclose(fd);
		dRMemory_free(sg);
		___13710h(0, 0);
		___13710h(1, 0);
		___13710h(5, 0);
		___2a608h_cdecl("Game Saved.");
		strcpy(___1866b8h[5][7], "Quicksave Slot");
	}
}
