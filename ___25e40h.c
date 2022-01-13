#include "drally.h"
#include "drally_fonts.h"
#include "pxl.h"

#pragma pack(1)
typedef char char40[40];
typedef char char12[12];
typedef struct cardata_s {
    char12      		name;                           // +000
    __DWORD__   		price;                          // +00C
    char40      		txt_info[6];                    // +010
    char40      		txt_winfo[6];                   // +100
    char40      		txt_bought[6];                  // +1F0
    char40      		txt_engine_upgrades[4][6];      // +2E0
    __DWORD__   		n_engine_upgrades;              // +6A0
    __DWORD__   		n_tire_upgrades;                // +6A4
    __DWORD__   		n_armor_upgrades;               // +6A8
    __DWORD__   		price_engine_upgrades[4];       // +6AC
    __DWORD__   		price_tire_upgrades[4];         // +6BC
    __DWORD__   		price_armor_upgrades[4];        // +6CC
    __SIGNED_DWORD__   	price_repair;                   // +6DC
} cardata_t;

#define COOXY(x,y) (0x280*(y)+(x))

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e98h;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___1862bch[][0x18];
	extern __POINTER__ ___1a01a8h[4];
	extern __BYTE__ ___1a1ec8h[];
	extern cardata_t ___18e298h[6];
	extern __POINTER__ ___1a1eb8h;

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
char * itoa_watcom106(int value, char * buffer, int radix);

// SHOP, ENGINE
void ___25e40h(void){

	__DWORD__ 	ebx, ecx;
	__BYTE__ 	esp[0x28];
	int 	i, j;

	pxl_2D	dst;
	pxl_2D	src;


	pxlSet(&dst, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 640, 480);
	pxlSetPosition(&dst, 16, 253);
	pxlSet(&src, ___1a1e98h, 96, 96);
	pxlCopy(&dst, &src, PXL_ENTIRE);

	ebx = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10);
	ecx = ___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].n_engine_upgrades;

	if((int)ebx < (int)ecx){

		___259e0h_cdecl(0x10, 0x10d, D(___1a1ec8h), ___1a01a8h[ebx], ___1862bch[ebx]);
		itoa_watcom106(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].price_engine_upgrades[ebx], esp, 0xa);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x34590);
		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_engine_upgrades[ebx][5], 170, 204);
	}
	else {

		pxlSetPosition(&dst, 16, 269);
		pxlSet(&src, ___1a1eb8h, 96, 768);
		pxlSetRectangle(&src, 96, 64);
		pxlSetPosition(&src, 0, (ecx-1)*64);
		pxlCopy(&dst, &src, PXL_RECTANGLE);

		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT("[NO MORE ENGINE UPGRADES", 170, 124);
		VESA101_16X16_FORMAT_PRINT("", 170, 140);
		VESA101_16X16_FORMAT_PRINT("You've got the most beastly motor", 170, 156);
		VESA101_16X16_FORMAT_PRINT("monster this vehicle can carry.", 170, 172);
		VESA101_16X16_FORMAT_PRINT("Hear its powerful & sublime sound.", 170, 188);
		VESA101_16X16_FORMAT_PRINT("", 170, 204);
	}
}
