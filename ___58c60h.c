#include "drally.h"

unsigned int __GET_FRAME_COUNTER(void);

// WAIT 1 FRAME
void ___58c60h(void){

	__DWORD__ 	n;

	n = __GET_FRAME_COUNTER();
	while(n == __GET_FRAME_COUNTER());
}
