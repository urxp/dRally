#include "drally.h"
#include "drally_structs_free.h"

	extern __POINTER__ ___243d80h;
	extern __POINTER__ ___243d64h;
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___243334h[];

static void helper_copy(__POINTER__ dst, int dstX, int dstY, __POINTER__ src){

	int 		i, j;
	__BYTE__ 	px;

	j = -1;
	while(++j < 8){

		i = -1;
		while(++i < 8){

			if((px = read_b(src+8*j+i)) != 0) write_b(dst+0x200*(j+dstY)+i+dstX, px);
		}
	}
}

// TIRE DUSTING
void race___50ef4h(void){

	int 			i0, j0, n;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	n = -1;
	while(++n < 15){

// LEFT
		if((int)s_35e[D(___243c60h)].__1e2[n] > 0){

			i0 = s_35e[D(___243c60h)].__25a[n]+D(___196d98h)-D(___196dc8h);
			j0 = s_35e[D(___243c60h)].__2d2[n]-D(___196dcch);

			if((i0 >= 4)&&((i0+4) < 0x140)&&(j0 >= 4)&&((j0+4) < 0xc8)){

				helper_copy(___243d80h, i0+0x5c, j0-4, ___243d64h+0x40*((s_35e[D(___243c60h)].__1e2[n]-1)/4));
			}

			s_35e[D(___243c60h)].__1e2[n] += D(___243334h);
			if((int)s_35e[D(___243c60h)].__1e2[n] > 0xc) s_35e[D(___243c60h)].__1e2[n] = 0;
		}

// RIGHT
		if((int)s_35e[D(___243c60h)].__21e[n] > 0){

			i0 = s_35e[D(___243c60h)].__296[n]+D(___196d98h)-D(___196dc8h);
			j0 = s_35e[D(___243c60h)].__30e[n]-D(___196dcch);

			if((i0 >= 4)&&((i0+4) < 0x140)&&(j0 >= 4)&&((j0+4) < 0xc8)){

				helper_copy(___243d80h, i0+0x5c, j0-4, ___243d64h+0x40*((s_35e[D(___243c60h)].__21e[n]-1)/4));
			}

			s_35e[D(___243c60h)].__21e[n] += D(___243334h);
			if((int)s_35e[D(___243c60h)].__21e[n] > 0xc) s_35e[D(___243c60h)].__21e[n] = 0;
		}
	}
}
