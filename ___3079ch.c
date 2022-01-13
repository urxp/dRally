#include "drally.h"
#include "drally_fonts.h"

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
						if((D(___1a01e0h+0x6c*r+0x1c) >= 0)&&(D(___1a01e0h+0x6c*r+0x1c) <= 2)) break;
					}
				}

				if(ebp == 1){

					n = -1;
					while(++n < 0x64){

						r = rand_watcom106()%0x14;

						if(((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) >= 0)&&((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) <= 2)){	

							if(((int)D(___1a01e0h+0x6c*r+0x1c) >= 1)&&((int)D(___1a01e0h+0x6c*r+0x1c)) <= 3) break;
						}

						if(((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) >= 3)&&((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) <= 5)){

							if(((int)D(___1a01e0h+0x6c*r+0x1c) >= 2)&&((int)D(___1a01e0h+0x6c*r+0x1c) <= 4)) break;
						}
					}
				}

				if(ebp == 2){

					n = -1;
					while(++n < 0x64){

						r = rand_watcom106()%0x14;
						if((D(___1a01e0h+0x6c*r+0x1c) >= 3)&&(D(___1a01e0h+0x6c*r+0x1c) <= 5)) break;
					}
				}

				if(B(___1a0f04h+r) != 1) break;
			}

			B(___1a0f04h+r) = 1;
			B(___1a0ef8h+B(___1a1f64h+ebp+3)+4*ebp) = r;
			B(___1a1f64h+ebp+3)++; 
			itoa_watcom106(D(___1a01e0h+0x6c*r+0x48), esp+0x50, 0xa);
			strcpy(esp, "");
			if(strlen(esp+0x50) < 2)strcat(esp, " ");
			strcat(strcat(strcat(esp, esp+0x50), "."), ___1a01e0h+0x6c*r);
			___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, esp, 0x280*(0x12*B(___1a1f64h+ebp+3)+0x100)+0xa0*ebp+0x22);
			___12cb8h__VESA101_PRESENTSCREEN();
		}
	}
}
