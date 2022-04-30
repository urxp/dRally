#include "drally.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243d08h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1de7d0h[];


void ___4a064h_cdecl(int, float, float, float);

void race___4a25ch(void){

	int 	i, n;
	struct_35e_t * 	s_35e;
	struct_94_t * 	s_94;
	struct_54_t * 	s_54;

	s_35e = (struct_35e_t *)___1e6ed0h;
	s_94 = (struct_94_t *)___1de580h;
	s_54 = (struct_54_t *)___1de7d0h;

	n = -1;
	while(++n < 4){

		s_35e[n].__14e = s_35e[n].XLocation;
		s_35e[n].__152 = s_35e[n].YLocation;
		s_35e[n].Direction = (float)(3.75*(double)(int)s_35e[n].ImgIndex);
		s_35e[n].__156 = s_35e[n].Direction;
		s_35e[n].ImgOffset = 0x640*s_35e[n].ImgIndex+0x25800*n;
		s_35e[n].Lap = 1;
		s_35e[n].Position = n+1;
		s_35e[n].__34a = 0;

		if((n > 0)||(s_94[0].__0 != 6)){

			___4a064h_cdecl(10*n+15, (float)(int)s_94[n].__38, (float)(int)s_94[n].__3c, (float)(int)s_94[n].__40);
		}

		s_35e[n].__19a = 0;
		s_35e[n].__0 = 0;
		s_35e[n].__b0 = 0.0f;
		s_35e[n].Finished = 0;
		s_35e[n].__18a = 0;
		s_35e[n].__14 = 0;
		s_35e[n].__18 = 0;
		s_35e[n].__19e = 0x1388*s_54[n].__14+0x3a98;
		s_35e[n].__1c = 0;
		s_35e[n].__a8 = s_94[n].__14;

		i = -1;
		while(++i < 0x10){

			s_35e[n].Ctrls[i] = 0;
			s_35e[n].ActionFlags[i] = 0;
		}

		s_35e[n].__bc = 0.0f;
		s_35e[n].__c0 = 0.0f;
		s_35e[n].__fc = 0.0f;
		s_35e[n].__100 = 0.0f;
		s_35e[n].__104 = 0.0f;
		s_35e[n].__17e = 0;
		s_35e[n].__182 = 0;
		s_35e[n].__186 = 0;
		s_35e[n].__192 = 0;
		s_35e[n].__196 = 0;
		s_35e[n].__162 = 0.0f;
		s_35e[n].__166 = 0.0f;
		s_35e[n].__16a = 0;
		s_35e[n].__16e = 0;
		s_35e[n].__1a6 = 0;
		s_35e[n].MineTimer = 0;
		s_35e[n].__1aa = 0;
		s_35e[n].__1ae = 0;
		s_35e[n].__1b2 = 0;
		s_35e[n].ActionFlags_i = 0;
		s_35e[n].__a4 = 0;

		i = -1;
		while(++i < 0xf){

			s_35e[n].__1e2[i] = 0;
			s_35e[n].__21e[i] = 0;
		}

		s_35e[n].__1b6 = 0;
		s_35e[n].__1da = 0;
		s_35e[n].__1de = 0;
		s_35e[n].Drug = 0;
		s_35e[n].__352 = 0;
		s_35e[n].__356 = 0;
		s_35e[n].__35a = 0;
		D(___243d08h) = 0xf;
	}

	D(___243c60h) = 4;
}
