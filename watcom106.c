
#include "drally.h"

#pragma pack(1)

typedef struct REGS {
    dword   __eax;
    dword   __ebx;
    dword   __ecx;
    dword   __edx;
    dword   __esi;
    dword   __edi;
    dword   __cf;
} REGS;

typedef struct SREGS {
    word    __es;
    word    __cs;
    word    __ss;
    word    __ds;
    word    __fs;
    word    __gs;
} SREGS;

static unsigned int __seed = 1;

void srand_watcom106(unsigned int seed){

    __seed = seed;
}

int rand_watcom106(void){

    __seed *= 0x41c64e6d;
    __seed += 0x3039;
 
	return (__seed>>0x10)&0x7fff;
}

char * strupr_watcom106(char * s){

    char *  p;

    p = s-1;
    while(++p&&*p){

        if((unsigned char)(*p-0x61) <= 0x19) *p -= 0x20;
    }

    return s;
}

int my_int386x(int inter_no, REGS * in_regs, REGS * out_regs, SREGS * seg_regs){

    printf("int386x_ not implemented");
}

int my_int386(int inter_no, REGS * in_regs, REGS * out_regs){

    printf("int386_ not implemented");
}

