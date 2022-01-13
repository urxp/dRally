#include "drally.h"

	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___3d154h(const char * pal_name);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void __WAIT_5(void);

void ___3d890h(void){

	__DWORD__ 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

	___3d154h("startscr.pal");
	old_bpa_read("MENU.BPA", ___1a54d0h, "startscr.bpk");
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	__WAIT_5();
}
