#include "drally.h"

typedef char console[0x16][0x96];

    extern console ___1a116ch;
    extern byte ___1a1f4eh[];

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a10fch[];
	extern byte ___1a110ch[];

void ___12e78h_cdecl(dword, dword, dword, dword);

void ___23230h(void){

	int 	n;

	n = -1;
	while(++n < 0x59){

		memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*n+0x3b600, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0x280*n+0x3b600, 0x280);
	}

	n = -1;
	while(++n < 6){

		if(___1a1f4eh[n+0x10] == 0) ___12e78h_cdecl(D(___1a1108h), ___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
		if(___1a1f4eh[n+0x10] == 1) ___12e78h_cdecl(D(___1a10fch), ___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
		if(___1a1f4eh[n+0x10] == 2) ___12e78h_cdecl(D(___1a110ch), ___185c0bh, ___1a116ch[n+0x10], 0x2580*n+0x3b10c);
	}
}
