#include "drally.h"

	extern byte ___1a54d0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];

void ___3d154h(const char * pal_name);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void bpa_read(const char *, void *, const char *);
void bpk_decode2_cdecl(void *, void *);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void __WAIT_5(void);

void ___3d890h(void){

	dword 	n;

	n = -1;
	while(++n < 0x100) __DISPLAY_SET_PALETTE_COLOR(0, 0, 0, n);

	___3d154h("startscr.pal");
	bpa_read("MENU.BPA", ___1a54d0h, "startscr.bpk");
	bpk_decode2_cdecl(D(___1a112ch__VESA101_ACTIVESCREEN_PTR), ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	__WAIT_5();
}
