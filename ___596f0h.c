#include "drally.h"

	extern __DWORD__ ___19bd58h_gamepad;
	extern __BYTE__ ___243890h[];
	extern __BYTE__ ___243888h[];
	extern __BYTE__ ___24388ch[];
	extern __BYTE__ ___243884h[];

void ___59db8h(void);

void ___596f0h(void){

    if((int)___19bd58h_gamepad > 0){

		___59db8h();
		D(___243888h) = D(___243890h);
		D(___243884h) = D(___24388ch);
    }
}
