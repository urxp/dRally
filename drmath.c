#include "drally.h"

double dRMath_sin(double dval){ return sin(dval); }
double dRMath_cos(double dval){ return cos(dval); }
double dRMath_sqrt(double dval){ return sqrt(dval); }
double dRMath_ceil(double dval){ return ceil(dval); }
double dRMath_floor(double dval){ return floor(dval); }

double dRMath_abs(double dval){ return (dval < 0.0)?(-1.0*dval):dval; }

double dRMath_sum2squares(double dval1, double dval2){ return dval1*dval1+dval2*dval2; }
int dRMath_sum2squares_i(int val1, int val2){ return val1*val1+val2*val2; }
int dRMath_square_i(int val){ return val*val; }
int dRMath_abs_i(int val){ return (val<0)?(0-val):val; }
int dRMath_absneg_i(int val){ return (val<0)?(0-val):0; }
int dRMath_abspos_i(int val){ return (val>0)?val:0; }
int dRMath_hypotenuse_i(int a, int b){ return (int)dRMath_sqrt((double)(a*a+b*b)); }
double dRMath_hypotenuse(double a, double b){ return dRMath_sqrt(a*a+b*b); }
