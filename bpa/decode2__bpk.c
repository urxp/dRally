#include "x86.h"

    extern byte BPK_Src[];
    extern byte BPK_Dst[];
    extern byte ___196f00h[];
    extern byte ___199f00h[];
    extern byte BPK_Push[];
    extern byte ___199f0ch[];
    extern byte ___199f10h[];
    extern byte ___199f14h[];
    extern byte ___199f16h[];
    extern byte ___199f18h[];
    extern byte ___199f1ah[];
    extern byte ___199f1ch[];
    extern byte ___199f1eh[];
    extern byte ___199f1fh[];
    extern byte ___199f28h[];

    #pragma aux decode4__bpk parm routine []
    void decode4__bpk(dword, dword, void *, void *);

// 5905ch
#pragma aux decode2__bpk parm routine []
void decode2__bpk(void * dst, void * src){

    decode4__bpk(0, 0, dst, src);
/*
	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
    dword   tmp;
    dword   cf;

	byte __esp[0x400];
	byte * esp = __esp + 0x400;


    eax = src;
    D(BPK_Src) = eax;
    eax = dst;
    D(BPK_Dst) = eax;
    eax = 0;
    D(___199f0ch) = eax;
    D(BPK_Push) = eax;
    D(___199f28h) = eax;
    D(___199f10h) = 9;
    W(___199f14h) = 0x200;
    W(___199f1ch) = 0x102;
___5909dh:
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
    if(cx == 0) goto ___590d1h;
___590cah:
    cf = al & 1;
    al >>= 1;
    bx >>= 1;
    bx += (cf << 15);
    if(--ecx) goto ___590cah;
___590d1h:
    ax = bx;
    ebx = 0;
    ebx = D(___199f10h);
    ebx -= 9;
    ebx <<= 1;
    ax &= W(ebx+___199f00h);
    if(ax == 0x100) goto ___592b7h;
    if(ax != 0x101) goto ___59195h;
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
    if(cx == 0) goto ___5914ch;
___59145h:
    cf = al & 1;
    al >>= 1;
    bx >>= 1;
    bx += (cf << 15);
    if(--ecx) goto ___59145h;
___5914ch:
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
    edi = D(___199f28h);
    edi += D(BPK_Dst);
    al = (al >> 3) | (al << 5);
    B(edi) = al;
    D(___199f28h)++;
    goto ___5909dh;
___59195h:
    W(___199f18h) = ax;
    W(___199f1ah) = ax;
    if((short)ax < (short)W(___199f1ch)) goto ___591c6h;
    ax = W(___199f16h);
    W(___199f18h) = ax;
    al = B(___199f1fh);
	esp -= 4;
	D(esp) = eax;
    D(BPK_Push)++;
___591c6h:
    if((short)W(___199f18h) <= (short)0xff) goto ___59205h;
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
    goto ___591c6h;
___59205h:
    ax = W(___199f18h);
    B(___199f1fh) = al;
    B(___199f1eh) = al;
	esp -= 4;
	D(esp) = eax;
    D(BPK_Push)++;
    ecx = D(BPK_Push);
    if(cx == 0) goto ___5923fh;
___59225h:
	eax = D(esp);
	esp += 4;
    edi = D(___199f28h);
    edi += D(BPK_Dst);
    al = (al >> 3) | (al << 5);
    B(edi) = al;
    D(___199f28h)++;
    if(--ecx) goto ___59225h;
___5923fh:
    D(BPK_Push) = ecx;
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
    if((short)bx < (short)W(___199f14h)) goto ___5909dh;
    if(D(___199f10h) == 0xc) goto ___5909dh;
    D(___199f10h)++;
    W(___199f14h) <<= 1;
    goto ___5909dh;
___592b7h:
    ecx = D(BPK_Push);
    if(cx == 0) goto ___592c3h;
___592c0h:
	eax = D(esp);
	esp += 4;
    if(--ecx) goto ___592c0h;
___592c3h:
	return;
*/
}
