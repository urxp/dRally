#include "drally.h"
#include "sfx.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e78h;
	extern __BYTE__ ___1a1ec4h[];
	extern __BYTE__ ___1a1ee4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___25a74h(void);
void ___25e40h(void);
void ___262b4h(void);
void ___26650h(void);
void ___269e4h(void);
void ___26e54h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___28470h(void);

// SHOP UP
void shop___2836ch(void){

	if(D(___1a1ec4h) == 1){

		dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		D(___1a1ec4h) = 0;
		___25a74h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0, 0x73, 0x80, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}

// SHOP DOWN
void shop___283ech(void){

	if(D(___1a1ec4h) == 0){

		dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		D(___1a1ec4h) = 1;
		___25e40h();
		___281d0h_cdecl(0, 0x73, 0x80, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
	}
}

// SHOP LEFT
void shop___285f8h(void){

	int 	i, j;
	__BYTE__ 	px;

	dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

	switch(D(___1a1ec4h)){
	case 0:
		D(___1a1ee4h) = (D(___1a1ee4h)+5)%6;
		___25a74h();

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				if((px = B(___1a1e78h+0x10*(j+0x80)+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x8d)+i) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		___25a74h();
		___28470h();

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				if((px = B(___1a1e78h+0x10*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x8d)+i) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 1:
		D(___1a1ec4h) = 0;
		___25a74h();
		___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0, 0x73, 0x80, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break; 
	case 2:
		D(___1a1ec4h) = 1;
		___25e40h();
		___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 3:
		D(___1a1ec4h) = 2;
		___262b4h();
		___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 4:
		D(___1a1ec4h) = 3;
		___26650h();
		___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	case 5:
		D(___1a1ec4h) = 4;
		___269e4h();
		___281d0h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
		___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
		___12cb8h__VESA101_PRESENTSCREEN();
		break;
	default:
		break;
	}
}

// SHOP RIGHT
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

				px = B(___1a1e78h+0x10*(j+0xc0)+i);
				if(px != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x8d)+i+0x70) = px;
			}
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		___28470h();
	
		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x10){

				px = B(___1a1e78h+0x10*(j+0x40)+i);
				if(px != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+0x8d)+i+0x70) = px;
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
