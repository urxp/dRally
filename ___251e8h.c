#include "drally.h"

	extern byte ___185c5ch[];

dword ___251e8h_cdecl(const char * A1){

	int 	rslt, n;

	rslt = 0;
	n = -1;
	while(A1[++n]) rslt += B(___185c5ch+A1[n]);

	return rslt;
}
