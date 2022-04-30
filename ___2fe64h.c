#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"
#include "sfx.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __POINTER__ ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern __BYTE__ ___1a1160h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0ff8h;
	extern __BYTE__ ___196abch[];
	extern __POINTER__ ___1a1040h[0x13];
	extern __BYTE__ ___196ab8h[];
	extern __POINTER__ ___1a10a4h;
	extern __BYTE__ ___196af4h[];
	extern __BYTE__ ___1a2010h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __POINTER__ ___1a1030h;
	extern __POINTER__ ___1a1038h;


void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___23758h(void);
__BYTE__ ___5994ch(void);
void ___2ab50h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3a968h_cdecl(__DWORD__);
void ___2fca4h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___25330h(void);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);

// SELECT TRACKS
void ___2fe64h(void){

	__DWORD__ 	eax;
	__BYTE__ 	esp[4];
	__BYTE__ 	px;
	int 		i, j, n;

	
	D(___1a1160h) = 0;
	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101_BACKGROUND, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	___135fch(0, 371, 639, 109);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
	}
#endif // DR_MULTIPLAYER

	___23230h();
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101_BACKGROUND+0xf000, 0x29b80);
	___25330h();

// MULTIPLAYER TRACK SELECTION
	j = -1;
	while(++j < 0x10){
	
		i = -1;
		while(++i < 0x280){

			if((px = B(___1a0ff8h+0x280*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(84+j)+i) = px;
		}
	}

// SELECT CONTROL
	eax = B(___196abch+D(___1a1160h));

	j = -1;
	while(++j < 0x62){

		i = -1;
		while(++i < 0x80){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1040h[eax]+0x80*j+i);
		}
	}

// CONTROL LEFT
	j = -1;
	while(++j < 0x54){

		i = -1;
		while(++i < 0x10){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(16+i)) = B(___1a10a4h+0x10*j+i);
		}
	}

// CONTROL RIGHT
	j = -1;
	while(++j < 0x54){

		i = -1;
		while(++i < 0x10){

			B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(160+i)) = B(___1a10a4h+0x10*(84+j)+i);
		}
	}

	___27f80h_cdecl(7, 0x6e, 0xb2, 0x75);
	___2fca4h();

// DEFAULT SELECTION
	n = -1;
	while(++n < (int)D(___196ab8h)){

		j = -1;
		while(++j < 0x62){

			i = -1;
			while(++i < 0x80){

				B(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(___196af4h+4*n)+0x280*j+i) = B(___1a1040h[B(___1a2010h+n+1)]+0x80*j+i);
			}
		}
	}

	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a1100h__VESA101h_DefaultScreenBuffer;
	___3a968h_cdecl(0);
	___12cb8h__VESA101_PRESENTSCREEN();

	D(esp) = 0;
	while(1){

		___2ab50h();

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			D(esp) = -1;
			break;
		case DR_SCAN_KP_ENTER:
		case DR_SCAN_ENTER:
			dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

			if(D(___1a1160h) == 0x12){
					
				if((int)D(___196ab8h) <= 0){

					dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
				}
				else {

					B(___1a2010h+D(___196ab8h)+1) = 0;

					if((int)D(___196ab8h) > 0) D(___196ab8h)--;

					n = -1;
					while(++n < 135){

						memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(230+n), ___1a1138h__VESA101_BACKGROUND+0x280*(230+n), 515);
					}

					n = -1;
					while(++n < (int)D(___196ab8h)){

						j = -1;
						while(++j < 0x62){

							i = -1;
							while(++i < 0x80){

								B(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(___196af4h+4*n)+0x280*j+i) = B(___1a1040h[B(___1a2010h+n+1)]+0x80*j+i);
							}
						}
					}
				}
			}

			if(D(___1a1160h) == 0x13) D(esp) = -1;

			if((int)D(___1a1160h) < 0x12){
				
				if((int)D(___196ab8h) >= 9){

					D(esp) = -2;
				}
				else {

					j = -1;
					while(++j < 0x62){

						i = -1;
						while(++i < 0x80){

							B(___1a112ch__VESA101_ACTIVESCREEN_PTR+D(___196af4h+4*D(___196ab8h))+0x280*j+i) = B(___1a1040h[B(___196abch+D(___1a1160h))]+0x80*j+i);
						}
					}

					D(___196ab8h)++;
					B(___1a2010h+D(___196ab8h)) = B(___196abch+D(___1a1160h));
				}
			}

			___2fca4h();
			___12cb8h__VESA101_PRESENTSCREEN();
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___23758h();
#endif // DR_MULTIPLAYER
			break;
		case DR_SCAN_KP_4:
		case DR_SCAN_LEFT:
			if((int)D(___1a1160h) <= 0){

				D(___1a1160h) = 0x13;
			}
			else {

				D(___1a1160h)--;
			}

			dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(16+i)) = B(___1a10a4h+0x10*(168+j)+i);
				}
			}

			if(D(___1a1160h) == 0x12){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1030h+0x80*j+i);
					}
				}
			}

			if(D(___1a1160h) == 0x13){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1038h+0x80*j+i);
					}
				}
			}

			if((int)D(___1a1160h) < 0x12){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1040h[B(___196abch+D(___1a1160h))]+0x80*j+i);
					}
				}
			}

			___2fca4h();
			___12cb8h__VESA101_PRESENTSCREEN();

			n = -1;
			while(++n < 8) ___2ab50h();

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(16+i)) = B(___1a10a4h+0x10*j+i);
				}
			}

			___12cb8h__VESA101_PRESENTSCREEN();
			break;
		case DR_SCAN_KP_6:
		case DR_SCAN_RIGHT:
			if((int)D(___1a1160h) >= 0x13){

				D(___1a1160h) = 0;
			}
			else {
			
				D(___1a1160h)++;
			}

			dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(160+i)) = B(___1a10a4h+0x10*(252+j)+i);
				}
			}

			if(D(___1a1160h) == 0x12){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1030h+0x80*j+i);
					}
				}
			}

			if(D(___1a1160h) == 0x13){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = B(___1a1038h+0x80*j+i);
					}
				}
			}

			if((int)D(___1a1160h) < 0x12){

				j = -1;
				while(++j < 0x62){

					i = -1;
					while(++i < 0x80){

						D(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(120+j)+(32+i)) = D(___1a1040h[B(___196abch+D(___1a1160h))]+0x80*j+i);
					}
				}
			}

			___2fca4h();
			___12cb8h__VESA101_PRESENTSCREEN();

			n = -1;
			while(++n < 8) ___2ab50h();

			j = -1;
			while(++j < 0x54){

				i = -1;
				while(++i < 0x10){

					B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(134+j)+(160+i)) = B(___1a10a4h+0x10*(84+j)+i);
				}
			}

			___12cb8h__VESA101_PRESENTSCREEN();
			break;
		default:
			break;
		}

		if(D(esp) != 0) break;
	}

	if(D(___196ab8h) == 0){
		
		D(___196ab8h) = 1;
		B(___1a2010h+1) = 0;
	}

	memcpy(___1a10e4h__VESA101h_DefaultScreenBufferA, ___1a1138h__VESA101_BACKGROUND, 0x4b000);
	___1a112ch__VESA101_ACTIVESCREEN_PTR = ___1a10e4h__VESA101h_DefaultScreenBufferA;
	___135fch(0, 371, 639, 109);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
	}
#endif // DR_MULTIPLAYER

	___23230h();
}
