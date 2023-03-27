#include "drally.h"
#include "drmath.h"

#if !defined(DR_INLINE_MATH)
double dRMath_sin(double dval){ return sin(dval); }
double dRMath_cos(double dval){ return cos(dval); }
double dRMath_sqrt(double dval){ return sqrt(dval); }
double dRMath_ceil(double dval){ return ceil(dval); }
double dRMath_floor(double dval){ return floor(dval); }

double dRMath_abs(double dval){ return (dval < 0.0)?(-1.0*dval):dval; }

int dRMath_sum2squares_i(int val1, int val2){ return val1*val1+val2*val2; }
int dRMath_square_i(int val){ return val*val; }
int dRMath_abs_i(int val){ return (val<0)?(0-val):val; }
int dRMath_min_i(int val1, int val2){ return (val1 < val2)?val1:val2; }
int dRMath_max_i(int val1, int val2){ return (val1 < val2)?val2:val1; }
int dRMath_absneg_i(int val){ return (val<0)?(0-val):0; }
int dRMath_abspos_i(int val){ return (val>0)?val:0; }


double dRMath_sum2squares(double dval1, double dval2){ return dval1*dval1+dval2*dval2; }
double dRMath_magnitude2(double a, double b){ return dRMath_sqrt(dRMath_sum2squares(a, b)); }
int dRMath_magnitude2_i(int a, int b){ return (int)dRMath_sqrt((double)dRMath_sum2squares_i(a, b)); }

double dRMath_sum3squares(double dval1, double dval2, double dval3){ return dval1*dval1+dval2*dval2+dval3*dval3; }
double dRMath_magnitude3(double a, double b, double c){ return dRMath_sqrt(dRMath_sum3squares(a, b, c)); }
#endif // DR_INLINE_MATH
