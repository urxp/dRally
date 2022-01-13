#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))
#define COOUV(u,v) (0xf*(v)+(u))

	extern __BYTE__ * ___1a1124h__VESA101h_ScreenBufferA;
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ * ___1a10c4h;

void ___2aa08h(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);

void ___3a6a4h(void){

	__DWORD__ 	i, j, k, l, m, coords;

	m = -1;
	while(++m < 0x2b){

		___2aa08h();

		l = -1;
		while(++l < 0x16){

			k = -1;
			while(++k < 0xa){
				
				j = -1;
				while(++j < 0xf){

					i = -1;
					while(++i < 0xf){

						if(___1a10c4h[COOUV(i, COOUV(j, k))] != 0){
							
							coords = COOXY(COOUV(i, m+k), COOUV(j, l+5));
							___1a112ch__VESA101_ACTIVESCREEN_PTR[coords] = ___1a1124h__VESA101h_ScreenBufferA[coords];
						}
					}
				}
			}
		}

		___1398ch__VESA101_PRESENTRECTANGLE(0xf*m+0xbb80, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xf*m+0xbb80, 0x96, 0x14a);
	}

	___5994ch();
	___59b3ch();
}
