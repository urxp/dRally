#include "drally.h"
#include "drally_fonts.h"
#include "drally_keyboard.h"

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
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
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

	long long 	ll_tmp;

	ll_tmp = (long long)(int)eax*(int)edx;
	edx = ll_tmp>>0x20;
	eax = ll_tmp;
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax>>0x10)|(edx<<0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

// ___2ee78h
void underground_main(void){

	long long ll_tmp;
	__DWORD__ 	rr, gg, bb, nn;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	__esp[0x20+0x20];
	__BYTE__ * 	esp = __esp+0x20;
	int 		i, n;


#if defined(DR_MULTIPLAYER)
	if(___19bd60h == 0){
#endif // DR_MULTIPLAYER
		i = 0;
		n = -1;
		while(++n < 0x14){

			if((i < (int)D(___1a01e0h+0x6c*n+0x44))&&(n != D(___1a1ef8h))) i = D(___1a01e0h+0x6c*n+0x44);
		}

		if(i < (int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x44)) D(___1a0a50h+0xc) = 0;
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___2b318h();
	ebp = 0x32;
	D(esp+0x10) = 0xffdc;
	D(esp+0x14) = 0x640000;

	while(1){

		___58c60h();
		dRally_Sound_setMasterVolume(D(esp+0x10));

		if(ebp%2){

			___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
			___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, 0x60, 0x40);
			D(___1a1ee8h)++;
			
			if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
		}

		esi = D(esp+0x14);
		ecx = 0;
		D(esp) = 0;

		while(1){

			nn = B(esp);
			rr = helper_color(___19eb50h[D(esp)].r, esi);
			gg = helper_color(___19eb50h[D(esp)].g, esi);
			bb = helper_color(___19eb50h[D(esp)].b, esi);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			D(esp)++;
			if((int)D(esp) >= 0x60) break;
		}

		ebx = 0x80;
		esi = D(esp+0x14);
		D(esp) = 0;

		while(1){

			nn = D(esp)+0x80;
			rr = helper_color(___19eb50h[D(esp)+0x80].r, esi);
			gg = helper_color(___19eb50h[D(esp)+0x80].g, esi);
			bb = helper_color(___19eb50h[D(esp)+0x80].b, esi);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			D(esp)++;
			if((int)D(esp) >= 0x80) break;
		}

		ebx = D(esp+0x14);
		edx = D(esp+0x10);
		ebp--;
		ebx -= 0x20000;
		edx -= 0x51e;
		D(esp+0x14) = ebx;
		D(esp+0x10) = edx;
		if((int)ebp < 0) break;
	}

	eax = dRally_Sound_getPosition();
	eax &= 0xff00;
	D(___1a1ef4h) = eax;
	eax = 0x3100;
	ecx = 5;
	dRally_Sound_setPosition(eax);
	D(___1a1ef0h) = ecx;
	___2ed2ch();

	if(D(___185a40h) == 0){

		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
	}

	if(D(___185a40h) != 0) ___1716ch();
	___12cb8h__VESA101_PRESENTSCREEN();
	ebp = 0;
	___2b318h();
	D(esp+0x18) = ebp;
	D(esp+8) = ebp;

	while(1){

		___58c60h();
		eax = D(esp+0x18);
		ebx = 2;
		dRally_Sound_setMasterVolume(eax);
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;

		if(edx != 0){

			if(D(___185a40h) == 0){

				edx = 0x10d;
				eax = 0x1b0;
				ebx = D(___1a1ee8h);
				___259e0h_cdecl(eax, edx, ebx, ___1a1ea0h, ___1865fch);
				ecx = 0x40;
				ebx = 0x60;
				eax = 0x2a230;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, ebx, ecx);
				ecx = D(___1a1ee8h);
				ecx++;
				D(___1a1ee8h) = ecx;
				
				if((int)ecx > 0x16){
				
					edi = 0;
					D(___1a1ee8h) = edi;
				}
			}
		}

		ebx = 2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;

		if(edx != 0){

			if(D(___185a40h) != 0){
			
				edx = 0x141;
				eax = 0xa4;
				___13bd4h_cdecl(eax, edx);
			}
		}

		esi = D(esp+8);
		edx = 0;
		edi = 0;
		D(esp) = 0;

		while(1){

			nn = B(esp);
			rr = helper_color(___19eb50h[D(esp)].r, esi);
			gg = helper_color(___19eb50h[D(esp)].g, esi);
			bb = helper_color(___19eb50h[D(esp)].b, esi);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			edi += 0xc;
			D(esp)++;
			if((int)D(esp) >= 0x60) break;
		}

		esi = 0x80;
		D(esp) = 0;
		esi = D(esp+8);

		while(1){

			nn = D(esp)+0x80;
			rr = helper_color(___19eb50h[D(esp)+0x80].r, esi);
			gg = helper_color(___19eb50h[D(esp)+0x80].g, esi);
			bb = helper_color(___19eb50h[D(esp)+0x80].b, esi);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			D(esp)++; 
			if((int)D(esp) >= 0x80) break;
		}

		edx = D(esp+0xa);
		ebx = D(esp+0x18);
		ebp++;
		edx += 2;
		ebx += 0x51e;
		W(esp+0xa) = X(edx);
		D(esp+0x18) = ebx;
		if((int)ebp >= 0x32) break;
	}

	if(D(___185a40h) != 0){

		___17324h();
		ecx = 0x72;
		ebx = 0x6c;
		esi = 0;
		edx = 0xf3;
		D(___185a40h) = esi;
		___2ed2ch();
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
	}

	edi = 0;
	D(esp+4) = edi;

	while(1){

		if(D(___185a20h) != 0) break;

		___2ab50h();
		___2ab50h();
		eax = D(___185a38h_delay);
		
		if((int)eax > 0){
		
			edx = eax-1;
			D(___185a38h_delay) = edx;
		}

		eax = D(___1a1ef0h);

		switch(eax){
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
			edx = 0x10d;
			eax = 0x1b0;
			ebx = D(___1a1ee8h);
			___259e0h_cdecl(eax, edx, ebx, ___1a1ea0h, ___1865fch);
			ecx = 0x40;
			ebx = 0x60;
			eax = 0x2a230;
			___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, ebx, ecx);
			ebx = D(___1a1ee8h);
			ebx++;
			D(___1a1ee8h) = ebx;

			if((int)ebx > 0x16){
				
				esi = 0;
				D(___1a1ee8h) = esi;
			}
			break;
		default:
			break;
		}

		L(eax) = ___5994ch();
		switch(L(eax)){
		case DR_SCAN_ESCAPE:
			edi = 0xffffffff;
			esi = 1;
			D(esp+4) = edi;
			D(___185a28h) = esi;
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

		eax = ___2a6a8h();
		ebp = eax;

		if((int)eax > 0){
		
			ecx = 0x29b80;
			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf000, ___1a1138h__VESA101h_DefaultScreenBufferB+0xf000, ecx);
			___2ed2ch();
			___2b318h();
			eax = 0x20;
			edi = 0x640000;
			D(esp) = 0;

			while(1){

				nn = D(esp)+0x20;
				rr = helper_color(___19eb50h[D(esp)+0x20].r, edi);
				gg = helper_color(___19eb50h[D(esp)+0x20].g, edi);
				bb = helper_color(___19eb50h[D(esp)+0x20].b, edi);

				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				D(esp)++;
				if((int)D(esp) >= 0xe0) break;
			}

			___281d0h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
			___281d0h_cdecl(0xa, 0x73, 0x6c, 0x72);
			___281d0h_cdecl(0xa, 0xf3, 0x6c, 0x72);
			___281d0h_cdecl(0x72, 0xf3, 0x6c, 0x72);
			___281d0h_cdecl(0xda, 0xf3, 0x6c, 0x72);
			___281d0h_cdecl(0x142, 0xf3, 0x6c, 0x72);

			if(D(___1a1ef0h) == 0){

				___27f80h_cdecl(0xa, 0x73, 0x6c, 0x72);
				___2d294h();
			}

			if(D(___1a1ef0h) == 1){

				___27f80h_cdecl(0xa, 0xf3, 0x6c, 0x72);
				___2d728h();
			}

			if(D(___1a1ef0h) == 2){

				___27f80h_cdecl(0x72, 0xf3, 0x6c, 0x72);
				___2d898h();
			}

			if(D(___1a1ef0h) == 3){
			
				___27f80h_cdecl(0xda, 0xf3, 0x6c, 0x72);
				___2da10h();
			}

			if(D(___1a1ef0h) == 4){

				___27f80h_cdecl(0x142, 0xf3, 0x6c, 0x72);
				___2db88h();
			}

			if(D(___1a1ef0h) == 5){

				___27f80h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);
				___2ddc8h();
			}

			ecx = 0x6d;
			ebx = 0x27f;
			edx = 0x173;
			eax = 0;
			___135fch(eax, edx, ebx, ecx);

#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0){

				___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
				___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
			}
#endif // DR_MULTIPLAYER

			___23230h();
			___12cb8h__VESA101_PRESENTSCREEN();
			memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
			if(ebp == 1) ___2a608h_cdecl("Game Saved.");
			if(ebp == 2) ___2a608h_cdecl("Game Loaded.");
			if(ebp == 3) ___2a608h_cdecl("Game not found.");
			ecx = 0x4b000;
			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, ecx);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

#if defined(DR_MULTIPLAYER)
		if(___19bd60h != 0){

			if(D(___196a84h) != 0) D(esp+4) = 0xffffffff;
		}
#endif // DR_MULTIPLAYER

		if(D(esp+4) != 0) break;
	}

___2f8ach:
	edx = 1;
	ebx = D(___196a84h);
	D(___185a20h) = edx;
	if(ebx != 0) D(___185a34h) = edx;

	if((D(___196a84h) == 0)&&(D(___185a2ch) == 0)){

		___2b318h();
		ebp = 0x32;
		eax = 0xffdc;
		edx = 0x640000;
		D(esp+0xc) = eax;
		D(esp+0x1c) = edx;

		while(1){

			___58c60h();
			eax = ebp;
			edx = (int)eax>>0x1f;
			edx = (long long)(int)eax%2;

			if(edx != 0){

				if(D(___1a1ef0h) == 5){

					if(D(esp+4) == -1){

						___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
						___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, 0x60, 0x40);
						D(___1a1ee8h)++;
						
						if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
					}
				}
			}

			if(D(esp+4) == -1) dRally_Sound_setMasterVolume(D(esp+0xc));

			esi = D(esp+0x1c);
			ebx = 0;
			edi = 0;
			D(esp) = 0;

			while(1){

				nn = B(esp);
				rr = helper_color(___19eb50h[D(esp)].r, esi);
				gg = helper_color(___19eb50h[D(esp)].g, esi);
				bb = helper_color(___19eb50h[D(esp)].b, esi);

				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				edi += 0xc;
				D(esp)++;
				if((int)D(esp) >= 0x60) break;
			}

			edx = 0x80;
			esi = D(esp+0x1c);
			D(esp) = 0;

			while(1){

				nn = D(esp)+0x80;
				rr = helper_color(___19eb50h[D(esp)+0x80].r, esi);
				gg = helper_color(___19eb50h[D(esp)+0x80].g, esi);
				bb = helper_color(___19eb50h[D(esp)+0x80].b, esi);

				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				D(esp)++;
				if((int)D(esp) >= 0x80) break;
			}

			edi = D(esp+0x1c);
			esi = D(esp+0xc);
			ebp--;
			edi -= 0x20000;
			esi -= 0x51e;
			D(esp+0x1c) = edi;
			D(esp+0xc) = esi;
			if((int)ebp < 0) break;
		}
	}

	return;
}
