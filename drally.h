#ifndef __DRALLY_H
#define __DRALLY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define __USE_POSIX 1
#include <time.h>
#include <ctype.h>
#include <SDL2/SDL.h>

#include "types.h"


typedef void (*void_cb)(void);

#define S(s, type, offset)     (*(type *)((__POINTER__)(s)+(offset)))

#define Q(q)    (*(__QWORD__ *)(q))
#define D(d)	(*(__DWORD__ *)(d))
#define W(w)	(*(__WORD__ *)(w))
#define B(b)	(*(__BYTE__ *)(b))
#define P(p)    (*(__POINTER__ *)(p))

#if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
#define X(r)	((__WORD__ *)&r)[1]
#define H(r)	((__BYTE__ *)&r)[2]
#define L(r)	((__BYTE__ *)&r)[3]
#else
#define X(r)	((__WORD__ *)&r)[0]
#define H(r)	((__BYTE__ *)&r)[1]
#define L(r)	((__BYTE__ *)&r)[0]
#endif

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
#define ___243d28h          TRX_WIDTH
#define ___243d30h          TRX_WIDTH_QTR
#define ___243d04h          TRX_HEIGHT_QTR
#define ___243d2ch          TRX_HEIGHT
#define ___243d58h          TRX_IMA
#define ___243d60h          TRX_MAS
#define ___243d78h          TRX_VAI
#define ___243d54h          TRX_LR1
#define ___240a48h          VARJO_TAB
#define ___243078h          TRX_SKI_TAB
#define ___242d78h          TRX_BLO_TAB
#define ___241c78h          TRX_LIT_TAB
#define ___243dd0h          TRX_BPA
#define ___242578h          TRX_DRV_DAT
#define ___242178h          TRX_OHI_DAT
#define ___243d8ch          RACE_MINES1A_BPK
#define ___243d7ch          RACE_BLOWI_BPK
#define ___243298h          RACE_FLAMEX_BPK
#define ___243d88h          RACE_SHOTS_BPK
#define ___243d38h          RACE_OBSTACLE_BPK
#define ___243d40h          RACE_PEDESTR_BPK
#define ___243288h          RACE_SPLATX_BPK
#define ___243290h          RACE_ROCKETX_BPK
#define ___243d68h          RACE_BURN1A_BPK
#define ___243d64h          RACE_SMOKE_BPK
#define ___243d50h          GEN_FLA_BPK
#define ___243d6ch          GEN_LAM_BPK
#define ___243d4ch          GEN_MES_BPK
#define ___243d70h          CPY_GEN_MES_BPK
#define ___243d48h          DAMSLID_BPK
#define ___243d84h          RASTI1_BPK
#define ___243d3ch          GOALNUM2_BPK
#define ___243d34h          SIDEBOM1_BPK
#define ___1de920h          X___1de920h
#define ___1ded20h          Y___1ded20h
#define ___196dc8h          TRX_VIEWPORT_TL_X
#define ___196dcch          TRX_VIEWPORT_TL_Y
#define ___243c6ch          X1___243c6ch
#define ___243c68h          X2___243c68h
#define ___243c64h          X3___243c64h
#define ___243c78h          Y1___243c78h
#define ___243c70h          Y3___243c70h
#define ___243c74h          Y2___243c74h
#define ___196d8ch          CURRENT_VIEWPORT_CENTER_X
#define ___196d94h          CURRENT_VIEWPORT_CENTER_Y
#define ___196d98h          CURRENT_VIEWPORT_X
#define ___243c94h          NUM_OF_TEXTURES
#define ___243c88h          NUM_OF_OBJECTS
#define ___196d88h          CURRENT_VIEWPORT_W
#define ___196d90h          CURRENT_VIEWPORT_H
#define ___243c8ch          X___243c8ch
#define ___243c90h          Y___243c90h
#define ___243cc0h          X_Inc
#define ___243cc4h          Y_Inc
#define ___243cc8h          X_IncOld
#define ___243ccch          Y_IncOld
#define ___243d80h          BACKBUFFER
#define ___1a1094h          LAP_PREVIOUS_MIN
#define ___1a109ch          LAP_PREVIOUS_SEC
#define ___1a102ch          LAP_PREVIOUS_100
#define ___1a1034h          LAP_BEST_MIN
#define ___1a108ch          LAP_BEST_SEC
#define ___1a0ff4h          LAP_BEST_100
#define ___2438bch          LAP_RECORD_MIN
#define ___2438b8h          LAP_RECORD_SEC
#define ___2438c0h          LAP_RECORD_100
#define ___1a1134h          NUM_OF_LAPS
#define ___185a54h          MP_MONEY

#endif // __DRALLY_H
