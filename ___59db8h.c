#include "drally.h"

	extern __BYTE__ ___243890h[];
	extern __BYTE__ ___24388ch[];
	extern __DWORD__ ___19bd58h_gamepad;

void outp_(__DWORD__ port, __DWORD__ val);
__BYTE__ inp_(__DWORD__ port);

void ___59db8h(void){

	int 	n, x_axis, y_axis;
	__BYTE__ 	in_b;

	outp_(0x201, 0);
	n = 0x1388;
	x_axis = 0;
	y_axis = 0;

	while((in_b = inp_(0x201))&3){

		if(--n == 0){

			___19bd58h_gamepad = 0;
			return;
		}

		if(in_b&1) x_axis++;
		if(in_b&2) y_axis++;
	}

	D(___243890h) = x_axis;
	D(___24388ch) = y_axis;
}
