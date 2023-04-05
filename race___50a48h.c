#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ ___1de580h[];
	extern __POINTER__ RACE_FLAMEX_BPK[6];
	extern __POINTER__ BACKBUFFER;

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

		i0 = s_35e[D(___243c60h)].__1d2+CURRENT_VIEWPORT_X-TRX_VIEWPORT_TL_X;
		j0 = s_35e[D(___243c60h)].__1d6-TRX_VIEWPORT_TL_Y;

		if((i0 >= CURRENT_VIEWPORT_X)&&((i0+8) < 0x140)&&(j0 >= 0)&&((j0+8) < 0xc8)){

			img = RACE_FLAMEX_BPK[s_94[D(___243c60h)].__84[s_94[D(___243c60h)].__60]]+0x40*(s_35e[D(___243c60h)].ImgIndex/2);

			__BYTE__* s = img;
			__BYTE__* d = BACKBUFFER + 0x200 * (j0) + i0 + 0x60;
			j = 8;
			do {
				i = 8;
				do {
					if ((px = *s++) != 0) *d = px;
					d++;
				} while (--i);
				d += (0x200 - 8);
			} while (--j);
		}

		s_35e[D(___243c60h)].__1b6 = 0;
	}

	s_94[D(___243c60h)].__60++;

	if((s_94[D(___243c60h)].__5c-1) < (int)s_94[D(___243c60h)].__60) s_94[D(___243c60h)].__60 = 0;
}
