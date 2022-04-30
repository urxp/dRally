#include "drally.h"
#include "sfx.h"
#include "drally_structs_free.h"

	extern __POINTER__ BACKBUFFER;
	extern __BYTE__ ___1d8110h[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ SIDEBOM1_BPK;
	extern __BYTE__ ___243cdch[];
	extern __BYTE__ ___243cb8h[];
	extern __BYTE__ ___1d7810h[];
	extern __BYTE__ ___243334h[];
	extern __BYTE__ ___243ca0h[];
	extern __BYTE__ ___1de210h[];
	extern __BYTE__ ___1de530h[];
	extern __BYTE__ ___196de8h[];
	extern __BYTE__ ___196dech[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___196df4h[];

void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
__DWORD__ ___4256ch_cdecl(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, __DWORD__ A4, __DWORD__ A5, __DWORD__ A6, __DWORD__ A7, __DWORD__ A8);

double dRMath_ceil(double);


void DamageWarning(void){

	struct_54_t *	s_54;

	s_54 = (struct_54_t *)___1de7d0h;

	if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) < 0x5000){

		if(D(___196de8h) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

		D(___196de8h) = 1;
	}

	if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) < 0x2800){

		if(D(___196dech) == 0) dRally_Sound_pushEffect(2, SFX_LOOK_OUT, 0, 0x10000, 0x50000, 0x8000);

		D(___196dech) = 1;
	}

	if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) == 0){

		if(strcmp(s_54[D(MY_CAR_IDX)].__0, "DUKE NUKEM") == 0){

			if(D(___196df4h) == 0) dRally_Sound_pushEffect(2, SFX_THIS_SUCKS, 0, 0x10000, 0x50000, 0x8000);

			D(___196df4h) = 1;
		}
	}
}

// WIDESCREEN TOPLEFT CORNER BOX
void race___40864h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp, p5, p6, p7, p8;
	__BYTE__ 		esp[0x10];
	int 			i, j, n;
	__BYTE__ 		px;
	struct_54_t *	s_54;


	s_54 = (struct_54_t *)___1de7d0h;

	j = -1;
	while(++j < 0x20){

		i = -1;
		while(++i < 0x40){

			if((px = B(___1d8110h+0x40*j+i)) != 0) B(BACKBUFFER+0x200*j+i+0x60) = px;
		}
	}

	D(esp+0x8) = (int)(create_double(0x3d,0x0a,0xd7,0xa3,0x70,0x3d,0x42,0x3f)*(double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x34));
	
	if((int)D(esp+8) < 0) D(esp+0x8) = 0;

	edx = 0x3a-B(esp+8);

	if(edx != 0){

		j = -1;
		while(++j < 7){

			i = -1;
			while(++i < edx){

				if((signed char)B(BACKBUFFER+0xe64+B(esp+8)+0x200*j+i) >= 0x40) B(BACKBUFFER+0xe64+B(esp+8)+0x200*j+i) = 0;
			}
		}
	}

	if(D(___1de580h+0x94*D(MY_CAR_IDX)+0x2c) == 0){

		if((int)D(___243cdch) <= 0){

			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, eax, 0x10, 0x207b, -6, 0);
			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, edx, 0x10, 0x2089, 6, 0);
			eax = D(___243ca0h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, (int)(1.42*(double)(int)edx), 0x10, 0x2097, 6, 0);
		}
		else {

			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, eax, 0x10, 0x207b, -6, 0);
			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x3c);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, edx, 0x10, 0x2089, 6, 0);
			eax = D(___243cb8h);
			edx = (int)eax>>0x1f;
			___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x46);
			___4256ch_cdecl(___1d7810h, 0x6, 0x6, (int)(1.42*(double)(int)edx), 0x10, 0x2097, 6, 0);
			D(___243cdch) -= D(___243334h);
			if((int)D(___243cdch) < 0) D(___243cdch) = 0;
		}
	}
	else {
			
		D(esp+0x4) = (int)(create_double(0x9a,0x99,0x99,0x99,0x99,0x99,0x41,0x3f)*(double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x30));
		
		if((int)D(esp+4) < 0) D(esp+0x4) = 0;

		edx = 0x37-B(esp+4);

		if(edx != 0){

			j = -1;
			while(++j < 3){

				i = -1;
				while(++i < edx) B(BACKBUFFER+0x2664+B(esp+4)+0x200*j+i) = 0;
			}
		}

		n = -1;
		while(++n < (int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x28)){

			j = -1;
			while(++j < 6){

				i = -1;
				while(++i < 8){

					if((px = read_b(SIDEBOM1_BPK+8*j+i)) != 0) write_b(BACKBUFFER+0x1a00+8*n+0x60+0x200*j+i, px);
				}
			}
		}
	}

	D(esp) = (int)(100.0-dRMath_ceil(create_double(0,0,0,0,0,0,0x50,0x3f)*(double)(int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18)));
	n = ___4256ch_cdecl(___1de210h, 0x8, 0xa, D(esp), 0, 0x2c90, -8, -16);

	j = -1;
	while(++j < 10){

		i = -1;
		while(++i < 8){

			if((px = read_b(___1de530h+8*j+i)) != 0) write_b(BACKBUFFER+n+0x200*j+i, px);
		}
	}

	DamageWarning();
}
