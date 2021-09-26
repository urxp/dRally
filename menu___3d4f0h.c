#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern byte ___19eb50h[];
	extern byte ___1a54d0h[];

void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(dword);
void old_bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
byte ___5994ch(void);
void ___3d2bch(void);
void ___3d154h(const char * pal_name);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);


static __DWORD__ helper_color(__DWORD__ A0, __DWORD__ A1){

	long long 	ll_tmp;
	__DWORD__ 	eax, edx;

	eax = A0;
	edx = A1;
	ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax >> 0x10)|(edx << 0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;
	eax &= 0xff;

	return eax;
}

void menu___3d4f0h(void){

	dword 	rr, gg, bb, nn;
	int 	i, n;


	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___2b318h();

	i = -1;
	while(++i <= 0x32){

		___58c60h();
		if((0x32-i)%2) ___13a98h_cdecl(0);

		n = -1;
		while(++n < 0x100){

			rr = helper_color(D(___19eb50h+0xc*n+0), 0x20000*(0x32-i));
			gg = helper_color(D(___19eb50h+0xc*n+4), 0x20000*(0x32-i));
			bb = helper_color(D(___19eb50h+0xc*n+8), 0x20000*(0x32-i));

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}
	}

	___3d154h("credit1.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "credit1.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	while(!___5994ch());
	___3d2bch();
	___3d154h("credit2.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "credit2.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	while(!___5994ch());
	___3d2bch();
	___2b318h();
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
	___12cb8h__VESA101_PRESENTSCREEN();

	i = -1;
	while(++i <= 0x32){

		___58c60h();
		if(i%2) ___13a98h_cdecl(0);

		n = -1;
		while(++n < 0x100){

			rr = helper_color(D(___19eb50h+0xc*n+0), 0x20000*i);
			gg = helper_color(D(___19eb50h+0xc*n+4), 0x20000*i);
			bb = helper_color(D(___19eb50h+0xc*n+8), 0x20000*i);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}
	}
}
