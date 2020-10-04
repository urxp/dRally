#include "drally.h"

	extern byte ___196e74h[];
	extern byte ___196e78h[];
	extern byte ___243300h[];
	extern byte ___183501h[];
	extern byte ___1a51d0h[];
	extern byte ___1a51d1h[];
	extern byte ___1a51d2h[];
	extern byte ___1a42b4h[];
	extern byte ___1a42b8h[];
	extern byte ___1a42bch[];
	extern byte ___1a54d0h[];
	extern byte VGA13_ACTIVESCREEN[];

void __VGA13_PRESENTSCREEN__(void);

void race___46738h__VGA13_PRESENTCLEARSCREEN(void){

	memset(VGA13_ACTIVESCREEN, 0, 0xfa00);
	__VGA13_PRESENTSCREEN__();
}
