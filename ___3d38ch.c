#include "drally.h"

	extern byte ___1a54d0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];

void ___3d154h(const char * pal_name);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void old_bpa_read(const char *, void *, const char *);
void bpk_decode2(void *, void *);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___58c60h(void);
void ___3d2bch(void);
byte ___5994ch(void);

void ___3d38ch(void){

	dword 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

	___3d154h("apogee.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "apogee.bpk");
	bpk_decode2(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();

	___3d154h("gtlogo4.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "gtlogo4.bpk");
	bpk_decode2(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();

	___3d154h("remedy.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "remedy.bpk");
	bpk_decode2(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();  
}
