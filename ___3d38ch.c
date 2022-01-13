#include "drally.h"

	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___3d154h(const char * pal_name);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___58c60h(void);
void ___3d2bch(void);
__BYTE__ ___5994ch(void);

void ___3d38ch(void){

	__DWORD__ 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

	___3d154h("apogee.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "apogee.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();

	___3d154h("gtlogo4.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "gtlogo4.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();

	___3d154h("remedy.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "remedy.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = -1;
	while((++n < 0xb4)&&!(n&&___5994ch())) ___58c60h();
	___3d2bch();  
}
