#include "drally.h"
#include "drally_fonts.h"
#include "pxl.h"
#include "drally_structs_free.h"
#include "drally_structs_fixed.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e6ch;
	extern __BYTE__ ___1a1ee4h[];
	extern __POINTER__ ___1a1ea8h;
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern __BYTE__ ___1a1ed0h[];
	extern __POINTER__ ___1a01b8h[6];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern cardata_t ___18e298h[6];
	extern __POINTER__ ___1a1e78h;

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
char * itoa_watcom106(int value, char * buffer, int radix);


// SHOP NEXT CAR AFTER BUY UPDATE
void ___27078h(void){

	char 		buff[20];
	racer_t * 	s_6c;
	pxl_2D 		src;
	pxl_2D 		dst;


	s_6c = (racer_t *)___1a01e0h;
	pxlSet(&dst, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 640, 480);
	pxlSetPosition(&dst, 16, 125);

	pxlSet(&src, ___1a1e6ch, 96, 96);
	pxlCopy(&dst, &src, PXL_ENTIRE);

	pxlSet(&src, ___1a1ea8h+0x600*D(___1a1ee4h), 96, 16);
	pxlCopy(&dst, &src, PXL_ENTIRE);

	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	___12f60h_cdecl(buff, ___25180h_cdecl(itoa_watcom106(___18e298h[D(___1a1ee4h)].price, strcpy(buff, "$")+1, 0xa)-1)+0x20590);
	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[0], 170, 124);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[1], 170, 140);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[2], 170, 156);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[3], 170, 172);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[4], 170, 188);
	VESA101_16X16_FORMAT_PRINT(___18e298h[s_6c[D(___1a1ef8h)].car].txt_bought[5], 170, 204);

	pxlSet(&src, ___1a1e78h, 16, 256);
	pxlSetChroma(&src, 0);
	
	pxlSetRectangle(&src, 16, 64);
	pxlSetPosition(&dst, 0, 141);
	pxlCopy(&dst, &src, PXL_RECTANGLE|PXL_CHROMA);
	pxlSetPosition(&dst, 112, 141);
	pxlSetPosition(&src, 0, 64);
	pxlCopy(&dst, &src, PXL_RECTANGLE|PXL_CHROMA);
}
