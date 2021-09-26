#include "drally.h"

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern void * ___1a10c4h;

void ___2aa08h(void);
void dRally_Sound_setMasterVolume(dword vol);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);

void ___3a7e0h_cdecl(int A1){

	int 	i, j, k, l, n;


	n = -1;
	while(++n < 0x2b){

		___2aa08h();

		l = -1;
		while(++l < 0x16){

			k = -1;
			while(++k < 0xa){

				j = -1;
				while(++j < 0xf){

					i = -1;
					while(++i < 0xf){

						if(B(___1a10c4h+0xe1*k+0xf*j+i) != 0){
							
							B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xbb80+0x2580*l+0xf*n+0xf*k+0x280*j+i) = B(___1a1124h__VESA101h_ScreenBufferA+0xbb80+0x2580*l+0xf*n+0xf*k+0x280*j+i);
						}
					}
				}
			}
		}

		___1398ch__VESA101_PRESENTRECTANGLE(0xbb80+0xf*n, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xbb80+0xf*n, 0x96, 0x14a);

		if(A1 == -1) dRally_Sound_setMasterVolume(0xfffc-0x5f4*n);
		if(A1 == 1) dRally_Sound_setMasterVolume(0x5f4*n);
	}

	___5994ch();
	___59b3ch();
}
