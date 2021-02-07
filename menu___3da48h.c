#include "drally.h"

	extern byte ___1a0d60h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___19eb50h[];
	extern byte ___24cc58h[];
	extern byte ___24cc54h[];
	extern byte kmap[];


dword GET_FILE_SIZE(const char *);
void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(dword);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
dword ___3d9c0h_cdecl(dword, dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void __VESA101_SETMODE();
void dRally_Sound_setEffectsVolume(dword vol);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_load(dword msx_t, dword msx_f, dword sfx_t, dword sfx_f, dword num_ch);
void ___606dfh(void);
void ___605deh_cdecl(dword, dword);
void ___10b80h_cdecl(const char *, dword, const char *, dword, const char *, dword, dword);
void dRally_Sound_release(void);

void menu___3da48h(void){

	long long 	ll_tmp;
	dword 	rr, gg, bb, nn, cf;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x10+0x74];
	byte * 	esp = __esp+0x10;


		strcpy(esp, "");
		strcat(esp, ___1a0d60h);
		strcat(esp, "sanim.haf");
		D(esp+0x6c) = !!GET_FILE_SIZE(esp);
		ebp = 0x32;
		edx = 0x640000;
		memcpy(D(___1a1124h__VESA101h_ScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR), 0x4b000);
		___2b318h();
		D(esp+0x70) = edx;

		while(1){

			___58c60h();
			esi = 2;
			edx = ebp;
			eax = ebp;
			edx = (int)edx>>0x1f;
			edx = (long long)(int)eax%(int)esi;
			if(edx != 0) ___13a98h_cdecl(0);
			esi = D(esp+0x70);
			ecx = 0;
			edi = 0;
			D(esp+0x64) = ecx;

			while(1){

				eax = 0;
				L(eax) = B(esp+0x64);
				nn = eax;
				edx = esi;
				eax = D(edi+___19eb50h);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				rr = eax;
				edx = esi;
				eax = D(edi+___19eb50h+4);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				gg = eax;
				edx = esi;
				eax = D(edi+___19eb50h+8);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				bb = eax;
				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				ebx = D(esp+0x64);
				ebx++;
				edi += 0xc;
				D(esp+0x64) = ebx;
			
				if((int)ebx >= 0x100) break;
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
				dRally_Sound_setMusicVolume(D(___24cc58h));
				dRally_Sound_setEffectsVolume(D(___24cc54h));
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
		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), D(___1a1124h__VESA101h_ScreenBufferA), 0x4b000);
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
			if(edx != 0) ___13a98h_cdecl(0);
			esi = 0;
			edi = 0;
			D(esp+0x64) = esi;
			esi = D(esp+0x68);

			while(1){

				eax = 0;
				L(eax) = B(esp+0x64);
				nn = eax;
				edx = esi;
				eax = D(edi+___19eb50h);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				rr = eax;
				edx = esi;
				eax = D(edi+___19eb50h+4);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				gg = eax;
				edx = esi;
				eax = D(edi+___19eb50h+8);
				ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				bb = eax;
				__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
				eax = D(esp+0x64);
				eax++;
				edi += 0xc;
				D(esp+0x64) = eax;
			
				if((int)eax >= 0x100) break;
			}

			edx = D(esp+0x6a);
			edx += 2;
			ebp++;
			W(esp+0x6a) = X(edx);
		
			if((int)ebp >= 0x32) break;
		}
}
