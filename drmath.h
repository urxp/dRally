#ifndef __DRMATH_H
#define __DRMATH_H

#include <math.h>

#if defined(DR_INLINE_MATH)
static inline double dRMath_abs(double dval){ return (dval < 0.0)?(-1.0*dval):dval; }
static inline double dRMath_sin(double dval){ return sin(dval); }
static inline double dRMath_cos(double dval){ return cos(dval); }
static inline double dRMath_sqrt(double dval){ return sqrt(dval); }
static inline double dRMath_ceil(double dval){ return ceil(dval); }
static inline double dRMath_floor(double dval){ return floor(dval); }

static inline double dRMath_sum2squares(double dval1, double dval2){ return dval1*dval1+dval2*dval2; }
static inline double dRMath_sum3squares(double dval1, double dval2, double dval3){ return dval1*dval1+dval2*dval2+dval3*dval3; }
static inline int dRMath_sum2squares_i(int val1, int val2){ return val1*val1+val2*val2; }
static inline int dRMath_abs_i(int val){ return (val<0)?(0-val):val; }
static inline int dRMath_min_i(int val1, int val2){ return (val1 < val2)?val1:val2; }
static inline int dRMath_max_i(int val1, int val2){ return (val1 < val2)?val2:val1; }
static inline int dRMath_absneg_i(int val){ return (val<0)?(0-val):0; }
static inline int dRMath_abspos_i(int val){ return (val>0)?val:0; }

static inline int dRMath_square_i(int val){ return val*val; }
static inline int dRMath_magnitude2_i(int a, int b){ return (int)dRMath_sqrt((double)dRMath_sum2squares_i(a, b)); }
static inline double dRMath_magnitude2(double a, double b){ return dRMath_sqrt(dRMath_sum2squares(a, b)); }
static inline double dRMath_magnitude3(double a, double b, double c){ return dRMath_sqrt(dRMath_sum3squares(a, b, c)); }
#else // DR_INLINE_MATH
double dRMath_abs(double dval);
double dRMath_sin(double dval);
double dRMath_cos(double dval);
double dRMath_sqrt(double dval);
double dRMath_ceil(double dval);
double dRMath_floor(double dval);

double dRMath_sum2squares(double dval1, double dval2);
double dRMath_sum3squares(double dval1, double dval2, double dval3);
int dRMath_sum2squares_i(int val1, int val2);
int dRMath_abs_i(int val);
int dRMath_min_i(int val1, int val2);
int dRMath_max_i(int val1, int val2);
int dRMath_absneg_i(int val);
int dRMath_abspos_i(int val);

int dRMath_square_i(int val);
int dRMath_magnitude2_i(int a, int b);
double dRMath_magnitude2(double a, double b);
double dRMath_magnitude3(double a, double b, double c);
#endif // DR_INLINE_MATH

#endif // __DRMATH_H
