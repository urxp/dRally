#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ ___243298h[6];
	extern __POINTER__ ___243d80h;

// MACHINE GUNS FIRE
void race___50a48h(void){

	int 			i, j, i0, j0;
	__BYTE__ 		px;
	__POINTER__ 	img;
	struct_35e_t *	s_35e;
	struct_94_t * 	s_94;


	s_35e = (struct_35e_t *)___1e6ed0h;
	s_94 = (struct_94_t *)___1de580h;

	if(s_35e[D(___243c60h)].__1b6 != 0){

		i0 = s_35e[D(___243c60h)].__1d2+D(___196d98h)-D(___196dc8h);
		j0 = s_35e[D(___243c60h)].__1d6-D(___196dcch);

		if((i0 >= 0)&&((i0+8) < 0x140)&&(j0 >= 0)&&((j0+8) < 0xc8)){

			img = ___243298h[s_94[D(___243c60h)].__84[s_94[D(___243c60h)].__60]]+0x40*(s_35e[D(___243c60h)].ImgIndex/2);

			j = -1;
			while(++j < 8){

				i = -1;
				while(++i < 8){

					if((px = read_b(img+8*j+i)) != 0) write_b(___243d80h+0x200*(j+j0)+i+i0+0x60, px);
				}
			}
		}

		s_35e[D(___243c60h)].__1b6 = 0;
	}

	s_94[D(___243c60h)].__60++;

	if((s_94[D(___243c60h)].__5c-1) < (int)s_94[D(___243c60h)].__60) s_94[D(___243c60h)].__60 = 0;
}
