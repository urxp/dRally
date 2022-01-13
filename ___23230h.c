#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;

	extern __POINTER__ ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern font_props_t ___185c0bh;
	extern __POINTER__ ___1a1108h;
	extern __POINTER__ ___1a10fch;
	extern __POINTER__ ___1a110ch;

int dRChatbox_getFont(int line);
char * dRChatbox_getLine(int line);
void ___12e78h_cdecl(__POINTER__, __POINTER__, __POINTER__, __DWORD__);

void ___23230h(void){

	int 	n, font;
	char * 	line;

	n = -1;
	while(++n < 0x59){

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*n+0x3b600, ___1a1138h__VESA101h_DefaultScreenBufferB+0x280*n+0x3b600, 0x280);
	}

	n = -1;
	while(++n < 6){

		font = dRChatbox_getFont(n+0x10);
		line = dRChatbox_getLine(n+0x10);

		if(font == 0) ___12e78h_cdecl(___1a1108h, (__POINTER__)&___185c0bh, line, 0x2580*n+0x3b10c);
		if(font == 1) ___12e78h_cdecl(___1a10fch, (__POINTER__)&___185c0bh, line, 0x2580*n+0x3b10c);
		if(font == 2) ___12e78h_cdecl(___1a110ch, (__POINTER__)&___185c0bh, line, 0x2580*n+0x3b10c);
	}
}
