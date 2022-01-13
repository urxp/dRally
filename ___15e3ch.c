#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e84h;
	extern __BYTE__ ___196aa8h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a1ff1h[];

__DWORD__ ___14c50h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// HITMAN RESULT
__DWORD__ ___15e3ch(void){

	__BYTE__ 	esp[0x4c];
	__BYTE__ 	px;
	int 	i, j;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = B(___1a1e84h+0x68*j+i))) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i) = px;
		}
	}

	if((int)D(___196aa8h) <= 0){

		if(D(___196aa8h) == 0xffffffff){
		
			D(esp+0x44) = 3000;
			strcpy(esp+0x34, "3000");
		}

		if(D(___196aa8h) == 0xfffffffe){

			D(esp+0x44) = 2000;
			strcpy(esp+0x34, "2000");
		}

		if(D(___196aa8h) == 0xfffffffd){
		
			D(esp+0x44) = 1000;
			strcpy(esp+0x34, "1000");
		}

		if(D(___196aa8h) == 0xfffffffc){
		
			D(esp+0x44) = 750;
			strcpy(esp+0x34, "750");
		}

		if(D(___196aa8h) == 0xfffffffb){
		
			D(esp+0x44) = 500;
			strcpy(esp+0x34, "500");
		}

		if(D(___196aa8h) == 0xfffffffa){

			D(esp+0x44) = 250;
			strcpy(esp+0x34, "250");
		}

		VESA101_16X16_FORMAT_PRINT("[Your hit missed!", 161, 168);
		VESA101_16X16_FORMAT_PRINT("", 161, 184);
		VESA101_16X16_FORMAT_PRINT("You sissy Sunday driver. [The", 161, 200);
		VESA101_16X16_FORMAT_PRINT("[simplest job, and you screw it up!", 161, 216);
		VESA101_16X16_FORMAT_PRINT("I bet you are afraid of the dark as", 161, 232);
		VESA101_16X16_FORMAT_PRINT("well. I'll show you what happens", 161, 248);
		VESA101_16X16_FORMAT_PRINT("when you break your promises to me.", 161, 264);
		VESA101_16X16_FORMAT_PRINT("[I'm gonna make you pay!", 161, 280);
		VESA101_16X16_FORMAT_PRINT("", 161, 296);
		VESA101_16X16_FORMAT_PRINT("", 161, 312);

		if((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) < (int)D(esp+0x44)){

			___14c50h();
		}
		else {

			D(0x6c*D(___1a1ef8h)+___1a01e0h+0x30) -= D(esp+0x44);
		}
	}
	else {

		if(D(___196aa8h) == 1){

			strcpy(esp+0x34, "6000");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0x1770;
		}

		if(D(___196aa8h) == 2){

			strcpy(esp+0x34, "4000");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0xfa0;
		}

		if(D(___196aa8h) == 3){

			strcpy(esp+0x34, "3000");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0xbb8;
		}

		if(D(___196aa8h) == 4){

			strcpy(esp+0x34, "2000");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0x7d0;
		}

		if(D(___196aa8h) == 5){

			strcpy(esp+0x34, "1000");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0x3e8;
		}

		if(D(___196aa8h) == 6){

			strcpy(esp+0x34, "500");
			D(___1a01e0h+0x30+0x6c*D(___1a1ef8h)) += 0x1f4;
		}

		VESA101_16X16_FORMAT_PRINT("[You totally slew that car.", 161, 168);
		VESA101_16X16_FORMAT_PRINT("", 161, 184);
		VESA101_16X16_FORMAT_PRINT("A killer race! The bullets took the", 161, 200);
		VESA101_16X16_FORMAT_PRINT("sky like clouds of locusts, and", 161, 216);
		VESA101_16X16_FORMAT_PRINT("the screams of motors were a", 161, 232);
		VESA101_16X16_FORMAT_PRINT("banshee wail. [Death!{ You were", 161, 248);
		VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "beautiful, ["), ___1a1ff1h), " is in a car-"), 161, 264);
		VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[coffin grave. $"), esp+0x34), ", your money."), 161, 280);
		VESA101_16X16_FORMAT_PRINT("", 161, 296);
		VESA101_16X16_FORMAT_PRINT("", 161, 312);
	}

	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);

	return 0;
}
