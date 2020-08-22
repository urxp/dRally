#include "drally.h"

	extern byte ___185c40h[];

int ___25180h_cdecl(const char * A1){

	int 	n, counter;

	counter = 0;
	n = -1;
	while(A1[++n]) counter += (A1[n] != '$') ? ___185c40h[A1[n]] : ___185c40h['/'];

	return (0x60-counter)/2;
}
