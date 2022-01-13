#include "drally.h"

__DWORD__ __GET_TIMER_TICKS(void);

void ___60a28h(__DWORD__ A1){

	A1 += __GET_TIMER_TICKS();

    while(A1 > __GET_TIMER_TICKS());
}
