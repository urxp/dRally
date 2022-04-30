#include "drally.h"
#include "drally_fonts.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e74h;

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// LAPPED
void ___14cach(void){

	int 		i, j;
	__BYTE__ 	px;

	___13248h_cdecl(33, 131, 482, 230, 1);

	j = -1;
	while(++j < 128){

		i = -1;
		while(++i < 104){

			if((px = read_b(___1a1e74h+104*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(168+j)+(45+i), px);
		}
	}

	VESA101_16X16_FORMAT_PRINT("",                                      161, 136);
	VESA101_16X16_FORMAT_PRINT("",                                      161, 152);
	VESA101_16X16_FORMAT_PRINT("[You were lapped, you loser!",          161, 168);
	VESA101_16X16_FORMAT_PRINT("",                                      161, 184);
	VESA101_16X16_FORMAT_PRINT("The pain, the humiliation! Your stunt", 161, 200);
	VESA101_16X16_FORMAT_PRINT("made me the laughing stock of the",     161, 216);
	VESA101_16X16_FORMAT_PRINT("races. What were you trying to do,",    161, 232);
	VESA101_16X16_FORMAT_PRINT("mimic slow-motion? No one is going",    161, 248);
	VESA101_16X16_FORMAT_PRINT("to take me seriously after this.",      161, 264);
	VESA101_16X16_FORMAT_PRINT("[No money or points awarded.",          161, 280);
	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);
}
