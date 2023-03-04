#include "drally.h"

unsigned int __GET_FRAME_COUNTER(void);
void __PRESENTSCREEN__(void);

// WAIT 1 FRAME
void ___58c60h(void){

	__DWORD__ 	n;

	n = __GET_FRAME_COUNTER();
	__PRESENTSCREEN__();
	while(n == __GET_FRAME_COUNTER());
}
