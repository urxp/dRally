#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"
#include "drally_structs_free.h"
#include "sfx.h"
#include "watcom106.h"

	extern __POINTER__ ___1a1114h;
	extern __BYTE__ ___1a54d0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a1ed0h[];
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10f8h;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a1e6ch;
	extern __POINTER__ ___1a1ea8h;
	extern cardata_t ___18e298h[6];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern __POINTER__ ___1a01b8h[6];
	extern __POINTER__ ___1a1e88h;
	extern __POINTER__ ___1a1eb4h;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1858c8h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __POINTER__ ___1a10cch;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __DWORD__ ___196a94h_difficulty;
	extern __BYTE__ ___1a1efch[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___185c0bh[];
	extern __BYTE__ ___1a10fch[];
	extern __BYTE__ ___1a1108h[];

enum e_difficulty {
    SPEED_MAKES_ME_DIZZY,
    I_LIVE_TO_RIDE,
    PETROL_IN_MY_VEINS
};

void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
__DWORD__ ___17510h_cdecl(__POINTER__, __DWORD__, __DWORD__, __POINTER__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
void ___2ab50h(void);
void ___11378h_cdecl_float(float A1, float A2, float A3);

__DWORD__ ___3ab5ch_cdecl(__DWORD__ A1){

	__DWORD__ 		eax1, eax2;
	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x5c];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	__BYTE__ 		px;
	int 			x, y, i, j, n;
	racer_t * 		s_6c;
	cardata_t * 	cdp;


	s_6c = (racer_t *)___1a01e0h;
	cdp = (cardata_t *)___18e298h;

	D(esp+0x44) = 0x70;
	old_bpa_read("MENU.BPA", ___1a1114h, "licence3.bpk");
	bpk_decode2(___1a54d0h, ___1a1114h);
	B(esp+0x54) = 1;
	D(___1a1ed0h) = 0;
	s_6c[D(___1a1ef8h)].color = 0;
	___135fch(0, 371, 639, 109);
	___23230h();
	___11378h_cdecl_float((float)B(___1a0fb8h+0x180), (float)B(___1a0fb8h+0x181), (float)B(___1a0fb8h+0x182));

	ebp = 0x3f;
	ecx = (A1 == 0)?178:249;

	j = -1;
	while(++j < ecx){

		i = -1;
		while(++i < 0x212){

			if((px = B(___1a54d0h+0x212*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(112+j)+(63+i)) = px;
		}
	}

	j = -1;
	while(++j < 0x66){

		i = -1;
		while(++i < 0x44){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x3c+j)+ebp+0x19+i) = B(___1a10f8h+0x44*j+i);
		}
	}

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x40){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x4f+j)+ebp+0x1b+i) = B(___19de70h[0]+0x40*j+i);
		}
	}

	if(A1 != 0){
			
		___12e78h_v3(___1a10e0h___185ba9h, "yes", ebp+0xa0,  D(esp+0x44)+0xcc);
		___12e78h_v3(___1a10e0h___185ba9h, "no",  ebp+0x14a, D(esp+0x44)+0xcc);

		j = -1;
		while(++j < 0x45){

			i = j%2;
			while(i < 0x212){

				B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+179+j)+ebp+i) = 0xc4;
				i += 2;
			}
		}
	}

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x40+j)+ebp+0x1a0+i) = B(___1a1e6ch+0x60*j+i);
		}
	}

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x60){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x40+j)+ebp+0x1a0+i) = B(___1a1ea8h+0x60*j+i);
		}
	}

	itoa_watcom106(cdp[0].price, esp+0x18, 0xa);
	strcat(strcpy(esp+0xc, "$"), esp+0x18);
	___12f60h_cdecl(esp+0x0c, ___25180h_cdecl(esp+0x0c)+0x280*(D(esp+0x44)+0x92)+ebp+0x1a0);
	___259e0h_cdecl(ebp+0x1a0, D(esp+0x44)+0x50, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
	___1398ch__VESA101_PRESENTRECTANGLE(0x280*(D(esp+0x44)+0x50)+ebp+0x1a0, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x50)+ebp+0x1a0, 0x60, 0x40);
	D(___1a1ed0h)++;

	if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x126){

			if((px = B(___1a1e88h+0x126*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x8f+j)+ebp+0x6b+i) = px;
		}
	}

	j = -1;
	while(++j < 0x18){

		i = -1;
		while(++i < 0xa){

			if((px = B(___1a1eb4h+0xa*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x8b+j)+ebp+0xf9+i) = px;
		}
	}

	___12cb8h__VESA101_PRESENTSCREEN();
	___5994ch();
	___59b3ch();
	strcpy(esp, s_6c[D(___1a1ef8h)].name);
	strcpy(s_6c[D(___1a1ef8h)].name, "");

	if(___17510h_cdecl(s_6c[D(___1a1ef8h)].name, ebp+0x6e, D(esp+0x44)+0x60, ___1858c8h, 0xa, 0x12c, 0, 1, 1) == 0){

		dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		strcpy(s_6c[D(___1a1ef8h)].name, esp);
		B(esp+0x54) = 0;
	}
	else {

		dRally_Sound_pushEffect(1, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

		if(s_6c[D(___1a1ef8h)].face == 2) dRally_Sound_pushEffect(5, SFX_LETS_ROCK, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);

		if(A1 != 0){

			j = -1;
			while(++j < 0xf9){

				i = -1;
				while(++i < 0x212){

					if((px = B(___1a54d0h+0x212*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+j)+ebp+i) = px;
				}
			}

			___12e78h_v3(___1a10cch___185ba9h, s_6c[D(___1a1ef8h)].name, ebp+0x6e, D(esp+0x44)+0x60);

			j = -1;
			while(++j < 0x66){

				i = -1;
				while(++i < 0x44){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x3c+j)+ebp+0x19+i) = B(___1a10f8h+0x44*j+i);
				}
			}

			j = -1;
			while(++j < 0x40){

				i = -1;
				while(++i < 0x40){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x4f+j)+ebp+0x1b+i) = B(___19de70h[s_6c[D(___1a1ef8h)].face]+0x40*j+i);
				}
			}

			j = -1;
			while(++j < 0x60){

				i = -1;
				while(++i < 0x60){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x40+j)+ebp+0x1a0+i) = B(___1a1e6ch+0x60*j+i);
				}
			}

			j = -1;
			while(++j < 0x10){

				i = -1;
				while(++i < 0x60){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x40+j)+ebp+0x1a0+i) = B(___1a1ea8h+0x60*j+i);
				}
			}

			itoa_watcom106(cdp[0].price, esp+0x18, 0xa);
			strcat(strcpy(esp+0xc, "$"), esp+0x18);
			___12f60h_cdecl(esp+0x0c, ___25180h_cdecl(esp+0x0c)+0x280*(D(esp+0x44)+0x92)+ebp+0x1a0);
			___259e0h_cdecl(ebp+0x1a0, D(esp+0x44)+0x50, D(___1a1ed0h), ___1a01b8h[0], CARENCS[0]);
			___1398ch__VESA101_PRESENTRECTANGLE(0x280*(D(esp+0x44)+0x50)+ebp+0x1a0, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x50)+ebp+0x1a0, 0x60, 0x40);
			D(___1a1ed0h)++;
			
			if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;

			j = -1;
			while(++j < 0x10){

				i = -1;
				while(++i < 0x126){

					if((px = B(___1a1e88h+0x126*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x8f+j)+ebp+0x6b+i) = px;
				}
			}

			j = -1;
			while(++j < 0x18){

				i = -1;
				while(++i < 0xa){

					if((px = B(___1a1eb4h+0xa*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+0x8b+j)+ebp+0x79+s_6c[D(___1a1ef8h)].color+i) = px;
				}
			}

			j = -1;
			while(++j < 0xb2){

				i = j%2;
				while(i < 0x212){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(D(esp+0x44)+j)+ebp+i) = 0xc4;
					i += 2;
				}
			}

			D(___185a14h_UseWeapons) = 1;
			eax = ___148cch_cdecl(ebp+0x82, D(esp+0x44)+0xd3, 1, (int *)___185a14h_UseWeapons);

			if(L(eax) != 0){

				ebp = ebp+0x1e;
				D(esp+0x44) += 0x1e;
				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*84, ___1a1138h__VESA101_BACKGROUND+0x280*84, 0x2c380);
				___13710h(0, 0);
				___13248h_cdecl(ebp, D(esp+0x44), 0x1b8, 0x0ba, 1);
				___12e78h_v3(___1a10cch___185ba9h, "Select difficulty:", ebp+0x50, D(esp+0x44)+0x12);
				___13bd4h_cdecl(ebp+0x16, D(esp+0x44)+0x4f+0x1c*___196a94h_difficulty);

				edi = ___196a94h_difficulty;

				___12e78h_v3((edi != 0)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "speed makes me dizzy", ebp+0x2e, D(esp+0x44)+0x4a);
				___12e78h_v3((edi != 1)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "i live to ride",       ebp+0x2e, D(esp+0x44)+0x66);
				___12e78h_v3((edi != 2)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "petrol in my veins",   ebp+0x2e, D(esp+0x44)+0x82);

				___12cb8h__VESA101_PRESENTSCREEN();
				D(esp+0x28) = D(esp+0x44)+0x4a;
				D(esp+0x24) = 0x280*(D(esp+0x44)+0x4a);
				D(esp+0x34) = 0x280*(D(esp+0x44)+0x4a)+ebp+0x16;
				D(esp+0x30) = D(esp+0x44)+0x82;
				D(esp+0x38) = D(esp+0x44)+0x66;
				D(esp+0x3c) = D(esp+0x44)+0x4f;
				D(esp+0x40) = ebp+0x16;

				while(1){

					B(esp+0x58) = ___5994ch();
					___2ab50h();
					___2ab50h();
					___13bd4h_cdecl(D(esp+0x40), 0x1c*edi+D(esp+0x3c));
					L(eax) = 0;

					if(((int)edi > 0)&&((B(esp+0x58) == DR_SCAN_UP)||(B(esp+0x58) == DR_SCAN_KP_8))){

						L(eax) = 1;
						edi--;
					}

					if(((int)edi < 2)&&((B(esp+0x58) == DR_SCAN_DOWN)||(B(esp+0x58) == DR_SCAN_KP_2))){

						L(eax) = 1;
						edi++;
					}

					if(L(eax) != 0){

						n = -1;
						while(++n < 84) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(n+D(esp+0x28))+ebp+0x16, 0xc4, 0x163);

						___12e78h_v3((edi != 0)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "speed makes me dizzy", ebp+0x2e, D(esp+0x28));
						___12e78h_v3((edi != 1)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "i live to ride",       ebp+0x2e, D(esp+0x38));
						___12e78h_v3((edi != 2)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "petrol in my veins",   ebp+0x2e, D(esp+0x30));

						___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x34), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x24)+ebp+0x16, 0x190, 0x54);
						dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
					}

					if((B(esp+0x58) == DR_SCAN_ENTER)||(B(esp+0x58) == DR_SCAN_KP_ENTER)||(B(esp+0x58) == DR_SCAN_SPACE)){

						___196a94h_difficulty = edi;

						switch(___196a94h_difficulty&3){
						case SPEED_MAKES_ME_DIZZY:
							dRally_Sound_pushEffect(5, SFX_SPEED_MAKES_ME_DIZZY, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
							break;
						case I_LIVE_TO_RIDE:
							dRally_Sound_pushEffect(5, SFX_I_LIVE_TO_RIDE, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
							break;
						case PETROL_IN_MY_VEINS:
							dRally_Sound_pushEffect(5, SFX_PETROL_IN_MY_VEINS, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);
							break;
						default:
							break;
						}
					}

					if(B(esp+0x58) == DR_SCAN_ESCAPE){

						B(esp+0x54) = 0;
						dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
					}

					if((B(esp+0x58) == DR_SCAN_ENTER)||(B(esp+0x58) == DR_SCAN_KP_ENTER)||(B(esp+0x58) == DR_SCAN_ESCAPE)) break;
				}
			}
			else {

				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
				B(esp+0x54) = 0;
			}
		}

		strlwr_watcom106(s_6c[D(___1a1ef8h)].name);
		if((s_6c[D(___1a1ef8h)].name[0] > 0x60)&&(s_6c[D(___1a1ef8h)].name[0] < 0x7b)) s_6c[D(___1a1ef8h)].name[0] -= 0x20;

		D(___1a1efch) = 0;
		eax1 = strlen(s_6c[D(___1a1ef8h)].name);

		n = -1;
		while(++n < eax1) D(___1a1efch) += B(___185c0bh+s_6c[D(___1a1ef8h)].name[n]-0x1e);

		___11378h_cdecl_float(
			(float)B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color+0),
			(float)B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color+1),
			(float)B(___1a0fb8h+3*s_6c[D(___1a1ef8h)].color+2));
	}

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
	}
#endif // DR_MULTIPLAYER

	___23230h();
	___12cb8h__VESA101_PRESENTSCREEN();
	D(___1a1ed0h) = 0;

	return B(esp+0x54);
}
