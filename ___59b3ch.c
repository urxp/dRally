#include "drally.h"

	extern __BYTE__ ___199f4ch[];
	extern __BYTE__ ___199f48h[];
	extern __BYTE__ ___199f50h[];
	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___199f74h[];
	extern __BYTE__ ___199f78h[];
	extern __BYTE__ ___199f3ch[];
	extern __BYTE__ ___199f60h[];

__DWORD__ __GET_TIMER_TICKS(void);
__BYTE__ inp_(__DWORD__ port);
void ___59db8h(void);
__BYTE__ dRally_Keyboard_popLastChar(void);

__BYTE__ ___59b3ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;

	
	H(ebx) = dRally_Keyboard_popLastChar();

	if((int)___19bd58h_gamepad > 0) ___59db8h();
	if((int)___19bd58h_gamepad > 0){

		edx = __GET_TIMER_TICKS();

		if(D(___199f74h) == 0) D(___199f74h) = edx-0xa;

		if(D(___199f78h) == 0) D(___199f78h) = edx-0xa;

		L(ebx) = 0;

		if(B(___199f3ch) == 0){

			if((inp_(0x201)&0x10) == 0) L(ebx) = 0xd;
			if((inp_(0x201)&0x20) == 0) L(ebx) = 0x1b;
			if((inp_(0x201)&0x40) == 0) L(ebx) = 0xd;
			if((inp_(0x201)&0x80) == 0) L(ebx) = 0x1b;
		}

		eax = edx-4;

		if((int)edx < (int)D(___199f60h)){

			if(L(ebx) != 0){
			
				D(___199f74h) = edx;
				D(___199f78h) = edx;
				return 0;
			}

			D(___199f74h) = eax;
			D(___199f60h) = edx;
			D(___199f78h) = edx;
		}
		else {

			if(L(ebx) == 0){

				D(___199f74h) = eax;
			}
			else {

				eax = edx-D(___199f74h);;

				if((int)eax >= 4){

					eax = edx-D(___199f78h);

					if((int)eax < 4) D(___199f60h) = edx+7;
				}

				H(ebx) = L(ebx);
				D(___199f74h) = edx;
			}

			D(___199f78h) = edx;
		}
	}

	return H(ebx);
}
