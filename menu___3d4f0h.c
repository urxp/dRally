#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ ___1a54d0h[];

void ___2b318h(void);
void ___58c60h(void);
void menu___13a98h(__DWORD__);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
__BYTE__ ___5994ch(void);
void ___3d2bch(void);
void ___3d154h(const char * pal_name);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);


static __DWORD__ helper_color(__DWORD__ A0, __DWORD__ A1){

	__DWORD__ 	eax, edx;

	eax = A0;
	edx = A1;
	eax = edx / 0x10000 * eax;
	eax += 0x8000;
	eax = (int)eax>>0x10;
	eax &= 0xff;

	return eax;
}

void menu___3d4f0h(void){

	__DWORD__ 	rr, gg, bb, nn;
	int 	i, n;


	memcpy(___1a1124h__VESA101h_ScreenBufferA, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 0x4b000);
	___2b318h();

	i = -1;
	while(++i <= 0x32){

		___58c60h();
		if((0x32-i)%2) menu___13a98h(0);	// SPINNING TIRE ICON

		n = -1;
		while(++n < 0x100){

			rr = helper_color(___19eb50h[n].r, 0x20000*(0x32-i));
			gg = helper_color(___19eb50h[n].g, 0x20000*(0x32-i));
			bb = helper_color(___19eb50h[n].b, 0x20000*(0x32-i));

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
		if(i%2) menu___13a98h(0);	// SPINNING TIRE ICON

		n = -1;
		while(++n < 0x100){

			rr = helper_color(___19eb50h[n].r, 0x20000*i);
			gg = helper_color(___19eb50h[n].g, 0x20000*i);
			bb = helper_color(___19eb50h[n].b, 0x20000*i);

			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, n);
		}
	}
}
