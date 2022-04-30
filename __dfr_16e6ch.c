#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

	extern __POINTER__ ___1a1114h;
	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];


char * itoa_watcom106(int value, char * bf1, int radix);
void old_bpa_read(const char *, __POINTER__, const char *);
void bpk_decode2(__POINTER__, __POINTER__);

void ___16e6ch(void){

	char 		bf1[20];
	char 		bf0[80];
	char *		h7b5b;
	int 		i, j, n, x, y;
	__BYTE__ 	px;
	racer_t * 	s_6c;


	s_6c = (racer_t *)___1a01e0h;
	old_bpa_read("MENU.BPA", ___1a1114h, "mp-res.bpk");
	bpk_decode2(___1a54d0h, ___1a1114h);

	j = -1;
	while(++j < 0x117){

		i = -1;
		while(++i < 0x1e9){

			if((px = B(___1a54d0h+0x1e9*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd4cb+0x280*j+i) = px;
		}
	}

	n = -1;
	while(++n < (int)D(___196adch)){

		h7b5b = (D(___1a1ef8h) != (i = (D(___196adch)-(n+1))))?"{":"[";

		y = (x = 0x1e7ea+0x6180*n)/0x280;
		x = x%0x280;
		VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(bf0, h7b5b), itoa_watcom106(n+1, bf1, 0xa)), "."), x, y);
		y = (x = 0x1e824+0x6180*n)/0x280;
		x = x%0x280;
		VESA101_16X16_FORMAT_PRINT(strcat(strcpy(bf0, h7b5b), s_6c[i].name), x, y);
		y = (x = 0x1e8f4+0x6180*n)/0x280;
		x = x%0x280;
		VESA101_16X16_FORMAT_PRINT(strcat(strcpy(bf0, h7b5b), itoa_watcom106(s_6c[i].points, bf1, 0xa)), x, y);
		y = (x = 0x1e94b+0x6180*n)/0x280;
		x = x%0x280;
		VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(bf0, h7b5b), "$"), itoa_watcom106(s_6c[i].income, bf1, 0xa)), x, y);
	}
}
