#include "drally.h"
#include "sfx.h"

	extern void * ___243d80h;
	extern byte ___1d8110h[];
	extern byte ___243ce8h[];
	extern byte ___1de580h[];
	extern void * ___243d34h;
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___1d7810h[];
	extern byte ___243334h[];
	extern byte ___243ca0h[];
	extern byte ___1de210h[];
	extern byte ___1de530h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___1de7d0h[];
	extern byte ___196df4h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
dword ___4256ch_cdecl(void * A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8);

double dRMath_ceil(double);

// WIDESCREEN TOPLEFT CORNER BOX
void race___40864h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5, p6, p7, p8;
	byte 	esp[0x10];
	int 	i, j, n;
	__BYTE__ 	px;


	j = -1;
	while(++j < 0x20){

		i = -1;
		while(++i < 0x40){

			if((px = B(___1d8110h+0x40*j+i)) != 0) B(___243d80h+0x200*j+i+0x60) = px;
		}
	}

	D(esp+0x8) = (int)(create_double(0x3d,0x0a,0xd7,0xa3,0x70,0x3d,0x42,0x3f)*(double)(int)D(___1de580h+0x94*D(___243ce8h)+0x34));
	
	if((int)D(esp+8) < 0) D(esp+0x8) = 0;

	edx = 0x3a-B(esp+8);

	if(edx != 0){

		j = -1;
		while(++j < 7){

			i = -1;
			while(++i < edx){

				if((signed char)B(___243d80h+0xe64+B(esp+8)+0x200*j+i) >= 0x40) B(___243d80h+0xe64+B(esp+8)+0x200*j+i) = 0;
			}
		}
	}

	if(D(___1de580h+0x94*D(___243ce8h)+0x2c) == 0){

		if((int)D(___243cdch) <= 0){

			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, eax, 0x10, 0x207b, -6, 0);
			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, edx, 0x10, 0x2089, 6, 0);
			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, (int)(1.42*(double)(int)edx), 0x10, 0x2097, 6, 0);
		}
		else {

			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, eax, 0x10, 0x207b, -6, 0);
			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, edx, 0x10, 0x2089, 6, 0);
			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x46);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, (int)(1.42*(double)(int)edx), 0x10, 0x2097, 6, 0);
			D(___243cdch) -= D(___243334h);
			if((int)D(___243cdch) < 0) D(___243cdch) = 0;
		}
	}
	else {
			
		D(esp+0x4) = (int)(create_double(0x9a,0x99,0x99,0x99,0x99,0x99,0x41,0x3f)*(double)(int)D(___1de580h+0x94*D(___243ce8h)+0x30));
		
		if((int)D(esp+4) < 0) D(esp+0x4) = 0;

		edx = 0x37-B(esp+4);

		if(edx != 0){

			j = -1;
			while(++j < 3){

				i = -1;
				while(++i < edx) B(___243d80h+0x2664+B(esp+4)+0x200*j+i) = 0;
			}
		}

		n = -1;
		while(++n < (int)D(___1de580h+0x94*D(___243ce8h)+0x28)){

			j = -1;
			while(++j < 6){

				i = -1;
				while(++i < 8){

					if((px = read_b(___243d34h+8*j+i)) != 0) write_b(___243d80h+0x1a00+8*n+0x60+0x200*j+i, px);
				}
			}
		}
	}

	D(esp) = (int)(100.0-dRMath_ceil(create_double(0,0,0,0,0,0,0x50,0x3f)*(double)(int)D(___1de580h+0x94*D(___243ce8h)+0x18)));
	n = ___4256ch_cdecl(___1de210h, 0x8, 0xa, D(esp), 0, 0x2c90, -8, -16);

	j = -1;
	while(++j < 10){

		i = -1;
		while(++i < 8){

			if((px = read_b(___1de530h+8*j+i)) != 0) write_b(___243d80h+n+0x200*j+i, px);
		}
	}

	if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) < 0x5000){

		if(D(___196de8h) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

		D(___196de8h) = 1;
	}

	if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) < 0x2800){

		if(D(___196dech) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

		D(___196dech) = 1;
	}

	if(D(___1de580h+0x94*D(___243ce8h)+0x18) == 0){

		if(strcmp(___1de7d0h+0x54*D(___243ce8h), "DUKE NUKEM") == 0){

			if(D(___196df4h) == 0) dRally_Sound_pushEffect(2, SFX_THIS_SUCKS, 0, 0x10000, 0x50000, 0x8000);

			D(___196df4h) = 1;
		}
	}
}
