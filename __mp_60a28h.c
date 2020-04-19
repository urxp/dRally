#include "drally.h"

dword __GET_TIMER_TICKS(void);

void ___60a28h(dword A1){

	A1 += __GET_TIMER_TICKS();

    while(A1 > __GET_TIMER_TICKS());
}
