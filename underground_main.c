#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___1a0a50h[];
	extern __DWORD__ ___1865fch[];
	extern __POINTER__ ___1a1ea0h;
	extern __BYTE__ ___1a1ee8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1ef4h[];
	extern __BYTE__ ___1a1ef0h[];
	extern __BYTE__ ___185a40h[];
	extern __BYTE__ ___185a20h[];
	extern __BYTE__ ___185a38h_delay[];
	extern __BYTE__ ___185a28h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___185a34h[];
	extern __BYTE__ ___185a2ch[];

void ___2a608h_cdecl(const char *);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___281d0h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___2ddc8h(void);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
__DWORD__ ___2a6a8h(void);
void ___2d294h(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);
__BYTE__ ___5994ch(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___2deb0h(void);
void ___2df34h(void);
void ___2dfd0h(void);
void ___2e1b0h(void);
void underground___2e350h(void);
void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___1716ch(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
void ___17324h(void);
void ___2ab50h(void);
void ___2ed2ch(void);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
__DWORD__ dRally_Sound_getPosition(void);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
void ___2b318h(void);
void ___58c60h(void);
void dRally_Sound_setMasterVolume(__DWORD__ vol);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	eax = edx / 0x10000 * eax;
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

static void helper_palette(x655_t * p, int val, int cmin, int cmax){

	int 	n, rr, gg, bb;

	n = cmin-1;
	while(++n < cmax){

		rr = helper_color(p[n].r, val);
		gg = helper_color(p[n].g, val);
		bb = helper_color(p[n].b, val);

		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
	}
}

static void helper_continue_anim(void){

	___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
	___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, 0x60, 0x40);
	D(___1a1ee8h)++;
	
	if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
}

// ___2ee78h
void underground_main(void){

	__DWORD__ 	rr, gg, bb, nn;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	__esp[0x20+0x20];
	__BYTE__ * 	esp = __esp+0x20;
	int 		IsToBreak;
	int 		i, n;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
		i = 0;
		n = -1;
		while(++n < 0x14){

			if((i < (int)s_6c[n].points)&&(n != D(___1a1ef8h))) i = s_6c[n].points;
		}

		if(i < (int)s_6c[D(___1a1ef8h)].points) D(___1a0a50h+0xc) = 0;
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___2b318h();

	n = -1;
	while(++n < 0x33){

		___58c60h();
		dRally_Sound_setMasterVolume(0x51e*(50-n));

		if(n%2) helper_continue_anim();

		helper_palette(___19eb50h, 0x20000*(50-n), 0, 0x60);
		helper_palette(___19eb50h, 0x20000*(50-n), 0x80, 0x100);
	}

	D(___1a1ef4h) = dRally_Sound_getPosition()&0xff00;
	dRally_Sound_setPosition(0x3100);
	D(___1a1ef0h) = 5;
	___2ed2ch();

	if(D(___185a40h) == 0){
		
		___27f80h_cdecl(426, 243, 108, 114);
	}
	else {
	
		___1716ch();
	}

	___12cb8h__VESA101_PRESENTSCREEN();
	___2b318h();

	n = -1;
	while(++n < 0x33){

		___58c60h();
		dRally_Sound_setMasterVolume(0x51e*n);

		if(n%2){

			if(D(___185a40h) == 0){
				
				helper_continue_anim();
			}
			else {
			
				___13bd4h_cdecl(164, 321);
			}
		}

		helper_palette(___19eb50h, 0x20000*n, 0, 0x60);
		helper_palette(___19eb50h, 0x20000*n, 0x80, 0x100);
	}

	if(D(___185a40h) != 0){

		___17324h();
		D(___185a40h) = 0;
		___2ed2ch();
		___27f80h_cdecl(426, 243, 108, 114);
		___12cb8h__VESA101_PRESENTSCREEN();
	}

	IsToBreak = 0;
	while((IsToBreak == 0)&&(D(___185a20h) == 0)){

		___2ab50h();
		___2ab50h();
		
		if((int)D(___185a38h_delay) > 0) D(___185a38h_delay)--;

		switch(D(___1a1ef0h)){
		case 0:
			if(D(___185a38h_delay) == 1){
			
				___2d294h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 1:
			if(D(___185a38h_delay) == 1){
			
				___2d728h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 2:
			if(D(___185a38h_delay) == 1){
			
				___2d898h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 3:
			if(D(___185a38h_delay) == 1){
			
				___2da10h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 4:
			if(D(___185a38h_delay) == 1){

				___2db88h();
				___12cb8h__VESA101_PRESENTSCREEN();
			}
			break;
		case 5:
			helper_continue_anim();
			break;
		default:
			break;
		}

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			IsToBreak = -1;
			D(___185a28h) = 1;
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			underground___2e350h();
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___23758h();
#endif // DR_MULTIPLAYER
			break;
		case DR_SCAN_KP_8:
		case DR_SCAN_UP:
			___2deb0h();
			break;
		case DR_SCAN_KP_4:
		case DR_SCAN_LEFT:
			___2dfd0h();
			break;
		case DR_SCAN_KP_6:
		case DR_SCAN_RIGHT:
			___2e1b0h();
			break;
		case DR_SCAN_KP_2:
		case DR_SCAN_DOWN:
			___2df34h();
			break;
		default:
			break;
		}

		ebp = ___2a6a8h();

		if((int)ebp > 0){
		
			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101_BACKGROUND+0xf000, 0x29b80);
			___2ed2ch();
			___2b318h();

			helper_palette(___19eb50h, 0x640000, 0x20, 0x100);

			___281d0h_cdecl(426, 243, 108, 114);
			___281d0h_cdecl(10, 115, 108, 114);
			___281d0h_cdecl(10, 243, 108, 114);
			___281d0h_cdecl(114, 243, 108, 114);
			___281d0h_cdecl(218, 243, 108, 114);
			___281d0h_cdecl(322, 243, 108, 114);

			switch(D(___1a1ef0h)){
			case 0:
				___27f80h_cdecl(10, 115, 108, 114);
				___2d294h();
				break;
			case 1:
				___27f80h_cdecl(10, 243, 108, 114);
				___2d728h();
				break;
			case 2:
				___27f80h_cdecl(114, 243, 108, 114);
				___2d898h();
				break;
			case 3:
				___27f80h_cdecl(218, 243, 108, 114);
				___2da10h();
				break;
			case 4:
				___27f80h_cdecl(322, 243, 108, 114);
				___2db88h();
				break;
			case 5:
				___27f80h_cdecl(426, 243, 108, 114);
				___2ddc8h();
				break;
			default:
				break;
			}

			___135fch(0, 371, 639, 109);

#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0){

				___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
				___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
			}
#endif // DR_MULTIPLAYER

			___23230h();
			___12cb8h__VESA101_PRESENTSCREEN();
			memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
			
			switch(ebp){
			case 1:	___2a608h_cdecl("Game Saved.");
				break;
			case 2:	___2a608h_cdecl("Game Loaded.");
				break;
			case 3:	___2a608h_cdecl("Game not found.");
				break;
			default:
				break;
			}

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

#if defined(DR_MULTIPLAYER)
		if((___19bd60h != 0)&&(D(___196a84h) != 0)) IsToBreak = -1;
#endif // DR_MULTIPLAYER
	}

	D(___185a20h) = 1;

	if(D(___196a84h) == 0){
		
		if(D(___185a2ch) == 0){

			___2b318h();

			n = -1;
			while(++n < 0x33){

				___58c60h();

				if(IsToBreak == -1){

					if((n%2)&&(D(___1a1ef0h) == 5)) helper_continue_anim();
					dRally_Sound_setMasterVolume(0x51e*(50-n));
				}

				helper_palette(___19eb50h, 0x20000*(50-n), 0, 0x60);
				helper_palette(___19eb50h, 0x20000*(50-n), 0x80, 0x100);
			}
		}
	}
	else {

		D(___185a34h) = 1;
	}
}
