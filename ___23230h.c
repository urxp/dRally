#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;
typedef char console[0x16][0x96];

    extern console ___1a116ch;
    extern byte ___1a1f4eh[];

	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern font_props_t ___185c0bh;
	extern void * ___1a1108h;
	extern void * ___1a10fch;
	extern void * ___1a110ch;

void ___12e78h_cdecl(void *, void *, void *, dword);

void ___23230h(void){

	int 	n;

	n = -1;
	while(++n < 0x59){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*n+0x3b600, ___1a1138h__VESA101h_DefaultScreenBufferB+0x280*n+0x3b600, 0x280);
	}

	n = -1;
	while(++n < 6){

		if(___1a1f4eh[n+0x10] == 0) ___12e78h_cdecl(___1a1108h, &___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
		if(___1a1f4eh[n+0x10] == 1) ___12e78h_cdecl(___1a10fch, &___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
		if(___1a1f4eh[n+0x10] == 2) ___12e78h_cdecl(___1a110ch, &___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
	}
}
