#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1f64h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a0f04h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a10b8h;
	extern __BYTE__ ___185c7ah[];

void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
char * itoa_watcom106(int value, char * buffer, int radix);
int rand_watcom106(void);

// RACE SIGNUP RANDOMIZATION
void ___3079ch_cdecl(__DWORD__ A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x6c];
	int 		n, r;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;

	if((rand_watcom106()%A1) == 0){
	
		n = -1;
		while(++n < 0x32){

			ebp = rand_watcom106()%3;
			if(B(___1a1f64h+ebp+3) <= 3) break;
		}

		if(n < 0x32){

			while(1){

				if(ebp == 0){

					n = -1;
					while(++n < 0x64){

						r = rand_watcom106()%0x14;
						if((s_6c[r].car >= 0)&&(s_6c[r].car <= 2)) break;
					}
				}

				if(ebp == 1){

					n = -1;
					while(++n < 0x64){

						r = rand_watcom106()%0x14;

						if(((int)s_6c[D(___1a1ef8h)].car >= 0)&&((int)s_6c[D(___1a1ef8h)].car <= 2)){	

							if(((int)s_6c[r].car >= 1)&&((int)s_6c[r].car) <= 3) break;
						}

						if(((int)s_6c[D(___1a1ef8h)].car >= 3)&&((int)s_6c[D(___1a1ef8h)].car <= 5)){

							if(((int)s_6c[r].car >= 2)&&((int)s_6c[r].car <= 4)) break;
						}
					}
				}

				if(ebp == 2){

					n = -1;
					while(++n < 0x64){

						r = rand_watcom106()%0x14;
						if((s_6c[r].car >= 3)&&(s_6c[r].car <= 5)) break;
					}
				}

				if(B(___1a0f04h+r) != 1) break;
			}

			B(___1a0f04h+r) = 1;
			B(___1a0ef8h+B(___1a1f64h+ebp+3)+4*ebp) = r;
			B(___1a1f64h+ebp+3)++; 
			itoa_watcom106(s_6c[r].rank, esp+0x50, 0xa);
			strcpy(esp, "");
			if(strlen(esp+0x50) < 2)strcat(esp, " ");
			strcat(strcat(strcat(esp, esp+0x50), "."), s_6c[r].name);
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x280*(0x12*B(___1a1f64h+ebp+3)+0x100)+0xa0*ebp+0x22);
			___12cb8h__VESA101_PRESENTSCREEN();
		}
	}
}
