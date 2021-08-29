#include "drally.h"
#include "pxl.h"

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

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e6ch;
	extern byte ___1a1ee4h[];
	extern void * ___1a1ea8h;
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern byte ___1a1ed0h[];
	extern void * ___1a01b8h[6];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern cardata_t ___18e298h[6];
	extern void * ___1a1e78h;

void ___13094h_cdecl(const char *, dword);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, dword A2);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);
char * itoa_watcom106(int value, char * buffer, int radix);


// SHOP NEXT CAR AFTER BUY UPDATE
void ___27078h(void){

	char 	buff[20];

	pxl_2D 			src;
	pxl_2D 			dst;

	pxlSet(&dst, ___1a112ch__VESA101_ACTIVESCREEN_PTR, 640, 480);
	pxlSetPosition(&dst, 16, 125);

	pxlSet(&src, ___1a1e6ch, 96, 96);
	pxlCopy(&dst, &src, PXL_ENTIRE);

	pxlSet(&src, ___1a1ea8h+0x600*D(___1a1ee4h), 96, 16);
	pxlCopy(&dst, &src, PXL_ENTIRE);

	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	___12f60h_cdecl(buff, ___25180h_cdecl(itoa_watcom106(___18e298h[D(___1a1ee4h)].price, strcpy(buff, "$")+1, 0xa)-1)+0x20590);
	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[0], 0x136aa);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[1], 0x15eaa);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[2], 0x186aa);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[3], 0x1aeaa);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[4], 0x1d6aa);
	___13094h_cdecl(___18e298h[D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)].txt_bought[5], 0x1feaa);

	pxlSet(&src, ___1a1e78h, 16, 256);
	pxlSetChroma(&src, 0);
	
	pxlSetRectangle(&src, 16, 64);
	pxlSetPosition(&dst, 0, 141);
	pxlCopy(&dst, &src, PXL_RECTANGLE|PXL_CHROMA);
	pxlSetPosition(&dst, 112, 141);
	pxlSetPosition(&src, 0, 64);
	pxlCopy(&dst, &src, PXL_RECTANGLE|PXL_CHROMA);
}
