#include "drally.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[];

static int helper0(double n, double c){ return ((int)(c*(0.1125*n+0.1))<<0x10)/100; }
static int helper1(double n, double c){ return ((int)(c*(1.0-0.125*n)+7.875*n)<<0x10)/100; }

// SOMETHING WITH RACE RESULTS CAR COLORS
void ___35b68h_cdecl(dword A0, float A1, float A2, float A3){

	int 	n;

	n = -1;
	while(++n < 8){

		___19eb50h[A0+n].r = helper0((double)n, (double)A1);
		___19eb50h[A0+n].g = helper0((double)n, (double)A2);
		___19eb50h[A0+n].b = helper0((double)n, (double)A3);

		___19eb50h[A0+8+n].r = helper1((double)n, (double)A1);
		___19eb50h[A0+8+n].g = helper1((double)n, (double)A2);
		___19eb50h[A0+8+n].b = helper1((double)n, (double)A3);
	}
}
