#include "drally.h"
#include "netpage.h"

	extern __DWORD__ ___24e3f0h[10];
	extern __BYTE__ ___199fb8h[];
	extern __BYTE__ ___199fb6h[];
	extern __BYTE__ ___24cf28h[];
	extern __BYTE__ ___24e596h[0xa];
	extern NetPage * ___24e4c0h;
	extern NetPage * ___24e4ach;

void ___6168ch();

void ___60a84h(void){

	int 	m, n;

	n = -1;
	while(++n < 10) ___24e3f0h[n] = 0;
	___24e3f0h[0] = D(___199fb8h);
	
	B(___199fb6h) = 1;

	n = -1;
	while(++n < 5){

		m = -1;
		while(++m < 0x400){

			B(___24cf28h+(n<<0xa)+m) = 0;
		}
	}

	memset(___24e596h, 0, 0xa);
	npg_zero(___24e4c0h);
	___6168ch();
	npg_zero(___24e4ach);
}
