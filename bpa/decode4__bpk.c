#include "x86.h"

//#define BPK_MEMORY 0x300        // >= 710 bytes (2c6h)

#pragma pack(1)
typedef struct duo {
    word    w;      // +0
    byte    b;      // +2
} duo;

    extern byte * BPK_Src;
    extern byte * BPK_Dst;
    extern int ___199f30h;
    extern dword ___199f34h;
    extern dword ___199f0ch;
    extern short ___199f14h;
    extern dword ___199f10h;
    extern word ___199f00h[];
    extern duo ___196f00h[];
    extern short ___199f18h;
    extern byte ___199f1fh;
    extern dword ___199f38h;
    extern dword ___199f28h;
    extern int ___199f2ch;
    extern byte ___199f1eh;
    extern short ___199f1ah;
    extern word ___199f16h;
    extern short ___199f1ch;
    extern dword BPK_Push;

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

#if defined(BPK_MEMORY)
    byte    s_bpk[BPK_MEMORY];
#endif

	BPK_Src = src;
	BPK_Dst = dst;
	___199f30h = A2;
	___199f34h = A1;
	___199f0ch = 9;
	___199f28h = 0;
	___199f2ch = 0;
	___199f38h = 1;
	___199f10h = 9;
	___199f14h = 0x200;
    ___199f1ah = W(BPK_Src) & 0x1ff;
	___199f1ch = 0x102;

    while((___199f1ah != 0x100)&&___199f38h){
        
        BPK_Push = 0;

        if(___199f1ah == 0x101){

            ___199f10h = 9;
            ___199f14h = 0x200;
            ___199f1ch = 0x102;

            ___199f1ah = D(BPK_Src + (___199f0ch >> 3)) >> (___199f0ch & 7);
            ___199f1ah &= ___199f00h[___199f10h - 9]; // 0x1ff
            ___199f0ch += ___199f10h;

            ___199f16h = ___199f1ah;
            ___199f1fh = ___199f1ah;
        }
        else {
            
            ___199f18h = ___199f1ah;

            if(___199f1ah >= ___199f1ch){

                ___199f18h = ___199f16h;

#if defined(BPK_MEMORY)
                s_bpk[BPK_Push++] = ___199f1fh;
#else
                s__push(___199f1fh);
                BPK_Push++;
#endif
            }

            while(___199f18h > 0xff){

#if defined(BPK_MEMORY)
                s_bpk[BPK_Push++] = ___196f00h[___199f18h].b;
#else
                s__push(___196f00h[___199f18h].b);
                BPK_Push++;
#endif

                ___199f18h = ___196f00h[___199f18h].w;
            }

            ___199f1fh = ___199f18h;

            ___196f00h[___199f1ch].w = ___199f16h;
            ___196f00h[___199f1ch].b = ___199f1fh;
            ___199f1ch++;
            ___199f16h = ___199f1ah;

            if((___199f1ch >= ___199f14h)&&(___199f10h != 0xc)){

                ___199f10h++;
                ___199f14h <<= 1;
            }
        }

#if defined(BPK_MEMORY)
        s_bpk[BPK_Push++] = ___199f1fh;
#else
        s__push(___199f1fh);
        BPK_Push++;
#endif

        while(BPK_Push--){

#if defined(BPK_MEMORY)
            ___199f1eh =  s_bpk[BPK_Push];
#else
            ___199f1eh =  s__pop(); // !!!
#endif

            if(___199f2ch >= ___199f30h){

                if((___199f34h == 0)||(___199f28h != ___199f34h)){
                        
                    BPK_Dst[___199f28h] = (0x101 * ___199f1eh) >> 3;
                    ___199f28h++;
                }
                else {

                    ___199f38h = 0;
                }
            }
            
            ___199f2ch++;
        }

        ___199f1ah = D(BPK_Src + (___199f0ch >> 3)) >> (___199f0ch & 7);
        ___199f1ah &= ___199f00h[___199f10h - 9];
        ___199f0ch += ___199f10h;
    }
}
