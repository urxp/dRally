#include "drally.h"
#include "drmath.h"

	extern byte ___196d98h[];
	extern byte ___1a51d0h[];
	extern byte ___1a42c0h[];
	extern byte ___1a54d0h[];
	extern void * ___243d80h;
	extern byte ___196e74h[];
	extern byte ___196e78h[];
	extern byte ___2432fch[];
	extern byte ___243898h[];
	extern byte ___243304h[];
	extern void * ___243308h;
	extern byte ___2432f8h[];
	extern byte ___2432ech[];
	extern byte ___2432f4h[];
	extern byte ___2432f0h[];
	extern void * ___243310h;
	extern void * ___243314h;
	extern byte ___243874h[];
	extern byte ___243894h[];
	extern byte ___243878h[];
	extern byte ___243330h[];
	extern byte VGA13_ACTIVESCREEN[];


void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void dRally_Sound_setMasterVolume(dword vol);
void __VGA13_PRESENTSCREEN__(void);
void ___58c60h(void);

// LEAVING RACE SCREEN ANIMATION
void race___46a10h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[0x60];
	int		i, j, n;


	if(D(___196d98h) != 0x40){

		n = -1;
		while(++n < 0x100){

			F32(___1a42c0h+0xc*n) = (float)((double)B(___1a51d0h+3*n)/150.0);
			F32(___1a42c0h+0xc*n+4) = (float)((double)B(___1a51d0h+3*n+1)/150.0);
			F32(___1a42c0h+0xc*n+8) = (float)((double)B(___1a51d0h+3*n+2)/150.0);
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

			D(___243898h) = 0;
			D(___243874h) = D(___243898h);
			___58c60h();

			F64(esp+0x50) = 150.0-(double)F32(esp+0x58);

			n = -1;
			while(++n < 0x100){

				__DISPLAY_SET_PALETTE_COLOR(
					(int)(F64(esp+0x50)*(double)F32(___1a42c0h+0xc*n+8)),
					(int)(F64(esp+0x50)*(double)F32(___1a42c0h+0xc*n+4)),
					(int)(F64(esp+0x50)*(double)F32(___1a42c0h+0xc*n)),
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
			while(++n <= (int)D(___243898h)){

				if((int)D(esp+0x58) < 0x43160000) F32(esp+0x58) = (float)(1.04*(double)F32(esp+0x58));
			}

			FPUSH(F32(esp+0x58));
			if(FPOP() > 150.0) D(esp+0x58) = 0x43160000;
			FPUSH(F32(esp+0x58));
			if(FPOP() == 150.0) break;
		}
	}
	else {

		n = -1;
		while(++n < 0x100){

			F32(___1a42c0h+0xc*n) = (float)((double)B(___1a51d0h+3*n)/90.0);
			F32(___1a42c0h+0xc*n+4) = (float)((double)B(___1a51d0h+3*n+1)/90.0);
			F32(___1a42c0h+0xc*n+8) = (float)((double)B(___1a51d0h+3*n+2)/90.0);
		}

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0x100*n, ___243d80h+0x200*n+0xa0, 0x100);

		n = -1;
		while(++n < 0xc8) memcpy(___1a54d0h+0xc900+0x40*n, ___243d80h+0x200*n+0x60, 0x40);

		n = -1;
		while(++n < 0x64){

			memcpy(___1a54d0h+0xc800, ___1a54d0h+0xc700-0x100*n, 0x100);
			memcpy(___1a54d0h+0xc700-0x100*n, ___1a54d0h+0x100*n, 0x100);
			memcpy(___1a54d0h+0x100*n, ___1a54d0h+0xc800, 0x100);
		}

		memset(___1a54d0h+0xc800, 0, 0x100);
		D(___196e74h) = 0x3f666666;
		D(___196e78h) = 0x42b40000;
		D(___2432fch) = 0x40;
		D(___243898h) = 0;

		while(1){

			n = -1;
			while(++n < 0x100){

				__DISPLAY_SET_PALETTE_COLOR(
					(int)((double)F32(___1a42c0h+0xc*n+8)*(double)F32(___196e78h)),
					(int)((double)F32(___1a42c0h+0xc*n+4)*(double)F32(___196e78h)),
					(int)((double)F32(___1a42c0h+0xc*n)*(double)F32(___196e78h)),
					n);
			}

			D(esp+0x48) = (int)(double)F32(___196e78h);
			dRally_Sound_setMasterVolume(0x2d8*D(esp+0x48));
			FPUSH(F32(___196e78h));
			ST(0) = ST(0)*create_double(0xea,0x2e,0x44,0x54,0xfb,0x21,0x09,0x40);
			ST(0) = ST(0)/180.0;
			FPUSH(ST(0));
			ST(0) = dRMath_sin(ST(0));
			d_tmp = ST(0);
			ST(0) = ST(1);
			ST(1) = d_tmp;
			ST(0) = dRMath_cos(ST(0));
			d_tmp = ST(0);
			ST(0) = ST(1);
			ST(1) = d_tmp;
			ST(0) = ST(0)*200.0;
			ST(0) = 51200.0/ST(0);
			d_tmp = ST(0);
			ST(0) = ST(1);
			ST(1) = d_tmp;
			ST(0) = ST(0)*170.0;
			d_tmp = ST(0);
			ST(0) = ST(1);
			ST(1) = d_tmp;
			D(___243304h) = (int)FPOP();
			D(___2432f8h) = (int)FPOP();
			D(___2432ech) = 0xc8*D(___243304h);

			___243308h = VGA13_ACTIVESCREEN+0x40;

			n = -1;
			while(++n < 0xc8){

				D(esp+0x48) = (int)((double)F32(___196e78h)/1.4);
				memcpy(___243308h+0x140*n-0x40, ___1a54d0h+0xc940+0x40*n-D(esp+0x48), D(esp+0x48));
			}

			__VGA13_PRESENTSCREEN__();

			n = -1;
			while(++n < 0xc8){

				D(esp+0x48) = (int)((double)F32(___196e78h)/1.4);
				memset(___243308h-0x40+0x140*n+D(esp+0x48), 0, D(___2432fch)-D(esp+0x48));
			}

			D(esp+0x38) = 0;
			D(___2432fch) = (int)((double)F32(___196e78h)/1.4);

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

					if((short)X(edx) >= 0) B(___243308h+eax-0xa+n) = 0;
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
					B(___243308h+edi) = B(___1a54d0h+ebx+n);
					edi += !!(H(edx) < L(edx));
				}

				edx = ((int)D(___2432f0h)>>0x1)+0xff-D(___2432f0h);
			
				n = -1;
				while(++n < 10){

					if((short)X(edx) > 0xff) break;
					B(___243308h+((int)D(___2432f0h)>>0x1)+0xff-D(___2432f0h)+n) = 0;
					X(edx)++;
				}

				___243308h += 0x140;
				D(___2432ech) -= D(___243304h);
				D(esp+0x38)++;
				if((int)D(esp+0x38) >= 0xc8) break;
			}

			if(D(___196e78h) == 0x3f800000) break;

			D(esp+0x5c) = 0;

			if((int)D(___243898h) >= 0){

				FPUSH(F32(___196e74h));
				FPUSH(1.02);

				while(1){

					FPUSH(ST(1));
					FPUSH(ST(0));
					ST(0) = ST(0)*ST(2);
					ST(1) = ST(0);
					FPOP();
					ST(2) = ST(0);
					FPOP();
					D(esp+0x5c)++;
					if((int)D(esp+0x5c) > (int)D(___243898h)) break;
				}

				FPOP();
				F32(___196e74h) = (float)FPOP();
			}

			F32(___196e78h) = (float)((double)F32(___196e78h)-(double)F32(___196e74h));
			if((int)D(___196e78h) < 0x3f800000) D(___196e78h) = 0x3f800000;
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
