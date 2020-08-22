#include "drally.h"

	extern void * ___1a1e7ch;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;

void bpk_decode2(void *, void *);

void ___259e0h_cdecl(dword A1, dword A2, int A3, dword A4, int * A5){

	int 	i, j, off;

	off = 0;
	i = -1;
	while(++i < A3) off += A5[i];

	bpk_decode2(___1a1e7ch, A4+off);

	j = -1;
	while(++j < 0x40){

		i = -1;
		while(++i < 0x18){

			D(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(A2+j)+A1+4*i) = D(___1a1e7ch+0x60*j+4*i);
		}
	}
}
