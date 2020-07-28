#include "drally.h"

	extern byte ___199f48h[];
	extern byte ___199f4ch[];
	extern byte ___24cc6ch[];
	extern byte ___199f6ch[];
	extern byte ___199f50h[];
	extern byte ___199f60h[];
	extern byte ___199f70h[];
	extern byte ___199f54h[];
	extern byte ___19bd58h[];
	extern byte ___199f3ch[];
	extern byte ___243888h[];
	extern byte ___243890h[];
	extern byte ___243884h[];
	extern byte ___24388ch[];

dword __GET_TIMER_TICKS(void);
dword __GET_FRAME_COUNTER(void);
byte dRally_Keyboard_popLastKey(void);
void ___59db8h(void);
byte inp_(dword);

byte ___5994ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


	__GET_FRAME_COUNTER();
	H(ebx) = dRally_Keyboard_popLastKey();

	if(D(___199f4ch) != 0){

		B(D(___24cc6ch)+D(___199f48h)) = H(ebx);
		D(___199f48h)++;
	}

	if(D(___199f50h) != 0){

		edx = D(___24cc6ch)+D(___199f48h);
		if((B(edx) == 0x45)&&(B(edx+1) == 0x4e)&&(B(edx+2) == 0x44)) D(___199f50h) = 0;
		H(ebx) = B(D(___24cc6ch)+D(___199f48h));
		D(___199f48h)++;
	}

	if(D(___199f54h) != 0) H(ebx) = 0x1c;


	// Gamepad/Joystick
	if((int)D(___19bd58h) > 0) ___59db8h();		// may modifiy D(___19bd58h)
	if((int)D(___19bd58h) > 0){

		edx =  __GET_TIMER_TICKS();

		if(D(___199f6ch) == 0) D(___199f6ch) = edx-0xa;
		if(D(___199f70h) == 0) D(___199f70h) = edx-0xa;

		L(ebx) = 0;

		if(B(___199f3ch) == 0){
				
			if((int)(D(___243888h)-0x32) > (int)D(___243890h)) L(ebx) = 0xcb;
			if((int)(D(___243888h)+0x32) < (int)D(___243890h)) L(ebx) = 0xcd;
			if((int)(D(___243884h)-0x32) > (int)D(___24388ch)) L(ebx) = 0xc8;
			if((int)(D(___243884h)+0x32) < (int)D(___24388ch)) L(ebx) = 0xd0;
			if(inp_(0x201) == 0x10) L(ebx) = 0x1c;
			if(inp_(0x201) == 0x20) L(ebx) = 1;
			if(inp_(0x201) == 0x40) L(ebx) = 0x1c;
			if(inp_(0x201) == 0x80) L(ebx) = 1;
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
