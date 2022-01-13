#include "drally.h"
#include "drmath.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef struct rgbf_s {
	float 	r;
	float 	g;
	float 	b;
} rgbf_t;

	extern __BYTE__ ___196d98h[];
	extern __BYTE__ ___1a51d0h[];
	extern rgbf_t ___1a42c0h[0x100];
	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___243d80h;
	extern __BYTE__ ___196e74h[];
	extern __BYTE__ ___196e78h[];
	extern __BYTE__ ___243304h[];
	extern __BYTE__ ___2432f8h[];
	extern __BYTE__ ___2432ech[];
	extern __BYTE__ ___2432f4h[];
	extern __BYTE__ ___2432f0h[];
	extern __POINTER__ ___243310h;
	extern __POINTER__ ___243314h;
	extern __BYTE__ ___243878h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ VGA13_ACTIVESCREEN[];

#define A_PI 	create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __VGA13_PRESENTSCREEN__(void);
void ___58c60h(void);

// LEAVING RACE SCREEN ANIMATION
void race___46a10h(void){

	double 	d_tmp, double___243304h, double___2432f8h, double___2432f4h, double___2432f0h, d_tmp2;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[0x60];
	__BYTE__ 	blow, bhi;
	int		i, j, m, n;


	if(D(___196d98h) != 0x40){ // WIDE

		n = -1;
		while(++n < 0x100){

			___1a42c0h[n].r = (float)((double)B(___1a51d0h+3*n+0)/150.0);
			___1a42c0h[n].g = (float)((double)B(___1a51d0h+3*n+1)/150.0);
			___1a42c0h[n].b = (float)((double)B(___1a51d0h+3*n+2)/150.0);
		}

		n = -1;
		while(++n < 200) memcpy(___1a54d0h+0x140*n, ___243d80h+0x200*n+0x60, 0x140);

		n = -1;
		while(++n < 600){

			D(___243310h+4*n) = (int)(1024.0*dRMath_cos((double)n*create_double(0x9a,0x71,0x40,0x38,0x8c,0x6f,0x85,0x3f /* 157/15000 */)));
			D(___243314h+4*n) = (int)(1024.0*dRMath_sin((double)n*create_double(0x9a,0x71,0x40,0x38,0x8c,0x6f,0x85,0x3f /* 157/15000 */)));
		}

		D(esp+0x58) = 0x41000000;

		while(1){

			resetCounter(2);
			resetCounter(5);
			___58c60h();

			F64(esp+0x50) = 150.0-(double)F32(esp+0x58);

			n = -1;
			while(++n < 0x100){

				__DISPLAY_SET_PALETTE_COLOR(
					(int)(F64(esp+0x50)*(double)___1a42c0h[n].b),
					(int)(F64(esp+0x50)*(double)___1a42c0h[n].g),
					(int)(F64(esp+0x50)*(double)___1a42c0h[n].r),
					n);
			}

			D(esp+0x48) = (int)F64(esp+0x50);
			dRally_Sound_setMasterVolume(0x1b4*D(esp+0x48));
			D(esp+0x48) = (int)(double)F32(esp+0x58);
			eax = 0x257-(D(esp+0x48)-0x8);
			D(esp+0x44) = 2*D(___243310h+4*eax);
			D(esp+0x1c) = 2*D(___243314h+4*eax);
			D(esp+0x40) = (int)D(esp+0x1c)>>0x1;
			D(esp+0x3c) = (int)D(esp+0x44)>>0x1;
			D(esp+0x30) = (int)D(esp+0x44)>>0x1;
			D(esp+0x10) = D(esp+0x40);

			j = -1;
			while(++j < 100){

				D(esp+0x18) = (int)D(esp+0x40)>>0xa;
				D(esp+0x40) += D(esp+0x1c);
				D(esp+0x14) = (int)D(esp+0x3c)>>0xa;
				D(esp+0x3c) += D(esp+0x44);
				D(esp+0x20) = D(esp+0x10);
				ebx = D(esp+0x30);

				i = -1;
				while(++i < 160){

					edi = (int)ebx>>0xa;
					ebx = ebx+D(esp+0x44);
					edi = edi-D(esp+0x18);
					eax = (int)D(esp+0x20)>>0xa;
					eax = eax+D(esp+0x14);
					D(esp+0x20) += D(esp+0x1c);

					if(((int)edi <= 0)||((int)edi >= 0x13f)||((int)eax <= 0)||((int)eax >= 0xc7)){

						W(VGA13_ACTIVESCREEN+0x280*j+2*i) = 0;
						W(VGA13_ACTIVESCREEN+0x280*j+2*i+0x140) = 0;
					}
					else {

						W(VGA13_ACTIVESCREEN+0x280*j+2*i) = W(___1a54d0h+0x140*eax+edi);
						W(VGA13_ACTIVESCREEN+0x280*j+2*i+0x140) = W(___1a54d0h+0x140*eax+edi+0x140);
					}
				}
			}

			__VGA13_PRESENTSCREEN__();

			n = -1;
			while(++n <= (int)getCounter(2)){

				if((int)D(esp+0x58) < 0x43160000) F32(esp+0x58) = (float)(1.04*(double)F32(esp+0x58));
			}

			if((double)F32(esp+0x58) > 150.0) D(esp+0x58) = 0x43160000;
			if((double)F32(esp+0x58) == 150.0) break;
		}
	}
	else {	// NORNAL

		n = -1;
		while(++n < 0x100){

			___1a42c0h[n].r = (float)((double)B(___1a51d0h+3*n+0)/90.0);
			___1a42c0h[n].g = (float)((double)B(___1a51d0h+3*n+1)/90.0);
			___1a42c0h[n].b = (float)((double)B(___1a51d0h+3*n+2)/90.0);
		}

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0x100*n, ___243d80h+0x200*n+0xa0, 0x100);

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0xc900+0x40*n, ___243d80h+0x200*n+0x60, 0x40);

		F32(___196e74h) = 0.9f;
		F32(___196e78h) = 90.0f;
		resetCounter(2);

		while(1){

			n = -1;
			while(++n < 0x100){

				__DISPLAY_SET_PALETTE_COLOR(
					(int)((double)___1a42c0h[n].b*(double)F32(___196e78h)),
					(int)((double)___1a42c0h[n].g*(double)F32(___196e78h)),
					(int)((double)___1a42c0h[n].r*(double)F32(___196e78h)),
					n);
			}

			dRally_Sound_setMasterVolume(0x2d8*(int)(double)F32(___196e78h));

			double___243304h = dRMath_sin((double)F32(___196e78h)*A_PI/180.0);
			double___2432f8h = dRMath_cos((double)F32(___196e78h)*A_PI/180.0)/3.0;

			D(esp+0x48) = (int)((double)0x40*(double)F32(___196e78h)/90.0);

			m = -1;
			while(++m < 0xc8){

				memset(VGA13_ACTIVESCREEN+0x140*m, 0, 0x140);
				memcpy(VGA13_ACTIVESCREEN+0x140*m, ___1a54d0h+0xc940+0x40*m-D(esp+0x48), D(esp+0x48));

				double___2432f4h = (double)(0xc8-m)/double___243304h;
				
				if(double___2432f4h < 200.0){

					//edi = 0;
					//bhi = 0;
					d_tmp2 = double___2432f4h*double___2432f8h;
					//blow = 255.0-2.0*d_tmp2;

					n = -1;
					while(++n < 0x100){

						B(VGA13_ACTIVESCREEN+0x40+0x140*m+(int)d_tmp2/*+edi*/) = B(___1a54d0h+0x100*(int)(200.0-double___2432f4h)+n);
						
						//bhi += blow;
						//if(bhi < blow) edi++;

						d_tmp2 += 1.0-2.0*double___2432f4h*double___2432f8h/256.0;
					}
				}
			}

			if(F32(___196e78h) == 1.0f) break;

			n = 0;

			if(0 <= (int)getCounter(2)){

				d_tmp = (double)F32(___196e74h);

				while(1){

					d_tmp *= 1.02;
					
					n++;
					if(n > (int)getCounter(2)) break;
				}

				F32(___196e74h) = (float)d_tmp;
			}

			F32(___196e78h) = (float)((double)F32(___196e78h)-(double)F32(___196e74h));
			if((int)D(___196e78h) < 0x3f800000) F32(___196e78h) = 1.0f;
			resetCounter(2);
			___58c60h();	// wait 1 frame
		}
	}

	resetCounter(2);
	resetCounter(5);
	setCounter(3, D(___243878h));
	D(___243330h) = getCounter(3);
}
