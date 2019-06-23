#include "x86.h"

    extern byte BPK_Src[];
    extern byte BPK_Dst[];
    extern byte BPK_Src_Offset[];
    extern byte BPK_Bytes[];
    extern byte BPK_Src_BitsOffset[];
    extern byte ___199f14h[];
    extern byte BPK_Src_BitsToRead[];
    extern byte ___199f00h[];
    extern byte ___196f00h[];
    extern byte BPK_Work[];
    extern byte BPK_End[];
    extern byte ___199f38h[];
    extern byte BPK_Dst_i[];
    extern byte BPK_Src_i[];
    extern byte ___199f1eh[];
    extern byte BPK_Current[];
    extern byte BPK_Previous[];
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


//		push    ebp
//		mov     ebp, esp
//		pushad  
//		mov     eax, [ebp+14h]
	eax = src;
//		mov     [__CEXT_V(BPK_Src)], eax
	D(BPK_Src) = eax;
//		mov     eax, [ebp+10h]
	eax = dst;
//		mov     [__CEXT_V(BPK_Dst)], eax
	D(BPK_Dst) = eax;
//		mov     eax, [ebp+0ch]
	eax = A2;
//		mov     [__CEXT_V(BPK_Src_Offset)], eax
	D(BPK_Src_Offset) = eax;
//		mov     eax, [ebp+8]
	eax = A1;
//		mov     [__CEXT_V(BPK_Bytes)], eax
	D(BPK_Bytes) = eax;
//		xor     eax, eax
	eax = 0;
//		mov     [__CEXT_V(BPK_Src_BitsOffset)], eax
	D(BPK_Src_BitsOffset) = eax;
//		mov     [__CEXT_V(BPK_Push)], eax
	D(BPK_Push) = eax;
//		mov     [__CEXT_V(BPK_Dst_i)], eax
	D(BPK_Dst_i) = eax;
//		mov     [__CEXT_V(BPK_Src_i)], eax
	D(BPK_Src_i) = eax;
//		mov     [__CEXT_V(___199f38h)], al
	B(___199f38h) = al;
//		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
	D(BPK_Src_BitsToRead) = 9;
//		mov     word [__CEXT_V(___199f14h)], 200h
	W(___199f14h) = 0x200;
//		mov     word [__CEXT_V(___199f1ch)], 102h
	W(___199f1ch) = 0x102;
___59323h:
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
//		jcxz    ___59357h
    if(cx == 0) goto ___59357h;
___59350h:
//		shr     al, 1
    cf = al&1;
    al >>= 1;
//		rcr     bx, 1
    bx >>= 1;
    bx += (cf<<15);
//		loop    ___59350h
    if(--ecx) goto ___59350h;
___59357h:
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
//		je      ___595c4h
    if(ax == 0x100) goto ___595c4h;
//		cmp     byte [__CEXT_V(___199f38h)], 0
//		jne     ___595c4h
	if(B(___199f38h) != 0) goto ___595c4h;
//		cmp     ax, word 101h
//		jne     ___59465h
    if(ax != 0x101) goto ___59465h;
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
//		jcxz    ___593dfh
    if(cx == 0) goto ___593dfh;
___593d8h:
//		shr     al, 1
    cf = al&1;
    al >>= 1;
//		rcr     bx, 1
    bx >>= 1;
    bx += (cf<<15);
//		loop    ___593d8h
    if(--ecx) goto ___593d8h;
___593dfh:
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
//		mov     [__CEXT_V(___199f1eh)], al
    B(___199f1eh) = al;
//		mov     [__CEXT_V(BPK_End)], al
    B(BPK_End) = al;
//		mov     edi, [__CEXT_V(BPK_Src_i)]
	edi = D(BPK_Src_i);
//		cmp     edi, [__CEXT_V(BPK_Src_Offset)]
//		jl      ___5945ah  
	if((int)edi < (int)D(BPK_Src_Offset)) goto ___5945ah;
//		mov     edi, [__CEXT_V(BPK_Dst_i)]
    edi = D(BPK_Dst_i);
//		cmp     dword [__CEXT_V(BPK_Bytes)], byte 0
//		je      ___59449h  
	if(D(BPK_Bytes) == 0) goto ___59449h;
//		cmp     edi, [__CEXT_V(BPK_Bytes)]
//		jne     ___59449h 
	if(edi != D(BPK_Bytes)) goto ___59449h;
//		mov     byte [__CEXT_V(___199f38h)], 1
	B(___199f38h) = 1;
//		jmp     ___5945ah
	goto ___5945ah;
___59449h:
//		add     edi, [__CEXT_V(BPK_Dst)]
    edi += D(BPK_Dst);
//		ror     al, 3
    al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
    B(edi) = al;
//		inc     dword [__CEXT_V(BPK_Dst_i)]
    D(BPK_Dst_i)++;
___5945ah:
//		inc     dword [__CEXT_V(BPK_Src_i)];
	D(BPK_Src_i)++;
//		jmp     ___59323h
    goto ___59323h;
___59465h:
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		mov     [__CEXT_V(BPK_Current)], ax
    W(BPK_Current) = ax;
//		cmp     ax, [__CEXT_V(___199f1ch)]
//		jl      ___59496h
    if((short)ax < (short)W(___199f1ch)) goto ___59496h;
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
___59496h:
//		cmp     word [__CEXT_V(BPK_Work)], 0ffh
//		jle     ___594d5h
    if((short)W(BPK_Work) <= (short)0xff) goto ___594d5h;
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
//		mov     [__CEXT_V(BPK_Work)], ax
    W(BPK_Work) = ax;
//		jmp     ___59496h
    goto ___59496h;
___594d5h:
//		mov     ax, [__CEXT_V(BPK_Work)]
    ax = W(BPK_Work);
//		mov     [__CEXT_V(BPK_End)], al
    B(BPK_End) = al;
//		mov     [__CEXT_V(___199f1eh)], al
    B(___199f1eh) = al;
//		push    eax
	esp -= 4;
	D(esp) = eax;
//		inc     dword [__CEXT_V(BPK_Push)]
    D(BPK_Push)++;
//		mov     ecx, [__CEXT_V(BPK_Push)]
    ecx = D(BPK_Push);
//		jcxz    ___5954ch
    if(cx == 0) goto ___5954ch;
___594f5h:
//		pop     eax
	eax = D(esp);
	esp += 4;
//		mov     edi, [__CEXT_V(BPK_Src_i)]
	edi = D(BPK_Src_i);
//		cmp     edi, [__CEXT_V(BPK_Src_Offset)]
//		jl      ___59544h
	if((int)edi < (int)D(BPK_Src_Offset)) goto ___59544h;
//		mov     edi, [__CEXT_V(BPK_Dst_i)]
	edi = D(BPK_Dst_i);
//		cmp     dword [__CEXT_V(BPK_Bytes)], byte 0
//		je      ___59533h 
	if(D(BPK_Bytes) == 0) goto ___59533h;
//		cmp     edi, [__CEXT_V(BPK_Bytes)]
//		jne     ___59533h  
	if(edi != D(BPK_Bytes)) goto ___59533h;
//		mov     byte [__CEXT_V(___199f38h)], 1
	B(___199f38h) = 1;
//		jmp     ___59544h
	goto ___59544h;
___59533h:
//		add     edi, [__CEXT_V(BPK_Dst)]
	edi += D(BPK_Dst);
//		ror     al, 3
	al = (byte)(al >> 3) + (byte)(al << 5);
//		mov     [edi], al
	B(edi) = al;
//		inc     dword [__CEXT_V(BPK_Dst_i)]
	D(BPK_Dst_i)++;
___59544h:
//		inc     dword [__CEXT_V(BPK_Src_i)]
	D(BPK_Src_i)++;
//		loop    ___594f5h
	if(--ecx) goto ___594f5h;
___5954ch:
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
//		jl      ___59323h
    if((short)bx < (short)W(___199f14h)) goto ___59323h;
//		cmp     dword [__CEXT_V(BPK_Src_BitsToRead)], byte 0ch
//		je      ___59323h
    if(D(BPK_Src_BitsToRead) == 0xc) goto ___59323h;
//		inc     dword [__CEXT_V(BPK_Src_BitsToRead)]
    D(BPK_Src_BitsToRead)++;
//		shl     word [__CEXT_V(___199f14h)], 1
    W(___199f14h) <<= 1;
//		jmp     ___59323h
    goto ___59323h;
___595c4h:
//		mov     ecx, [__CEXT_V(BPK_Push)]
    ecx = D(BPK_Push);
//		jcxz    ___595d0h
    if(cx == 0) goto ___595d0h;
___595cdh:
//		pop     eax
	eax = D(esp);
	esp += 4;
//		loop    ___595cdh
    if(--ecx) goto ___595cdh;
___595d0h:
//		popad   
//		pop     ebp
//		ret     10h

	return;
}
