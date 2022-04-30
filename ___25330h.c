#include "drally.h"
#include "drally_structs_fixed.h"
#include "drally_structs_free.h"
#include "drally_fonts.h"
#include "watcom106.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1ed4h;
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a0180h;
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a1e90h;
	extern cardata_t ___18e298h[6];

void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

static const __DWORD__ ___18e220h[6][5] = {
	[0] = {  55,  60,   0,   0,   0 },
	[1] = {  65,  70,  75,   0,   0 },
	[2] = {  80,  85,  90,   0,   0 },
	[3] = {  95, 100, 105, 110,   0 },
	[4] = { 115, 120, 125, 130,   0 },
	[5] = { 140, 145, 150, 155, 160 }
};

static int helper_width(int props, const char * s){ return (int)(96-getTextWidth(props, s))/2; }
static int ___250e0h(const char * s){ return helper_width(FONTPROPS02, s); }
static int ___25230h(const char * s){ return helper_width(FONTPROPS03, s); }

static void helper_rec(int num, int dstx, int dsty, int a){

	int 	i, j, n;

	a = !a;
	n = -1;
	while(++n < num){

		j = -1;
		while(++j < 10){

			i = -1;
			while(++i < 20) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(dsty+j)+dstx+23*n+i, read_b(___1a1e90h+200*(4*a+n*!a)+20*j+i));
		}
	}
}

static void helper_upgrades(int upgrades_max, int upgrades_installed, int dstx, int dsty){ 
	
	helper_rec(upgrades_max, dstx, dsty, 0);
	helper_rec(upgrades_installed, dstx, dsty, 1); 
}

// SHOP, MARKET, RACE SIGN UP RIGHT PANEL
void ___25330h(void){

	char 		buff_tmp[20];
	char 		buff[20];
	int 		i, j, n, offset;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;

	// PANEL BG
	j = -1;
	while(++j < 224){

		i = -1;
		while(++i < 96) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(125+j)+(544+i), read_b(___1a1ed4h+0x60*j+i));
	}

	// MY CAR
	j = -1;
	while(++j < 64){

		i = -1;
		while(++i < 96) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(j+141)+(i+544)) = B(___1a0180h+0x1800*s_6c[D(___1a1ef8h)].car+0x60*j+i);
	}

	strupr_watcom106(strcpy(buff, s_6c[D(___1a1ef8h)].name));
	___12e78h_v3(___1a10b8h___185c7ah, buff, 640-96+___25230h(buff), 126);

	if(s_6c[D(___1a1ef8h)].money > 9999999) s_6c[D(___1a1ef8h)].money = 9999999;
	
	itoa_watcom106(s_6c[D(___1a1ef8h)].money, buff_tmp, 0xa);
	strcat(strcpy(buff, "$"), buff_tmp);
	___12e78h_v3(___1a1108h___185c0bh, buff, 640-96+___250e0h(buff), 205);

	itoa_watcom106(___18e220h[s_6c[D(___1a1ef8h)].car][s_6c[D(___1a1ef8h)].engine], buff_tmp, 0xa);
	strcat(strcpy(buff, (strlen(buff_tmp) == 2) ? " " : ""), buff_tmp);
	___12e78h_v3(___1a10b8h___185c7ah, buff, 640-96+64, 319);

	itoa_watcom106(s_6c[D(___1a1ef8h)].rank, buff_tmp, 0xa);
	strcat(strcpy(buff, (strlen(buff_tmp) == 1) ? " #" : "#"), buff_tmp);
	___12e78h_v3(___1a10b8h___185c7ah, buff, 640-96+64, 334);
		
	n = -1;
	while(++n < 5) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(306+n)+548, 0x3f, (44*s_6c[D(___1a1ef8h)].damage+99)/100);
	
	itoa_watcom106(s_6c[D(___1a1ef8h)].damage, buff, 0xa);
	___12e78h_v3(___1a1108h___185c0bh, buff, 640-96+79-getTextWidth(FONTPROPS02, buff), 302);

	helper_upgrades(___18e298h[s_6c[D(___1a1ef8h)].car].n_engine_upgrades, s_6c[D(___1a1ef8h)].engine, 547, 233);
	helper_upgrades(___18e298h[s_6c[D(___1a1ef8h)].car].n_tire_upgrades, s_6c[D(___1a1ef8h)].tires, 547, 257);
	helper_upgrades(___18e298h[s_6c[D(___1a1ef8h)].car].n_armor_upgrades, s_6c[D(___1a1ef8h)].armor, 547, 281);
}
