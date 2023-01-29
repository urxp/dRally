#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196efch[];
	extern __POINTER__ RACE_ROCKETX_BPK[2];
	extern __POINTER__ BACKBUFFER;

__DWORD__ __GET_FRAME_COUNTER(void);

static double local_op(double dval){

	return dval-(double)(int)(dval);
}

static int local_round(double dval){

	return (local_op(dval) < 0.5) ? (int)dval : (int)(1.0+dval);
}

#define L_PI 	3.14159265359
#define L_5o6	0.833333

// RENDERS ROCKET FUEL
void race___51204h(void){

	double 	d_val, d_angle;
	int 	i, j, y, x, val;
	__BYTE__ 	px;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;


	if((D(0x94*D(___243c60h)+___1de580h+0x58) == 1)&&((int)D(0x94*D(___243c60h)+___1de580h+0x34) > 0)&&(D(0x94*D(___243c60h)+___1de580h+0x20) != 0)){

		d_val = -2.3*(double)F32(___1de580h+0x10+0x94*D(___243c60h));
		d_angle = ((double)s_35e[D(___243c60h)].Direction+180.0)*L_PI/180.0;

		x = s_35e[D(___243c60h)].__4-8+local_round(d_val*dRMath_sin(d_angle));
		y = s_35e[D(___243c60h)].__8-8+local_round(L_5o6*d_val*dRMath_cos(d_angle));

		if((x >= 0)&&((x+0x10) < 0x140)){

			if((y >= 0)&&((y+0x10) < 0xc8)){

				val = (int)s_35e[D(___243c60h)].ImgIndex/4;

				j = -1;
				while(++j < 0x10){

					i = -1;
					while(++i < 0x10){

						if((px = B(RACE_ROCKETX_BPK[D(___196efch)]+0x100*val+0x10*j+i))) B(BACKBUFFER+0x200*(y+j)+x+i+0x60) = px;
					}
				}

				if((__GET_FRAME_COUNTER()-s_35e[D(___243c60h)].__1de) > 3){
					
					D(___196efch) = !D(___196efch);
					s_35e[D(___243c60h)].__1de = __GET_FRAME_COUNTER();
				}
			}
		}
	}

	D(___1de580h+0x58+0x94*D(___243c60h)) = 0;
}
