#include "drally.h"

	extern byte VGA13_ACTIVESCREEN[];

void __VGA13_PRESENTSCREEN__(void);

void race___46738h__VGA13_PRESENTCLEARSCREEN(void){

	memset(VGA13_ACTIVESCREEN, 0, 0xfa00);
	__VGA13_PRESENTSCREEN__();
}
