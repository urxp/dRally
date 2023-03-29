#include "drally.h"
#include "drally_structs_free.h"

	extern __POINTER__ BACKBUFFER;
	extern __POINTER__ RACE_SHOTS_BPK;
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern int TRX_VIEWPORT_TL_X;
	extern int CURRENT_VIEWPORT_X;
	extern int TRX_VIEWPORT_TL_Y;

// MACHINE GUNS EFFECTS 
void race___50ba4h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x3c];
	int 			i, j, n, m;
	__BYTE__ 		px;
	struct_35e_t * 	s_35e;



	s_35e = (struct_35e_t *)___1e6ed0h;

	if((int)s_35e[D(___243c60h)].__1b2 > 0){

		n = CURRENT_VIEWPORT_X+s_35e[D(___243c60h)].__1ca-TRX_VIEWPORT_TL_X;
		m = s_35e[D(___243c60h)].__1ce-TRX_VIEWPORT_TL_Y;

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){
					
				if((m+0x8) < 0xc8){
					
					__BYTE__* s = RACE_SHOTS_BPK + 0x40 * (s_35e[D(___243c60h)].__1b2 - 1);
					__BYTE__* d = BACKBUFFER + n + 0x200 * m + 0x60;
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
			}
		}

		s_35e[D(___243c60h)].__1b2 = 0;
	}

	if((int)s_35e[D(___243c60h)].__1ae > 0){

		n = CURRENT_VIEWPORT_X+s_35e[D(___243c60h)].__1c2-TRX_VIEWPORT_TL_X;
		s_35e[D(___243c60h)].__1ca = s_35e[D(___243c60h)].__1c2;
		m = s_35e[D(___243c60h)].__1c6-TRX_VIEWPORT_TL_Y;
		s_35e[D(___243c60h)].__1ce = s_35e[D(___243c60h)].__1c6;

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					__BYTE__* s = RACE_SHOTS_BPK + 0x40 * (s_35e[D(___243c60h)].__1ae - 1);
					__BYTE__* d = BACKBUFFER + n + 0x200 * m + 0x60;
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
			}
		}

		s_35e[D(___243c60h)].__1b2 = 1+s_35e[D(___243c60h)].__1ae;
		s_35e[D(___243c60h)].__1ae = 0;
	}

	if((int)s_35e[D(___243c60h)].__1aa > 0){

		n = CURRENT_VIEWPORT_X+s_35e[D(___243c60h)].__1ba-TRX_VIEWPORT_TL_X;
		s_35e[D(___243c60h)].__1c2 = s_35e[D(___243c60h)].__1ba;
		m = s_35e[D(___243c60h)].__1be-TRX_VIEWPORT_TL_Y;
		s_35e[D(___243c60h)].__1c6 = s_35e[D(___243c60h)].__1be;

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					__BYTE__* s = RACE_SHOTS_BPK + 0x40 * (s_35e[D(___243c60h)].__1aa - 1);
					__BYTE__* d = BACKBUFFER + n + 0x200 * m + 0x60;
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
			}
		}

		s_35e[D(___243c60h)].__1ae = 1+s_35e[D(___243c60h)].__1aa;
		s_35e[D(___243c60h)].__1aa = 0;
	}
}
