#ifndef __DRALLY_H
#define __DRALLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <SDL2/SDL.h>

#include "types.h"


typedef void (*void_cb)(void);

#define S(s, type, offset)     (*(type *)((__POINTER__)(s)+(offset)))

#define Q(q)    (*(__QWORD__ *)(q))
#define D(d)	(*(__DWORD__ *)(d))
#define W(w)	(*(__WORD__ *)(w))
#define B(b)	(*(__BYTE__ *)(b))
#define P(p)    (*(__POINTER__ *)(p))

#define X(r)	((__WORD__ *)&r)[0]
#define H(r)	((__BYTE__ *)&r)[1]
#define L(r)	((__BYTE__ *)&r)[0]

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

void ___idiv32(__POINTER__ eax, __POINTER__ edx, int dv);
void ___idiv16(__POINTER__ ax, __POINTER__ dx, short dv);
void ___imul32(__POINTER__ eax, __POINTER__ edx, int mp);



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


void incCounter(int n);
void decCounter(int n);
__DWORD__ getCounter(int n);
void resetCounter(int n);
void setCounter(int n, __DWORD__ val);


#define read_b(p)       (*(__BYTE__*)(p))
#define write_b(p,b)    (*(__BYTE__*)(p) = (b))   
void switch_b(__POINTER__, __POINTER__);






#define ___24e4d0h          CONNECTION_TYPE
#define ___185a1ch          ChatMaximized
#define ___632c4h           swap16
#define ___199fbch          MP_ERROR
#define ___243cd0h          SUPERGLOBAL___243cd0h
#define ___243898h          SUPERGLOBAL___243898h
#define ___243894h          SUPERGLOBAL___243894h
#define ___243cach          SUPERGLOBAL___243cach
#define ___243ce8h          MY_CAR_IDX
#define ___243cf4h          NUM_OF_CARS

#endif // __DRALLY_H
