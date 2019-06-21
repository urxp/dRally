#include "x86.h"

    extern byte BPK_Src[];
    extern byte BPK_Dst[];
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
    extern byte BPK_Push[];

// 592c8h
#pragma aux decode4__bpk parm routine []
void decode4__bpk(dword A1, dword A2, void * dst, void * src){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
    dword   tmp;
    dword   cf;

	byte __esp[0x400];
	byte * esp = __esp + 0x400;


	D(BPK_Src) = src;
	D(BPK_Dst) = dst;
	D(___199f30h) = A2;
	D(___199f34h) = A1;
	D(___199f0ch) = 0;
	D(BPK_Push) = 0;
	D(___199f28h) = 0;
	D(___199f2ch) = 0;
	B(___199f38h) = 0;
	D(___199f10h) = 9;
	W(___199f14h) = 0x200;
	W(___199f1ch) = 0x102;

    while(1){
        
        eax = D(___199f0ch);
        eax += D(___199f10h);
        tmp = eax;
        eax = D(___199f0ch);
        D(___199f0ch) = tmp;
        ecx = 8;
        edx = 0;
        edx = eax & 7;
        eax = eax >> 3;
        eax += D(BPK_Src);
        esi = eax;
        ax = W(esi);
        esi += 2;
        bx = ax;
        al = B(esi);
        esi++;
        ecx = edx;

        while(ecx--){
            
            cf = al & 1;
            al >>= 1;
            bx >>= 1;
            bx |= (cf << 15);
        }

        ax = bx;
        ebx = 0;
        ebx = D(___199f10h);
        ebx -= 9;
        ebx <<= 1;
        ax &= W(ebx+___199f00h);
        
        if((ax == 0x100) || (B(___199f38h) != 0)){

            ecx = D(BPK_Push);

            while(ecx--){
                
                eax = D(esp);
                esp += 4;
            }

            return;
        }


        if(ax != 0x101){
            
            W(___199f18h) = ax;
            W(___199f1ah) = ax;

            if((short)ax >= (short)W(___199f1ch)){

                ax = W(___199f16h);
                W(___199f18h) = ax;
                al = B(___199f1fh);
                esp -= 4;
                D(esp) = eax;
                D(BPK_Push)++;
            }

            while((short)W(___199f18h) > (short)0xff){

                bx = W(___199f18h);
                cx = bx;
                ebx = 0;
                bx = cx;
                bx <<= 1;
                bx += cx;
                ebx += (dword)___196f00h;
                al = B(ebx+2);
                esp -= 4;
                D(esp) = eax;
                D(BPK_Push)++;
                ax = W(ebx);
                W(___199f18h) = ax;
            }

            ax = W(___199f18h);
            B(___199f1fh) = al;
            B(___199f1eh) = al;
            esp -= 4;
            D(esp) = eax;
            D(BPK_Push)++;
            ecx = D(BPK_Push);


            while(ecx--){

                eax = D(esp);
                esp += 4;
                edi = D(___199f2ch);

                if((int)edi >= (int)D(___199f30h)){

                    edi = D(___199f28h);

                    if(D(___199f34h) == 0){

                        edi += D(BPK_Dst);
                        al = (al >> 3) | (al << 5);
                        B(edi) = al;
                        D(___199f28h)++;
                    }
                    else {

                        if(edi != D(___199f34h)){
                            
                            edi += D(BPK_Dst);
                            al = (al >> 3) | (al << 5);
                            B(edi) = al;
                            D(___199f28h)++;
                        }
                        else {

                            B(___199f38h) = 1;
                        }
                    }
                }

                D(___199f2ch)++;
            }

            D(BPK_Push) = ++ecx;
            bx = W(___199f1ch);
            cx = bx;
            ebx = 0;
            bx = cx;
            bx <<= 1;
            bx += cx;
            ebx += (dword)___196f00h;
            al = B(___199f1eh);
            B(ebx+2) = al;
            ax = W(___199f16h);
            W(ebx) = ax;
            W(___199f1ch)++;
            ax = W(___199f1ah);
            W(___199f16h) = ax;
            bx = W(___199f1ch);
            if((short)bx < (short)W(___199f14h)){
            }
            else {

                if(D(___199f10h) == 0xc){
                }
                else {

                    D(___199f10h)++;
                    W(___199f14h) <<= 1;
                }
            }
        }
        else {

            D(___199f10h) = 9;
            W(___199f14h) = 0x200;
            W(___199f1ch) = 0x102;
            eax = D(___199f0ch);
            eax += D(___199f10h);
            tmp = eax;
            eax = D(___199f0ch);
            D(___199f0ch) = tmp;
            ecx = 8;
            edx = 0;
            edx = eax & 7;
            eax = eax >> 3;
            eax += D(BPK_Src);
            esi = eax;
            ax = W(esi);
            esi += 2;
            bx = ax; 
            al = B(esi);
            esi++;
            ecx = edx;

            while(ecx--){
                
                cf = al & 1;
                al >>= 1;
                bx >>= 1;
                bx |= (cf << 15);
            }

            ax = bx;
            ebx = 0;
            ebx = D(___199f10h);
            ebx -= 9;
            ebx <<= 1;
            ax &= W(ebx+___199f00h);
            W(___199f18h) = ax;
            W(___199f16h) = ax;
            B(___199f1eh) = al;
            B(___199f1fh) = al;
            edi = D(___199f2ch);

            if((int)edi >= (int)D(___199f30h)){

                edi = D(___199f28h);
                
                if(D(___199f34h) == 0){

                    edi += D(BPK_Dst);
                    al = (al >> 3) | (al << 5);
                    B(edi) = al;
                    D(___199f28h)++;
                }
                else {
                    if(edi != D(___199f34h)){

                        edi += D(BPK_Dst);
                        al = (al >> 3) | (al << 5);
                        B(edi) = al;
                        D(___199f28h)++;
                    }
                    else {

                        B(___199f38h) = 1;
                    }
                }
            }

            D(___199f2ch)++;
        }
    }
}
