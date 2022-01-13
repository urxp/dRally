#include "drally.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef rgb24_t pal256_t[0x100];

	extern pal256_t ___1a51d0h;

void ___4a064h_cdecl(int A0, float r, float g, float b){

	int 	n;

	n = -1;
	while(++n < 5){

		___1a51d0h[A0+n].r = (int)((0.18*(double)n+0.1)*(double)r);
		___1a51d0h[A0+n].g = (int)((0.18*(double)n+0.1)*(double)g);
		___1a51d0h[A0+n].b = (int)((0.18*(double)n+0.1)*(double)b);

		___1a51d0h[A0+n+5].r = (int)(12.6*(double)n+(1.0-0.2*(double)n)*(double)r);
		___1a51d0h[A0+n+5].g = (int)(12.6*(double)n+(1.0-0.2*(double)n)*(double)g);
		___1a51d0h[A0+n+5].b = (int)(12.6*(double)n+(1.0-0.2*(double)n)*(double)b);
	}
}
