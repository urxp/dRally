#include "drally.h"

#pragma pack(1)
typedef struct struct_94_s {
	__BYTE__ 	raw[0x94];
} struct_94_t;

typedef struct struct_54_s {
	__BYTE__ 	raw[0x54];
} struct_54_t;

	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___243d08h[];
	extern struct_94_t ___1de580h[4];
	extern struct_54_t ___1de7d0h[4];

void ___4a064h_cdecl(int, float, float, float);

void race___4a25ch(void){

	int 	i, n;


	F32(___1e6ed0h+0x14e) = (float)(double)F32(___1e6ed0h+0xb4);
	F32(___1e6ed0h+0x152) = (float)(double)F32(___1e6ed0h+0xb8);
	F32(___1e6ed0h+0xac) = (float)(3.75*(double)(int)D(___1e6ed0h+0xc));
	F32(___1e6ed0h+0x156) = (float)(double)F32(___1e6ed0h+0xac);
	D(___1e6ed0h+0x10) = 0x640*D(___1e6ed0h+0xc);
	D(___1e6ed0h+0x34a) = 0;
	B(___1e6ed0h+0x108) = 1;
	B(___1e6ed0h+0x109) = 1;

	if(D(___1de580h[0].raw) != 6){

		___4a064h_cdecl(0xf, (float)(int)D(___1de580h[0].raw+0x38), (float)(int)D(___1de580h[0].raw+0x3c), (float)(int)D(___1de580h[0].raw+0x40));
	}

	F32(___1e6ed0h+0x14e +0x35e) = (float)(double)(double)F32(___1e6ed0h+0xb4+0x35e);
	F32(___1e6ed0h+0x152+0x35e) = (float)(double)F32(___1e6ed0h+0xb8+0x35e);
	B(___1e6ed0h+0x109+0x35e) = 2;
	D(___1e6ed0h+0x34a+0x35e) = 0;
	F32(___1e6ed0h+0xac+0x35e) = (float)(3.75*(double)(int)D(___1e6ed0h+0xc+0x35e));
	F32(___1e6ed0h+0x156+0x35e) = (float)(double)F32(___1e6ed0h+0xac+0x35e);
	B(___1e6ed0h+0x108+0x35e) = 1;
	D(___1e6ed0h+0x10+0x35e) = 0x640*D(___1e6ed0h+0xc+0x35e)+0x25800;

	___4a064h_cdecl(0x19, (float)(int)D(___1de580h[1].raw+0x38), (float)(int)D(___1de580h[1].raw+0x3c), (float)(int)D(___1de580h[1].raw+0x40));

	F32(___1e6ed0h+0x14e +2*0x35e) = (float)(double)F32(___1e6ed0h+0xb4+2*0x35e);
	F32(___1e6ed0h+0x152+2*0x35e) = (float)(double)F32(___1e6ed0h+0xb8+2*0x35e);
	B(___1e6ed0h+0x108+2*0x35e) = 1;
	D(___1e6ed0h+0x34a+0x35e) = 0;
	F32(___1e6ed0h+0xac+2*0x35e) = (float)(3.75*(double)(int)D(___1e6ed0h+0xc+2*0x35e));
	D(___1e6ed0h+0x10+2*0x35e) = 0x640*D(___1e6ed0h+0xc+2*0x35e)+0x4b000;
	F32(___1e6ed0h+0x156+2*0x35e) = (float)(double)F32(___1e6ed0h+0xac+2*0x35e);
	B(___1e6ed0h+0x109+2*0x35e) = 3;

	___4a064h_cdecl(0x23, (float)(int)D(___1de580h[2].raw+0x38), (float)(int)D(___1de580h[2].raw+0x3c), (float)(int)D(___1de580h[2].raw+0x40));
	
	F32(___1e6ed0h+0x14e +3*0x35e) = (float)(double)F32(___1e6ed0h+0xb4+3*0x35e);
	F32(___1e6ed0h+0x152+3*0x35e) = (float)(double)F32(___1e6ed0h+0xb8+3*0x35e);
	B(___1e6ed0h+0x108+3*0x35e) = 1;
	D(___1e6ed0h+0x34a+3*0x35e) = 0;
	F32(___1e6ed0h+0xac+3*0x35e) = (float)(3.75*(double)(int)D(___1e6ed0h+0xc+3*0x35e));
	F32(___1e6ed0h+0x156+3*0x35e) = (float)(double)F32(___1e6ed0h+0xac+3*0x35e);
	B(___1e6ed0h+0x109+3*0x35e) = 4;
	D(___1e6ed0h+0x10+3*0x35e) = 0x640*D(___1e6ed0h+0xc+3*0x35e)+0x70800;

	___4a064h_cdecl(0x2d, (float)(int)D(___1de580h[3].raw+0x38), (float)(int)D(___1de580h[3].raw+0x3c), (float)(int)D(___1de580h[3].raw+0x40));

	n = -1;
	while(++n < 4){

		D(___1e6ed0h+0x35e*n+0x19a) = 0;
		D(___1e6ed0h+0x35e*n) = 0;
		D(___1e6ed0h+0x35e*n+0xb0) = 0;
		D(___1e6ed0h+0x35e*n+0x10a) = 0;
		D(___1e6ed0h+0x35e*n+0x18a) = 0;
		D(___1e6ed0h+0x35e*n+0x14) = 0;
		D(___1e6ed0h+0x35e*n+0x18) = 0;
		D(___1e6ed0h+0x35e*n+0x19e) = 0x1388*D(___1de7d0h[n].raw+0x14)+0x3a98;
		D(___1e6ed0h+0x35e*n+0x1c) = 0;
		D(___1e6ed0h+0x35e*n+0xa8) = D(___1de580h[n].raw+0x14);

		i = -1;
		while(++i < 0x10){

			D(___1e6ed0h+0x35e*n+4*i+0x20) = 0;
			D(___1e6ed0h+0x35e*n+4*i+0x60) = 0;
		}

		D(___1e6ed0h+0x35e*n+0xbc) = 0;
		D(___1e6ed0h+0x35e*n+0xc0) = 0;
		D(___1e6ed0h+0x35e*n+0xfc) = 0;
		D(___1e6ed0h+0x35e*n+0x100) = 0;
		D(___1e6ed0h+0x35e*n+0x104) = 0;
		D(___1e6ed0h+0x35e*n+0x17e) = 0;
		D(___1e6ed0h+0x35e*n+0x182) = 0;
		D(___1e6ed0h+0x35e*n+0x186) = 0;
		D(___1e6ed0h+0x35e*n+0x192) = 0;
		D(___1e6ed0h+0x35e*n+0x196) = 0;
		D(___1e6ed0h+0x35e*n+0x162) = 0;
		D(___1e6ed0h+0x35e*n+0x166) = 0;
		D(___1e6ed0h+0x35e*n+0x16a) = 0;
		D(___1e6ed0h+0x35e*n+0x16e) = 0;
		D(___1e6ed0h+0x35e*n+0x1a6) = 0;
		D(___1e6ed0h+0x35e*n+0x1a2) = 0;
		D(___1e6ed0h+0x35e*n+0x1aa) = 0;
		D(___1e6ed0h+0x35e*n+0x1ae) = 0;
		D(___1e6ed0h+0x35e*n+0x1b2) = 0;
		D(___1e6ed0h+0x35e*n+0xa0) = 0;
		D(___1e6ed0h+0x35e*n+0xa4) = 0;

		i = -1;
		while(++i < 0xf){

			D(___1e6ed0h+0x35e*n+4*i+0x1e2) = 0;
			D(___1e6ed0h+0x35e*n+4*i+0x21e) = 0;
		}

		D(___1e6ed0h+0x35e*n+0x1b6) = 0;
		D(___1e6ed0h+0x35e*n+0x1da) = 0;
		D(___1e6ed0h+0x35e*n+0x1de) = 0;
		D(___1e6ed0h+0x35e*n+0x34e) = 0;
		D(___1e6ed0h+0x35e*n+0x352) = 0;
		D(___1e6ed0h+0x35e*n+0x356) = 0;
		D(___1e6ed0h+0x35e*n+0x35a) = 0;
		D(___243d08h) = 0xf;
	}

	D(___243c60h) = 4;
}
