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

#define ___1a10d0h___185ba9h 0x0101
#define ___1a10e0h___185ba9h 0x0201
#define ___1a10cch___185ba9h 0x0301
#define ___1a1108h___185c0bh 0x0402
#define ___1a10b8h___185c7ah 0x0503
#define ___1a10fch___185c0bh 0x0602
#define ___1a110ch___185c0bh 0x0702

void ___12e78h_v3(int code, const char * str, int x, int y);

void VESA101_PRINT(int code, const char * str, int x, int y);
void VESA101_16X16_FORMAT_PRINT(const char * str, int x, int y);

#endif // __DRALLY_FONTS_H
