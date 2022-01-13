#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___243c8ch[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___196d8ch[];
	extern __BYTE__ ___243d28h[];
	extern __BYTE__ ___196d88h[];
	extern __BYTE__ ___243c90h[];
	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___196d94h[];
	extern __BYTE__ ___243d2ch[];
	extern __BYTE__ ___196d90h[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ ___241c78h[0x100];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ NUM_OF_CARS[];
	extern __BYTE__ ___196dcch[];
	extern __BYTE__ ___196dc8h[];
	extern __POINTER__ ___243d80h;
	extern __POINTER__ ___243d74h;
	extern __POINTER__ ___243d68h;

void ___5e769h(__BYTE__ * A1, int A2, int A3, int A4, int A5, int A6, int A7);
__DWORD__ __GET_FRAME_COUNTER(void);

#define LOC_PI 		create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)
#define LOC_5OVER6	create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f)


// LIGHTS
static void helper00(int n){

	struct_35e_t * 	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	___5e769h(
		___241c78h,
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)),
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)),
		s_35e[n].__8,
		s_35e[n].__4);

	___5e769h(
		___241c78h,
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)),
		s_35e[n].__8+(int)(36.0*dRMath_cos(((double)s_35e[n].Direction+198.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(36.0*dRMath_sin(((double)s_35e[n].Direction+198.0)*LOC_PI/180.0)),
		s_35e[n].__8,
		s_35e[n].__4);

	___5e769h(
		___241c78h,
		s_35e[n].__8+(int)(36.0*dRMath_cos(((double)s_35e[n].Direction+162.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(36.0*dRMath_sin(((double)s_35e[n].Direction+162.0)*LOC_PI/180.0)),
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)),
		s_35e[n].__8,
		s_35e[n].__4);
}

// CAR
static void helper01(int x, int y, __POINTER__ vp1, int A0){

	int 		i, n, offset;
	__BYTE__ 	px;


	offset = 0x200*y+x;
	n = 0;
	do {

		if(offset > 0){

			i = -1;
			while(++i < A0){

				if((px = read_b(vp1+n*A0+i)) != 0) write_b(___243d80h+offset+i, px);
			}
		}

		n++;
		offset += 0x200;
	} while((n < A0)&&(offset < 0x19000)); // 512x200
}

// DEAD CAR
static void helper02(int n){

	struct_35e_t * 	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	helper01(s_35e[n].__4+88, s_35e[n].__8-8, ___243d68h+0x100*s_35e[n].__1da, 0x10);

	if((s_35e[n].__1de+0x3) <= __GET_FRAME_COUNTER()){

		s_35e[n].__1da++;
		if((int)s_35e[n].__1da > 7) s_35e[n].__1da = 0;
		s_35e[n].__1de = __GET_FRAME_COUNTER();
	}
}

static int ltandlt(int v0, int v1, int v2){ return (v0<v1)&&(v1<v2); }
static int lqandlq_d(double v0, double v1, double v2){ return (v0<=v1)&&(v1<=v2); }

// RENDER CARS
void race___4f300h(void){

	int 			n;
	double 			d00, d01, d02;
	struct_35e_t * 	s_35e;


	s_35e = (struct_35e_t *)___1e6ed0h;

	d00 = (double)(int)D(___196d8ch);
	d01 = (double)(int)D(___243c8ch)+(double)s_35e[D(MY_CAR_IDX)].XLocation;
	d02 = (double)(int)(D(___243d28h)-D(___196d8ch));

	if(d00 > d01) s_35e[D(MY_CAR_IDX)].__4 = (int)(double)s_35e[D(MY_CAR_IDX)].XLocation;
	if(d02 < d01) s_35e[D(MY_CAR_IDX)].__4 = (int)((double)s_35e[D(MY_CAR_IDX)].XLocation-(double)(int)(D(___243d28h)-D(___196d88h)));

	if(lqandlq_d(d00, d01, d02)) s_35e[D(MY_CAR_IDX)].__4 = D(___196d8ch)-D(___243c8ch);

	s_35e[D(MY_CAR_IDX)].__4 += D(___196d98h);

	d00 = (double)(int)D(___196d94h);
	d01 = (double)(int)D(___243c90h)+(double)s_35e[D(MY_CAR_IDX)].YLocation;
	d02 = (double)(int)(D(___243d2ch)-D(___196d94h));

	if(d00 > d01) s_35e[D(MY_CAR_IDX)].__8 = (int)(double)s_35e[D(MY_CAR_IDX)].YLocation;
	if(d02 < d01) s_35e[D(MY_CAR_IDX)].__8 = (int)((double)s_35e[D(MY_CAR_IDX)].YLocation-(double)(int)(D(___243d2ch)-D(___196d90h)));

	if(lqandlq_d(d00, d01, d02)) s_35e[D(MY_CAR_IDX)].__8 = D(___196d94h)-D(___243c90h);


	if(((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) > 0)&&(s_35e[D(MY_CAR_IDX)].__10a == 0)) helper00(D(MY_CAR_IDX));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(n != D(MY_CAR_IDX)){

			s_35e[n].__4 = (int)((double)s_35e[n].XLocation-(double)(int)D(___196dc8h)+(double)(int)D(___196d98h));
			s_35e[n].__8 = (int)((double)(int)(double)s_35e[n].YLocation-(double)(int)D(___196dcch));

			if(ltandlt((int)(D(___196d98h)-0x28), (int)s_35e[n].__4, 0x168)){

				if(ltandlt(-40, (int)s_35e[n].__8, (int)(D(___196d90h)+0x28))){
	
					if(((int)D(___1de580h+0x94*n+0x18) > 0)&&(s_35e[n].__10a == 0)) helper00(n);
				}
			}
		}
	}

	helper01(s_35e[D(MY_CAR_IDX)].__4+76, s_35e[D(MY_CAR_IDX)].__8-20, ___243d74h+s_35e[D(MY_CAR_IDX)].ImgOffset, 0x28);

	if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) <= 0) helper02(D(MY_CAR_IDX));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(n != D(MY_CAR_IDX)){
				
			if(ltandlt((int)(D(___196d98h)-0x14), (int)s_35e[n].__4, 0x154)){

				if(ltandlt(-20, (int)s_35e[n].__8, (int)(D(___196d90h)+0x14))){

					helper01(s_35e[n].__4+0x4c, s_35e[n].__8-0x14, ___243d74h+s_35e[n].ImgOffset, 0x28);
				}
			}

			if(ltandlt((int)(D(___196d98h)-0x8), (int)s_35e[n].__4, 0x148)){
				
				if(ltandlt(-8, (int)s_35e[n].__8, (int)(D(___196d90h)+0x8))){
							
					if((int)D(___1de580h+0x94*n+0x18) <= 0) helper02(n);
				}
			}
		}
	}

	D(___243c60h) = D(NUM_OF_CARS);
}
