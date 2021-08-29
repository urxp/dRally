#include "drally.h"

	extern __DWORD__ ___19bd58h_gamepad;
	extern byte ___243890h[];
	extern byte ___243888h[];
	extern byte ___24388ch[];
	extern byte ___243884h[];

void ___59db8h(void);

void ___596f0h(void){

    if((int)___19bd58h_gamepad > 0){

		___59db8h();
		D(___243888h) = D(___243890h);
		D(___243884h) = D(___24388ch);
    }
}
