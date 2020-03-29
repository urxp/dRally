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
