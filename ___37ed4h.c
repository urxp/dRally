#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fcch;
	extern __POINTER__ ___1a0fd0h;
	extern __POINTER__ ___1a0fd4h;
	extern __POINTER__ ___1a0fc8h;
	extern __POINTER__ ___1a0fdch;
	extern __POINTER__ ___1a0fach;
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;

void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
__DWORD__ ___251e8h_cdecl(const char *);
char * strupr_watcom106(char * s);
char * itoa_watcom106(int value, char * buffer, int radix);

// RESULTS DISPLAY RANKINGS
void ___37ed4h_cdecl(int A1){

	int 		i, j, n;
	char 		buff[0x30];
	__BYTE__ 	px;


	n = -1;
	while(++n < A1){

		if(D(___1a1ef8h) == n){

			j = -1;
			while(++j < 0x12){

				i = -1;
				while(++i < 0x1f){

					if((px = read_b(___1a0fc8h+0x1f*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0x1d+0x280*j+i, px);
				}

				i = -1;
				while(++i < 0x65){

					if((px = read_b(___1a0fdch+0x65*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0x3d+0x280*j+i, px);
				}

				i = -1;
				while(++i < 0x35){

					if((px = read_b(___1a0fach+0x35*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0xa3+0x280*j+i, px);
				}
			}
		}
		else {

			j = -1;
			while(++j < 0x12){

				i = -1;
				while(++i < 0x1f){

					if((px = read_b(___1a0fcch+0x1f*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0x1d+0x280*j+i, px);
				}

				i = -1;
				while(++i < 0x65){

					if((px = read_b(___1a0fd0h+0x65*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0x3d+0x280*j+i, px);
				}

				i = -1;
				while(++i < 0x35){

					if((px = read_b(___1a0fd4h+0x35*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd980+0x2f80*n+0xa3+0x280*j+i, px);
				}
			}
		}

		itoa_watcom106(D(___1a01e0h+0x6c*n+0x48), buff, 0xa);
		strcat(buff, ".");
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, buff, 0xe13e +0x2f80*n-___251e8h_cdecl(buff));
		strcpy(buff, ___1a01e0h+0x6c*n);
		strupr_watcom106(buff);
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, buff, 0xdec2+0x2f80*n);
		itoa_watcom106(D(___1a01e0h+0x6c*n+0x44), buff, 0xa);
		___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, buff, 0xdf48+0x2f80*n-___251e8h_cdecl(buff));
	}
}
