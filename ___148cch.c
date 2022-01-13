#include "drally.h"
#include "drally_keyboard.h"
#include "drally_fonts.h"
#include "sfx.h"


	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10cch;
	extern __POINTER__ ___1a10e0h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern int ___1a1e68h;
	extern __POINTER__ ___1a10f4h;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __DWORD__ ___24cc54h_sfx_volume;

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___2ab50h(void);
__BYTE__ ___5994ch(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void ___12e78h_v2(__POINTER__ font_data, font_props_t * font_props, const char * str, int x, int y);

int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4){

	int 	n, i, j, status;
	__BYTE__ 	tmp;


	//___12e78h_v2((*A4 == 1)?___1a10cch:___1a10e0h, ___185ba9h, "yes", x+30, y-7);
	___12e78h_v3((*A4 == 1)?___1a10cch___185ba9h:___1a10e0h___185ba9h, "yes", x+30, y-7);
	//___12e78h_v2((*A4 == 1)?___1a10e0h:___1a10cch, ___185ba9h, "no", x+200, y-7);
	___12e78h_v3((*A4 == 1)?___1a10e0h___185ba9h:___1a10cch___185ba9h, "no", x+200, y-7);
	

	___12cb8h__VESA101_PRESENTSCREEN();

	status = 0;
	while(!status){

		___2ab50h();
		___2ab50h();

		n = -1;
		while(++n < 0x14) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+n)+x+7+0xaa*(1-*A4), 0xc4, 0x14);

		j = -1;
		while(++j < 0x14){

			i = -1;
			while(++i < 0x14){
				
				tmp = read_b(___1a10f4h+0x190*___1a1e68h+0x14*j+i);
				if(tmp) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+j)+x+i+7+0xaa*(1-*A4), tmp);
			}
		}

		___1398ch__VESA101_PRESENTRECTANGLE(0x280*y+x+2, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*y+x+2, 0xf0, 0x1c);
		___1a1e68h++;

		if(___1a1e68h > 0x31) ___1a1e68h = 0;

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			if(A3 != 0){
			
				status = -2;
				*A4 = 0;
			}
			break;
		case DR_SCAN_Y:
		case DR_SCAN_LEFT:
		case DR_SCAN_KP_4:
			if(*A4 == 0) dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

			n = -1;
			while(++n < 0x19) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+n)+x+2, 0xc4, 0xf0);

			//___12e78h_v2(___1a10cch, ___185ba9h, "yes", x+30, y-7);
			___12e78h_v3(___1a10cch___185ba9h, "yes", x+30, y-7);
			//___12e78h_v2(___1a10e0h, ___185ba9h, "no", x+200, y-7);
			___12e78h_v3(___1a10e0h___185ba9h, "no", x+200, y-7);
			*A4 = 1;
			break;
		case DR_SCAN_N:
		case DR_SCAN_RIGHT:
		case DR_SCAN_KP_6:
			if(*A4 == 1) dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			
			n = -1;
			while(++n < 0x19) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(y+n)+x+2, 0xc4, 0xf0);

			//___12e78h_v2(___1a10e0h, ___185ba9h, "yes", x+30, y-7);
			___12e78h_v3(___1a10e0h___185ba9h, "yes", x+30, y-7);
			//___12e78h_v2(___1a10cch, ___185ba9h, "no", x+200, y-7);
			___12e78h_v3(___1a10cch___185ba9h, "no", x+200, y-7);
			*A4 = 0;
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			status = -1;
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___23758h();
#endif
			break;
		default:
			break;
		}
	}

	dRally_Sound_pushEffect(1, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

	return !!(status != -2);
}
