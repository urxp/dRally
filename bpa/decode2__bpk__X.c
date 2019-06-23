#include "x86.h"

    extern byte BPK_Src[];
    extern byte BPK_Dst[];
    extern byte BPK_Dict[];
    extern byte ___199f00h[];
    extern byte BPK_Push[];
    extern byte BPK_Src_BitsOffset[];
    extern byte BPK_Src_BitsToRead[];
    extern byte ___199f14h[];
    extern byte BPK_Previous[];
    extern byte BPK_Work[];
    extern byte BPK_Current[];
    extern byte ___199f1ch[];
    extern byte BPK_Next[];
    extern byte BPK_End[];
    extern byte BPK_Dst_i[];

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
//		mov     [__CEXT_V(BPK_Src_BitsOffset)], eax
    D(BPK_Src_BitsOffset) = eax;
//		mov     [__CEXT_V(BPK_Push)], eax
    D(BPK_Push) = eax;
//		mov     [__CEXT_V(BPK_Dst_i)], eax
    D(BPK_Dst_i) = eax;
//		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
    D(BPK_Src_BitsToRead) = 9;
//		mov     word [__CEXT_V(___199f14h)], 200h
    W(___199f14h) = 0x200;
//		mov     word [__CEXT_V(___199f1ch)], 102h
    W(___199f1ch) = 0x102;
___5909dh:
//		mov     eax, [__CEXT_V(BPK_Src_BitsOffset)]
    eax = D(BPK_Src_BitsOffset);
//		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
    eax += D(BPK_Src_BitsToRead);
//		xchg    eax, [__CEXT_V(BPK_Src_BitsOffset)]
    tmp = eax;
    eax = D(BPK_Src_BitsOffset);
    D(BPK_Src_BitsOffset) = tmp;
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
//		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
    ebx = D(BPK_Src_BitsToRead);
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
//		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
    D(BPK_Src_BitsToRead) = 9;
//		mov     word [__CEXT_V(___199f14h)], 200h
    W(___199f14h) = 0x200;
//		mov     word [__CEXT_V(___199f1ch)], 102h
    W(___199f1ch) = 0x102;
//		mov     eax, [__CEXT_V(BPK_Src_BitsOffset)]
    eax = D(BPK_Src_BitsOffset);
//		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
    eax += D(BPK_Src_BitsToRead);
//		xchg    eax, [__CEXT_V(BPK_Src_BitsOffset)]
    tmp = eax;
    eax = D(BPK_Src_BitsOffset);
    D(BPK_Src_BitsOffset) = tmp;
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
//		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
    ebx = D(BPK_Src_BitsToRead);
//		sub     ebx, byte 9
    ebx -= 9;
//		shl     ebx, 1
    ebx <<= 1;
//		and     ax, [ebx+__CEXT_V(___199f00h)]
    ax &= W(ebx+___199f00h);
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		mov     [__CEXT_V(BPK_Previous)], ax
    W(BPK_Previous) = ax;
//		mov     [__CEXT_V(BPK_Next)], al
    B(BPK_Next) = al;
//		mov     [__CEXT_V(BPK_End)], al
    B(BPK_End) = al;
//		mov     edi, [__CEXT_V(BPK_Dst_i)]
    edi = D(BPK_Dst_i);
//		add     edi, [__CEXT_V(BPK_Dst)]
    edi += D(BPK_Dst);
//		ror     al, 3
    al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
    B(edi) = al;
//		inc     dword [__CEXT_V(BPK_Dst_i)]
    D(BPK_Dst_i)++;
//		jmp     ___5909dh
    goto ___5909dh;
___59195h:
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		mov     [__CEXT_V(BPK_Current)], ax
    W(BPK_Current) = ax;
//		cmp     ax, [__CEXT_V(___199f1ch)]
//		jl      ___591c6h
    if((short)ax < (short)W(___199f1ch)) goto ___591c6h;
//		mov     ax, [__CEXT_V(BPK_Previous)]
    ax = W(BPK_Previous);
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		mov     al, [__CEXT_V(BPK_End)]
    al = B(BPK_End);
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
___591c6h:
//		cmp     word [__CEXT_V(BPK_Work)], 0ffh
//		jle     ___59205h
    if((short)W(BPK_Work) <= (short)0xff) goto ___59205h;
//		mov     bx, [__CEXT_V(BPK_Work)]
    bx = W(BPK_Work);
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
//		add     ebx, __CEXT_V(BPK_Dict)
    ebx += (dword)BPK_Dict;
//		mov     al, [ebx+2]
    al = B(ebx+2);
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
//		mov     ax, [ebx]
    ax = W(ebx);
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		jmp     ___591c6h
    goto ___591c6h;
___59205h:
//		mov     ax, [__CEXT_V(BPK_Work)]
    ax = W(BPK_Work);
//		mov     [__CEXT_V(BPK_End)], al
    B(BPK_End) = al;
//		mov     [__CEXT_V(BPK_Next)], al
    B(BPK_Next) = al;
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
//		mov     edi, [__CEXT_V(BPK_Dst_i)]
    edi = D(BPK_Dst_i);
//		add     edi, [__CEXT_V(BPK_Dst)]
    edi += D(BPK_Dst);
//		ror     al, 3
    al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
    B(edi) = al;
//		inc     dword [__CEXT_V(BPK_Dst_i)]
    D(BPK_Dst_i)++;
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
//		add     ebx, __CEXT_V(BPK_Dict)
    ebx += (dword)BPK_Dict;
//		mov     al, [__CEXT_V(BPK_Next)]
    al = B(BPK_Next);
//		mov     [ebx+2], al
    B(ebx+2) = al;
//		mov     ax, [__CEXT_V(BPK_Previous)]
    ax = W(BPK_Previous);
//		mov     [ebx], ax
    W(ebx) = ax;
//		inc     word [__CEXT_V(___199f1ch)]
    W(___199f1ch)++;
//		mov     ax, [__CEXT_V(BPK_Current)]
    ax = W(BPK_Current);
//		mov     [__CEXT_V(BPK_Previous)], ax
    W(BPK_Previous) = ax;
//		mov     bx, [__CEXT_V(___199f1ch)]
    bx = W(___199f1ch);
//		cmp     bx, [__CEXT_V(___199f14h)]
//		jl      ___5909dh
    if((short)bx < (short)W(___199f14h)) goto ___5909dh;
//		cmp     dword [__CEXT_V(BPK_Src_BitsToRead)], byte 0ch
//		je      ___5909dh
    if(D(BPK_Src_BitsToRead) == 0xc) goto ___5909dh;
//		inc     dword [__CEXT_V(BPK_Src_BitsToRead)]
    D(BPK_Src_BitsToRead)++;
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
