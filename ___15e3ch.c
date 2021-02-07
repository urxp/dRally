#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e84h[];
	extern byte ___196aa8h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1ff1h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

dword ___14c50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// HITMAN RESULT
dword ___15e3ch(void){

	byte 	esp[0x4c];
	byte 	px;
	int 	i, j;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = B(D(___1a1e84h)+0x68*j+i))) B(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a42d+0x280*j+i) = px;
		}
	}

	if((int)D(___196aa8h) <= 0){

		if(D(___196aa8h) == 0xffffffff){
		
			D(esp+0x44) = 0xbb8;
			strcpy(esp+0x34, "3000");
		}

		if(D(___196aa8h) == 0xfffffffe){

			D(esp+0x44) = 0x7d0;
			strcpy(esp+0x34, "2000");
		}

		if(D(___196aa8h) == 0xfffffffd){
		
			D(esp+0x44) = 0x3e8;
			strcpy(esp+0x34, "1000");
		}

		if(D(___196aa8h) == 0xfffffffc){
		
			D(esp+0x44) = 0x2ee;
			strcpy(esp+0x34, "750");
		}

		if(D(___196aa8h) == 0xfffffffb){
		
			D(esp+0x44) = 0x1f4;
			strcpy(esp+0x34, "500");
		}

		if(D(___196aa8h) == 0xfffffffa){

			D(esp+0x44) = 0xfa;
			strcpy(esp+0x34, "250");
		}

		___13094h_cdecl("[Your hit missed!", 0x1a4a1);
		___13094h_cdecl("", 0x1cca1);
		___13094h_cdecl("You sissy Sunday driver. [The", 0x1f4a1);
		___13094h_cdecl("[simplest job, and you screw it up!", 0x21ca1);
		___13094h_cdecl("I bet you are afraid of the dark as", 0x244a1);
		___13094h_cdecl("well. I'll show you what happens", 0x26ca1);
		___13094h_cdecl("when you break your promises to me.", 0x294a1);
		___13094h_cdecl("[I'm gonna make you pay!", 0x2bca1);
		___13094h_cdecl("", 0x2e4a1);
		___13094h_cdecl("", 0x30ca1);

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

		___13094h_cdecl("[You totally slew that car.", 0x1a4a1);
		___13094h_cdecl("", 0x1cca1);
		___13094h_cdecl("A killer race! The bullets took the", 0x1f4a1);
		___13094h_cdecl("sky like clouds of locusts, and", 0x21ca1);
		___13094h_cdecl("the screams of motors were a", 0x244a1);
		___13094h_cdecl("banshee wail. [Death!{ You were", 0x26ca1);
		___13094h_cdecl(strcat(strcat(strcpy(esp, "beautiful, ["), ___1a1ff1h), " is in a car-"), 0x294a1);
		___13094h_cdecl(strcat(strcat(strcpy(esp, "[coffin grave. $"), esp+0x34), ", your money."), 0x2bca1);
		___13094h_cdecl("", 0x2e4a1);
		___13094h_cdecl("", 0x30ca1);
	}

	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x316c0);

	return 0;
}
