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

__BYTE__ PORT_201h = 0;


int int386x(int inter_no, REGS * in_regs, REGS * out_regs, SREGS * seg_regs){

    printf("int386x not implemented\n");
}

int int386(int inter_no, REGS * in_regs, REGS * out_regs){

    printf("int386_not implemented\n");
}


dword DPMI_GET_FREE_MEMORY_INFORMATION(void){

	return 0x57b0cc;
}

void _settextposition_(dword A1, dword A2){

    printf("_settextposition_(%d, %d) not implemented\n", A1, A2);
}

byte inp_(dword A1){

    printf("inp_ not implemented\n");

    if(A1 == 0x201) return PORT_201h;

    return 0;
}

void outp_(dword A1, dword A2){

    printf("outp_ not implemented\n");

    if(A1 == 0x201) PORT_201h = 0xff;
}

void __STOSB(dword A1, dword A2, dword A3){

    memset(A1, A2, A3);
}

void __STOSD(dword A1, dword A2, dword A3){

    while(A3--||++A3){
        
        D(A1) = A2;
        A1 += 4;
    }
}