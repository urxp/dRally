#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"
#include "sfx.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___1a1028h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___185a50h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___185a44h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___185a48h[];
	extern __BYTE__ ___1a1f64h[];
	extern __POINTER__ ___1a0f98h;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___1a103ch[];
	extern __BYTE__ ___185a20h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185a4ch[];
	extern __BYTE__ ___1a1ef4h[];
	extern __BYTE__ ___185a28h[];

void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
void ___12940h(void);
void ___3892ch_cdecl(__DWORD__);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void ___58c60h(void);
void ___2b318h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
__DWORD__ ___32230h(void);
__DWORD__ ___31868h(void);
void ___33010h_cdecl(int NumCars);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___3174ch_cdecl(__DWORD__);
void ___17324h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void ___3079ch_cdecl(__DWORD__);
__BYTE__ ___5994ch(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___30df8h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___17248h(void);
void ___3a6a4h_v2(int);
void ___31588h(void);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__, __DWORD__, __DWORD__, __DWORD__);


static __DWORD__ helper_color(__DWORD__ eax, __DWORD__ edx){

	long long 	ll_tmp;

	ll_tmp = (long long)(int)eax*(int)edx;
	edx = ll_tmp>>0x20;
	eax = ll_tmp;
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;
	eax &= 0xff;

	return eax;
}

// SIGNUP SCREEN
void ___3266ch(void){

	__DWORD__ 	rr, gg, bb, nn;
	__DWORD__ 	eax, ebx, edx, edi, esi, ebp, cf;
	__BYTE__ 	esp[0x64];
	int 	x, y, i, j, n, n2, n3, n4;
	__BYTE__ 		px;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	D(___1a1028h) = -1;
	___31588h();

	n = -1;
	while(++n < 7){

		rr = helper_color(___19eb50h[n+0xb0].r, 0x640000);
		gg = helper_color(___19eb50h[n+0xb0].g, 0x640000);
		bb = helper_color(___19eb50h[n+0xb0].b, 0x640000);

		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n+0xb0);
	}

	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101_BACKGROUND, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA+0x280*103, ___1a1138h__VESA101_BACKGROUND+0x280*103, 0x28a00);
	___30df8h();

	if(D(___185a3ch) == 0) ___27f80h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
	if(D(___185a3ch) != 0) ___17248h();

	___3a6a4h_v2(1);

	if(D(___185a3ch) != 0){

		___17324h();
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10180, ___1a1138h__VESA101_BACKGROUND+0x10180, 0x28a00);
		___30df8h();
		___27f80h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
		___12cb8h__VESA101_PRESENTSCREEN();
	}

	esi = 0;

	while(1){

		___2ab50h();
		___2ab50h();
		___3079ch_cdecl(0x4b);

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			while(1){

				___3079ch_cdecl(1);
				if((B(___1a1f64h+3) >= 4)&&(B(___1a1f64h+4) >= 4)&&(B(___1a1f64h+5) >= 4)) break;
			}

			esi = 0;
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			if((D(___185a50h) != 1)||(D(___185a50h) != D(___185a44h))||((int)s_6c[D(___1a1ef8h)].car >= 2)){

				if((D(___185a50h) != 2)||(D(___185a48h) != 1)||((int)s_6c[D(___1a1ef8h)].car >= 4)){

					if(B(___1a1f64h+D(___185a50h)+3) >= 4){

						dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

						while(1){

							___3079ch_cdecl(1);
							if((B(___1a1f64h+3) >= 4)&&(B(___1a1f64h+4) >= 4)&&(B(___1a1f64h+5) >= 4)) break;
						}

						esi = 0;
					}
					else {

						dRally_Sound_pushEffect(1, SFX_SIGNUP_BRAKES, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
						edx = B(___1a1f64h+D(___185a50h)+3);

						j = -1;
						while(++j < 2){

							i = -1;
							while(++i < 0x88){

								if((px = B(___1a0f98h+0x88*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x12*(edx+1)+0x106)+0xa0*D(___185a50h)+0x1b+0x280*j+i) = px;
							}
						}

						itoa_watcom106(s_6c[D(___1a1ef8h)].rank, esp+0x3c, 0xa);
						strcpy(esp, "");
						if(strlen(esp+0x3c) < 2) strcat(esp, " ");
						strcat(strcat(strcat(esp, esp+0x3c), "."), strupr_watcom106(strcpy(esp+0x50, s_6c[D(___1a1ef8h)].name)));
						edx = B(___1a1f64h+D(___185a50h)+3);

						x = 0x280*(0x12*(edx+1)+0x100)+0xa0*D(___185a50h)+0x22;
						y = x/0x280;
						x = x%0x280;
						___12e78h_v3(___1a10b8h___185c7ah, esp, x, y);
						ebx = B(___1a1f64h+D(___185a50h)+3);
						D(___1a1028h) = D(___185a50h);
						B(___1a0ef8h+4*D(___185a50h)+ebx) = B(___1a1ef8h);
						B(___1a1f64h+D(___185a50h)+3)++;
						D(___1a103ch) = ebx;
						___12cb8h__VESA101_PRESENTSCREEN();

						while(1){

							___2ab50h();
							___2ab50h();
							___3079ch_cdecl(3);
							if((B(___1a1f64h+3) >= 4)&&(B(___1a1f64h+4) >= 4)&&(B(___1a1f64h+5) >= 4)) break;
						}

						n2 = -1;
						while(++n2 < 3){

							memset(esp+0x3c, 0, 0x14);
							B(esp+0x50) = B(___1a0ef8h+4*n2);
							B(esp+0x51) = B(___1a0ef8h+4*n2+1);
							B(esp+0x52) = B(___1a0ef8h+4*n2+2);
							B(esp+0x53) = B(___1a0ef8h+4*n2+3);

							edi = 4*n2;
							n3 = -1;
							while(++n3 < 4){

								eax = 0;
								while(1){

									n = B(esp+eax+0x50);
									eax++;
									if(B(esp+n+0x3c) == 0) break;
								}

								eax = B(esp+0x51);
								if(((int)eax > n)&&(B(esp+eax+0x3c) == 0)) n = eax;

								eax = B(esp+0x52);
								if(((int)eax > n)&&(B(esp+eax+0x3c) == 0)) n = eax;

								eax = B(esp+0x53);
								if(((int)eax > n)&&(B(esp+eax+0x3c) == 0)) n = eax;

								B(esp+n+0x3c) = 1;
								B(___1a0ef8h+edi) = n;
								if(D(___1a1ef8h) == n) D(___1a103ch) = n3;
								edi++;
							}
						}

						if(!___32230h()&&!___31868h()){	// NO_SABOTAGE && NO_EVENTS

							n = 0;
							while(1){

								___2ab50h();
								n++;
								if((___5994ch() != 0)||(n >= 280)) break;
							}
						}

						esi = 1;
						___33010h_cdecl(4);
						D(___185a20h) = 1;
					}
				}
				else {

					___3174ch_cdecl(D(___185a48h));
					D(___185a48h) = 0;
				}
			}
			else {

				___3174ch_cdecl(0);
				D(___185a44h) = 0;
			}
			break;
		case DR_SCAN_KP_4:
		case DR_SCAN_LEFT:
			if((int)D(___185a50h) > 0){

				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
				___281d0h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
				D(___185a50h)--;
				___27f80h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case DR_SCAN_KP_6:
		case DR_SCAN_RIGHT:
			if((int)D(___185a50h) < 2){

				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
				___281d0h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
				D(___185a50h)++; 
				___27f80h_cdecl(0xa0*D(___185a50h)+0x16, 0x76, 0x94, 0x84);
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		default:
			break;
		}

		if(esi == 0){

			if((B(___1a1f64h+3) == 4)&&(B(___1a1f64h+3) == B(___1a1f64h+4))&&(B(___1a1f64h+3) == B(___1a1f64h+5))){
					
				___13248h_cdecl(33, 200, 580, 112, 1);
				___12e78h_v3(___1a10cch___185ba9h, "You did not sign up in any race.", 48, 225);
				___12e78h_v3(___1a1108h___185c0bh, "Press any key to continue.", 208, 261);
				___12cb8h__VESA101_PRESENTSCREEN();
				dRally_Sound_pushEffect(1, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500-0x1000, 0x8000);

				while(1){

					___2ab50h();
					if(___5994ch() != 0) break;
				}

				___2b318h();

				n4 = -1;
				while(++n4 < 51){

					if((D(___185a14h_UseWeapons) != 0)&&(D(___185a4ch) != 0)) dRally_Sound_setMasterVolume(1310*(50-n4));

					___58c60h();
					
					n = -1;
					while(++n < 0x100){

						rr = helper_color(___19eb50h[n].r, 0x20000*(50-n4));
						gg = helper_color(___19eb50h[n].g, 0x20000*(50-n4));
						bb = helper_color(___19eb50h[n].b, 0x20000*(50-n4));

						__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
					}
				}

				if(D(___185a14h_UseWeapons) != 0){

					if(D(___185a4ch) != 0){

						dRally_Sound_setPosition(D(___1a1ef4h));
						D(___185a28h) = 1;
						dRally_Sound_freeEffectChannel(1);
					}
				}

				___12940h();

				n = -1;
				while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

				esi = 1;
				___3892ch_cdecl(1);
				D(___185a20h) = 1;
			}
		}

		if(esi != 0) break;
	}

}
