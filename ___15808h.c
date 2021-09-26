#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e80h;
	extern byte ___196aa4h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___185ba9h[];
	extern void * ___1a10cch;

dword ___14c50h(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);

static const char rewards[6][6] = { "12000", "8000", "6000", "4000", "2000", "1000" };

// STREOIDS RESULT
int ___15808h(void){

	__BYTE__ 	px;
	char 		buff[0x34];
	int 		i, j, n, rslt, penalty;


	rslt = 0;
	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

	j = -1;
	while(++j < 0x80){

		i = -1;
		while(++i < 0x68){

			if((px = B(___1a1e80h+0x68*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i) = px;
		}
	}

	if((int)D(___196aa4h) <= 0){

		if(D(___196aa4h) == -1) penalty = 6000;
		if(D(___196aa4h) == -2) penalty = 4000;
		if(D(___196aa4h) == -3) penalty = 3000;
		if(D(___196aa4h) == -4) penalty = 2000;
		if(D(___196aa4h) == -5) penalty = 1000;
		if(D(___196aa4h) == -6) penalty = 500;

		___13094h_cdecl("[Where're my steroids?", 0x1a4a1);
		___13094h_cdecl("", 0x1cca1);
		___13094h_cdecl("[The whole deal went sour{ because", 0x1f4a1);
		___13094h_cdecl("of your incompetence. A few slick", 0x21ca1);
		___13094h_cdecl("turns of the wheel, but no, nope!", 0x244a1);
		___13094h_cdecl("I'm not happy, and when I'm not", 0x26ca1);
		___13094h_cdecl("happy I am mad, and when I am", 0x294a1);
		___13094h_cdecl("mad [bad things happen - to you!", 0x2bca1);
		___13094h_cdecl("", 0x2e4a1);
		___13094h_cdecl("", 0x30ca1);

		if((int)D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) < penalty){

			rslt = ___14c50h();
		}
		else {

			D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) -= penalty;
		}
	}
	else {

		if(D(___196aa4h) == 1) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 12000;
		if(D(___196aa4h) == 2) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 8000;
		if(D(___196aa4h) == 3) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 6000;
		if(D(___196aa4h) == 4) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 4000;
		if(D(___196aa4h) == 5) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 2000;
		if(D(___196aa4h) == 6) D(___1a01e0h+0x6c*D(___1a1ef8h)+0x30) += 1000;

		___13094h_cdecl("[What motorized steroid peddling!", 0x1a4a1);
		___13094h_cdecl("", 0x1cca1);
		___13094h_cdecl("Wow, my main man. I didn't know", 0x1f4a1);
		___13094h_cdecl("there was that much smoke in the", 0x21ca1);
		___13094h_cdecl("whole burning hell, and through", 0x244a1);
		___13094h_cdecl("it all, bearing gifts like some", 0x26ca1);
		___13094h_cdecl("blessed beast, you came. And [this", 0x294a1);
		___13094h_cdecl(strcat(strcat(strcpy(buff, "[here is prime stuff! $"), rewards[D(___196aa4h)-1]), ", to you."), 0x2bca1);
		___13094h_cdecl("", 0x2e4a1);
		___13094h_cdecl("", 0x30ca1);
	}

	___12e78h_cdecl(___1a10cch, ___185ba9h, "CONTINUE", 0x316c0);

	return rslt;
}
