#include "drally.h"
#include "drmath.h"

	extern byte ___243ce8h[];
	extern byte ___243c8ch[];
	extern byte ___1e6ed0h[];
	extern byte ___196d8ch[];
	extern byte ___243d28h[];
	extern byte ___196d88h[];
	extern byte ___243c90h[];
	extern byte ___196d98h[];
	extern byte ___196d94h[];
	extern byte ___243d2ch[];
	extern byte ___196d90h[];
	extern byte ___1de580h[];
	extern byte ___241c78h[];
	extern byte ___243c60h[];
	extern byte ___243cf4h[];
	extern byte ___196dcch[];
	extern byte ___196dc8h[];
	extern void * ___243d80h;
	extern void * ___243d74h;
	extern void * ___243d68h;

void ___5e769h(byte * A1, int A2, int A3, int A4, int A5, int A6, int A7);
dword __GET_FRAME_COUNTER(void);

#define LOC_PI 		create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)
#define LOC_5OVER6	create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f)


// LIGHTS
static void helper00(int n){

	___5e769h(
		___241c78h,
		D(___1e6ed0h+0x35e*n+8)+(int)(40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)-10.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)-10.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8)+(int)(40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)+10.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)+10.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8),
		D(___1e6ed0h+0x35e*n+4));

	___5e769h(
		___241c78h,
		D(___1e6ed0h+0x35e*n+8)+(int)(40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)+10.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)+10.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8)+(int)(36.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)+18.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(36.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)+18.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8),
		D(___1e6ed0h+0x35e*n+4));

	___5e769h(
		___241c78h,
		D(___1e6ed0h+0x35e*n+8)+(int)(36.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)-18.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(36.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)-18.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8)+(int)(40.0*dRMath_cos(((double)F32(___1e6ed0h+0x35e*n+0xac)-10.0+180.0)*LOC_PI/180.0)*LOC_5OVER6),
		D(___1e6ed0h+0x35e*n+4)+(int)(40.0*dRMath_sin(((double)F32(___1e6ed0h+0x35e*n+0xac)-10.0+180.0)*LOC_PI/180.0)),
		D(___1e6ed0h+0x35e*n+8),
		D(___1e6ed0h+0x35e*n+4));
}

// CAR
static void helper01(int x, int y, void * vp1, int A0){

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

	helper01(
		D(___1e6ed0h+0x35e*n+4)+0x58,
		D(___1e6ed0h+0x35e*n+8)-8,
		___243d68h+0x100*D(___1e6ed0h+0x35e*n+0x1da),
		0x10);

	if((D(___1e6ed0h+0x35e*n+0x1de)+0x3) <= __GET_FRAME_COUNTER()){

		D(___1e6ed0h+0x35e*n+0x1da)++;
		if((int)D(___1e6ed0h+0x35e*n+0x1da) > 7) D(___1e6ed0h+0x35e*n+0x1da) = 0;
		D(___1e6ed0h+0x35e*n+0x1de) = __GET_FRAME_COUNTER();
	}
}

static int ltandlt(int v0, int v1, int v2){ return (v0<v1)&&(v1<v2); }
static int lqandlq_d(double v0, double v1, double v2){ return (v0<=v1)&&(v1<=v2); }

// RENDER CARS
void race___4f300h(void){

	int 		n;
	double 		d00, d01, d02;


	d00 = (double)(int)D(___196d8ch);
	d01 = (double)(int)D(___243c8ch)+(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb4);
	d02 = (double)(int)(D(___243d28h)-D(___196d8ch));

	if(d00 > d01) D(___1e6ed0h+0x35e*D(___243ce8h)+4) = (int)(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb4);
	if(d02 < d01) D(___1e6ed0h+0x35e*D(___243ce8h)+4) = (int)((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb4)-(double)(int)(D(___243d28h)-D(___196d88h)));

	if(lqandlq_d(d00, d01, d02)) D(___1e6ed0h+0x35e*D(___243ce8h)+4) = D(___196d8ch)-D(___243c8ch);

	D(___1e6ed0h+0x35e*D(___243ce8h)+4) += D(___196d98h);

	d00 = (double)(int)D(___196d94h);
	d01 = (double)(int)D(___243c90h)+(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb8);
	d02 = (double)(int)(D(___243d2ch)-D(___196d94h));

	if(d00 > d01) D(___1e6ed0h+0x35e*D(___243ce8h)+8) = (int)(double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb8);
	if(d02 < d01) D(___1e6ed0h+0x35e*D(___243ce8h)+8) = (int)((double)F32(___1e6ed0h+0x35e*D(___243ce8h)+0xb8)-(double)(int)(D(___243d2ch)-D(___196d90h)));

	if(lqandlq_d(d00, d01, d02)) D(___1e6ed0h+0x35e*D(___243ce8h)+8) = D(___196d94h)-D(___243c90h);


	if(((int)D(___1de580h+0x94*D(___243ce8h)+0x18) > 0)&&(D(___1e6ed0h+0x35e*D(___243ce8h)+0x10a) == 0)) helper00(D(___243ce8h));

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(n != D(___243ce8h)){

			D(___1e6ed0h+0x35e*n+4) = (int)((double)F32(___1e6ed0h+0x35e*n+0xb4)-(double)(int)D(___196dc8h)+(double)(int)D(___196d98h));
			D(___1e6ed0h+0x35e*n+8) = (int)((double)(int)(double)F32(___1e6ed0h+0x35e*n+0xb8)-(double)(int)D(___196dcch));

			if(ltandlt((int)(D(___196d98h)-0x28), (int)D(___1e6ed0h+0x35e*n+4), 0x168)){

				if(ltandlt(-40, (int)D(___1e6ed0h+0x35e*n+8), (int)(D(___196d90h)+0x28))){
	
					if(((int)D(___1de580h+0x94*n+0x18) > 0)&&(D(___1e6ed0h+0x35e*n+0x10a) == 0)) helper00(n);
				}
			}
		}
	}

	helper01(
		D(___1e6ed0h+0x35e*D(___243ce8h)+4)+0x4c,
		D(___1e6ed0h+0x35e*D(___243ce8h)+8)-0x14,
		___243d74h+D(___1e6ed0h+0x35e*D(___243ce8h)+0x10),
		0x28);

	if((int)D(___1de580h+0x94*D(___243ce8h)+0x18) <= 0) helper02(D(___243ce8h));

	n = -1;
	while(++n < (int)D(___243cf4h)){

		if(n != D(___243ce8h)){
				
			if(ltandlt((int)(D(___196d98h)-0x14), (int)D(___1e6ed0h+0x35e*n+4), 0x154)){

				if(ltandlt(-20, (int)D(___1e6ed0h+0x35e*n+8), (int)(D(___196d90h)+0x14))){

					helper01(
						D(___1e6ed0h+0x35e*n+4)+0x4c,
						D(___1e6ed0h+0x35e*n+8)-0x14,
						___243d74h+D(___1e6ed0h+0x35e*n+0x10),
						0x28);
				}
			}

			if(ltandlt((int)(D(___196d98h)-0x8), (int)D(___1e6ed0h+0x35e*n+4), 0x148)){
				
				if(ltandlt(-8, (int)D(___1e6ed0h+0x35e*n+8), (int)(D(___196d90h)+0x8))){
							
					if((int)D(___1de580h+0x94*n+0x18) <= 0) helper02(n);
				}
			}
		}
	}

	D(___243c60h) = D(___243cf4h);
}
