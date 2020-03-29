#include "drally.h"

unsigned int __GET_FRAME_COUNTER(void);

void ___58c60h(void){

	dword 	n;

	n = __GET_FRAME_COUNTER();

	while(n == __GET_FRAME_COUNTER());
}
