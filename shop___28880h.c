#include "drally.h"
#include "sfx.h"

#define COOXY(x,y) (0x280*(y)+(x))
#define COO10UV(u,v) (0x10*(v)+(u))

	extern __BYTE__ ___1a1ec4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___1a1ee4h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e78h;


void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___25a74h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___28470h(void);
void ___262b4h(void);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___26650h(void);
void ___269e4h(void);
void ___26e54h(void);


void shop___28880h(void){

	int 	i, j;
	__BYTE__ 	px;


	if((int)D(___1a1ec4h) < 5) dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

	switch(D(___1a1ec4h)){
	case 0:
		D(___1a1ee4h) = (D(___1a1ee4h)+1)%6;

		___25a74h();

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				px = B(___1a1e78h+COO10UV(i, j+0xc0));
				if(px != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+COOXY(i+0x70, j+0x8d)) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		___28470h();
	
		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				px = B(___1a1e78h+COO10UV(i, j+0x40));
				if(px != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+COOXY(i+0x70, j+0x8d)) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 1:
		D(___1a1ec4h) = 2;
		___262b4h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 2:
		D(___1a1ec4h) = 3;
		___26650h();
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 3:
		D(___1a1ec4h) = 4;
		___269e4h();
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 4:
		D(___1a1ec4h) = 5;
		___26e54h();
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	default:
		break;
	}
}
