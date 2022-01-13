#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e58h;

__DWORD__ ___14c50h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

__DWORD__ ___168b4h(void){

	__DWORD__ 	ebp;
	__BYTE__ 	esp[0x54];
	int 	i, j;


	D(esp+0x50) = 0;
	if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0x34) == 0)&&((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < 0x4650)) D(esp+0x50) = 1;
	if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0x34) == 1)&&((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < 0x34bc)) D(esp+0x50) = 1;
	if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0x34) == 2)&&((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < 0x2328)) D(esp+0x50) = 1;
	if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0x34) == 3)&&((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < 0x1194)) D(esp+0x50) = 1;
	if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0x34) == 4)&&((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < 0x8ca)) D(esp+0x50) = 1;
	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x35)+0x21+0xc+0x280*j+i) = B(___1a1e58h+0x60*j+i);
	}

	if(D(esp+0x50)){

		VESA101_16X16_FORMAT_PRINT("", 128, 136);
		VESA101_16X16_FORMAT_PRINT("     [It's pay-back time, driver.", 128, 152);
		VESA101_16X16_FORMAT_PRINT("", 128, 168);
		VESA101_16X16_FORMAT_PRINT("     Tut tut, hotshot, [I can't see my", 128, 184);
		VESA101_16X16_FORMAT_PRINT("     [money anywhere.{ I ain't amused,", 128, 200);
		VESA101_16X16_FORMAT_PRINT("     joker. A deal is a deal. I got a", 128, 216);
		VESA101_16X16_FORMAT_PRINT("     reputation to look after. Too bad.", 128, 232);
		VESA101_16X16_FORMAT_PRINT("     Nothing personal, but [I got to hurt", 128, 248);
		VESA101_16X16_FORMAT_PRINT("     [you some now.{ Hurt 'im, boyz.", 128, 264);
		VESA101_16X16_FORMAT_PRINT("", 128, 280);

		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 0) ebp = 0x4650;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 1) ebp = 0x34bc;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 2) ebp = 0x2328;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 3) ebp = 0x1194;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 4) ebp = 0x8ca;

		___14c50h();
	}
	else {

		VESA101_16X16_FORMAT_PRINT("", 128, 136);
		VESA101_16X16_FORMAT_PRINT("     [It's pay-back time, driver.", 128, 152);
		VESA101_16X16_FORMAT_PRINT("", 128, 168);
		VESA101_16X16_FORMAT_PRINT("     This is what I like to see, a guy", 128, 184);
		VESA101_16X16_FORMAT_PRINT("     who keeps his part of the bargain.", 128, 200);
		VESA101_16X16_FORMAT_PRINT("     Ah, the sweet smell of money. Come", 128, 216);
		VESA101_16X16_FORMAT_PRINT("     to papa, my babies. [Real nice doing", 128, 232);
		VESA101_16X16_FORMAT_PRINT("     [business with you{, thunderboy.{", 128, 248);
		VESA101_16X16_FORMAT_PRINT("     Thanks, and good racing riddance.", 128, 264);
		VESA101_16X16_FORMAT_PRINT("", 128, 280);

		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 0) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x4650;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 1) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x34bc;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 2) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x2328;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 3) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x1194;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 4) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x8ca;
	}

	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);

	return 0;
}
