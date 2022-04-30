#ifndef __DRALLY_FONTS_H
#define __DRALLY_FONTS_H

#include "drally.h"

#pragma pack(push,1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;
#pragma pack(pop)

#define FONTPROPS01 	0x01	// ___185ba9h
#define FONTPROPS02 	0x02	// ___185c0bh
#define FONTPROPS03		0x03	// ___185c7ah
#define FONTPROPS04		0x04	// ___185c6dh

#define FONTDATA01		0x0100 	// ___1a10d0h
#define FONTDATA02		0x0200	// ___1a10e0h
#define FONTDATA03 		0x0300	// ___1a10cch
#define FONTDATA04		0x0400	// ___1a1108h
#define FONTDATA05		0x0500	// ___1a10b8h
#define FONTDATA06 		0x0600	// ___1a10fch
#define FONTDATA07		0x0700	// ___1a110ch

#define ___1a10d0h___185ba9h (FONTDATA01|FONTPROPS01)
#define ___1a10e0h___185ba9h (FONTDATA02|FONTPROPS01)
#define ___1a10cch___185ba9h (FONTDATA03|FONTPROPS01)
#define ___1a1108h___185c0bh (FONTDATA04|FONTPROPS02)
#define ___1a10b8h___185c7ah (FONTDATA05|FONTPROPS03)
#define ___1a10fch___185c0bh (FONTDATA06|FONTPROPS02)
#define ___1a110ch___185c0bh (FONTDATA07|FONTPROPS02)

int getTextWidth(int props, const char * s);
void ___12e78h_v3(int code, const char * str, int x, int y);

void VESA101_PRINT(int code, const char * str, int x, int y);
void VESA101_16X16_FORMAT_PRINT(const char * str, int x, int y);

#endif // __DRALLY_FONTS_H
