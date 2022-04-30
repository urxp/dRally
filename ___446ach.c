#include "drally.h"
#include "netpage.h"

	extern __BYTE__ ___24331ch[];
	extern NetPage * ___24cee0h[4];
	extern __BYTE__ ___243d9eh[];
	extern __BYTE__ ___196e60h[];

void ___446ach(void){

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp;
	int 		n;

	n = -1;
	while(++n < 0x13) B(___243d9eh+n) = npg_peekb(___24cee0h[D(___24331ch)], n);

	n = -1;
	while(++n < 0x13) npg_override(___24cee0h[D(___24331ch)], 0);

	D(___196e60h) = 1;
}
