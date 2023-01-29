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
	extern __BYTE__ ___243ce8h[];
	extern __BYTE__ ___196e70h[];
	extern int CURRENT_VIEWPORT_X;
	extern rgbf_t ___1a42c0h[0x100];
	extern __BYTE__ ___1a54d0h[];
	extern __POINTER__ BACKBUFFER;
	extern __BYTE__ ___2432fch[];
	extern __BYTE__ ___243898h[];
	extern __BYTE__ ___243304h[];
	extern __BYTE__ ___2432f8h[];
	extern __BYTE__ ___2432ech[];
	extern __BYTE__ ___2432f4h[];
	extern __BYTE__ ___2432f0h[];
	extern __POINTER__ ___243310h;
	extern __POINTER__ ___243314h;
	extern __BYTE__ ___243874h[];
	extern __BYTE__ ___243894h[];
	extern __BYTE__ ___243878h[];
	extern __BYTE__ ___243330h[];
	extern __BYTE__ * VGA13_ACTIVESCREEN;

void __DISPLAY_SET_PALETTE_COLOR(__BYTE__ b, __BYTE__ g, __BYTE__ r, int n);
void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __VGA13_PRESENTSCREEN__(void);
void race___46738h__VGA13_PRESENTCLEARSCREEN(void);
void ___58c60h(void);

#define LOCAL_PI 3.14159265359

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
	double 	dbl, angle, dangle, dbl0, dbl1, dbl2, dbl3, dbl4;
	int 	n, i, j, k, x, y;
	int 	i_tmp, i_r, i_g, i_b;


	memcpy(___1a3fc0h, ___1a51d0h, 0x300);
	D(esp+0x1c) = 0xa*D(___243ce8h)+0x18;
	D(esp+0x18) = 0xa*D(___243ce8h)+0xf;
	D(esp+0x20) = 0xa*D(___243ce8h)+0xf;

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

	edx = -1;
	while(++edx < 0xc8) memcpy(___1a54d0h+0x100*edx, BACKBUFFER+0x200*edx+0xa0, 0x100);

	edx = -1;
	while(++edx < 0xc8) memcpy(___1a54d0h+0x40*edx+0xc900, BACKBUFFER+0x200*edx+0x60, 0x40);

	memset(___1a54d0h+0xc800, 0, 0x100);
	dangle = 0.9;
	angle = 1.0;
	D(___243898h) = 0;

	while(1){

		n = -1;
		while(++n < 0x100){

			__DISPLAY_SET_PALETTE_COLOR(
				(int)((double)___1a42c0h[n].b*angle),
				(int)((double)___1a42c0h[n].g*angle),
				(int)((double)___1a42c0h[n].r*angle),
				n);
		}

		if((eax = (int)((double)0x2d8*angle)) > 0xffff) eax = 0xffff;
		dRally_Sound_setMasterVolume(eax);

		n = -1;
		while(++n < 0xc8){

			i = (int)(angle/1.4);
			memcpy(VGA13_ACTIVESCREEN+0x140*n, ___1a54d0h+0xc940+0x40*n-i, i);
		}

		__VGA13_PRESENTSCREEN__();

		D(___2432f8h) = (int)(170.0*dRMath_cos( LOCAL_PI*angle/180.0 ));
		D(___243304h) = (int)(256.0/dRMath_sin( LOCAL_PI*angle/180.0 ));
		D(___2432ech) = 0;
		k = -1;
		while(++k < 0xc8){

			D(___2432f4h) = D(___2432ech)/256;
			if((int)D(___2432f4h) > 200) D(___2432f4h) = 200;
			D(___2432f0h) = D(___2432f4h)*D(___2432f8h)/256;
			eax = D(___2432f0h)/2;
			edx = 0xff-D(___2432f0h);

			n = -1;
			while(++n < 256){

				H(edx) += L(edx);
				eax += !!(H(edx) < L(edx));
				B(VGA13_ACTIVESCREEN+0x40+0x140*k+eax) = B(___1a54d0h+256*D(___2432f4h)+n);
			}

			D(___2432ech) += D(___243304h);
		}

		__VGA13_PRESENTSCREEN__();

		if(angle >= 90.0) break;

		n = -1;
		while(++n <= (int)D(___243898h)) dangle *= 1.02;

		angle += dangle;

		if(angle > 90.0) angle = 90.0;
		D(___243898h) = 0;
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
			j = 0xa*D(___243ce8h)+0xf;

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
			j = 0xa*D(___243ce8h)+0xf;

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

			j = 0xa*D(___243ce8h)+0xf;

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
	D(___243898h) = 0;
	D(___243874h) = D(___243898h);
	D(___243894h) = 0;
	D(___243894h) = D(___243878h);
	D(___243330h) = D(___243894h);

	return;
}

// LEAVING RACE SCREEN ANIMATION
void race___46a10h(void){

	double 	d_tmp;
	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[0x60];
	double 	angle, dangle;
	int		i, j, n, ___243308h_i;


	if(CURRENT_VIEWPORT_X != 0x40){

		n = -1;
		while(++n < 0x100){

			___1a42c0h[n].r = (float)((double)B(___1a51d0h+3*n)/150.0);
			___1a42c0h[n].g = (float)((double)B(___1a51d0h+3*n+1)/150.0);
			___1a42c0h[n].b = (float)((double)B(___1a51d0h+3*n+2)/150.0);
		}

		n = -1;
		while(++n < 200) memcpy(___1a54d0h+0x140*n, BACKBUFFER+0x200*n+0x60, 0x140);

		n = -1;
		while(++n < 600){

			D(___243310h+4*n) = (int)(1024.0*dRMath_cos((double)n*(157.0/15000.0)));
			D(___243314h+4*n) = (int)(1024.0*dRMath_sin((double)n*(157.0/15000.0)));
		}

		D(esp+0x58) = 0x41000000;

		while(1){

			D(___243898h) = 0;
			D(___243874h) = D(___243898h);
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

						W(VGA13_ACTIVESCREEN+2*(0x140*j+i)) = 0;
						W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+0x140) = 0;
					}
					else {

						W(VGA13_ACTIVESCREEN+2*(0x140*j+i)) = W(___1a54d0h+0x140*eax+edi);
						W(VGA13_ACTIVESCREEN+2*(0x140*j+i)+0x140) = W(___1a54d0h+0x140*eax+edi+0x140);
					}
				}
			}

			__VGA13_PRESENTSCREEN__();

			n = -1;
			while(++n <= (int)D(___243898h)){

				if((int)D(esp+0x58) < 0x43160000) F32(esp+0x58) = (float)(1.04*(double)F32(esp+0x58));
			}

			if(F32(esp+0x58) > 150.0f) F32(esp+0x58) = 150.0f;
			if(F32(esp+0x58) == 150.0f) break;
		}
	}
	else {

		n = -1;
		while(++n < 0x100){

			___1a42c0h[n].r = (float)((double)B(___1a51d0h+3*n)/90.0);
			___1a42c0h[n].g = (float)((double)B(___1a51d0h+3*n+1)/90.0);
			___1a42c0h[n].b = (float)((double)B(___1a51d0h+3*n+2)/90.0);
		}

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0x100*n, BACKBUFFER+0x200*n+0xa0, 0x100);

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0xc900+0x40*n, BACKBUFFER+0x200*n+0x60, 0x40);

		n = -1;
		while(++n < 0x64){

			memcpy(___1a54d0h+0xc800, ___1a54d0h+0xc700-0x100*n, 0x100);
			memcpy(___1a54d0h+0xc700-0x100*n, ___1a54d0h+0x100*n, 0x100);
			memcpy(___1a54d0h+0x100*n, ___1a54d0h+0xc800, 0x100);
		}

		memset(___1a54d0h+0xc800, 0, 0x100);
		dangle = 0.9;
		angle = 90.0;
		D(___2432fch) = 0x40;
		D(___243898h) = 0;

		while(1){

			n = -1;
			while(++n < 0x100){

				__DISPLAY_SET_PALETTE_COLOR(
					(int)((double)___1a42c0h[n].b*angle),
					(int)((double)___1a42c0h[n].g*angle),
					(int)((double)___1a42c0h[n].r*angle),
					n);
			}

			D(esp+0x48) = (int)angle;
			dRally_Sound_setMasterVolume(0x2d8*D(esp+0x48));

			D(___243304h) = (int)(256.0/dRMath_sin(LOCAL_PI*angle/180.0));
			D(___2432f8h) = (int)(170.0*dRMath_cos(LOCAL_PI*angle/180.0));

			D(___2432ech) = 0xc8*D(___243304h);
			___243308h_i = 0;

			n = -1;
			while(++n < 0xc8){

				D(esp+0x48) = (int)(angle/1.4);
				memcpy(VGA13_ACTIVESCREEN+0x40+___243308h_i+0x140*n-0x40, ___1a54d0h+0xc940+0x40*n-D(esp+0x48), D(esp+0x48));
			}

			__VGA13_PRESENTSCREEN__();

			n = -1;
			while(++n < 0xc8){

				D(esp+0x48) = (int)(angle/1.4);
				memset(VGA13_ACTIVESCREEN+0x40+___243308h_i-0x40+0x140*n+D(esp+0x48), 0, D(___2432fch)-D(esp+0x48));
			}

			D(esp+0x38) = 0;
			D(___2432fch) = (int)(angle/1.4);

			while(1){

				D(___2432f4h) = D(___2432ech)&~0xff;
				if((int)D(___2432f4h) > 0xc800) D(___2432f4h) = 0xc800;
				eax = D(___2432f4h);
				edi = D(___2432f8h);
				eax = eax*edi;
				edx = eax;
				edx = (int)edx>>0x10;
				eax = (int)eax>>0x11;
				D(___2432f0h) = edx;
				edx = eax-0xa;

				n = -1;
				while(++n < 10){

					if((short)X(edx) >= 0) B(VGA13_ACTIVESCREEN+0x40+___243308h_i+eax-0xa+n) = 0;
					X(edx)++;
				}

				edx = 0xff;
				eax = D(___2432f0h);
				ebx = D(___2432f4h);
				ebx--;
				edi = eax;
				edx -= eax;
				edi = (int)edi>>0x1;

				n = -1;
				while(++n < 0x100){

					H(edx) += L(edx);
					B(VGA13_ACTIVESCREEN+0x40+___243308h_i+edi) = B(___1a54d0h+ebx+n);
					edi += !!(H(edx) < L(edx));
				}

				edx = ((int)D(___2432f0h)>>0x1)+0xff-D(___2432f0h);
			
				n = -1;
				while(++n < 10){

					if((short)X(edx) > 0xff) break;
					B(VGA13_ACTIVESCREEN+0x40+___243308h_i+((int)D(___2432f0h)>>0x1)+0xff-D(___2432f0h)+n) = 0;
					X(edx)++;
				}

				___243308h_i += 0x140;
				D(___2432ech) -= D(___243304h);
				D(esp+0x38)++;
				if((int)D(esp+0x38) >= 0xc8) break;
			}

			if(angle <= 1.0) break;

			n = -1;
			while(++n <= (int)D(___243898h)) dangle *= 1.02;

			angle -= dangle;
			if(angle < 1.0) angle = 1.0;
			D(___243898h) = 0;
			___58c60h();
		}
	}

	D(___243898h) = 0;
	D(___243874h) = D(___243898h);
	D(___243894h) = 0;
	D(___243894h) = D(___243878h);
	D(___243330h) = D(___243894h);
}
