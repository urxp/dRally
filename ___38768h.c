#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___196bd8h[];
	extern byte ___185c0bh[];
	extern void * ___1a10fch;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1108h;

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___38708h(void);

// RACE RESULTS, PRESS ANY KEY TO CONTINUE BLINKING
void ___38768h(void){


	D(___196bd8h)++;

	if(D(___196bd8h) == 0x1e){

		___38708h();
		___12e78h_cdecl(___1a10fch, ___185c0bh, "Press any key to continue...", 0x46b6e);
		___1398ch__VESA101_PRESENTRECTANGLE(0x46b62, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x46b62, 0x10e, 0x10);
	}

	if(D(___196bd8h) == 0x3c){

		___38708h();
		___12e78h_cdecl(___1a1108h, ___185c0bh, "Press any key to continue...", 0x46b6e);
		___1398ch__VESA101_PRESENTRECTANGLE(0x46b62, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x46b62, 0x10e, 0x10);
		D(___196bd8h) = 0;
	}
}
