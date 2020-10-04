#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e80h[];
	extern byte ___196aa4h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0210h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];

dword ___14c50h(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

// STREOIDS RESULT
dword ___15808h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x4c];
	byte 	px;



	ebp = 0x83;
	D(esp+0x48) = 0x21;
	D(esp+0x40) = 0;
	___13248h_cdecl(0x21, ebp, 0x1e2, 0xe6, 1);
	ecx = 0x80;
	edx = 0x68;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1a42d;
	esi = D(___1a1e80h);

	while(1){

		edi = edx;

		while(1){

			px = B(esi);
			if(px != 0) B(ebx) = px;

			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;

		if(ecx == 0) break;
	}

	if((int)D(___196aa4h) <= 0){

		if(D(___196aa4h) == 0xffffffff){

			D(esp+0x44) = 0x1770;
			strcpy(esp+0x34, "6000");
		}

		if(D(___196aa4h) == 0xfffffffe){

			D(esp+0x44) = 0xfa0;
			strcpy(esp+0x34, "4000");
		}

		if(D(___196aa4h) == 0xfffffffd){

			D(esp+0x44) = 0xbb8;
			strcpy(esp+0x34, "3000");
		}

		if(D(___196aa4h) == 0xfffffffc){

			D(esp+0x44) = 0x7d0;
			strcpy(esp+0x34, "2000");
		}

		if(D(___196aa4h) == 0xfffffffb){

			D(esp+0x44) = 0x3e8;
			strcpy(esp+0x34, "1000");
		}

		if(D(___196aa4h) == 0xfffffffa){

			D(esp+0x44) = 0x1f4;
			strcpy(esp+0x34, "500");
		}

		___13094h_cdecl("[Where're my steroids?", 0x280*(ebp+0x25)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0x35)+D(esp+0x48)+0x80);
		___13094h_cdecl("[The whole deal went sour{ because", 0x280*(ebp+0x45)+D(esp+0x48)+0x80);
		___13094h_cdecl("of your incompetence. A few slick", 0x280*(ebp+0x55)+D(esp+0x48)+0x80);
		___13094h_cdecl("turns of the wheel, but no, nope!", 0x280*(ebp+0x65)+D(esp+0x48)+0x80);
		___13094h_cdecl("I'm not happy, and when I'm not", 0x280*(ebp+0x75)+D(esp+0x48)+0x80);
		___13094h_cdecl("happy I am mad, and when I am", 0x280*(ebp+0x85)+D(esp+0x48)+0x80);
		___13094h_cdecl("mad [bad things happen - to you!", 0x280*(ebp+0x95)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0xa5)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0xb5)+D(esp+0x48)+0x80);

		if((int)D(0x6c*D(___1a1ef8h)+___1a0210h) < (int)D(esp+0x44)){

			D(esp+0x40) = ___14c50h();
		}
		else {

			D(0x6c*D(___1a1ef8h)+___1a0210h) -= D(esp+0x44);
		}
	}
	else {

		if(D(___196aa4h) == 1){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0x2ee0;
			strcpy(esp+0x34, "12000");
		}

		if(D(___196aa4h) == 2){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0x1f40;
			strcpy(esp+0x34, "8000");
		}

		if(D(___196aa4h) == 3){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0x1770;
			strcpy(esp+0x34, "6000");
		}

		if(D(___196aa4h) == 4){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0xfa0;
			strcpy(esp+0x34, "4000");
		}

		if(D(___196aa4h) == 5){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0x7d0;
			strcpy(esp+0x34, "2000");
		}

		if(D(___196aa4h) == 6){

			D(0x6c*D(___1a1ef8h)+___1a0210h) += 0x3e8;
			strcpy(esp+0x34, "1000");
		}

		___13094h_cdecl("[What motorized steroid peddling!", 0x280*(ebp+0x25)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0x35)+D(esp+0x48)+0x80);
		___13094h_cdecl("Wow, my main man. I didn't know", 0x280*(ebp+0x45)+D(esp+0x48)+0x80);
		___13094h_cdecl("there was that much smoke in the", 0x280*(ebp+0x55)+D(esp+0x48)+0x80);
		___13094h_cdecl("whole burning hell, and through", 0x280*(ebp+0x65)+D(esp+0x48)+0x80);
		___13094h_cdecl("it all, bearing gifts like some", 0x280*(ebp+0x75)+D(esp+0x48)+0x80);
		___13094h_cdecl("blessed beast, you came. And [this", 0x280*(ebp+0x85)+D(esp+0x48)+0x80);
		___13094h_cdecl(strcat(strcat(strcpy(esp, "[here is prime stuff! $"), esp+0x34), ", to you."), 0x280*(ebp+0x95)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0xa5)+D(esp+0x48)+0x80);
		___13094h_cdecl("", 0x280*(ebp+0xb5)+D(esp+0x48)+0x80);
	}

	___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", 0x280*(ebp+0xb9)+0xc0);

	return D(esp+0x40);
}
