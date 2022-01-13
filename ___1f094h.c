#include "drally.h"

	extern __BYTE__ ___185ba9h[];

int ___1f094h_cdecl(const char * A1){
	
	int 	n, l, rslt;


	rslt = 0;
	l = strlen(A1);

	n = -1;
	while(++n < l) rslt += read_b(___185ba9h+A1[n]-0x1e);

	return rslt;
}
