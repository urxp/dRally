#include "drally.h"

double fpu_stack[8];
int fpu_top = 0;

void fpu_push(double d){

	fpu_stack[fpu_top++] = d;
	fpu_top %= 8;
}

double fpu_pop(void){

	return fpu_stack[(fpu_top = (fpu_top+7)%8)];
}

double * fpu_st(int n){

	return &fpu_stack[(fpu_top+7-(n%8))%8];
}

/*
					C3	C2	C0
	ST(0) > SRC		 0	 0	 0
	ST(0) < SRC		 0	 0	 1
	ST(0) = SRC		 1	 0	 0
	Unordered*		 1	 1	 1

	6: C3, 2: C2, 0: C1
	6: ZF, 2: PF, 0: CF
*/
