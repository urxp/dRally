#ifndef __DRALLY_H
#define __DRALLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <SDL2/SDL.h>

typedef unsigned long long  qword;
typedef unsigned int 	    dword;
typedef unsigned short 	    word;
typedef unsigned char 	    byte;
typedef void *              pointer;
typedef void (*void_cb)(void);

#define Q(q)    (*(qword *)(q))
#define D(d)	(*(dword *)(d))
#define W(w)	(*(word *)(w))
#define B(b)	(*(byte *)(b))
#define P(p)    (*(pointer *)(p))

#define X(r)	((word *)&r)[0]
#define H(r)	((byte *)&r)[1]
#define L(r)	((byte *)&r)[0]

FILE * strupr_fopen(const char * file_name, const char * mode);

#define sES 0
#define sCS 2
#define sSS 4
#define sDS 6
#define sFS 8
#define sGS 0xa

#define __ES(base)  W(base + sES)
#define __CS(base)  W(base + sCS)
#define __SS(base)  W(base + sSS)
#define __DS(base)  W(base + sDS)
#define __FS(base)  W(base + sFS)
#define __GS(base)  W(base + sGS)

#define rEAX    0
#define rEBX    4
#define rECX    8
#define rEDX    0xc
#define rESI    0x10
#define rEDI    0x14
#define rCF     0x18

#define __EAX(base) D(base + rEAX)
#define __AX(base)  W(base + rEAX)
#define __AL(base)  B(base + rEAX)
#define __EBX(base) D(base + rEBX)
#define __BX(base)  W(base + rEBX)
#define __BL(base)  B(base + rEBX)
#define __ECX(base) D(base + rECX)
#define __CX(base)  W(base + rECX)
#define __CL(base)  B(base + rECX)
#define __EDX(base) D(base + rEDX)
#define __DX(base)  W(base + rEDX)
#define __DL(base)  B(base + rEDX)
#define __ESI(base) D(base + rESI)
#define __SI(base)  W(base + rESI)
#define __EDI(base) D(base + rEDI)
#define __DI(base)  W(base + rEDI)
#define __CF(base)  D(base + rCF)

void ___idiv32(void * eax, void * edx, int dv);
void ___idiv16(void * ax, void * dx, short dv);
void ___imul32(void * eax, void * edx, int mp);



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

#define dR_PI   3.141592653589793238462643383279502884197169399375105820974

double create_double(int LSB, int, int, int, int, int, int, int MSB);

#include "types.h"

#define read_b(p)       (*(__BYTE__*)(p))
#define write_b(p,b)    (*(__BYTE__*)(p) = (b))   

#endif // __DRALLY_H
