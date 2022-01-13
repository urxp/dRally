#include "drally.h"
#include "drmath.h"

	extern int * ___243310h;
	extern int * ___243314h;

__POINTER__ ___3f71ch__allocateMemory(__DWORD__);

// 0.0175 ~ Pi/180
void race___4539ch(void){

	int 	n;

	___243310h = (int *)___3f71ch__allocateMemory(3601*sizeof(int));
	___243314h = (int *)___3f71ch__allocateMemory(3601*sizeof(int));

	n = -1;
	while(++n < 0xe10){
		
		___243310h[n] = (int)(1024.0*dRMath_cos(0.0175*(double)n));
		___243314h[n] = (int)(1024.0*dRMath_sin(0.0175*(double)n));
	}
}
