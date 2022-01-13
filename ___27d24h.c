#include "drally.h"

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1eb0h;

// GAME OVER, MY HALL OF FAME POSITON BORDER
void ___27d24h_cdecl(int A1, int A2, int A3, int A4){

	int 		i, j;
	__BYTE__ 	px;


	j = -1;
	while(++j < 0xc){

		i = -1;
		while(++i < 0x18){

			if((px = B(___1a1eb0h+0x18*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x280*A2+A1) = px;
			if((px = B(___1a1eb0h+0x18*(j+0x18)+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x280*A2+A1+A3-0x18) = px;
			if((px = B(___1a1eb0h+0x18*(j+0x3c)+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x280*(A2+A4-0xc)+A1) = px;
			if((px = B(___1a1eb0h+0x18*(j+0x54)+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*j+i+0x280*(A2+A4-0xc)+A1+A3-0x18) = px;
		}
	}

	i = -1;
	while(++i < (int)(A3-0x30)){

		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+0x2)+A1+i+0x18) = 0x16;
		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+A4-0x3)+A1+i+0x18) = 0x16;
	}

	i = -1;
	while(++i < (int)(A4-0x30)){

		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+0x18+i)+A1+2) = 0x16;
		B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+0x18+i)+A1+A3-3) = 0x16;
	}
}
