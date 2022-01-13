#include "drally.h"
#include "drally_fonts.h"

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

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e6ch;
	extern __BYTE__ ___1a1ee4h[];
	extern __POINTER__ ___1a1ea8h;
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern __BYTE__ ___1a1ed0h[];
	extern __POINTER__ ___1a01b8h[6];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern cardata_t ___18e298h[6];
	extern __POINTER__ ___1a1e78h;

void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);

void ___25a74h(void){

	char 	buff[20];
	__BYTE__ 	px;
	int 	i, j;


	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x13890+0x280*j+i, read_b(___1a1e6ch+0x60*j+i));
	}

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x13890+0x280*j+i, read_b(___1a1ea8h+0x600*D(___1a1ee4h)+0x60*j+i));
	}

	___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
	___12f60h_cdecl(buff, ___25180h_cdecl(itoa_watcom106(___18e298h[D(___1a1ee4h)].price, strcpy(buff, "$")+1, 0xa)-1)+0x20590);
	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);

	if(D(___185a14h_UseWeapons)){

		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_winfo[5], 170, 204);
	}
	else {

		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___18e298h[D(___1a1ee4h)].txt_info[5], 170, 204);
	}

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x10) if((px = read_b(___1a1e78h+0x10*j+i))) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x16080+0x280*j+i, px);
	}

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x10) if((px = read_b(___1a1e78h+0x400+0x10*j+i))) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x160f0+0x280*j+i, px);
	}
}
