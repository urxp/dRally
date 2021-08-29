#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1eb0h;

// SHOP, UNDERGROUND, RACE SIGNUP COPPER FRAME
void ___27f80h_cdecl(dword A1, dword A2, dword A3, dword A4){

	int 		i, j, n;
	__BYTE__ 	px;


	j = -1;
	while(++j < 0x18){

		i = -1;
		while(++i < 0x18){

			if((px = read_b(___1a1eb0h      +0x18*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*A2+A1+0x280*j+i,                   px);
			if((px = read_b(___1a1eb0h+0x240+0x18*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*A2+A1+A3-0x18+0x280*j+i,           px);
			if((px = read_b(___1a1eb0h+0x480+0x18*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+A4-0x18)+A1+0x280*j+i,         px);
			if((px = read_b(___1a1eb0h+0x6c0+0x18*j+i)) != 0) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+A4-0x18)+A1+A3-0x18+0x280*j+i, px);
		}
	}

	n = A3-0x30;
	i = -1;
	while(++i < n){
		
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+0x2)+A1+i+0x18,    0x16);
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+A4-0x3)+A1+i+0x18, 0x16);
	}

	n = A4-0x30;
	i = -1;
	while(++i < n){
		
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*A2+0x3c00+0x280*i+A1+0x2,    0x16);
		write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*A2+0x3c00+0x280*i+A1+A3-0x3, 0x16);
	}
}
