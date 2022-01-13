#include "drally.h"
#include "drally_structs_free.h"

	extern __POINTER__ ___243d80h;
	extern __POINTER__ ___243d88h;
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196dc8h[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___196dcch[];

// MACHINE GUNS EFFECTS 
void race___50ba4h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x3c];
	__POINTER__ 	esip;
	__POINTER__ 	edxp;
	__POINTER__ 	ebxp;
	int 			i, j, n, m;
	__BYTE__ 		px;
	struct_35e_t * 	s_35e;



	s_35e = (struct_35e_t *)___1e6ed0h;
	ebxp = ___243d80h;
	esip = ___243d88h;

	if((int)s_35e[D(___243c60h)].__1b2 > 0){

		n = D(___196d98h)+s_35e[D(___243c60h)].__1ca-D(___196dc8h);
		m = s_35e[D(___243c60h)].__1ce-D(___196dcch);

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){
					
				if((m+0x8) < 0xc8){
					
					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(s_35e[D(___243c60h)].__1b2-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		s_35e[D(___243c60h)].__1b2 = 0;
	}

	if((int)s_35e[D(___243c60h)].__1ae > 0){

		n = D(___196d98h)+s_35e[D(___243c60h)].__1c2-D(___196dc8h);
		s_35e[D(___243c60h)].__1ca = s_35e[D(___243c60h)].__1c2;
		m = s_35e[D(___243c60h)].__1c6-D(___196dcch);
		s_35e[D(___243c60h)].__1ce = s_35e[D(___243c60h)].__1c6;

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(s_35e[D(___243c60h)].__1ae-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		s_35e[D(___243c60h)].__1b2 = 1+s_35e[D(___243c60h)].__1ae;
		s_35e[D(___243c60h)].__1ae = 0;
	}

	if((int)s_35e[D(___243c60h)].__1aa > 0){

		n = D(___196d98h)+s_35e[D(___243c60h)].__1ba-D(___196dc8h);
		s_35e[D(___243c60h)].__1c2 = s_35e[D(___243c60h)].__1ba;
		m = s_35e[D(___243c60h)].__1be-D(___196dcch);
		s_35e[D(___243c60h)].__1c6 = s_35e[D(___243c60h)].__1be;

		if(n >= 0){

			if(((n+0x8) < 0x140)&&(m >= 0)){

				if((m+0x8) < 0xc8){

					j = -1;
					while(++j < 8){

						i = -1;
						while(++i < 8){

							if((px = B(esip+0x40*(s_35e[D(___243c60h)].__1aa-1)+i+8*j)) != 0) B(ebxp+n+i+0x200*(j+m)+0x60) = px;
						}
					}
				}
			}
		}

		s_35e[D(___243c60h)].__1ae = 1+s_35e[D(___243c60h)].__1aa;
		s_35e[D(___243c60h)].__1aa = 0;
	}

	___243d88h = esip;
	___243d80h = ebxp;
}
