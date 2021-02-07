#include "drally.h"

	extern byte ___243c60h[];
	extern byte ___1de580h[];
	extern byte ___1e6ed0h[];
	extern byte ___196efch[];
	extern byte ___243290h[];
	extern byte ___243d80h[];

dword __GET_FRAME_COUNTER(void);

double dR_Math_sin(double);
double dR_Math_cos(double);

static double local_op(double dval){

	return dval-(double)(int)(dval);
}

static int local_round(double dval){

	return (local_op(dval) < 0.5) ? (int)dval : (int)(1.0+dval);
}

#define L_PI 	create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)
#define L_5o6	create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f)

// RENDERS ROCKET FUEL
void race___51204h(void){

	double 	d_val, d_angle;
	int 	i, j, y, x, val;
	byte 	px;


	if((D(0x94*D(___243c60h)+___1de580h+0x58) == 1)&&((int)D(0x94*D(___243c60h)+___1de580h+0x34) > 0)&&(D(0x94*D(___243c60h)+___1de580h+0x20) != 0)){

		d_val = -2.3*(double)F32(___1de580h+0x10+0x94*D(___243c60h));
		d_angle = ((double)F32(___1e6ed0h+0xac+0x35e*D(___243c60h))+180.0)*L_PI/180.0;

		x = D(0x35e*D(___243c60h)+___1e6ed0h+4)-8+local_round(d_val*dR_Math_sin(d_angle));
		y = D(0x35e*D(___243c60h)+___1e6ed0h+8)-8+local_round(L_5o6*d_val*dR_Math_cos(d_angle));

		if((x >= 0)&&((x+0x10) < 0x140)){

			if((y >= 0)&&((y+0x10) < 0xc8)){

				val = (int)D(0x35e*D(___243c60h)+___1e6ed0h+0xc)/4;

				j = -1;
				while(++j < 0x10){

					i = -1;
					while(++i < 0x10){

						if((px = B(D(D(___196efch)*4+___243290h)+0x100*val+0x10*j+i))) B(D(___243d80h)+0x200*(y+j)+x+i+0x60) = px;
					}
				}

				if((__GET_FRAME_COUNTER()-D(___1e6ed0h+0x1de +0x35e*D(___243c60h))) > 3){
					
					D(___196efch) = !D(___196efch);
					D(___1e6ed0h+0x1de +0x35e*D(___243c60h)) = __GET_FRAME_COUNTER();
				}
			}
		}
	}

	D(___1de580h+0x58+0x94*D(___243c60h)) = 0;
}
