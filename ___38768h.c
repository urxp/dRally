#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___196bd8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___38708h(void);

// RACE RESULTS, PRESS ANY KEY TO CONTINUE BLINKING
void ___38768h(void){


	D(___196bd8h)++;

	if(D(___196bd8h) == 0x1e){

		___38708h();
		___12e78h_v3(___1a10fch___185c0bh, "Press any key to continue...", 366, 452);
		___1398ch__VESA101_PRESENTRECTANGLE(0x46b62, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x46b62, 0x10e, 0x10);
	}

	if(D(___196bd8h) == 0x3c){

		___38708h();
		___12e78h_v3(___1a1108h___185c0bh, "Press any key to continue...", 366, 452);
		___1398ch__VESA101_PRESENTRECTANGLE(0x46b62, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x46b62, 0x10e, 0x10);
		D(___196bd8h) = 0;
	}
}
