#include "drally.h"
#include "drmath.h"
#include "drally_structs_free.h"

	extern __BYTE__ ___243c60h[];
	extern __BYTE__ ___1e6ed0h[];
	extern __BYTE__ ___243cfch[];
	extern __BYTE__ ___1de580h[];
	extern __BYTE__ MY_CAR_IDX[];
	extern __BYTE__ ___196db8h[];
	extern __BYTE__ ___243d24h[];
	extern __BYTE__ ___243d20h[];
	extern __BYTE__ ___243d28h[];
	extern __BYTE__ ___243d2ch[];
	extern __POINTER__ ___243d60h;
	extern __POINTER__ ___243d74h;
	extern __BYTE__ ___243cb0h[];
	extern __BYTE__ ___243cb4h[];

#define A_PI 	create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)
#define L0_83 	create_double(0xa3,0xae,0xb5,0xf7,0xa9,0xaa,0xea,0x3f)

#define CTRL_NULL			0x00
#define CTRL_ACCELERATE		0x01
#define CTRL_BRAKE			0x02
#define CTRL_STEER_LEFT		0x04
#define CTRL_STEER_RIGHT	0x08
#define CTRL_TURBO_BOOST	0x10
#define CTRL_MACHINE_GUN	0x20
#define CTRL_DROP_MINE		0x40
#define CTRL_HORN			0x42

int rand_watcom106(void);

static __DWORD__ helper00(int i){

	__DWORD__	edx, rslt;

	if(i < 0){

		rslt = 0xf;
	}
	else {

		edx = D(___243d28h)*D(___243d2ch);

		if(i >= (int)edx){

			rslt = 0xf;
		}
		else {

			rslt = B(___243d60h+i)&0xf;
		}
	}

	return rslt;
}

static void helper01(double d_sign){

	double d_tmp;
	struct_35e_t * s_35e;

	s_35e = (struct_35e_t *)___1e6ed0h;

	if((s_35e[D(___243c60h)].__18 == 0)&&(s_35e[D(___243c60h)].__1c == 0)){

		FPUSH(90.0);
		ST(0) = ST(0)/(double)s_35e[D(___243c60h)].__a8;
		ST(0) = (double)F32(___1de580h+0x94*D(___243c60h)+0x10)/ST(0);
		FPUSH(s_35e[D(___243c60h)].__bc);
		ST(0) = ST(0)/36.0;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(___243cfch)+ST(0)*d_sign;
		F32(___243cfch) = (float)ST(0);
		ST(0) = ST(0)*2.0;
		ST(1) = ST(1)*ST(0); FPOP();
		FPUSH(s_35e[D(___243c60h)].__a8);
		ST(0) = (double)s_35e[D(___243c60h)].Direction+ST(0)*d_sign;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (double)F32(___243cfch)+ST(0)*d_sign;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		s_35e[D(___243c60h)].Direction = (float)FPOP();
		F32(___243cfch) = (float)FPOP();

		if(s_35e[D(___243c60h)].__c0*d_sign < 36.0f) s_35e[D(___243c60h)].__c0 += (float)(2.0*d_sign);
	}
}

// RACE ENGINE
void race___4c434h(void){

	double 	d_tmp, d_hypotenuse, d_a, d_b, d_sign;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi;
	__BYTE__ 	esp[0x64];
	int 	breaker, i, j;
	__POINTER__ 	ebxp;
	__POINTER__ 	edip;
	struct_35e_t * 	s_35e;	


	s_35e = (struct_35e_t *)___1e6ed0h;
	D(___243cfch) = 0;
	s_35e[D(___243c60h)].__15e = 0.0f;
	s_35e[D(___243c60h)].__15a = 0.0f;
	s_35e[D(___243c60h)].__b0 *= 0.98;
	
	if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0){

		if(s_35e[D(___243c60h)].__10a == 0){

			L(ecx) = s_35e[D(___243c60h)].Ctrls[getCounter(4)];

			if((L(ecx)&CTRL_ACCELERATE) != 0){
				
				if(((L(ecx)&CTRL_TURBO_BOOST) == 0)||((int)D(___1de580h+0x94*D(___243c60h)+0x34) <= 0)){

					s_35e[D(___243c60h)].__b0 += (float)(0.8*(double)F32(___1de580h+0x94*D(___243c60h)+4)/30.0);
				}
				else {

					if(D(___1de580h+0x94*D(___243c60h)+0x20) == 0){

						s_35e[D(___243c60h)].__b0 += (float)(1.3*(double)F32(___1de580h+0x94*D(___243c60h)+4)/30.0);
					}
					else {

						s_35e[D(___243c60h)].__b0 += (float)(1.5*(double)F32(___1de580h+0x94*D(___243c60h)+4)/30.0);

						D(___1de580h+0x94*D(___243c60h)+0x18) -= 0x16;
						if((int)D(___1de580h+0x94*D(___243c60h)+0x18) < 0) D(___1de580h+0x94*D(___243c60h)+0x18) = 0;

						D(___1de580h+0x94*D(___243c60h)+0x58) = 1;
					}
				}

				s_35e[D(___243c60h)].__b0 *= 0.986f;
			}

			if(D(MY_CAR_IDX) == D(___243c60h)){

				if(D(___1de580h+0x94*D(___243c60h)+0x58) == 1) D(___196db8h)++;
				if(D(___1de580h+0x94*D(___243c60h)+0x58) == 0) D(___196db8h) = 0;
			}

			L(edx) = s_35e[D(___243c60h)].Ctrls[getCounter(4)];

			if(((L(edx)&CTRL_BRAKE) != 0)&&((L(edx)&CTRL_DROP_MINE) == 0)){

				s_35e[D(___243c60h)].__b0 -= F32(___1de580h+0x94*D(___243c60h)+4)/90.0;
				s_35e[D(___243c60h)].__b0 *= 0.986f;
			}

			if((s_35e[D(___243c60h)].Ctrls[getCounter(4)]&CTRL_TURBO_BOOST) != 0){

				if((int)D(___1de580h+0x94*D(___243c60h)+0x34) > 0){

					if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0){

						D(___1de580h+0x94*D(___243c60h)+0x34) -= 0x190;
						
						if((int)D(___1de580h+0x94*D(___243c60h)+0x34) < 0) D(___1de580h+0x94*D(___243c60h)+0x34) = 0;
					}
				}
			}

			if((s_35e[D(___243c60h)].Ctrls[getCounter(4)]&CTRL_TURBO_BOOST) == 0){

				if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0){

					D(___1de580h+0x94*D(___243c60h)+0x34) += 0x14;
					if((int)D(___1de580h+0x94*D(___243c60h)+0x34) > 0x19000) D(___1de580h+0x94*D(___243c60h)+0x34) = 0x19000;
				}
			}
		}

		if((int)D(___1de580h+0x94*D(___243c60h)+0x18) <= 0) D(___1de580h+0x94*D(___243c60h)+4) = 0;

		if(s_35e[D(___243c60h)].__10a != 0){

			s_35e[D(___243c60h)].__bc *= (float)(9.0/10.0);
		}
		else {

			if(0.0 >= (double)F32(___1de580h+0x94*D(___243c60h)+4)){

				s_35e[D(___243c60h)].__bc *= (float)(9.0/10.0);
			}
			else {

				s_35e[D(___243c60h)].__bc = (float)((((double)s_35e[D(___243c60h)].__c0*(double)s_35e[D(___243c60h)].__b0)*(double)F32(___1de580h+0x94*D(___243c60h)+0xc))/(double)F32(___1de580h+0x94*D(___243c60h)+4));

				if(dRMath_abs((double)s_35e[D(___243c60h)].__bc) > 20.0){

					s_35e[D(___243c60h)].__b0 *= (float)(49.0/50.0);
				}
			}
		}

		if((s_35e[D(___243c60h)].Ctrls[getCounter(4)]&CTRL_STEER_RIGHT) != 0) helper01(-1.0);
		if(s_35e[D(___243c60h)].Direction < 0.0f) s_35e[D(___243c60h)].Direction += 360.0f;
		if((s_35e[D(___243c60h)].Ctrls[getCounter(4)]&CTRL_STEER_LEFT) != 0) helper01(1.0);
		if(s_35e[D(___243c60h)].Direction >= 360.0f) s_35e[D(___243c60h)].Direction -= 360.0f;

		if(s_35e[D(___243c60h)].__c0 > 0.0f) s_35e[D(___243c60h)].__c0 -= 1.0f;
		if(s_35e[D(___243c60h)].__c0 < 0.0f) s_35e[D(___243c60h)].__c0 += 1.0f;

		if((int)D(___1de580h+0x94*D(___243c60h)+0x18) > 0){
		
			s_35e[D(___243c60h)].Direction += s_35e[D(___243c60h)].__104;
		}

		if(s_35e[D(___243c60h)].Direction < 0.0f) s_35e[D(___243c60h)].Direction += 360.0f;
		if(s_35e[D(___243c60h)].Direction >= 360.0f) s_35e[D(___243c60h)].Direction -= 360.0f;
	} // i

	F32(esp+0x38) = (float)((double)s_35e[D(___243c60h)].__bc*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+ 90.0)*A_PI/180.0)/11.0);
	F32(esp+0x3c) = (float)((double)s_35e[D(___243c60h)].__bc*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+ 90.0)*A_PI/180.0)*L0_83/11.0);
	F32(esp+0x34) = (float)((double)s_35e[D(___243c60h)].__b0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+180.0)*A_PI/180.0));
	F32(esp+0x30) = (float)((double)s_35e[D(___243c60h)].__b0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+180.0)*A_PI/180.0)*L0_83);
	F32(___243d24h) = (float)((double)F32(___243cfch)*dRMath_sin((((double)s_35e[D(___243c60h)].Direction+270.0)*A_PI)/180.0));
	F32(___243d20h) = (float)((double)F32(___243cfch)*dRMath_cos((((double)s_35e[D(___243c60h)].Direction+270.0)*A_PI)/180.0)*L0_83);

	d_a = (double)F32(esp+0x34)+(double)F32(esp+0x38);
	d_b = (double)F32(esp+0x30)+(double)F32(esp+0x3c);

	d_hypotenuse = dRMath_hypotenuse(d_a, d_b);
	F32(esp+0x58) = (d_hypotenuse == 0.0)?1.0f:(float)(dRMath_abs((double)s_35e[D(___243c60h)].__b0)/d_hypotenuse);

	s_35e[D(___243c60h)].__15a = (float)((double)s_35e[D(___243c60h)].__fc+(double)F32(___243d24h)+(double)F32(esp+0x58)*d_a);
	s_35e[D(___243c60h)].__15e = (float)((double)s_35e[D(___243c60h)].__100+(double)F32(___243d20h)+(double)F32(esp+0x58)*d_b);

	s_35e[D(___243c60h)].__c4 = (float)(18.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+206.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__c8 = (float)(18.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+206.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__cc = (float)(18.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+154.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__d0 = (float)(18.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+154.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__d4 = (float)(18.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+334.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__d8 = (float)(18.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+334.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__dc = (float)(18.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+ 26.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__e0 = (float)(18.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+ 26.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__e4 = (float)( 8.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+270.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__e8 = (float)( 8.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+270.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__ec = (float)( 8.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+ 90.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__f0 = (float)( 8.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+ 90.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);
	s_35e[D(___243c60h)].__f4 = (float)(22.0*dRMath_sin(((double)s_35e[D(___243c60h)].Direction+180.0)*A_PI/180.0)+(double)s_35e[D(___243c60h)].__15a);
	s_35e[D(___243c60h)].__f8 = (float)(22.0*dRMath_cos(((double)s_35e[D(___243c60h)].Direction+180.0)*A_PI/180.0)*L0_83+(double)s_35e[D(___243c60h)].__15e);

	D(___243d24h) = 0;
	D(___243d20h) = 0;

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__f8);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__f4);
	D(esp+0x2c) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__c8);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__c4);
	D(esp+0x50) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__d0);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__cc);
	D(esp+0x48) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__d8);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__d4);
	D(esp+0x4c) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__e0);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__dc);
	D(esp+0x54) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__e8);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__e4);
	D(esp+0x40) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	edx = (int)((double)s_35e[D(___243c60h)].YLocation+(double)s_35e[D(___243c60h)].__f0);
	D(esp+0x5c) = (int)((double)s_35e[D(___243c60h)].XLocation+(double)s_35e[D(___243c60h)].__ec);
	D(esp+0x44) = helper00(edx*D(___243d28h)+D(esp+0x5c));

	s_35e[D(___243c60h)].ImgIndex = (int)((double)s_35e[D(___243c60h)].Direction/3.75);
	s_35e[D(___243c60h)].ImgOffset = 0x25800*D(___243c60h)+0x640*s_35e[D(___243c60h)].ImgIndex;
	ecx = (int)((double)s_35e[D(___243c60h)].__15e+(double)s_35e[D(___243c60h)].YLocation-20.0);
	ebxp = ___243d74h+(int)s_35e[D(___243c60h)].ImgOffset;
	edip = ___243d60h+(int)(double)s_35e[D(___243c60h)].XLocation-0x14+(int)D(___243d28h)*(int)ecx+(int)(double)s_35e[D(___243c60h)].__15a;
	esi = 0xf;

	j = -1;
	while(++j < 0x28){

		breaker = 0;

		i = -1;
		while(++i < 0x28){

			if(((signed char)B(ebxp+0x28*j+i) > 3)&&((signed char)(B(edip+D(___243d28h)*j+i)&0xf) < 4)){

				esi = B(edip+D(___243d28h)*j+i)&0xf;
				D(___243cb0h) = i;
				D(___243cb4h) = j;
				breaker = 1;
				break;
			}
		}

		if(breaker == 1) break;
	}

	s_35e[D(___243c60h)].__14 = esi;

	if((int)esi >= 4){

		s_35e[D(___243c60h)].__14 = 0;
	}
	else {

		s_35e[D(___243c60h)].__172 = D(___243cb0h)-0x14;
		edx = D(___243cb4h);
		s_35e[D(___243c60h)].__18e = esi;
		edx = edx-0x14;
		ecx = s_35e[D(___243c60h)].__192;
		s_35e[D(___243c60h)].__176 = edx;

		if((int)ecx > 3){

			s_35e[D(___243c60h)].__b0 = 0.0f;
			s_35e[D(___243c60h)].__16a = 1;
			s_35e[D(___243c60h)].__16e = 0;

			while(1){

				if((int)s_35e[D(___243c60h)].__14 >= 4){

					s_35e[D(___243c60h)].__14 = 0;
					break;
				}

				eax = rand_watcom106();
				ebx = 2*s_35e[D(___243c60h)].__16a+1;
				edx = (int)eax>>0x1f;
				edx = (long long)(int)eax%(int)ebx;
				edx = edx-s_35e[D(___243c60h)].__16a;
				D(esp+0x5c) = edx;
				s_35e[D(___243c60h)].__162 = (float)(double)(int)D(esp+0x5c);
				eax = rand_watcom106();
				ebx = 2*s_35e[D(___243c60h)].__16a+1;
				edx = (int)eax>>0x1f;
				edx = (long long)(int)eax%(int)ebx;
				edi = s_35e[D(___243c60h)].__16e+1;
				D(esp+0x5c) = edx-s_35e[D(___243c60h)].__16a;
				eax = edi;
				edx = (int)eax>>0x1f;
				edx = (long long)(int)eax%5;
				s_35e[D(___243c60h)].__16e = edi;
				FPUSH((int)D(esp+0x5c));
				s_35e[D(___243c60h)].__166 = (float)FPOP();

				if(edx == 0){
										
					if((int)s_35e[D(___243c60h)].__16a < 0x1e) s_35e[D(___243c60h)].__16a++; 
				}

				FPUSH(s_35e[D(___243c60h)].__166);
				ST(0) = ST(0)+(double)s_35e[D(___243c60h)].YLocation;
				s_35e[D(___243c60h)].YLocation = (float)ST(0);
				ST(0) = ST(0)+(double)s_35e[D(___243c60h)].__15e-20.0;
				D(esp+0x5c) = (int)FPOP();
				edi = D(___243d28h)*D(esp+0x5c);
				FPUSH(s_35e[D(___243c60h)].__15a);
				FPUSH(s_35e[D(___243c60h)].__162);
				d_tmp = ST(0)+(double)s_35e[D(___243c60h)].XLocation;
				ST(0) = ST(1);
				ST(1) = d_tmp;
				d_tmp = (int)ST(0);
				ST(0) = ST(1);
				ST(1) = d_tmp;
				s_35e[D(___243c60h)].XLocation = (float)ST(0);
				ecx = (int)FPOP();
				D(esp+0x5c) = (int)FPOP();

				edip = ___243d60h+(int)ecx+(int)edi-0x14+(int)D(esp+0x5c);
				ebxp = ___243d74h+s_35e[D(___243c60h)].ImgOffset;
				esi = 0xf;
				edx = 0;
				eax = 0;

				ecx = 0;
				while(1){

					if((signed char)B(ebxp) <= 3){

						edip++;
						ebxp++;
						ecx++;

						if(ecx == 0x28){

							edip = edip+D(___243d28h)-0x28;
							edx++;
							if(edx == 0x28) break;
							ecx = 0;
						}
					}
					else {

						L(eax) = B(edip)&0xf;

						if((signed char)L(eax) >= 4){

							edip++;
							ebxp++;
							ecx++;

							if(ecx == 0x28){

								edip = edip+D(___243d28h)-0x28;
								edx++;
								if(edx == 0x28) break;
								ecx = 0;
							}
						}
						else {

							esi = eax;
							D(___243cb0h) = ecx;
							D(___243cb4h) = edx;
							break;
						}
					}
				} // w

				s_35e[D(___243c60h)].__14 = esi;

				if((int)esi < 4){
					
					s_35e[D(___243c60h)].YLocation -= s_35e[D(___243c60h)].__166;
					s_35e[D(___243c60h)].XLocation -= s_35e[D(___243c60h)].__162;
				}
			} // w
		} // i

		if((s_35e[D(___243c60h)].__192 != 0)&&((int)s_35e[D(___243c60h)].__192 <= 3)){

			s_35e[D(___243c60h)].__fc = (float)(-1.0*(double)s_35e[D(___243c60h)].__15a);
			s_35e[D(___243c60h)].__100 = (float)(-1.0*(double)s_35e[D(___243c60h)].__15e);
			s_35e[D(___243c60h)].__b0 = 0.0f;
			s_35e[D(___243c60h)].__14 = 1;
		}

		if(s_35e[D(___243c60h)].__192 == 0){
	
			if(((int)D(esp+0x48) < 4)||((int)D(esp+0x4c) < 4)){

				if((int)D(esp+0x2c) >= 4){
					
					s_35e[D(___243c60h)].Direction += 20.0f;
				}
			}

			if(((int)D(esp+0x50) < 4)||((int)D(esp+0x54) < 4)){

				if((int)D(esp+0x2c) >= 4){
				
					s_35e[D(___243c60h)].Direction -= 20.0f;
				}
			}

			if(s_35e[D(___243c60h)].Direction < 0.0f) s_35e[D(___243c60h)].Direction += 360.0f;
			if(s_35e[D(___243c60h)].Direction >= 360.0f) s_35e[D(___243c60h)].Direction -= 360.0f;

			s_35e[D(___243c60h)].__b0 *= (float)(7.0/8.0);

			s_35e[D(___243c60h)].__14 = 1;
		} // i
	} // i

	if((D(esp+0x50) == 4)||(D(esp+0x48) == 4)||(D(esp+0x4c) == 4)||(D(esp+0x54) == 4)||(D(esp+0x40) == 4)||(D(esp+0x44) == 4)){

		s_35e[D(___243c60h)].__b0 *= (float)(34.0/35.0);
	}

	if((D(esp+0x48) == 5)||(D(esp+0x4c) == 5)){

		s_35e[D(___243c60h)].__104 += 0.2f;
		s_35e[D(___243c60h)].__b0 *= (float)(29.0/30.0);
	}

	if((D(esp+0x50) == 5)||(D(esp+0x54) == 5)){

		s_35e[D(___243c60h)].__104 -= 0.2f;
		s_35e[D(___243c60h)].__b0 *= (float)(29.0/30.0);
	}

	if((D(esp+0x50) == 6)||(D(esp+0x48) == 6)||(D(esp+0x4c) == 6)||(D(esp+0x54) == 6)||(D(esp+0x40) == 6)||(D(esp+0x44) == 6)){

		s_35e[D(___243c60h)].__b0 *= (float)(8.0/9.0);
	}

	if((D(esp+0x50) == 7)||(D(esp+0x48) == 7)||(D(esp+0x4c) == 7)||(D(esp+0x54) == 7)||(D(esp+0x40) == 7)||(D(esp+0x44) == 7)){

		s_35e[D(___243c60h)].__b0 *= (float)(19.0/20.0);
	}

	if((D(esp+0x50) == 0xa)||(D(esp+0x4c) == 0xa)){

		s_35e[D(___243c60h)].__104 -= 0.15f;
	}

	if((D(esp+0x48) == 0xa)||(D(esp+0x54) == 0xa)){

		s_35e[D(___243c60h)].__104 += 0.15f;
	}

	if((D(esp+0x50) == 0xb)||(D(esp+0x48) == 0xb)||(D(esp+0x4c) == 0xb)||(D(esp+0x54) == 0xb)||(D(esp+0x40) == 0xb)||(D(esp+0x44) == 0xb)){

		s_35e[D(___243c60h)].__b0 *= (float)(76.0/75.0);
	}

	if((D(esp+0x50) == 0xc)||(D(esp+0x4c) == 0xc)){

		s_35e[D(___243c60h)].__104 -= 0.05f;
	}

	if((D(esp+0x48) == 0xc)||(D(esp+0x54) == 0xc)){

		s_35e[D(___243c60h)].__104 += 0.05f;
	}

	if((D(esp+0x50) == 0xd)||(D(esp+0x48) == 0xd)||(D(esp+0x4c) == 0xd)||(D(esp+0x54) == 0xd)||(D(esp+0x40) == 0xd)||(D(esp+0x44) == 0xd)){

		F64(esp+0x10) = 7.0*(double)s_35e[D(___243c60h)].__b0;
		s_35e[D(___243c60h)].Direction += (float)((double)rand_watcom106()*F64(esp+0x10)*create_double(0,0,0,0,0,0,0xf0,0x3e));
		F64(esp+0x10) = 7.0*(double)s_35e[D(___243c60h)].__b0;
		s_35e[D(___243c60h)].Direction -= (float)((double)rand_watcom106()*F64(esp+0x10)*create_double(0,0,0,0,0,0,0xf0,0x3e));
		if(s_35e[D(___243c60h)].Direction < 0.0f) s_35e[D(___243c60h)].Direction += 360.0f;
		if(s_35e[D(___243c60h)].Direction >= 360.0f) s_35e[D(___243c60h)].Direction -= 360.0f;
		s_35e[D(___243c60h)].__b0 *= (float)(29.0/30.0);
	}

	if((D(esp+0x50) == 0xe)||(D(esp+0x48) == 0xe)||(D(esp+0x4c) == 0xe)||(D(esp+0x54) == 0xe)||(D(esp+0x40) == 0xe)||(D(esp+0x44) == 0xe)){

		s_35e[D(___243c60h)].__b0 *= (float)(39.0/40.0);
	}

	s_35e[D(___243c60h)].XLocation += s_35e[D(___243c60h)].__15a;
	s_35e[D(___243c60h)].YLocation += s_35e[D(___243c60h)].__15e;

	F32(esp+0x28) = (float)(int)(D(___243d28h)-0x14);
	if(s_35e[D(___243c60h)].XLocation > F32(esp+0x28)) s_35e[D(___243c60h)].XLocation = F32(esp+0x28);
	if(s_35e[D(___243c60h)].XLocation < 20.0) s_35e[D(___243c60h)].XLocation = 20.0f;

	F32(esp+0x24) = (float)(int)(D(___243d2ch)-0x14);		
	if(s_35e[D(___243c60h)].YLocation > F32(esp+0x24)) s_35e[D(___243c60h)].YLocation = F32(esp+0x24);
	if(s_35e[D(___243c60h)].YLocation < 20.0) s_35e[D(___243c60h)].YLocation = 20.0f;
}
