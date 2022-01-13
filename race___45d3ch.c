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

	extern __BYTE__ ___1a51d0h[];
	extern rgb24_t ___1a3fc0h[0x100];
	extern __BYTE__ MY_CAR_IDX[];
	extern rgbf_t ___1a42c0h[0x100];
	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ ___243d80h;
	extern __BYTE__ ___196e74h[];
	extern __BYTE__ ___196e78h[];
	extern __POINTER__ ___243308h;
	extern __BYTE__ ___2432ech[];
	extern __BYTE__ ___2432f8h[];
	extern __BYTE__ ___243304h[];
	extern __BYTE__ ___2432f4h[];
	extern __BYTE__ ___2432f0h[];
	extern __BYTE__ ___196e70h[];
	extern __BYTE__ ___243878h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ VGA13_ACTIVESCREEN[];

void __DISPLAY_SET_PALETTE_COLOR(__BYTE__ b, __BYTE__ g, __BYTE__ r, int n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __VGA13_PRESENTSCREEN__(void);
void race___46738h__VGA13_PRESENTCLEARSCREEN(void);
void ___58c60h(void);

// ENTERING RACE SCREEN ANIMATION
void race___45d3ch(void){

	double 	d_tmp;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[0x50];
	__POINTER__ 	edxp;
	__POINTER__	ebxp;
	__POINTER__ 	edip;
	__POINTER__ 	esp0x28;
	__POINTER__ 	esp0x2c;
	double 	dbl;
	int 	n, i, j;
	int 	i_tmp, i_r, i_g, i_b;


	memcpy(___1a3fc0h, ___1a51d0h, 0x300);
	D(esp+0x1c) = 0xa*D(MY_CAR_IDX)+0x18;
	D(esp+0x18) = 0xa*D(MY_CAR_IDX)+0xf;
	D(esp+0x20) = 0xa*D(MY_CAR_IDX)+0xf;

	i = -1;
	while(++i < 0x20){

		n = -1;
		while(++n < 0x100){

			if((n >= (int)D(esp+0x20))&&(n <= (int)D(esp+0x1c))){

				i_r = (i*___1a3fc0h[n].r+0x10)>>0x5;
				i_g = (i*___1a3fc0h[n].g+0x10)>>0x5;
				i_b = (i*___1a3fc0h[n].b+0x10)>>0x5;

				___1a42c0h[n].r = (float)i_r/90.0f;
				___1a42c0h[n].g = (float)i_g/90.0f;
				___1a42c0h[n].b = (float)i_b/90.0f;
			}

			if((n < (int)D(esp+0x18))||((int)D(esp+0x1c) < n)){

				i_tmp = (299*___1a3fc0h[n].r+588*___1a3fc0h[n].g+113*___1a3fc0h[n].b)/1000;
				i_tmp = (i*i_tmp+0x10)>>0x5;

				___1a42c0h[n].r = (float)i_tmp/90.0f;
				___1a42c0h[n].g = (float)i_tmp/90.0f;
				___1a42c0h[n].b = (float)i_tmp/90.0f;
			}
		}
	}

	race___46738h__VGA13_PRESENTCLEARSCREEN();
	
	edxp = ___1a54d0h;
	ebx = 0;
	esp0x28 = ___1a54d0h+0xc800;

	while(1){

		memcpy(edxp, ___243d80h+ebx+0xa0, 0x100);
		ebx += 0x200;
	
		edxp += 0x100;
		if(edxp == esp0x28) break;
	}

	edxp = ___1a54d0h+0xc900;
	ebx = 0;
	esp0x2c = ___1a54d0h+0xfb00;

	while(1){

		memcpy(edxp, ___243d80h+ebx+0x60, 0x40);
		edxp += 0x40;
		ebx += 0x200;
	
		if(edxp == esp0x2c) break;
	}

	memset(___1a54d0h+0xc800, 0, 0x100);
	D(___196e74h) = 0x3f666666;
	D(___196e78h) = 0x3f800000;
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

		if((eax = (int)((double)0x2d8*(double)F32(___196e78h))) > 0xffff) eax = 0xffff;
		dRally_Sound_setMasterVolume(eax);

#define LOCAL_PI create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40)

		D(___2432ech) = 0;
		D(___2432f8h) = (int)(170.0*dRMath_cos( LOCAL_PI*(double)F32(___196e78h)/180.0 ));
		D(___243304h) = (int)(256.0/dRMath_sin( LOCAL_PI*(double)F32(___196e78h)/180.0 ));

		___243308h = VGA13_ACTIVESCREEN+0x40;

		n = -1;
		while(++n < 0xc8){

			i = (int)((double)F32(___196e78h)/1.4);
			memcpy(VGA13_ACTIVESCREEN+0x140*n, ___1a54d0h+0xc940+0x40*n-i, i);
		}

		__VGA13_PRESENTSCREEN__();
		D(esp+0x10) = 0;

		while(1){

			D(___2432f4h) = D(___2432ech)&~0xff;
			if((int)D(___2432f4h) > 0xc800) D(___2432f4h) = 0xc800;
			eax = D(___2432f4h)*D(___2432f8h);
			D(___2432f0h) = (int)eax>>0x10;
			eax = (int)eax>>0x11;
			edx = eax-0xa;
			ebxp = ___243308h+(int)edx;

			n = -1;
			while(++n < 0xa){

				if((short)X(edx) >= 0) B(ebxp+n) = 0;
				X(edx)++;
			}

			ebx = D(___2432f4h)-1;
			edx = 0xff-D(___2432f0h);
			edi = (int)D(___2432f0h)>>0x1;
			ebxp = ___1a54d0h+(int)ebx;
			edip = ___243308h+edi;

			n = -1;
			while(++n < 0x100){

				H(edx) += L(edx);
				B(edip) = B(ebxp+n);
				edip += !!(H(edx) < L(edx));
			}

			eax = (int)D(___2432f0h)>>0x1;
			edx = eax+0xff-D(___2432f0h);
			ebxp = ___243308h+(int)edx;

			n = -1;
			while(++n < 0xa){

				if((short)X(edx) > 0xff) break;
				B(ebxp+n) = 0;
				X(edx)++;
			}

			___243308h += 0x140;
			D(___2432ech) += D(___243304h);
			
			D(esp+0x10)++;
			if((int)D(esp+0x10) >= 0xc8) break;
		}

		__VGA13_PRESENTSCREEN__();

		if(D(___196e78h) == 0x42b40000) break;

		n = 0;
		if(n <= (int)getCounter(2)){

			dbl = (double)F32(___196e74h);
			
			while(1){

				dbl = dbl*1.02;
				n++;
				if(n > (int)getCounter(2)) break;
			}

			F32(___196e74h) = (float)dbl;
		}

		F32(___196e78h) = (float)((double)F32(___196e74h)+(double)F32(___196e78h));

		if((int)D(___196e78h) > (int)0x42b40000) D(___196e78h) = 0x42b40000;
		resetCounter(2);
		___58c60h();
	}

	n = -1;
	while(++n < 0x14) ___58c60h();

	i = 0x100;
	while(1){

		n = -1;
		while(++n < 0x100){

			if((i_r = (i*___1a3fc0h[n].r+(17*(0x100-i)*___1a3fc0h[n].r)/10+0x80)>>0x8) > 0x3f) i_r = 0x3f;
			if((i_g = (i*___1a3fc0h[n].g+(17*(0x100-i)*___1a3fc0h[n].g)/10+0x80)>>0x8) > 0x3f) i_g = 0x3f;
			if((i_b = (i*___1a3fc0h[n].b+(17*(0x100-i)*___1a3fc0h[n].b)/10+0x80)>>0x8) > 0x3f) i_b = 0x3f;
			j = 0xa*D(MY_CAR_IDX)+0xf;

			if((j <= n)&&((j+9) >= n)) __DISPLAY_SET_PALETTE_COLOR(i_b, i_g, i_r, n);
		}

		___58c60h();
		i -= 0x32;
		if(i < 0) break;
	}

	i = 0x100;
	while(1){

		n = -1;
		while(++n < 0x100){

			if((i_r = ((0x100-i)*___1a3fc0h[n].r+(17*i*___1a3fc0h[n].r)/10+0x80)>>0x8) > 0x3f) i_r = 0x3f;
			if((i_g = ((0x100-i)*___1a3fc0h[n].g+(17*i*___1a3fc0h[n].g)/10+0x80)>>0x8) > 0x3f) i_g = 0x3f;
			if((i_b = ((0x100-i)*___1a3fc0h[n].b+(17*i*___1a3fc0h[n].b)/10+0x80)>>0x8) > 0x3f) i_b = 0x3f;
			j = 0xa*D(MY_CAR_IDX)+0xf;

			if((j <= n)&&((j+9) >= n)) __DISPLAY_SET_PALETTE_COLOR(i_b, i_g, i_r, n);
		}

		___58c60h();
		i -= 0xa;
		if(i < 0) break;
	}

	n = -1;
	while(++n < 0x32) ___58c60h();

	i = -1;
	while(++i < 0x20){

		n = -1;
		while(++n < 0x100){

			j = 0xa*D(MY_CAR_IDX)+0xf;

			if((j > n)||((j+9) < n)){

				i_tmp = (299*___1a3fc0h[n].r+588*___1a3fc0h[n].g+113*___1a3fc0h[n].b)/1000;

				i_r = (i*___1a3fc0h[n].r+i_tmp*(0x20-i)+0x10)>>5;
				i_g = (i*___1a3fc0h[n].g+i_tmp*(0x20-i)+0x10)>>5;
				i_b = (i*___1a3fc0h[n].b+i_tmp*(0x20-i)+0x10)>>5;

				__DISPLAY_SET_PALETTE_COLOR(i_b, i_g, i_r, n);
			}
		}

		___58c60h();
	}

	D(___196e70h) = 0x3f;
	resetCounter(2);
	resetCounter(5);
	setCounter(3, D(___243878h));
	D(___243330h) = getCounter(3);

	return;
}
