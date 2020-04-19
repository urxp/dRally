#include "drally.h"

	extern byte ___24e3f0h[];
	extern byte ___199fb8h[];
	extern byte ___199fb6h[];
	extern byte ___24cf28h[];
	extern byte ___24e596h[];
	extern byte ___24e4c0h[];
	extern byte ___24e4ach[];
	extern byte ___24e46ch[];

void ___6168ch();

void ___60a84h(void){

	dword 	m, n;

	//printf("______________________________ ___60a84h ______________________________");

	n = 0xa;
	while(n&&n--) D(4*n+___24e3f0h) = 0;

	D(___24e3f0h) = D(___199fb8h);
	B(___199fb6h) = 1;

	n = -1;
	while(++n < 5){

		m = -1;
		while(++m < 0x400){

			B(___24cf28h+(n<<0xa)+m) = 0;
		}
	}

	n = 0xa;
	while(n&&n--) B(n+___24e596h) = 0;

	memset(D(___24e4c0h)+4, 0, 0x1000);
	W(D(___24e4c0h)) = 0;
	W(D(___24e4c0h)+2) = 0;
	___6168ch();
	memset(D(___24e4ach)+4, 0, 0x1000);
	W(D(___24e4ach)) = 0;
	W(D(___24e4ach)+2) = 0;
	//W(D(___24e46ch)) = 0;
	//W(D(___24e46ch)+2) = 0;
}
