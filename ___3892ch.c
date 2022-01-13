#include "drally.h"
#include "drally_fonts.h"
#include "sfx.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___196a74h[];
	extern __BYTE__ ___1a2147h[];
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fbch;
	extern __POINTER__ ___1a0fd8h;
	extern __BYTE__ ___185a28h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196ab4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___185a4ch[];
	extern __BYTE__ ___1a0d60h[];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196a98h[];

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void dRally_Sound_release(void);
void ___38708h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___36068h_cdecl(__DWORD__ A1);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void ___36358h_cdecl(__DWORD__ A1);
void ___36718h_cdecl(__DWORD__ A1);
void ___30a84h_cdecl(__DWORD__ A1, __DWORD__ A2);
void ___30c60h_cdecl(__DWORD__ A1);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___2ab50h(void);
void ___38768h(void);
__BYTE__ ___5994ch(void);
void ___36adch(void);
void ___37ed4h_cdecl(__DWORD__);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___58c60h(void);
void __VESA101_SETMODE(void);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void ___606dfh(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void ___10b80h_cdecl(const char *, __DWORD__, const char *, __DWORD__, const char *, __DWORD__, __DWORD__);
__DWORD__ GET_FILE_SIZE(const char *);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	___imul32((__POINTER__)&eax, (__POINTER__)&edx, edx);
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax>>0x10)|(edx<<0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

void ___3892ch_cdecl(__DWORD__ A1, __DWORD__ A2){

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn, p5, p6, p7;
	__BYTE__ 	esp[0x70];

	__POINTER__ 	ebxp;
	__POINTER__ 	esip;

	eax = A1;
	edx = A2;
	D(esp+0x64) = eax;
	ebx = D(esp+0x64);
	edx ^= edx;
	H(eax) = 0;
	D(___196a74h) = edx;
	B(___1a2147h) = H(eax);

	if(ebx != 2){

		ecx = 0x4b000;
		edx = 0x36;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, ecx);
		ecx = 0x182;
		esip = ___1a0fbch;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd32c;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		ecx = 0x182;
		edx = 0x110;
		esip = ___1a0fd8h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd362;

		while(1){

			edi = edx;
		
			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		ebp = 0;
		___37ed4h_cdecl(0x14);
		D(esp+0x6c) = ebp;
		___36068h_cdecl(0);
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			if(D(___185a28h) != 0) dRally_Sound_setMasterVolume(ebp);

			___58c60h();

			D(esp+0x68) = 0;
			while(1){

				nn = B(esp+0x68);
				rr = helper_color(___19eb50h[D(esp+0x68)].r, D(esp+0x6c));
				gg = helper_color(___19eb50h[D(esp+0x68)].g, D(esp+0x6c));
				bb = helper_color(___19eb50h[D(esp+0x68)].b, D(esp+0x6c));
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x100) break;
			}

			ebp += 0x51e;
			D(esp+0x6c) += 0x20000;
			if(D(esp+0x6c) == 0x640000) break;
		}

		ecx ^= ecx;
		D(___185a28h) = ecx;

		while(1){

			___2ab50h();
			___38768h();
			L(eax) = ___5994ch();
			L(edx) = L(eax);
			if(L(eax) != 0) break;
		}

		if(L(eax) != 1) L(edx) ^= L(eax);

		eax ^= eax;
		L(eax) = L(edx);
		___36358h_cdecl(eax);

		if(L(edx) == 0){

			while(1){

				___2ab50h();
				___38768h();
				L(eax) = ___5994ch();
				L(edx) = L(eax);
				if(L(eax) != 0) break;
			}

			if(L(eax) != 1) L(edx) ^= L(eax);
		}

		eax ^= eax;
		L(eax) = L(edx);
		___36718h_cdecl(eax);

		if(L(edx) == 0){

			while(1){

				___2ab50h();
				___38768h();
				L(eax) = ___5994ch();
				if(L(eax) != 0) break;
			}
		}

		edx = 0x13;
		eax ^= eax;
		___30a84h_cdecl(eax, edx);
		eax = 0x14;
		___30c60h_cdecl(eax);
		___36adch();
		eax = 0x14;
		esi = D(esp+0x64);
		___37ed4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();

		if(esi == 0){

			edx = D(___1a1ef8h);
			D(esp+0x68) = esi;
			eax ^= eax;

			while(1){

				ebp = D(eax+___1a01e0h+0x44);
				
				if((int)esi < (int)ebp){
				
					if(edx != D(esp+0x68)) esi = ebp;
				}

				ebx = D(esp+0x68);
				ebx++;
				eax += 0x6c;
				D(esp+0x68) = ebx;
				if((int)ebx >= 0x14) break;
			}

			edi = D(___1a1ef8h);
			eax = 8*edi;
			eax -= edi;
			eax <<= 0x2;
			eax -= edi;
			
			if((int)esi < (int)D(eax*4+___1a01e0h+0x44)){
			
				if(D(___196ab4h) == 0) B(___1a2147h) = 1;
			}

			edi = D(___1a1ef8h);
			eax = 8*edi;
			eax -= edi;
			eax <<= 0x2;
			eax -= edi;
			L(eax) = !!((int)esi < (int)D(eax*4+___1a01e0h+0x44));
			ecx = 0x46b6e;
			eax &= 0xff;
			D(___196ab4h) = eax;
			___38708h();
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Please wait while loading...", ecx);
			___12cb8h__VESA101_PRESENTSCREEN();
			___1240ch();
			___24548h();
			___2faf0h();
			___38708h();
			dRally_Sound_pushEffect(1, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
			ecx = 0x46b6e;
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press any key to continue...", ecx);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

		if(D(esp+0x64) == 1){
		
			ecx = 0x46b6e;
			___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press any key to continue...", 0x46b6e);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

		while(1){

			___2ab50h();
			___38768h();
			L(eax) = ___5994ch();
			if(L(eax) != 0) break;
		}
	}
	else {
	
		___36adch();
		___37ed4h_cdecl(0x14);
		ebp = 0;
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press any key to continue...", 0x46b6e);
		___12cb8h__VESA101_PRESENTSCREEN();
		___2b318h();

		while(1){

			___58c60h();

			D(esp+0x68) = 0;
			while(1){

				nn = B(esp+0x68);
				rr = helper_color(___19eb50h[D(esp+0x68)].r, ebp);
				gg = helper_color(___19eb50h[D(esp+0x68)].g, ebp);
				bb = helper_color(___19eb50h[D(esp+0x68)].b, ebp);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x60) break;
			}

			D(esp+0x68) = 0;
			while(1){

				nn = D(esp+0x68)+0x80;
				rr = helper_color(___19eb50h[D(esp+0x68)+0x80].r, ebp);
				gg = helper_color(___19eb50h[D(esp+0x68)+0x80].g, ebp);
				bb = helper_color(___19eb50h[D(esp+0x68)+0x80].b, ebp);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x80) break;
			}

			ebp += 0x20000;
			if(ebp == 0x640000) break;
		}

		while(1){

			___2ab50h();
			___38768h();
			if(___5994ch() != 0) break;
		}

		___2b318h();
		ebp = 0x640000;

		while(1){

			___58c60h();

			D(esp+0x68) = 0;
			while(1){

				nn = B(esp+0x68);
				rr = helper_color(___19eb50h[D(esp+0x68)].r, ebp);
				gg = helper_color(___19eb50h[D(esp+0x68)].g, ebp);
				bb = helper_color(___19eb50h[D(esp+0x68)].b, ebp);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x60) break;
			}

			D(esp+0x68) = 0;
			while(1){

				nn = D(esp+0x68)+0x80;
				rr = helper_color(___19eb50h[D(esp+0x68)+0x80].r, ebp);
				gg = helper_color(___19eb50h[D(esp+0x68)+0x80].g, ebp);
				bb = helper_color(___19eb50h[D(esp+0x68)+0x80].b, ebp);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x80) break;
			}

			ebp -= 0x20000;
			if(ebp == 0xfffe0000) break;
		}
	}

	if((D(esp+0x64) == 2)||((D(___185a14h_UseWeapons) != 0)&&(D(___185a3ch) == 0)&&(D(___185a4ch) != 0))){

		___2b318h();
		ebp = 0x640000;

		while(1){

			___58c60h();

			if(B(___1a2147h) == 1){

				D(esp+0x68) = 0;
				while(1){

					nn = B(esp+0x68);
					rr = helper_color(___19eb50h[D(esp+0x68)].r, ebp);
					gg = helper_color(___19eb50h[D(esp+0x68)].g, ebp);
					bb = helper_color(___19eb50h[D(esp+0x68)].b, ebp);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
					D(esp+0x68)++;
					if((int)D(esp+0x68) >= 0x100) break;
				}
			}

			ebp -= 0x20000;
			if(ebp == 0xfffe0000) break;
		}

		if(B(___1a2147h) == 1){

			dRally_Sound_release();

			eax = GET_FILE_SIZE(strcat(strcpy(esp, ___1a0d60h), "endani0.haf"));
			if((int)eax > 0){

				___10b80h_cdecl("endani0.haf", 1, "tr0-mus.cmf", 2, "endani0e.cmf", 1, 0x78);
				dRally_Sound_release();
			}

			dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
			dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
			dRally_Sound_setSampleRate(0x5622);
			dRally_Sound_play();
			B(___1a2147h) = 0;
			___606dfh();
			__VESA101_SETMODE();
			___2b318h();
			___605deh_cdecl(0x46, 0);
			D(___196aa0h) = 0;
			D(___196a9ch) = 0;
			D(___196a98h) = 0;

			D(esp+0x68) = 0;
			while(1){

				nn = D(esp+0x68)+0x60;
				rr = helper_color(___19eb50h[D(esp+0x68)+0x60].r, 0x640000);
				gg = helper_color(___19eb50h[D(esp+0x68)+0x60].g, 0x640000);
				bb = helper_color(___19eb50h[D(esp+0x68)+0x60].b, 0x640000);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x20) break;
			}
		}
	}
	else {

		___2b318h();
		ebp = 0x640000;

		while(1){

			___58c60h();

			if(B(___1a2147h) != 1){

				D(esp+0x68) = 0;
				while(1){

					nn = B(esp+0x68);
					rr = helper_color(___19eb50h[D(esp+0x68)].r, ebp);
					gg = helper_color(___19eb50h[D(esp+0x68)].g, ebp);
					bb = helper_color(___19eb50h[D(esp+0x68)].b, ebp);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
					D(esp+0x68)++;
					if((int)D(esp+0x68) >= 0x60) break;
				}

				D(esp+0x68) = 0;
				while(1){

					nn = D(esp+0x68)+0x80;
					rr = helper_color(___19eb50h[D(esp+0x68)+0x80].r, ebp);
					gg = helper_color(___19eb50h[D(esp+0x68)+0x80].g, ebp);
					bb = helper_color(___19eb50h[D(esp+0x68)+0x80].b, ebp);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
					D(esp+0x68)++;
					if((int)D(esp+0x68) >= 0x80) break;
				}
			}
			else {

				D(esp+0x68) = 0;
				while(1){

					nn = B(esp+0x68);
					rr = helper_color(___19eb50h[D(esp+0x68)].r, ebp);
					gg = helper_color(___19eb50h[D(esp+0x68)].g, ebp);
					bb = helper_color(___19eb50h[D(esp+0x68)].b, ebp);
					__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
					D(esp+0x68)++;
					if((int)D(esp+0x68) >= 0x100) break;
				}
			}

			ebp -= 0x20000;
			if(ebp == 0xfffe0000) break;
		}

		if(B(___1a2147h) == 1){

			dRally_Sound_release();
			strcpy(esp, "");
			strcat(esp, ___1a0d60h);
			strcat(esp, "endani0.haf");
			eax = GET_FILE_SIZE(esp);

			if((int)eax > 0){

				___10b80h_cdecl("endani0.haf", 0x1, "tr0-mus.cmf", 0x2, "endani0e.cmf", 1, 0x78);
				dRally_Sound_release();
			}

			dRally_Sound_load(0x1, "MEN-MUS.CMF", 0x2, "MEN-SAM.CMF", 5);
			dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
			dRally_Sound_setSampleRate(0x5622);
			dRally_Sound_play();
			B(___1a2147h) = 0;
			___606dfh();
			__VESA101_SETMODE();
			___2b318h();
			___605deh_cdecl(0x46, 0);

			D(esp+0x68) = 0;
			while(1){

				nn = B(esp+0x68)+0x60;
				rr = helper_color(___19eb50h[D(esp+0x68)+0x60].r, 0x640000);
				gg = helper_color(___19eb50h[D(esp+0x68)+0x60].g, 0x640000);
				bb = helper_color(___19eb50h[D(esp+0x68)+0x60].b, 0x640000);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x20) break;
			}
		}
	}

	___5994ch();
	D(___196a74h) = 1;
	return;
}
