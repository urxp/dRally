#include "drally.h"

	extern __BYTE__ ___24cef0h[];
	extern __POINTER__ ___24e4ach;
	extern __BYTE__ ___1a1168h[];
	extern __POINTER__ ___24e4b4h;
	extern __BYTE__ NUM_OF_CARS[];
	extern __POINTER__ ___24cee0h[4];

__DWORD__ ___60b60h(__DWORD__, __DWORD__, __POINTER__, __DWORD__);
__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2);
void ___60a84h(void);
void ___60a28h(__DWORD__ A1);

void ___44194h(void){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x10];
	__POINTER__ 	vp[4];


	memset(___24cef0h, 0, 0xa);
	memset(___24cef0h+0xa, 0, 0xa);
	memset(___24cef0h+0x14, 0, 0xa);
	memset(___24cef0h+0x1e, 0, 0xa);
	W(___24e4ach) = 0;
	W(___24e4ach+2) = 0;
	vp[0] = ___24cef0h+0xa*B(___1a1168h);
	vp[1] = ___24cef0h+0xa*B(___1a1168h+1);
	vp[2] = ___24cef0h+0xa*B(___1a1168h+2);
	vp[3] = ___24cef0h+0xa*B(___1a1168h+3);
	___60a84h();

	while(1){

		___60a28h(2);
		eax = ___60b60h(1, D(NUM_OF_CARS), ___24e4b4h, 0xa);
		if(eax == 0xff) break;
	}

	___611c0h(0xa, vp);
	W(___24e4ach) = 0;
	W(___24e4ach+2) = 0;
	W(___24cee0h[0]) = 0;
	W(___24cee0h[0]+2) = 0;
	W(___24cee0h[1]) = 0;
	W(___24cee0h[1]+2) = 0;
	W(___24cee0h[2]) = 0;
	W(___24cee0h[2]+2) = 0;
	W(___24cee0h[3]) = 0;
	W(___24cee0h[3]+2) = 0;
	return;
}
