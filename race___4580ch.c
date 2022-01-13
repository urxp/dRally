#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern pal256_t ___1a4ec0h;


void dRally_Sound_setMasterVolume(__DWORD__ vol);
void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void DISPLAY_GET_PALETTE(pal256_t *);
void ___58c60h(void);

void race___4580ch(void){

	int 	m, n;

	DISPLAY_GET_PALETTE(&___1a4ec0h);

	m = 40;
	while(m >= 0){

		n = -1;
		while(++n < 0x100){

			__DISPLAY_SET_PALETTE_COLOR(
				(int)(((double)m/40.0)*(double)___1a4ec0h[n].b),
				(int)(((double)m/40.0)*(double)___1a4ec0h[n].g),
				(int)(((double)m/40.0)*(double)___1a4ec0h[n].r),
				n);
		}

		___58c60h();
		dRally_Sound_setMasterVolume((int)(1638.4*(double)m));
		m--;
	}
}
