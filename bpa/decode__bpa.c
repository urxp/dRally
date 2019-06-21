#include "x86.h"

#pragma pack(1)
typedef struct tuple {
    word    w;
    byte    b;
} tuple;

typedef union twobytes {
    word        w;
    struct {
        byte    lo;
        byte    hi;
    };
} twobytes;

    extern byte * BPASrc;
    extern byte * BPADst;
    extern tuple ___196f00h[];
    extern word ___199f00h[];
    extern dword ___199f08h;
    extern dword ___199f0ch;
    extern dword ___199f10h;
    extern word ___199f14h;
    extern tuple ___199f16h;
    extern word ___199f18h;
    extern word ___199f1ah;
    extern word ___199f1ch;
    extern twobytes ___199f1eh;
//    extern byte ___199f1fh;
    extern dword ___199f28h;


#pragma aux decode__bpa parm routine []
void decode__bpa(void * dst, void * src){

	dword 	eax, ebx, ecx, edx, edi, ebp;

    byte *  esi;
	byte    push_stack[0x100];

  
    BPASrc = src;
    BPADst = dst;

    ___199f0ch = 0;
    ___199f08h = 0;
    ___199f28h = 0;
    ___199f10h = 9;
    ___199f14h = 0x200;
    ___199f1ch = 0x102;

    while(1){

        esi = BPASrc + (___199f0ch >> 3);        
        ax = (D(esi) >> (___199f0ch & 7)) & ___199f00h[___199f10h - 9];
        
        if(ax == 0x100) return;
        
        ___199f0ch += ___199f10h;

        if(ax == 0x101){

            ___199f10h = 9;
            ___199f14h = 0x200;
            ___199f1ch = 0x102;

            esi = BPASrc + (___199f0ch >> 3);
            ax = (D(esi) >> (___199f0ch & 7)) & ___199f00h[___199f10h - 9];
            ___199f0ch += ___199f10h;

            ___199f16h.w = ax;
            ___199f18h = ax;
            ___199f1eh.lo = al;
            ___199f1eh.hi = al;

            BPADst[___199f28h] = ___199f1eh.w >> 3;
            ___199f28h++;
        }
        else {

            ___199f18h = ax;
            
            if(ax >= ___199f1ch){

                ___199f18h = ___199f16h.w;
                push_stack[___199f08h++] = ___199f1eh.hi;
            }

            while(___199f18h > 0xff){

                push_stack[___199f08h++] = ___196f00h[___199f18h].b;
                ___199f18h = ___196f00h[___199f18h].w;
            }


            ___199f1eh.lo = ___199f16h.b;
            ___199f1eh.hi = ___199f16h.b;
            push_stack[___199f08h++] = ___199f16h.b;

            while(___199f08h--){

                BPADst[___199f28h] = (0x101 * push_stack[___199f08h]) >> 3;
                ___199f28h++;
            }

            ___199f08h = 0;

            ___196f00h[___199f1ch] = ___199f16h;
            ___199f16h.w = ax;
            ___199f1ah = ax;

            if(++___199f1ch >= ___199f14h){
                
                if(___199f10h != 0xc){
                    
                    ___199f10h++;
                    ___199f14h <<= 1;
                }
            }
        }
    }
}
