#include "drally.h"

	extern byte ___243890h[];
	extern byte ___24388ch[];
	extern byte ___19bd58h[];

void outp_(dword port, dword val);
byte inp_(dword port);

void ___59db8h(void){

	int 	n, x_axis, y_axis;
	byte 	in_b;

	outp_(0x201, 0);
	n = 0x1388;
	x_axis = 0;
	y_axis = 0;

	while((in_b = inp_(0x201))&3){

		if(--n == 0){

			D(___19bd58h) = 0;
			return;
		}

		if(in_b&1) x_axis++;
		if(in_b&2) y_axis++;
	}

	D(___243890h) = x_axis;
	D(___24388ch) = y_axis;
}
