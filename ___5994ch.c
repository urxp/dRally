#include "drally.h"

	extern __BYTE__ ___199f6ch[];
	extern __BYTE__ ___199f60h[];
	extern __BYTE__ ___199f70h[];
	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___199f3ch[];
	extern __BYTE__ ___243888h[];
	extern __BYTE__ ___243890h[];
	extern __BYTE__ ___243884h[];
	extern __BYTE__ ___24388ch[];

__DWORD__ __GET_TIMER_TICKS(void);
__DWORD__ __GET_FRAME_COUNTER(void);
__BYTE__ dRally_Keyboard_popLastKey(void);
void ___59db8h(void);
__BYTE__ inp_(__DWORD__);

__BYTE__ ___5994ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;


	__GET_FRAME_COUNTER();
	H(ebx) = dRally_Keyboard_popLastKey();

	// Gamepad/Joystick
	if((int)___19bd58h_gamepad > 0) ___59db8h();		// may modifiy ___19bd58h_gamepad
	if((int)___19bd58h_gamepad > 0){

		edx =  __GET_TIMER_TICKS();

		if(D(___199f6ch) == 0) D(___199f6ch) = edx-0xa;
		if(D(___199f70h) == 0) D(___199f70h) = edx-0xa;

		L(ebx) = 0;

		if(B(___199f3ch) == 0){
				
			if((int)(D(___243888h)-0x32) > (int)D(___243890h)) L(ebx) = 0xcb;
			if((int)(D(___243888h)+0x32) < (int)D(___243890h)) L(ebx) = 0xcd;
			if((int)(D(___243884h)-0x32) > (int)D(___24388ch)) L(ebx) = 0xc8;
			if((int)(D(___243884h)+0x32) < (int)D(___24388ch)) L(ebx) = 0xd0;
			if((inp_(0x201)&0x10) == 0) L(ebx) = 0x1c;
			if((inp_(0x201)&0x20) == 0) L(ebx) = 1;
			if((inp_(0x201)&0x40) == 0) L(ebx) = 0x1c;
			if((inp_(0x201)&0x80) == 0) L(ebx) = 1;
		}

		if((int)edx < (int)D(___199f60h)){

			if(L(ebx) != 0){
			
				D(___199f6ch) = edx;
				D(___199f70h) = edx;
				return 0;
			}

			D(___199f6ch) = edx-4;
			D(___199f60h) = edx;
		}
		else {

			if(L(ebx) == 0){
				
				D(___199f6ch) = edx-4;
			}
			else {

				if((int)(edx-D(___199f6ch)) >= 4){

					if((int)(edx-D(___199f70h)) < 4) D(___199f60h) = edx+7;
				}

				H(ebx) = L(ebx);
				D(___199f6ch) = edx;
			}
		}

		D(___199f70h) = edx;
	}

	return H(ebx);
}
