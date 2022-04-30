#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a24h[];
	extern __DWORD__ MP_MONEY;
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___185b58h[];

void ___13710h(__DWORD__, __DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
__DWORD__ ___17510h_cdecl(__POINTER__, __DWORD__, __DWORD__, __POINTER__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a6a4h_v2(int);
__DWORD__ ___146c4h_cdecl(__DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___2fe64h(void);
__DWORD__ ___198a0h(void);
__DWORD__ ___1bc20h(void);

static __BYTE__ __dfr_1855c8h[0x100] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

// Multiplayer Initialize A New Game
void ___1c374h_cdecl(int A0){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xc];
	int 	n;


	if(A0 != -1){

		while(1){

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101_BACKGROUND+0xd200, 0x2c380);
			strcpy(___1866b8h+0x76c, (D(___185a14h_UseWeapons) == 0)?"Weapons Off":"Weapons On");

			___13710h(0, 0);
			___13710h(2, 0);
			___13710h(4, 1);
			___3a6a4h_v2(0);

			n = ___146c4h_cdecl(4);
			switch(n){
			case 0:	// SELECT TRACKS
				___2fe64h();
				D(___185a24h) = 1;
				break;
			case 1:	// ENTER MONEY
				___13710h(4, 0);
				___13248h_cdecl(0x69, 0x10e, 0x1ae, 0x4f, 1);
				___12e78h_v3(___1a1108h___185c0bh, "Enter the sum available to each player?", 130, 282);
				___12e78h_v3(___1a10e0h___185ba9h, "$", 130, 298);
				___12cb8h__VESA101_PRESENTSCREEN();
				itoa_watcom106(MP_MONEY, esp, 0xa);
				___17510h_cdecl(esp, 0x96, 0x12a, __dfr_1855c8h, 5, 0x96, 1, 1, 0);
				MP_MONEY = atoi(esp);

				if((int)MP_MONEY < 0x64){

					while(1){

						___13248h_cdecl(0x69, 0x10e, 0x1ae, 0x4f, 1);
						___12e78h_v3(___1a1108h___185c0bh, "Enter the sum available to each player?", 130, 282);
						___12e78h_v3(___1a10e0h___185ba9h, "$", 130, 298);
						___12cb8h__VESA101_PRESENTSCREEN();
						itoa_watcom106(100, esp, 0xa);
						___17510h_cdecl(esp, 0x96, 0x12a, __dfr_1855c8h, 5, 0x96, 1, 1, 0);
						MP_MONEY = atoi(esp);
						if((int)MP_MONEY >= 100) break;
					}
				}
				break;
			case 2:	// WEAPONS ON/OFF
				if(D(___185a14h_UseWeapons) == 0){

					D(___185a14h_UseWeapons) = 1;
					strcpy(___1866b8h+0x76c, "Weapons On");
				}
				else {

					D(___185a14h_UseWeapons) = 0;
					strcpy(___1866b8h+0x76c, "Weapons Off");
				}
				break;
			case 3:	// INITIALIZE GAME
				if(CONNECTION_TYPE == 2){

					eax = ___198a0h();	// Network Initialize Game
				}
				else {

					eax = ___1bc20h();
				}

				if(eax != 0) n = -1;
				break;
			case 4:	// PREVIOUS MENU
				n = -1;
				D(___185a5ch+0x88) = 0;

				while(1){

					if(B(___185b58h+D(___185a5ch+0x88)+0x24) != 0) break;
						
					if((int)D(___185a5ch+0x88) >= (int)(D(___185a5ch+0x70)-1)){

						D(___185a5ch+0x88) = 0;
					}
					else {
					
						D(___185a5ch+0x88)++;
					}
				}
				break;
			default:
				break;
			}

			if(n == -1) break;
		}
	}
}
