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

// 5905ch
#pragma aux decode2__bpk parm routine []
void decode2__bpk(void * dst, void * src){

	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
    dword   tmp;
    dword   cf;

	byte __esp[0x400];
	byte * esp = __esp + 0x400;

//		push    ebp
//		mov     ebp, esp
//		pushad  
//		mov     eax, [ebp+0ch]
    eax = src;
//		mov     [__CEXT_V(BPK_Src)], eax
    D(BPK_Src) = eax;
//		mov     eax, [ebp+8]
    eax = dst;
//		mov     [__CEXT_V(BPK_Dst)], eax
    D(BPK_Dst) = eax;
//		xor     eax, eax
    eax = 0;
//		mov     [__CEXT_V(___199f0ch)], eax
    D(___199f0ch) = eax;
//		mov     [__CEXT_V(BPK_Push)], eax
    D(BPK_Push) = eax;
//		mov     [__CEXT_V(___199f28h)], eax
    D(___199f28h) = eax;
//		mov     dword [__CEXT_V(___199f10h)], 9
    D(___199f10h) = 9;
//		mov     word [__CEXT_V(___199f14h)], 200h
    W(___199f14h) = 0x200;
//		mov     word [__CEXT_V(___199f1ch)], 102h
    W(___199f1ch) = 0x102;
___5909dh:
//		mov     eax, [__CEXT_V(___199f0ch)]
    eax = D(___199f0ch);
//		add     eax, [__CEXT_V(___199f10h)]
    eax += D(___199f10h);
//		xchg    eax, [__CEXT_V(___199f0ch)]
    tmp = eax;
    eax = D(___199f0ch);
    D(___199f0ch) = tmp;
//		mov     ecx, 8
    ecx = 8;
//		xor     edx, edx
    edx = 0;
//		div     ecx
	edx = eax & 7;
	eax = eax >> 3;
//		add     eax, [__CEXT_V(BPK_Src)]
    eax += D(BPK_Src);
//		mov     esi, eax
    esi = eax;
//		lodsw   
    ax = W(esi);
    esi += 2;
//		mov     bx, ax
    bx = ax;
//		lodsb   
    al = B(esi);
    esi++;
//		mov     ecx, edx
    ecx = edx;
//		jcxz    ___590d1h
    if(cx == 0) goto ___590d1h;
___590cah:
//		shr     al, 1
    cf = al&1;
    al >>= 1;
//		rcr     bx, 1
    bx >>= 1;
    bx += (cf<<15);
//		loop    ___590cah
    if(--ecx) goto ___590cah;
___590d1h:
//		mov     ax, bx
    ax = bx;
//		xor     ebx, ebx
    ebx = 0;
//		mov     ebx, [__CEXT_V(___199f10h)]
    ebx = D(___199f10h);
//		sub     ebx, byte 9
    ebx -= 9;
//		shl     ebx, 1
    ebx <<= 1;
//		and     ax, [ebx+__CEXT_V(___199f00h)]
    ax &= W(ebx+___199f00h);
//		cmp     ax, word 100h
//		je      ___592b7h
    if(ax == 0x100) goto ___592b7h;
//		cmp     ax, word 101h
//		jne     ___59195h
    if(ax != 0x101) goto ___59195h;
//		mov     dword [__CEXT_V(___199f10h)], 9
    D(___199f10h) = 9;
//		mov     word [__CEXT_V(___199f14h)], 200h
    W(___199f14h) = 0x200;
//		mov     word [__CEXT_V(___199f1ch)], 102h
    W(___199f1ch) = 0x102;
//		mov     eax, [__CEXT_V(___199f0ch)]
    eax = D(___199f0ch);
//		add     eax, [__CEXT_V(___199f10h)]
    eax += D(___199f10h);
//		xchg    eax, [__CEXT_V(___199f0ch)]
    tmp = eax;
    eax = D(___199f0ch);
    D(___199f0ch) = tmp;
//		mov     ecx, 8
    ecx = 8;
//		xor     edx, edx
    edx = 0;
//		div     ecx
	edx = eax & 7;
	eax = eax >> 3;
//		add     eax, [__CEXT_V(BPK_Src)]
    eax += D(BPK_Src);
//		mov     esi, eax
    esi = eax;
//		lodsw
    ax = W(esi);
    esi += 2;
//		mov     bx, ax
    bx = ax;
//		lodsb   
    al = B(esi);
    esi++;
//		mov     ecx, edx
    ecx = edx;
//		jcxz    ___5914ch
    if(cx == 0) goto ___5914ch;
___59145h:
//		shr     al, 1
    cf = al&1;
    al >>= 1;
//		rcr     bx, 1
    bx >>= 1;
    bx += (cf<<15);
//		loop    ___59145h
    if(--ecx) goto ___59145h;
___5914ch:
//		mov     ax, bx
    ax = bx;
//		xor     ebx, ebx
    ebx = 0;
//		mov     ebx, [__CEXT_V(___199f10h)]
    ebx = D(___199f10h);
//		sub     ebx, byte 9
    ebx -= 9;
//		shl     ebx, 1
    ebx <<= 1;
//		and     ax, [ebx+__CEXT_V(___199f00h)]
    ax &= W(ebx+___199f00h);
//		mov     [__CEXT_V(___199f18h)], ax
    W(___199f18h) = ax;
//		mov     [__CEXT_V(___199f16h)], ax
    W(___199f16h) = ax;
//		mov     [__CEXT_V(___199f1eh)], al
    B(___199f1eh) = al;
//		mov     [__CEXT_V(___199f1fh)], al
    B(___199f1fh) = al;
//		mov     edi, [__CEXT_V(___199f28h)]
    edi = D(___199f28h);
//		add     edi, [__CEXT_V(BPK_Dst)]
    edi += D(BPK_Dst);
//		ror     al, 3
    al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
    B(edi) = al;
//		inc     dword [__CEXT_V(___199f28h)]
    D(___199f28h)++;
//		jmp     ___5909dh
    goto ___5909dh;
___59195h:
//		mov     [__CEXT_V(___199f18h)], ax
    W(___199f18h) = ax;
//		mov     [__CEXT_V(___199f1ah)], ax
    W(___199f1ah) = ax;
//		cmp     ax, [__CEXT_V(___199f1ch)]
//		jl      ___591c6h
    if((short)ax < (short)W(___199f1ch)) goto ___591c6h;
//		mov     ax, [__CEXT_V(___199f16h)]
    ax = W(___199f16h);
//		mov     [__CEXT_V(___199f18h)], ax
    W(___199f18h) = ax;
//		mov     al, [__CEXT_V(___199f1fh)]
    al = B(___199f1fh);
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
___591c6h:
//		cmp     word [__CEXT_V(___199f18h)], 0ffh
//		jle     ___59205h
    if((short)W(___199f18h) <= (short)0xff) goto ___59205h;
//		mov     bx, [__CEXT_V(___199f18h)]
    bx = W(___199f18h);
//		mov     cx, bx
    cx = bx;
//		xor     ebx, ebx
    ebx = 0;
//		mov     bx, cx
    bx = cx;
//		shl     bx, 1
    bx <<= 1;
//		add     bx, cx
    bx += cx;
//		add     ebx, __CEXT_V(___196f00h)
    ebx += (dword)___196f00h;
//		mov     al, [ebx+2]
    al = B(ebx+2);
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
//		mov     ax, [ebx]
    ax = W(ebx);
//		mov     [__CEXT_V(___199f18h)], ax
    W(___199f18h) = ax;
//		jmp     ___591c6h
    goto ___591c6h;
___59205h:
//		mov     ax, [__CEXT_V(___199f18h)]
    ax = W(___199f18h);
//		mov     [__CEXT_V(___199f1fh)], al
    B(___199f1fh) = al;
//		mov     [__CEXT_V(___199f1eh)], al
    B(___199f1eh) = al;
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
//		mov     ecx, [__CEXT_V(BPK_Push)]
    ecx = D(BPK_Push);
//		jcxz    ___5923fh
    if(cx == 0) goto ___5923fh;
___59225h:
//		pop     eax
	eax = D(esp);
	esp += 4;
//		mov     edi, [__CEXT_V(___199f28h)]
    edi = D(___199f28h);
//		add     edi, [__CEXT_V(BPK_Dst)]
    edi += D(BPK_Dst);
//		ror     al, 3
    al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
    B(edi) = al;
//		inc     dword [__CEXT_V(___199f28h)]
    D(___199f28h)++;
//		loop    ___59225h
    if(--ecx) goto ___59225h;
___5923fh:
//		mov     [__CEXT_V(BPK_Push)], ecx
    D(BPK_Push) = ecx;
//		mov     bx, [__CEXT_V(___199f1ch)]
    bx = W(___199f1ch);
//		mov     cx, bx
    cx = bx;
//		xor     ebx, ebx
    ebx = 0;
//		mov     bx, cx
    bx = cx;
//		shl     bx, 1
    bx <<= 1;
//		add     bx, cx
    bx += cx;
//		add     ebx, __CEXT_V(___196f00h)
    ebx += (dword)___196f00h;
//		mov     al, [__CEXT_V(___199f1eh)]
    al = B(___199f1eh);
//		mov     [ebx+2], al
    B(ebx+2) = al;
//		mov     ax, [__CEXT_V(___199f16h)]
    ax = W(___199f16h);
//		mov     [ebx], ax
    W(ebx) = ax;
//		inc     word [__CEXT_V(___199f1ch)]
    W(___199f1ch)++;
//		mov     ax, [__CEXT_V(___199f1ah)]
    ax = W(___199f1ah);
//		mov     [__CEXT_V(___199f16h)], ax
    W(___199f16h) = ax;
//		mov     bx, [__CEXT_V(___199f1ch)]
    bx = W(___199f1ch);
//		cmp     bx, [__CEXT_V(___199f14h)]
//		jl      ___5909dh
    if((short)bx < (short)W(___199f14h)) goto ___5909dh;
//		cmp     dword [__CEXT_V(___199f10h)], byte 0ch
//		je      ___5909dh
    if(D(___199f10h) == 0xc) goto ___5909dh;
//		inc     dword [__CEXT_V(___199f10h)]
    D(___199f10h)++;
//		shl     word [__CEXT_V(___199f14h)], 1
    W(___199f14h) <<= 1;
//		jmp     ___5909dh
    goto ___5909dh;
___592b7h:
//		mov     ecx, [__CEXT_V(BPK_Push)]
    ecx = D(BPK_Push);
//		jcxz    ___592c3h
    if(cx == 0) goto ___592c3h;
___592c0h:
//		pop     eax
	eax = D(esp);
	esp += 4;
//		loop    ___592c0h
    if(--ecx) goto ___592c0h;
___592c3h:
//		popad   
//		pop     ebp
//		ret     8

	return;
}
