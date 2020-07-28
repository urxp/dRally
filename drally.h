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


#define __SIZEOF_BYTE__    1
#define __SIZEOF_WORD__    2
#define __SIZEOF_DWORD__   4
#define __SIZEOF_QWORD__   8

typedef unsigned char           __BYTE__;
typedef signed char             __SIGNED_BYTE__;
#if defined(__SIZEOF_SHORT__)&&(__SIZEOF_SHORT__ == __SIZEOF_WORD__)
    typedef unsigned short      __WORD__;
    typedef signed short        __SIGNED_WORD__;
#elif defined(__SIZEOF_INT__)&&(__SIZEOF_INT__ == __SIZEOF_WORD__)
    typedef unsigned int        __WORD__;
    typedef signed int          __SIGNED_WORD__;
#endif
#if defined(__SIZEOF_INT__)&&(__SIZEOF_INT__ == __SIZEOF_DWORD__)
    typedef unsigned int        __DWORD__;
    typedef signed int          __SIGNED_DWORD__;
#elif defined(__SIZEOF_LONG__)&&(__SIZEOF_LONG__ == __SIZEOF_DWORD__)
    typedef unsigned long       __DWORD__;
    typedef signed long         __SIGNED_DWORD__;
#endif
#if defined(__SIZEOF_LONG__)&&(__SIZEOF_LONG__ == __SIZEOF_QWORD__)
    typedef unsigned long       __QWORD__;
    typedef signed long         __SIGNED_QWORD__;
#elif defined(__SIZEOF_LONG_LONG__)&&(__SIZEOF_LONG_LONG__ == __SIZEOF_QWORD__)
    typedef unsigned long long  __QWORD__;
    typedef signed long long    __SIGNED_QWORD__;
#endif

#if defined(__SIZEOF_POINTER__)
    #if (__SIZEOF_POINTER__ == __SIZEOF_QWORD__)
        typedef __QWORD__        __UNSIGNED__;
        typedef __SIGNED_QWORD__ __SIGNED__;
    #elif (__SIZEOF_POINTER__ == __SIZEOF_DWORD__)
        typedef __DWORD__        __UNSIGNED__;
        typedef __SIGNED_DWORD__ __SIGNED__;
    #endif
#endif


#endif // __DRALLY_H
