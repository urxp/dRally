#include "drally.h"

    extern byte ___24e450h[];
    extern byte ___24e418h[];
    extern byte ___199fb6h[];
    extern byte ___24e3f0h[];
    extern byte ___199fb8h[];
    extern byte ___24cf28h[];
    extern byte ___24e4ach[];
    extern byte ___24e46ch[];

void ___608ech(dword A1, dword A2);

dword ___611c0h(dword A1, dword A2){

	int 	m, n, rslt;


	rslt = 0;
	D(___24e450h) = A1;

	n = -1;
	while(++n < 0xa) D(n*4+___24e418h) = n;

	___608ech(0, B(___199fb6h)-1);

	n = -1;
	while(++n < B(___199fb6h)){

		if(D(4*n+___24e3f0h) != D(___199fb8h)){

			m = -1;
			while(++m < A1) B(D(A2+4*n)+m) = B((n<<0xa)+m+___24cf28h);
		}
		else{

			rslt = n;
		}
	}

	W(D(___24e4ach)) = 0;
	W(D(___24e4ach)+2) = 0;
	//W(D(___24e46ch)) = 0;
	//W(D(___24e46ch)+2) = 0;

	return rslt;
}
