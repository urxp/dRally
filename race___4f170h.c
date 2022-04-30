#include "drally.h"

	extern __BYTE__ ___2438c4h[];
	extern int ___1e7c48h[0x100];
	extern int ___1e8048h[0x100];
	extern int ___1e8448h[0x100];
	extern int X___1de920h[0x100];
	extern int Y___1ded20h[0x100];
	extern int TRX_VIEWPORT_TL_X;
	extern int TRX_VIEWPORT_TL_Y;
	extern int CURRENT_VIEWPORT_CENTER_X;
	extern int CURRENT_VIEWPORT_CENTER_Y;
	extern int CURRENT_VIEWPORT_X;
	extern __BYTE__ VARJO_TAB[0x100];

void ___5e769h(__BYTE__ * A0, int Y3, int X3, int Y2, int X2, int Y1, int X1);

// SHADOWS
void race___4f170h(void){

	int 	a1, a2, a3, n;

	n = -1;
	while(++n < (int)D(___2438c4h)){	// NUM OF SHADOWS

		a1 = abs(X___1de920h[___1e8448h[n]]-TRX_VIEWPORT_TL_X-CURRENT_VIEWPORT_CENTER_X);
		a2 = abs(X___1de920h[___1e8048h[n]]-TRX_VIEWPORT_TL_X-CURRENT_VIEWPORT_CENTER_X);
		a3 = abs(X___1de920h[___1e7c48h[n]]-TRX_VIEWPORT_TL_X-CURRENT_VIEWPORT_CENTER_X);

		if((a1 < CURRENT_VIEWPORT_CENTER_X)||(a2 < CURRENT_VIEWPORT_CENTER_X)||(a3 < CURRENT_VIEWPORT_CENTER_X)){

			a1 = abs(Y___1ded20h[___1e8448h[n]]-TRX_VIEWPORT_TL_Y-CURRENT_VIEWPORT_CENTER_Y);
			a2 = abs(Y___1ded20h[___1e8048h[n]]-TRX_VIEWPORT_TL_Y-CURRENT_VIEWPORT_CENTER_Y);
			a3 = abs(Y___1ded20h[___1e7c48h[n]]-TRX_VIEWPORT_TL_Y-CURRENT_VIEWPORT_CENTER_Y);

			if((a1 < CURRENT_VIEWPORT_CENTER_Y)||(a2 < CURRENT_VIEWPORT_CENTER_Y)||(a3 < CURRENT_VIEWPORT_CENTER_Y)){

				___5e769h(
					VARJO_TAB,
					Y___1ded20h[___1e7c48h[n]]-TRX_VIEWPORT_TL_Y,
					X___1de920h[___1e7c48h[n]]-TRX_VIEWPORT_TL_X+CURRENT_VIEWPORT_X,
					Y___1ded20h[___1e8048h[n]]-TRX_VIEWPORT_TL_Y,
					X___1de920h[___1e8048h[n]]-TRX_VIEWPORT_TL_X+CURRENT_VIEWPORT_X,
					Y___1ded20h[___1e8448h[n]]-TRX_VIEWPORT_TL_Y,
					X___1de920h[___1e8448h[n]]-TRX_VIEWPORT_TL_X+CURRENT_VIEWPORT_X);
			}
		}
	}
}
