#ifndef __DOS_H
#define __DOS_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push, 8)
#define __FILLER_I86(__a)  __WORD__ __a;

/* dword registers */

struct DWORDREGS {
    __DWORD__ eax;
    __DWORD__ ebx;
    __DWORD__ ecx;
    __DWORD__ edx;
    __DWORD__ esi;
    __DWORD__ edi;
    __DWORD__ cflag;
};

/* word registers */

struct WORDREGS {
    __WORD__ ax;  __FILLER_I86(_1)
    __WORD__ bx;  __FILLER_I86(_2)
    __WORD__ cx;  __FILLER_I86(_3)
    __WORD__ dx;  __FILLER_I86(_4)
    __WORD__ si;  __FILLER_I86(_5)
    __WORD__ di;  __FILLER_I86(_6)
    __DWORD__ cflag;
};

/* byte registers */

struct BYTEREGS {
    __BYTE__ al, ah;  __FILLER_I86(_1)
    __BYTE__ bl, bh;  __FILLER_I86(_2)
    __BYTE__ cl, ch;  __FILLER_I86(_3)
    __BYTE__ dl, dh;  __FILLER_I86(_4)
};

/* general purpose registers union - overlays the corresponding dword,
 * word, and byte registers.
 */

union REGS {
    struct DWORDREGS x;
    struct WORDREGS  w;
    struct BYTEREGS  h;
};
#define _REGS REGS

/* segment registers */

struct SREGS {
    __WORD__ es, cs, ss, ds;
    __WORD__ fs, gs;
};
#define _SREGS SREGS

int int386(int, union REGS *, union REGS *);
int int386x(int, union REGS *, union REGS *, struct SREGS *);
void segread(struct SREGS *);

#pragma pack(pop)

#pragma pack(push, 1)
struct DPMI_RM_CALLSTRUCT {
    __DWORD__   edi;            // +00
    __DWORD__   esi;            // +04
    __DWORD__   ebp;            // +08
    __DWORD__   reserved;       // +0C
    __DWORD__   ebx;            // +10
    __DWORD__   edx;            // +14
    __DWORD__   ecx;            // +18
    __DWORD__   eax;            // +1C
    __WORD__    flags;          // +20
    __WORD__    es;             // +22
    __WORD__    ds;             // +24
    __WORD__    fs;             // +26
    __WORD__    gs;             // +28
    __WORD__    ip;             // +2A
    __WORD__    cs;             // +2C
    __WORD__    sp;             // +2E
    __WORD__    ss;             // +30
};

typedef struct farptr {
    __DWORD__   addr;
    __WORD__    seg;
} farptr;

struct dostime_t {
    unsigned char   hour;       /* 0-23 */
    unsigned char   minute;     /* 0-59 */
    unsigned char   second;     /* 0-59 */
    unsigned char   hsecond;    /* 1/100 second; 0-99 */
};

#pragma pack(pop)

void __SETGS(__DWORD__);
__POINTER__ __GETGS(__POINTER__);
__POINTER__ __LINADDR(__WORD__);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif // __DOS_H
