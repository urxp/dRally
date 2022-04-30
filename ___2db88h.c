#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "watcom106.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a0a50h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e5ch;
	extern __DWORD__ ___1a017ch_PriceSabotage;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER

void ___2d184h(void);
void ___2d20ch(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___2d054h_cdecl(__DWORD__);

// MARKET SABOTAGE
void ___2db88h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x28];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	int 			i, j, n;
	racer_t *		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	ebp = 0;

	n = -1;
	while(++n < 20){

		if(((int)ebp < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) ebp = s_6c[n].points;
	}

	if(D(___1a0a50h+0xc) == 1){

		j = -1;
		while(++j < 0x60){

			i = -1;
			while(++i < 0x60){

				B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8+0x280*j+i) = B(___1a1e5ch+0x6c00+0x60*j+i);
			}
		}

		___2d054h_cdecl(3);
		itoa_watcom106(___1a017ch_PriceSabotage, esp+0x14, 10);
		strcat(strcpy(esp, "$"), esp+0x14);
		___12f60h_cdecl(esp, ___25180h_cdecl(esp)+0x346c8);
	}

	if(D(___1a0a50h+0xc) == 0){

		j = -1;
		while(++j < 0x60){

			i = -1;
			while(++i < 0x60){

				B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8+0x280*j+i) = B(___1a1e5ch+0x18c00+0x60*j+i);
			}
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			___2d184h();
		}
		else {
#endif // DR_MULTIPLAYER
			if((int)ebp >= (int)s_6c[D(___1a1ef8h)].points){

				___2d184h();
			}
			else {

				___13248h_cdecl(144, 114, 384, 119, 1);
				VESA101_16X16_FORMAT_PRINT("[No sabotage. No way.",         170, 124);
				VESA101_16X16_FORMAT_PRINT("",                              170, 140);
				VESA101_16X16_FORMAT_PRINT("What? You crazy, man? Nobody",  170, 156);
				VESA101_16X16_FORMAT_PRINT("touches the Adversary's auto-", 170, 172);
				VESA101_16X16_FORMAT_PRINT("mobile and lives, nobody.",     170, 188);
				VESA101_16X16_FORMAT_PRINT("",                              170, 204);
			}
#if defined(DR_MULTIPLAYER)
		}
#endif // DR_MULTIPLAYER
	}

	if(D(___1a0a50h+0xc) == -1){

		j = -1;
		while(++j < 0x60){

			i = -1;
			while(++i < 0x60){

				B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x279c8+0x280*j+i) = B(___1a1e5ch+0xfc00+0x60*j+i);
			}
		}

		___2d20ch();
	}
}
