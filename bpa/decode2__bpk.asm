%include "macros.inc"

    extern  __CEXT_V(BPK_Src)
    extern  __CEXT_V(BPK_Dst)
    extern  __CEXT_V(___196f00h)
    extern  __CEXT_V(___199f00h)
    extern  __CEXT_V(BPK_Push)
    extern  __CEXT_V(BPK_Src_BitsOffset)
    extern  __CEXT_V(BPK_Src_BitsToRead)
    extern  __CEXT_V(___199f14h)
    extern  __CEXT_V(BPK_Previous)
    extern  __CEXT_V(BPK_Work)
    extern  __CEXT_V(BPK_Current)
    extern  __CEXT_V(___199f1ch)
    extern  __CEXT_V(___199f1eh)
    extern  __CEXT_V(BPK_End)
    extern  __CEXT_V(BPK_Dst_i)

%include "layout.inc"

section @text

;; 5905ch
__GDECL(__CEXT_F(decode2__bpk))
		push    ebp
		mov     ebp, esp
		pushad  
		mov     eax, [ebp+0ch]
		mov     [__CEXT_V(BPK_Src)], eax
		mov     eax, [ebp+8]
		mov     [__CEXT_V(BPK_Dst)], eax
		xor     eax, eax
		mov     [__CEXT_V(BPK_Src_BitsOffset)], eax
		mov     [__CEXT_V(BPK_Push)], eax
		mov     [__CEXT_V(BPK_Dst_i)], eax
		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
___5909dh:
		mov     eax, [__CEXT_V(BPK_Src_BitsOffset)]
		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
		xchg    eax, [__CEXT_V(BPK_Src_BitsOffset)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPK_Src)]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___590d1h
___590cah:
		shr     al, 1
		rcr     bx, 1
		loop    ___590cah
___590d1h:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		cmp     ax, word 100h
		je      ___592b7h
		cmp     ax, word 101h
		jne     ___59195h
		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
		mov     eax, [__CEXT_V(BPK_Src_BitsOffset)]
		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
		xchg    eax, [__CEXT_V(BPK_Src_BitsOffset)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPK_Src)]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___5914ch
___59145h:
		shr     al, 1
		rcr     bx, 1
		loop    ___59145h
___5914ch:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		mov     [__CEXT_V(BPK_Work)], ax
		mov     [__CEXT_V(BPK_Previous)], ax
		mov     [__CEXT_V(___199f1eh)], al
		mov     [__CEXT_V(BPK_End)], al
		mov     edi, [__CEXT_V(BPK_Dst_i)]
		add     edi, [__CEXT_V(BPK_Dst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(BPK_Dst_i)]
		jmp     ___5909dh
___59195h:
		mov     [__CEXT_V(BPK_Work)], ax
		mov     [__CEXT_V(BPK_Current)], ax
		cmp     ax, [__CEXT_V(___199f1ch)]
		jl      ___591c6h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [__CEXT_V(BPK_Previous)]
		mov     [__CEXT_V(BPK_Work)], ax
		mov     al, [__CEXT_V(BPK_End)]
		push    eax
		inc     dword [__CEXT_V(BPK_Push)]
___591c6h:
		cmp     word [__CEXT_V(BPK_Work)], 0ffh
		jle     ___59205h
		nop     
		nop     
		nop     
		nop     
		mov     bx, [__CEXT_V(BPK_Work)]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, __CEXT_V(___196f00h)
		mov     al, [ebx+2]
		push    eax
		inc     dword [__CEXT_V(BPK_Push)]
		mov     ax, [ebx]
		mov     [__CEXT_V(BPK_Work)], ax
		jmp     ___591c6h
___59205h:
		mov     ax, [__CEXT_V(BPK_Work)]
		mov     [__CEXT_V(BPK_End)], al
		mov     [__CEXT_V(___199f1eh)], al
		push    eax
		inc     dword [__CEXT_V(BPK_Push)]
		mov     ecx, [__CEXT_V(BPK_Push)]
		jcxz    ___5923fh
___59225h:
		pop     eax
		mov     edi, [__CEXT_V(BPK_Dst_i)]
		add     edi, [__CEXT_V(BPK_Dst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(BPK_Dst_i)]
		loop    ___59225h
___5923fh:
		mov     [__CEXT_V(BPK_Push)], ecx
		mov     bx, [__CEXT_V(___199f1ch)]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, __CEXT_V(___196f00h)
		mov     al, [__CEXT_V(___199f1eh)]
		mov     [ebx+2], al
		mov     ax, [__CEXT_V(BPK_Previous)]
		mov     [ebx], ax
		inc     word [__CEXT_V(___199f1ch)]
		mov     ax, [__CEXT_V(BPK_Current)]
		mov     [__CEXT_V(BPK_Previous)], ax
		mov     bx, [__CEXT_V(___199f1ch)]
		cmp     bx, [__CEXT_V(___199f14h)]
		jl      ___5909dh
		nop     
		nop     
		nop     
		nop     
		cmp     dword [__CEXT_V(BPK_Src_BitsToRead)], byte 0ch
		je      ___5909dh
		nop     
		nop     
		nop     
		nop     
		inc     dword [__CEXT_V(BPK_Src_BitsToRead)]
		shl     word [__CEXT_V(___199f14h)], 1
		jmp     ___5909dh
___592b7h:
		mov     ecx, [__CEXT_V(BPK_Push)]
		jcxz    ___592c3h
___592c0h:
		pop     eax
		loop    ___592c0h
___592c3h:
		popad   
		pop     ebp
		ret     8
