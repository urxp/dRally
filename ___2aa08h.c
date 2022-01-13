#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

	extern __BYTE__ kmap[];
	extern __DWORD__ ___196a88h;
	extern __DWORD__ ___196ad8h;
	extern rgb24_t * ___1a10c8h;

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___58c60h(void);
void ___3a454h(void);
void ___2a394h(void);

void ___2aa08h(void){

	__DWORD__ 	r, g, b, n;

	if(kmap[0x58] != 0) ___3a454h();

	___196a88h++;
	___58c60h();
	___2a394h();

	if((___196a88h%0x46) == 1){

		___196ad8h--;
		___196ad8h &= 0x1ff;

		n = -1;
		while(++n < 0x20){

			r = n*___1a10c8h[___196ad8h].r/64;
			g = n*___1a10c8h[___196ad8h].g/64;
			b = n*___1a10c8h[___196ad8h].b/64;

			__DISPLAY_SET_PALETTE_COLOR(b, g, r, 0xc0+n);
		}
	}
}
