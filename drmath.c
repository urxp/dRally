#include "drally.h"

double dRMath_sin(double dval){ return sin(dval); }
double dRMath_cos(double dval){ return cos(dval); }
double dRMath_sqrt(double dval){ return sqrt(dval); }
double dRMath_ceil(double dval){ return ceil(dval); }
double dRMath_floor(double dval){ return floor(dval); }

int dRMath_abs_i(int val){ return (val<0)?(0-val):val; }
