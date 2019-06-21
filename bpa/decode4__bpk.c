#include "x86.h"

//#define BPK_MEMORY 0x800

    extern byte * BPK_Src;
    extern byte * BPK_Dst;
    extern byte ___199f30h[];
    extern byte ___199f34h[];
    extern byte ___199f0ch[];
    extern byte ___199f14h[];
    extern byte ___199f10h[];
    extern byte ___199f00h[];
    extern byte ___196f00h[];
    extern byte ___199f18h[];
    extern byte ___199f1fh[];
    extern byte ___199f38h[];
    extern byte ___199f28h[];
    extern byte ___199f2ch[];
    extern byte ___199f1eh[];
    extern byte ___199f1ah[];
    extern byte ___199f16h[];
    extern byte ___199f1ch[];
    extern dword ___199f08h;

#if !defined(BPK_MEMORY)
static void s__push(dword);
#pragma aux s__push =   \
    parm []

static dword s__pop();
#pragma aux s__pop =    \
    "pop    eax"        \
    value [eax]
#endif

// 592c8h
#pragma aux decode4__bpk parm routine []
void decode4__bpk(dword A1, dword A2, void * dst, void * src){

	dword 	eax;

#if defined(BPK_MEMORY)
    byte   * esp, __esp[BPK_MEMORY];
    esp = __esp + BPK_MEMORY;
#endif

	BPK_Src = src;
	BPK_Dst = dst;
	D(___199f30h) = A2;
	D(___199f34h) = A1;
	D(___199f0ch) = 0;
	D(___199f28h) = 0;
	D(___199f2ch) = 0;
	B(___199f38h) = 0;
	D(___199f10h) = 9;
	W(___199f14h) = 0x200;
	W(___199f1ch) = 0x102;

    while(1){
        
        ax = D(BPK_Src + (D(___199f0ch) >> 3)) >> (D(___199f0ch) & 7);
        ax &= W(___199f00h + ((D(___199f10h) - 9) << 1));
        
        if((ax == 0x100)||B(___199f38h)) return;

        D(___199f0ch) += D(___199f10h);

        if(ax == 0x101){

            D(___199f10h) = 9;
            W(___199f14h) = 0x200;
            W(___199f1ch) = 0x102;

            ax = D(BPK_Src + (D(___199f0ch) >> 3)) >> (D(___199f0ch) & 7);
            ax &= W(___199f00h + ((D(___199f10h) - 9) << 1));

            D(___199f0ch) += D(___199f10h);

            W(___199f16h) = W(___199f18h) = ax;
            B(___199f1eh) = B(___199f1fh) = al;

            if((int)D(___199f2ch) >= (int)D(___199f30h)){

                if((D(___199f34h) == 0)||(D(___199f28h) != D(___199f34h))){

                    B(BPK_Dst + D(___199f28h)) = (0x101 * al) >> 3;
                    D(___199f28h)++;
                }
                else {

                    B(___199f38h) = 1;
                }
            }

            D(___199f2ch)++;
        }
        else {
            
            ___199f08h = 0;
            W(___199f18h) = ax;
            W(___199f1ah) = ax;

            if((short)ax >= (short)W(___199f1ch)){

                W(___199f18h) = W(___199f16h);

#if defined(BPK_MEMORY)
                esp--;
                B(esp) = B(___199f1fh);
#else
                s__push(B(___199f1fh));
#endif

                ___199f08h++;
            }

            while((short)W(___199f18h) > (short)0xff){

#if defined(BPK_MEMORY)
                esp--;
                B(esp) = B(___196f00h + 3*W(___199f18h) + 2);
#else
                s__push(B(___196f00h + 3*W(___199f18h) + 2));
#endif

                ___199f08h++;
                W(___199f18h) = W(___196f00h + 3*W(___199f18h));
            }

            B(___199f1eh) = B(___199f18h);
            B(___199f1fh) = B(___199f18h);

#if defined(BPK_MEMORY)
            esp--;
            B(esp) = B(___199f1fh);
#else
            s__push(B(___199f18h));
#endif

            ___199f08h++;

            while(___199f08h--){

#if defined(BPK_MEMORY)
                eax = B(esp);
                esp++;
#else
                eax = s__pop(); // !!!
#endif

                if((int)D(___199f2ch) >= (int)D(___199f30h)){

                    if((D(___199f34h) == 0)||(D(___199f28h) != D(___199f34h))){
                            
                        B(BPK_Dst + D(___199f28h)) = (0x101 * al) >> 3;
                        D(___199f28h)++;
                    }
                    else {

                        B(___199f38h) = 1;
                    }
                }
                
                D(___199f2ch)++;
            }

            W(___196f00h + 3*W(___199f1ch)) = W(___199f16h);
            B(___196f00h + 3*W(___199f1ch) +2) = B(___199f1eh);
            W(___199f1ch)++;
            W(___199f16h) = W(___199f1ah);

            if(((short)W(___199f1ch) >= (short)W(___199f14h))&&(D(___199f10h) != 0xc)){

                D(___199f10h)++;
                W(___199f14h) <<= 1;
            }
        }
    }
}
