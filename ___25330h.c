#include "drally.h"

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
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1ed4h;
	extern byte ___1a1ef8h[];
	extern void *___1a0180h;
	extern byte ___1a01e0h[];
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;
	extern font_props_t ___185c0bh;
	extern void * ___1a1108h;
	extern void * ___1a1e90h;
	extern cardata_t ___18e298h[6];


dword ___250e0h(const char *);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
dword ___25230h(const char *);

static const __DWORD__ ___18e220h[6][5] = {
	[0] = {  55,  60,   0,   0,   0 },
	[1] = {  65,  70,  75,   0,   0 },
	[2] = {  80,  85,  90,   0,   0 },
	[3] = {  95, 100, 105, 110,   0 },
	[4] = { 115, 120, 125, 130,   0 },
	[5] = { 140, 145, 150, 155, 160 }
};

// SHOP, MARKET, RACE SIGN UP RIGHT PANEL
void ___25330h(void){

	char 	buff_tmp[20];
	char 	buff[20];
	int 	i, j, n, offset;


	j = -1;
	while(++j < 0xe0){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x13aa0+0x280*j+i, read_b(___1a1ed4h+0x60*j+i));
	}

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x60) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x162a0+0x280*j+i) = B(___1a0180h+0x1800*D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))+0x60*j+i);
	}

	strcpy(buff, ___1a01e0h+0x6c*D(___1a1ef8h));
	strupr_watcom106(buff);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, buff, ___25230h(buff)+0x13d20);

	if((int)D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) > 0x98967f) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) = 0x98967f;
	
	itoa_watcom106(D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)), buff_tmp, 0xa);
	strcpy(buff, "$");
	strcat(buff, buff_tmp);
	___12e78h_cdecl(___1a1108h, &___185c0bh, buff, ___250e0h(buff)+0x202a0);

	itoa_watcom106(___18e220h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))][D(___1a01e0h+0x10+0x6c*D(___1a1ef8h))], buff_tmp, 0xa);
	strcpy(buff, (strlen(buff_tmp) == 2) ? " " : "");
	strcat(buff, buff_tmp);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, buff, 0x31fe0);

	itoa_watcom106(D(___1a01e0h+0x48+0x6c*D(___1a1ef8h)), buff_tmp, 0xa);
	strcpy(buff, (strlen(buff_tmp) == 1) ? " #" : "#");
	strcat(buff, buff_tmp);
	___12e78h_cdecl(___1a10b8h, ___185c7ah, buff, 0x34560);
		
	n = -1;
	while(++n < 5) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2fd00+0x280*n+0x224, 0x3f, (44*D(___1a01e0h+0xc+0x6c*D(___1a1ef8h))+99)/100);
	
	itoa_watcom106(D(___1a01e0h+0xc+0x6c*D(___1a1ef8h)), buff, 0xa);

	offset = 0;
	n = -1;
	while(buff[++n]) offset += ___185c0bh.props[buff[n]-0x20];

	___12e78h_cdecl(___1a1108h, &___185c0bh, buff, 0x280*302+623-offset);

	n = -1;
	while(++n < ___18e298h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))].n_engine_upgrades){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x248a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0x320+0x14*j+i));
		}
	}

	n = -1;
	while(++n < ___18e298h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))].n_tire_upgrades){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x284a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0x320+0x14*j+i));
		}
	}

	n = -1;
	while(++n < ___18e298h[D(___1a01e0h+0x1c+0x6c*D(___1a1ef8h))].n_armor_upgrades){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2c0a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0x320+0x14*j+i));
		}
	}

	n = -1;
	while(++n < (int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x10)){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x248a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0xc8*n+0x14*j+i));
		}
	}

	n = -1;
	while(++n < (int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x14)){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x284a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0xc8*n+0x14*j+i));
		}
	}

	n = -1;
	while(++n < (int)D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))){

		j = -1;
		while(++j < 0xa){

			i = -1;
			while(++i < 0x14) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2c0a3+0x17*n+0x280*j+i, read_b(___1a1e90h+0xc8*n+0x14*j+i));
		}
	}
}
