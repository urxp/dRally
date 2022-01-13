#include "drally.h"

	extern __POINTER__ ___24e4ach;
	extern __POINTER__ ___24e4c0h;
	extern __POINTER__ ___24cee0h[4];

void ___61278h(void);

void ___4495ch(void){

	__DWORD__	eax, ebx, ecx, edx, edi, esi, ebp;


	___61278h();

	W(___24e4ach) = 0;
	W(___24e4ach+2) = 0;
	W(___24e4c0h) = 0;
	W(___24e4c0h+2) = 0;
	W(___24cee0h[0]) = 0;
	W(___24cee0h[0]+2) = 0;
	W(___24cee0h[1]) = 0;
	W(___24cee0h[1]+2) = 0;
	W(___24cee0h[2]) = 0;
	W(___24cee0h[2]+2) = 0;
	W(___24cee0h[3]) = 0;
	W(___24cee0h[3]+2) = 0;

	memset(___24e4ach+4, 0, 0x1000);
	memset(___24cee0h[0]+4, 0, 0x1000);
	memset(___24cee0h[1]+4, 0, 0x1000);
	memset(___24cee0h[2]+4, 0, 0x1000);
	memset(___24cee0h[3]+4, 0, 0x1000);
	memset(___24e4c0h+4, 0, 0x1000);
}
