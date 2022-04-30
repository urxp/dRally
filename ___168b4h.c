#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e58h;

__DWORD__ ___14c50h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

__DWORD__ ___168b4h(void){

	__DWORD__ 	ebp;
	__BYTE__ 	esp[0x54];
	int 		i, j;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	D(esp+0x50) = 0;
	if((s_6c[D(___1a1ef8h)].loanshark_type == 0)&&((int)s_6c[D(___1a1ef8h)].money < 18000)) D(esp+0x50) = 1;
	if((s_6c[D(___1a1ef8h)].loanshark_type == 1)&&((int)s_6c[D(___1a1ef8h)].money < 13500)) D(esp+0x50) = 1;
	if((s_6c[D(___1a1ef8h)].loanshark_type == 2)&&((int)s_6c[D(___1a1ef8h)].money < 9000)) D(esp+0x50) = 1;
	if((s_6c[D(___1a1ef8h)].loanshark_type == 3)&&((int)s_6c[D(___1a1ef8h)].money < 4500)) D(esp+0x50) = 1;
	if((s_6c[D(___1a1ef8h)].loanshark_type == 4)&&((int)s_6c[D(___1a1ef8h)].money < 2250)) D(esp+0x50) = 1;
	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x35)+0x21+0xc+0x280*j+i) = B(___1a1e58h+0x60*j+i);
	}

	if(D(esp+0x50)){

		VESA101_16X16_FORMAT_PRINT("",                                          128, 136);
		VESA101_16X16_FORMAT_PRINT("     [It's pay-back time, driver.",         128, 152);
		VESA101_16X16_FORMAT_PRINT("",                                          128, 168);
		VESA101_16X16_FORMAT_PRINT("     Tut tut, hotshot, [I can't see my",    128, 184);
		VESA101_16X16_FORMAT_PRINT("     [money anywhere.{ I ain't amused,",    128, 200);
		VESA101_16X16_FORMAT_PRINT("     joker. A deal is a deal. I got a",     128, 216);
		VESA101_16X16_FORMAT_PRINT("     reputation to look after. Too bad.",   128, 232);
		VESA101_16X16_FORMAT_PRINT("     Nothing personal, but [I got to hurt", 128, 248);
		VESA101_16X16_FORMAT_PRINT("     [you some now.{ Hurt 'im, boyz.",      128, 264);
		VESA101_16X16_FORMAT_PRINT("",                                          128, 280);

		if(s_6c[D(___1a1ef8h)].loanshark_type == 0) ebp = 18000;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 1) ebp = 13500;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 2) ebp = 9000;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 3) ebp = 4500;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 4) ebp = 2250;

		___14c50h();
	}
	else {

		VESA101_16X16_FORMAT_PRINT("",                                          128, 136);
		VESA101_16X16_FORMAT_PRINT("     [It's pay-back time, driver.",         128, 152);
		VESA101_16X16_FORMAT_PRINT("",                                          128, 168);
		VESA101_16X16_FORMAT_PRINT("     This is what I like to see, a guy",    128, 184);
		VESA101_16X16_FORMAT_PRINT("     who keeps his part of the bargain.",   128, 200);
		VESA101_16X16_FORMAT_PRINT("     Ah, the sweet smell of money. Come",   128, 216);
		VESA101_16X16_FORMAT_PRINT("     to papa, my babies. [Real nice doing", 128, 232);
		VESA101_16X16_FORMAT_PRINT("     [business with you{, thunderboy.{",    128, 248);
		VESA101_16X16_FORMAT_PRINT("     Thanks, and good racing riddance.",    128, 264);
		VESA101_16X16_FORMAT_PRINT("",                                          128, 280);

		if(s_6c[D(___1a1ef8h)].loanshark_type == 0) s_6c[D(___1a1ef8h)].money -= 18000;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 1) s_6c[D(___1a1ef8h)].money -= 13500;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 2) s_6c[D(___1a1ef8h)].money -= 9000;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 3) s_6c[D(___1a1ef8h)].money -= 4500;
		if(s_6c[D(___1a1ef8h)].loanshark_type == 4) s_6c[D(___1a1ef8h)].money -= 2250;
	}

	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);

	return 0;
}
