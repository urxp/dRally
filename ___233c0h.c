#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a110ch;

int dRChatbox_getFont(int line);
char * dRChatbox_getLine(int line);

void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

void ___233c0h(void){

	int 	n, font;
	char * 	line;

	n = -1;
	while(++n < 0x14c){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(n+0x78)+0xc, ___1a1138h__VESA101h_DefaultScreenBufferB+0x280*(n+0x78)+0xc, 0x276);
	}

	n = -1;
	while(++n < 0x16){

		font = dRChatbox_getFont(n);
		line = dRChatbox_getLine(n);

		if(font == 0) ___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
		if(font == 1) ___12e78h_cdecl(___1a10fch, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
		if(font == 2) ___12e78h_cdecl(___1a110ch, (font_props_t *)___185c0bh, line, 0x1298c+0x2580*n);
	}
}
