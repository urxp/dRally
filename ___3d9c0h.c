#include "drally.h"
#include "drally_keyboard.h"

	extern __BYTE__ ___1a54d0h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void bpk_decode2(void *, void *);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___3d1f0h(void);
void __VRETRACE_WAIT_FOR_START(void);
byte ___5994ch(void);
void ___3d2bch(void);
void old_bpa_read(const char *, void *, const char *);
void ___3d154h(const char * pal_name);

// LOAD SLIDE PALETTE
int ___3d9c0h_cdecl(const char * A1, const char * A2, int A3){

	__BYTE__ 	scan;
	int 		n;


	___3d154h(A1);
	old_bpa_read("MENU.BPA", ___1a54d0h, A2);
	bpk_decode2(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a54d0h);
	___12cb8h__VESA101_PRESENTSCREEN();
	___3d1f0h();
	n = 0x3c*A3;

	scan = 0;
	while(1){

		if(n <= 0) break;
		__VRETRACE_WAIT_FOR_START();
		scan = ___5994ch();
		n--;
		if(scan != 0) break;
	}

	___3d2bch();

	if((scan == DR_SCAN_ENTER)||(scan == DR_SCAN_SPACE)||(scan == DR_SCAN_KP_ENTER)) return 0;
	if(scan != DR_SCAN_ERROR) return 1;

	return 0;
}
