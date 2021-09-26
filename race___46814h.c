#include "drally.h"
#include "drmath.h"

	extern byte ___2432f0h[];
	extern byte ___243d08h[];
	extern byte ___243d80h[];
	extern byte ___1a54d0h[];
	extern byte ___196e78h[];
	extern byte ___243304h[];
	extern byte ___243308h[];
	extern byte ___2432f8h[];
	extern byte ___2432ech[];
	extern byte ___2432f4h[];
	extern byte VGA13_ACTIVESCREEN[];

#define LOC_PI 	create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

void race___46814h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[8];
	int 	i, j, n;


	n = -1;
	while(++n < 0xc8) memcpy(___1a54d0h+0x100*n+0x100, D(___243d80h)+0x200*n+0xa0, 0x100);

	D(___2432f8h) = (int)(170.0*dRMath_cos((double)F32(___196e78h)*LOC_PI/180.0));
	D(___243304h) = (int)(256.0/dRMath_sin((double)F32(___196e78h)*LOC_PI/180.0));

	D(___243308h) = VGA13_ACTIVESCREEN+0x20;
	D(___243d08h) = 0;
	D(___2432ech) = 0xc8*D(___243304h);

	while(1){

		D(___2432f4h) = D(___2432ech)&~0xff;
		if((int)D(___2432f4h) > 0xc900) D(___2432f4h) = 0xc900;
		ebp = D(___2432f4h)*D(___2432f8h);
		edx = ((int)ebp>>0x11)-0xa;
		D(___2432f0h) = (int)ebp>>0x10;
		ebx = D(___243308h)+edx;

		i = -1;
		while(++i < 0xa){

			if((short)X(edx) >= 0) write_b(ebx+i, 0);
			X(edx)++;
		}

		edx = 0xff-D(___2432f0h);
		edi = D(___243308h)+((int)D(___2432f0h)>>1);

		i = -1;
		while(++i < 0x100){

			H(edx) += L(edx);
			write_b(edi, read_b(___1a54d0h-D(___2432f4h)+0xc900+i));
			edi += !!(H(edx) < L(edx));
		}

		edx = ((int)D(___2432f0h)>>1)-D(___2432f0h)+0xff;
		ebx = D(___243308h)+edx;

		i = -1;
		while(++i < 0xa){

			if((short)X(edx) > 0xff) break;
			write_b(ebx+i, 0);
			X(edx)++;
		}
	
		D(___2432ech) -= D(___243304h);
		D(___243308h) += 0x140;
		D(___243d08h) += 1;
		if((int)D(___243d08h) >= 0xc8) break;
	}
}
