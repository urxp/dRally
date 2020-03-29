#ifndef __DRALLY_H
#define __DRALLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <SDL2/SDL.h>

typedef unsigned long long  qword;
typedef unsigned int 	    dword;
typedef unsigned short 	    word;
typedef unsigned char 	    byte;
typedef void *              pointer;

#define Q(q)    (*(qword *)(q))
#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))
#define P(p)    (*(pointer *)(p))

#define X(r)	((word *)&r)[0]
#define H(r)	((byte *)&r)[1]
#define L(r)	((byte *)&r)[0]

FILE * strup_fopen(const char * file_name, const char * mode);




typedef double  m64fp;
typedef float   m32fp;

#define F32(f)  (*(m32fp *)(f))
#define F64(f)  (*(m64fp *)(f))

#define ST(n)       (*fpu_st(n))
#define FPUSH(d)    fpu_push((double)(d))
#define FPOP        fpu_pop
double * fpu_st(int);
void fpu_push(double);
double fpu_pop(void);


#endif // __DRALLY_H
