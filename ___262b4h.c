#include "drally.h"
#include "drally_fonts.h"
#include "assets.h"

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

	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern cardata_t ___18e298h[6];
	extern __DWORD__ ___18643ch[][0xc];
	extern __BYTE__ ___1a1ec0h[];
	extern __POINTER__ ___1a0198h[4];

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
char * itoa_watcom106(int value, char * buffer, int radix);

static const char40 ___1914c0h[4][6] = {
	[0] = {
		[0] = "[Trackmaster 155",
		[1] = "",
		[2] = "These wheels will let you do some",
		[3] = "rapid fire cornerings on that",
		[4] = "shimmering silver street.",
		[5] = ""
	},
	[1] = {
		[0] = "[Roadrunner NS 175",
		[1] = "",
		[2] = "With these fat tires, you'll shoot",
		[3] = "from the starting-line like a",
		[4] = "blood lusting bullet.",
		[5] = ""
	},
	[2] = {
		[0] = "[Slidestop 200",
		[1] = "",
		[2] = "These fat bottomed tires'll kiss",
		[3] = "the road like crazy, they just",
		[4] = "can't get enough. They're hot.",
		[5] = ""
	},
	[3] = {
		[0] = "[Racer-X230",
		[1] = "",
		[2] = "Zorro's Zs were nothing. Carve",
		[3] = "your whole signature, to the",
		[4] = "rainbow-oiled road, doing 160.",
		[5] = ""
	}
};

// SHOP TIRES
void ___262b4h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, p5;
	__BYTE__ 	esp[0x28];
	int 	i, j;

	__BYTE__ *	bases4 = getAssets(MENU_BASES4);
	__BYTE__ * 	maxi1f = getAssets(MENU_MAXI1F);

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(120+i, 253+j)] = bases4[0x2400+0x60*j+i];
	}

	ebx = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14);		// 0...4
	ecx = ___18e298h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))].n_tire_upgrades;

	if((int)ebx < (int)ecx){

		___259e0h_cdecl(0x78, 0x10d, D(___1a1ec0h), ___1a0198h[ebx], ___18643ch[ebx]);
		itoa_watcom106(___18e298h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))].price_tire_upgrades[ebx], esp, 0xa);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x345f8);
		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___1914c0h[D(___1a01e0h+0x6c*D(___1a1ef8h)+0x14)][5], 170, 204);
	}
	else {

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x60) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(120+i, 269+j)] = maxi1f[0x1800*(ecx-1)+0x6000+0x60*j+i];
		}

		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT("[NO MORE TIRE UPGRADES", 170, 124);
		VESA101_16X16_FORMAT_PRINT("", 170, 140);
		VESA101_16X16_FORMAT_PRINT("You've got the best fat, sticky", 170, 156);
		VESA101_16X16_FORMAT_PRINT("tires this vehicle can boast. You", 170, 172);
		VESA101_16X16_FORMAT_PRINT("are in close touch with the road.", 170, 188);
		VESA101_16X16_FORMAT_PRINT("", 170, 204);
	}
}
