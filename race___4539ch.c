#include "drally.h"

	extern int * ___243310h;
	extern int * ___243314h;

double dR_Math_sin(double);
double dR_Math_cos(double);
void * ___3f71ch__allocateMemory(dword);

// 0.0175 ~ Pi/180
void race___4539ch(void){

	int 	n;

	___243310h = ___3f71ch__allocateMemory(0x3844);
	___243314h = ___3f71ch__allocateMemory(0x3844);

	n = -1;
	while(++n < 0xe10){
		
		___243310h[n] = (int)(1024.0*dR_Math_cos(0.0175*(double)n));
		___243314h[n] = (int)(1024.0*dR_Math_sin(0.0175*(double)n));
	}
}
