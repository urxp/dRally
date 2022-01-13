#ifndef __DRMATH_H
#define __DRMATH_H

#include <math.h>

double dRMath_abs(double dval);
double dRMath_sin(double dval);
double dRMath_cos(double dval);
double dRMath_sqrt(double dval);
double dRMath_ceil(double dval);
double dRMath_floor(double dval);

double dRMath_sum2squares(double dval1, double dval2);
int dRMath_sum2squares_i(int val1, int val2);
int dRMath_abs_i(int val);
int dRMath_absneg_i(int val);
int dRMath_abspos_i(int val);

int dRMath_hypotenuse_i(int a, int b);
int dRMath_square_i(int val);
double dRMath_hypotenuse(double a, double b);

#endif // __DRMATH_H
