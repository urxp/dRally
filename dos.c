#include "drally.h"
#include "drmemory.h"
#include "dos.h"

__BYTE__ PORT_201h = 0;

static __BYTE__ DOS_RM[0x00100000];
static __POINTER__ SELECTORS[0x10000];


int int386x(int inter_no, union REGS * in_regs, union REGS * out_regs, struct SREGS * seg_regs){

    switch(inter_no){
    case 0x2f:
        if(in_regs->w.ax == 0x7a00){
            // OPX INSTALLATION CHECK
            // al 0x00 failed
            // al 0xff ok
            out_regs->h.al = 0xff;
            break;
        }
    default:
        printf("Interrupt :: %02XH\n", inter_no);
        printf("EAX :: %08X    EBX :: %08X    ECX :: %08X    EDX :: %08X\n", in_regs->x.eax, in_regs->x.ebx, in_regs->x.ecx, in_regs->x.edx);
        printf("ESI :: %08X    EDI :: %08X    CF ::: %d\n", in_regs->x.esi, in_regs->x.edi, !!in_regs->x.cflag);
        printf("ES :: %04X    CS:: %04X    SS ::: %04X    DS ::: %04X    FS ::: %04X    GS ::: %04X\n",
            seg_regs->es, seg_regs->cs, seg_regs->ss, seg_regs->ds, seg_regs->fs, seg_regs->gs);
    
        printf("int386x not implemented\n");
        exit(1);
    }


    return out_regs->x.eax;
}

int int386(int inter_no, union REGS * in_regs, union REGS * out_regs){

    printf("int386 not implemented\n");
    exit(1);
}

void segread(struct SREGS * sregs){

    memset(sregs, 0, sizeof(struct SREGS));
    return;

    printf("TODO segread\n");
    exit(1);
}

__DWORD__ DPMI_GET_FREE_MEMORY_INFORMATION(void){

	return 0x57b0cc;
}

void _settextposition_(__DWORD__ A1, __DWORD__ A2){

    printf("_settextposition_(%d, %d) not implemented\n", A1, A2);
}

__BYTE__ inp_(__DWORD__ A1){

    printf("inp_ not implemented\n");

    if(A1 == 0x201) return PORT_201h;

    return 0;
}

void outp_(__DWORD__ A1, __DWORD__ A2){

    printf("outp_ not implemented\n");

    if(A1 == 0x201) PORT_201h = 0xff;
}

void __STOSB(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3){

    memset(A1, A2, A3);
}

void __STOSD(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3){

    while(A3--||++A3){
        
        D(A1) = A2;
        A1 += sizeof(__DWORD__);
    }
}

void __SETGS(__DWORD__ A0){

}

__POINTER__ __GETGS(__POINTER__ p){

    return p;
}

__POINTER__ __LINADDR(__WORD__ sel){

    return SELECTORS[sel];
}
