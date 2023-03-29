#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ MY_CAR_IDX[];
	extern int X___243c8ch;
	extern __BYTE__ ___1e6ed0h[];
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int TRX_WIDTH;
	extern int CURRENT_VIEWPORT_W;
	extern int Y___243c90h;
	extern int CURRENT_VIEWPORT_X;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern int TRX_HEIGHT;
	extern int CURRENT_VIEWPORT_H;
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ TRX_LIT_TAB[0x100];
	extern __BYTE__ ___243c60h[];
	extern __BYTE__ NUM_OF_CARS[];
	extern int TRX_VIEWPORT_TL_Y;
	extern int TRX_VIEWPORT_TL_X;
	extern __POINTER__ BACKBUFFER;
	extern __POINTER__ ___243d74h;
	extern __POINTER__ RACE_BURN1A_BPK;

void ___5e769h(__BYTE__ * A0, int Y3, int X3, int Y2, int X2, int Y1, int X1);
__DWORD__ __GET_FRAME_COUNTER(void);

#define LOC_PI 		3.14159265359
#define LOC_5OVER6	0.833333


// LIGHTS
static void helper00(int n){

	struct_35e_t * 	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	___5e769h(
		TRX_LIT_TAB,
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+170.0)*LOC_PI/180.0)),
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)),
		s_35e[n].__8,
		s_35e[n].__4);

	___5e769h(
		TRX_LIT_TAB,
		s_35e[n].__8+(int)(40.0*dRMath_cos(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(40.0*dRMath_sin(((double)s_35e[n].Direction+190.0)*LOC_PI/180.0)),
		s_35e[n].__8+(int)(36.0*dRMath_cos(((double)s_35e[n].Direction+198.0)*LOC_PI/180.0)*LOC_5OVER6),
		s_35e[n].__4+(int)(36.0*dRMath_sin(((double)s_35e[n].Direction+198.0)*LOC_PI/180.0)),
		s_35e[n].__8,
		s_35e[n].__4);

	___5e769h(
		TRX_LIT_TAB,
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

	int width = A0;
	int stride = A0;
	int height = A0;
	__BYTE__* src = vp1;
	__BYTE__* dest = BACKBUFFER + 0x200 * y + x;

	// y clip
	if (y < 0) {
		dest += (-y) * 0x200;
		src += (-y) * width;
		height += y;
		y = 0;
	}
	int ydiff = y + height - 0xc8;
	if (ydiff > 0) {
		height -= ydiff;
	}

	// x clip
	if (x < 0) {
		dest += (-x);
		src += (-x);
		width += x;
		x = 0;
	}
	int xdiff = x + width - 0x200;
	if (xdiff > 0) {
		width -= xdiff;
	}

	int yy = height;
	while (yy--) {
		int xx = width;
		__BYTE__* s = src;
		__BYTE__* d = dest;
		while (xx--) {
			if ((px = *s++)) *d = px;
			d++;
		}
		src += stride;
		dest += 0x200;
	}
}

// DEAD CAR
static void helper02(int n){

	struct_35e_t * 	s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	helper01(s_35e[n].__4+88, s_35e[n].__8-8, RACE_BURN1A_BPK+0x100*s_35e[n].__1da, 0x10);

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

	d00 = (double)CURRENT_VIEWPORT_CENTER_X;
	d01 = (double)X___243c8ch+(double)s_35e[D(MY_CAR_IDX)].XLocation;
	d02 = (double)(int)(TRX_WIDTH-CURRENT_VIEWPORT_CENTER_X);

	if(d00 > d01) s_35e[D(MY_CAR_IDX)].__4 = (int)(double)s_35e[D(MY_CAR_IDX)].XLocation;
	if(d02 < d01) s_35e[D(MY_CAR_IDX)].__4 = (int)((double)s_35e[D(MY_CAR_IDX)].XLocation-(double)(int)(TRX_WIDTH-CURRENT_VIEWPORT_W));

	if(lqandlq_d(d00, d01, d02)) s_35e[D(MY_CAR_IDX)].__4 = CURRENT_VIEWPORT_CENTER_X-X___243c8ch;

	s_35e[D(MY_CAR_IDX)].__4 += CURRENT_VIEWPORT_X;

	d00 = (double)CURRENT_VIEWPORT_CENTER_Y;
	d01 = (double)Y___243c90h+(double)s_35e[D(MY_CAR_IDX)].YLocation;
	d02 = (double)(int)(TRX_HEIGHT-CURRENT_VIEWPORT_CENTER_Y);

	if(d00 > d01) s_35e[D(MY_CAR_IDX)].__8 = (int)(double)s_35e[D(MY_CAR_IDX)].YLocation;
	if(d02 < d01) s_35e[D(MY_CAR_IDX)].__8 = (int)((double)s_35e[D(MY_CAR_IDX)].YLocation-(double)(int)(TRX_HEIGHT-CURRENT_VIEWPORT_H));

	if(lqandlq_d(d00, d01, d02)) s_35e[D(MY_CAR_IDX)].__8 = CURRENT_VIEWPORT_CENTER_Y-Y___243c90h;


	if(((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) > 0)&&(s_35e[D(MY_CAR_IDX)].Finished == 0)) helper00(D(MY_CAR_IDX));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(n != D(MY_CAR_IDX)){

			s_35e[n].__4 = (int)((double)s_35e[n].XLocation-(double)TRX_VIEWPORT_TL_X+(double)CURRENT_VIEWPORT_X);
			s_35e[n].__8 = (int)((double)(int)(double)s_35e[n].YLocation-(double)TRX_VIEWPORT_TL_Y);

			if(ltandlt((int)(CURRENT_VIEWPORT_X-0x28), (int)s_35e[n].__4, 0x168)){

				if(ltandlt(-40, (int)s_35e[n].__8, (int)(CURRENT_VIEWPORT_H+0x28))){
	
					if(((int)D(___1de580h+0x94*n+0x18) > 0)&&(s_35e[n].Finished == 0)) helper00(n);
				}
			}
		}
	}

	helper01(s_35e[D(MY_CAR_IDX)].__4+76, s_35e[D(MY_CAR_IDX)].__8-20, ___243d74h+s_35e[D(MY_CAR_IDX)].ImgOffset, 0x28);

	if((int)D(___1de580h+0x94*D(MY_CAR_IDX)+0x18) <= 0) helper02(D(MY_CAR_IDX));

	n = -1;
	while(++n < (int)D(NUM_OF_CARS)){

		if(n != D(MY_CAR_IDX)){
				
			if(ltandlt((int)(CURRENT_VIEWPORT_X-0x14), (int)s_35e[n].__4, 0x154)){

				if(ltandlt(-20, (int)s_35e[n].__8, (int)(CURRENT_VIEWPORT_H+0x14))){

					helper01(s_35e[n].__4+0x4c, s_35e[n].__8-0x14, ___243d74h+s_35e[n].ImgOffset, 0x28);
				}
			}

			if(ltandlt((int)(CURRENT_VIEWPORT_X-0x8), (int)s_35e[n].__4, 0x148)){
				
				if(ltandlt(-8, (int)s_35e[n].__8, (int)(CURRENT_VIEWPORT_H+0x8))){
							
					if((int)D(___1de580h+0x94*n+0x18) <= 0) helper02(n);
				}
			}
		}
	}

	D(___243c60h) = D(NUM_OF_CARS);
}
