#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___1a0d60h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ kmap[];


__DWORD__ GET_FILE_SIZE(const char *);
void ___2b318h(void);
void ___58c60h(void);
void menu___13a98h(__DWORD__);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
int ___3d9c0h_cdecl(const char *, const char *, int);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void __VESA101_SETMODE();
void dRally_Sound_setEffectsVolume(__DWORD__ vol);
__BYTE__ dRally_Sound_setPosition(__DWORD__ pos_n);
void dRally_Sound_setSampleRate(__DWORD__ freq);
void dRally_Sound_play(void);
void dRally_Sound_setMusicVolume(__DWORD__ vol);
void dRally_Sound_load(__DWORD__ msx_t, const char * msx_f, __DWORD__ sfx_t, const char * sfx_f, __DWORD__ num_ch);
void ___606dfh(void);
void ___605deh_cdecl(__DWORD__, __DWORD__);
void ___10b80h_cdecl(const char *, __DWORD__, const char *, __DWORD__, const char *, __DWORD__, __DWORD__);
void dRally_Sound_release(void);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	long long 	ll_tmp;

	ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

void menu___3da48h(void){

	long long 	ll_tmp;
	__DWORD__ 	rr, gg, bb, nn, cf;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	__esp[0x10+0x74];
	__BYTE__ * 	esp = __esp+0x10;


		strcpy(esp, "");
		strcat(esp, ___1a0d60h);
		strcat(esp, "sanim.haf");
		D(esp+0x6c) = !!GET_FILE_SIZE(esp);
		ebp = 0x32;
		edx = 0x640000;
		memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
		___2b318h();
		D(esp+0x70) = edx;

		while(1){

			___58c60h();
			esi = 2;
			edx = ebp;
			eax = ebp;
			edx = (int)edx>>0x1f;
			edx = (long long)(int)eax%(int)esi;
			if(edx != 0) menu___13a98h(0);	// SPINNING TIRE ICON
			esi = D(esp+0x70);
			ecx = 0;
			D(esp+0x64) = 0;

			while(1){

				nn = D(esp+0x64);
				rr = helper_color(___19eb50h[D(esp+0x64)].r, esi);
				gg = helper_color(___19eb50h[D(esp+0x64)].g, esi);
				bb = helper_color(___19eb50h[D(esp+0x64)].b, esi);

				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				D(esp+0x64)++;
				if((int)D(esp+0x64) >= 0x100) break;
			}

			ebx = D(esp+0x70);
			ebx -= 0x20000;
			ebp--;
			D(esp+0x70) = ebx;
		
			if((int)ebp < 0) break;
		}

		while(1){

			if(___3d9c0h_cdecl("slide03.pal", "slide03.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("slide04.pal", "slide04.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("slide01.pal", "slide01.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("slide02.pal", "slide02.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("slide05.pal", "slide05.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("credit1.pal", "credit1.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("credit2.pal", "credit2.bpk", 0xa)) break;
			if(___3d9c0h_cdecl("apogee.pal", "apogee.bpk", 2)) break;
			if(___3d9c0h_cdecl("gtlogo4.pal", "gtlogo4.bpk", 2)) break;
			if(___3d9c0h_cdecl("remedy.pal", "remedy.bpk", 2)) break;
			if(___3d9c0h_cdecl("startscr.pal", "startscr.bpk", 0xa)) break;

			if(D(esp+0x6c) == 1){

				dRally_Sound_release();
				___10b80h_cdecl("sanim.haf", 1, "tr0-mus.cmf", 2, "sanim-e.cmf", 1, 0x78);
				dRally_Sound_release();
				dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
				dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
				dRally_Sound_setEffectsVolume(___24cc54h_sfx_volume);
				dRally_Sound_setPosition(0x2d00);
				dRally_Sound_setSampleRate(0x5622);
				dRally_Sound_play();
				___606dfh();
				__VESA101_SETMODE();
				___605deh_cdecl(0x3c, 0);
			}
			
			if(B(kmap+1) == 1) break;
		}

		___2b318h();
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
		ebp = 0;
		___12cb8h__VESA101_PRESENTSCREEN();
		D(esp+0x68) = ebp;

		while(1){

			___58c60h();
			esi = 2;
			edx = ebp;
			eax = ebp;
			edx = (int)edx>>0x1f;
			edx = (long long)(int)eax%(int)esi;
			if(edx != 0) menu___13a98h(0);	// SPINNING TIRE ICON
			esi = 0;
			D(esp+0x64) = 0;
			esi = D(esp+0x68);

			while(1){

				nn = D(esp+0x64);
				rr = helper_color(___19eb50h[D(esp+0x64)].r, esi);
				gg = helper_color(___19eb50h[D(esp+0x64)].g, esi);
				bb = helper_color(___19eb50h[D(esp+0x64)].b, esi);
				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				D(esp+0x64)++;
				if((int)D(esp+0x64) >= 0x100) break;
			}

			edx = D(esp+0x68);
			edx += 0x20000;
			ebp++;
			D(esp+0x68) = edx;
		
			if((int)ebp >= 0x32) break;
		}
}
