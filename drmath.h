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

#endif // __DRMATH_H
