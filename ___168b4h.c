#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e58h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

dword ___14c50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

dword ___168b4h(void){

	dword 	ebp;
	byte 	esp[0x54];
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
		while(++i < 0x60) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(0x83+0x35)+0x21+0xc+0x280*j+i) = B(D(___1a1e58h)+0x60*j+i);
	}

	if(D(esp+0x50)){

		___13094h_cdecl("", 0x280*(0x83+0x5)+0x80);
		___13094h_cdecl("     [It's pay-back time, driver.", 0x280*(0x83+0x15)+0x80);
		___13094h_cdecl("", 0x280*(0x83+0x25)+0x80);
		___13094h_cdecl("     Tut tut, hotshot, [I can't see my", 0x280*(0x83+0x35)+0x80);
		___13094h_cdecl("     [money anywhere.{ I ain't amused,", 0x280*(0x83+0x45)+0x80);
		___13094h_cdecl("     joker. A deal is a deal. I got a", 0x280*(0x83+0x55)+0x80);
		___13094h_cdecl("     reputation to look after. Too bad.", 0x280*(0x83+0x65)+0x80);
		___13094h_cdecl("     Nothing personal, but [I got to hurt", 0x280*(0x83+0x75)+0x80);
		___13094h_cdecl("     [you some now.{ Hurt 'im, boyz.", 0x280*(0x83+0x85)+0x80);
		___13094h_cdecl("", 0x280*(0x83+0x95)+0x80);

		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 0) ebp = 0x4650;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 1) ebp = 0x34bc;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 2) ebp = 0x2328;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 3) ebp = 0x1194;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 4) ebp = 0x8ca;

		___14c50h();
	}
	else {

		___13094h_cdecl("", 0x280*(0x83+0x5)+0x80);
		___13094h_cdecl("     [It's pay-back time, driver.", 0x280*(0x83+0x15)+0x80);
		___13094h_cdecl("", 0x280*(0x83+0x25)+0x80);
		___13094h_cdecl("     This is what I like to see, a guy", 0x280*(0x83+0x35)+0x80);
		___13094h_cdecl("     who keeps his part of the bargain.", 0x280*(0x83+0x45)+0x80);
		___13094h_cdecl("     Ah, the sweet smell of money. Come", 0x280*(0x83+0x55)+0x80);
		___13094h_cdecl("     to papa, my babies. [Real nice doing", 0x280*(0x83+0x65)+0x80);
		___13094h_cdecl("     [business with you{, thunderboy.{", 0x280*(0x83+0x75)+0x80);
		___13094h_cdecl("     Thanks, and good racing riddance.", 0x280*(0x83+0x85)+0x80);
		___13094h_cdecl("", 0x280*(0x83+0x95)+0x80);

		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 0) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x4650;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 1) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x34bc;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 2) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x2328;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 3) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x1194;
		if(D(___1a01e0h+0x34+0x6c*D(___1a1ef8h)) == 4) D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) -= 0x8ca;
	}

	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x280*(0x83+0xb9)+0xc0);

	return 0;
}
