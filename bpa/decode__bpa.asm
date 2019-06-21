%include "macros.inc"

    extern  __CEXT_V(BPASrc)
    extern  __CEXT_V(BPADst)
    extern  __CEXT_V(___196f00h)
    extern  __CEXT_V(___199f00h)
    extern  __CEXT_V(___199f08h)
    extern  __CEXT_V(___199f0ch)
    extern  __CEXT_V(___199f10h)
    extern  __CEXT_V(___199f14h)
    extern  __CEXT_V(___199f16h)
    extern  __CEXT_V(___199f18h)
    extern  __CEXT_V(___199f1ah)
    extern  __CEXT_V(___199f1ch)
    extern  __CEXT_V(___199f1eh)
    extern  __CEXT_V(___199f1fh)
    extern  __CEXT_V(___199f28h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(decode__bpa))
		push    ebp
		mov     ebp, esp
		pushad  
		mov     eax, [ebp+0ch]
		mov     [__CEXT_V(BPASrc)], eax
		mov     eax, [ebp+8]
		mov     [__CEXT_V(BPADst)], eax
		xor     eax, eax
		mov     [__CEXT_V(___199f0ch)], eax
		mov     [__CEXT_V(___199f08h)], eax
		mov     [__CEXT_V(___199f28h)], eax
		mov     dword [__CEXT_V(___199f10h)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
___5909dh:
		mov     eax, [__CEXT_V(___199f0ch)]
		add     eax, [__CEXT_V(___199f10h)]
		xchg    eax, [__CEXT_V(___199f0ch)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPASrc)]
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
		mov     ebx, [__CEXT_V(___199f10h)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		cmp     ax, word 100h
		je      ___592b7h
		cmp     ax, word 101h
		jne     ___59195h
		mov     dword [__CEXT_V(___199f10h)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
		mov     eax, [__CEXT_V(___199f0ch)]
		add     eax, [__CEXT_V(___199f10h)]
		xchg    eax, [__CEXT_V(___199f0ch)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPASrc)]
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
		mov     ebx, [__CEXT_V(___199f10h)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		mov     [__CEXT_V(___199f18h)], ax
		mov     [__CEXT_V(___199f16h)], ax
		mov     [__CEXT_V(___199f1eh)], al
		mov     [__CEXT_V(___199f1fh)], al
		mov     edi, [__CEXT_V(___199f28h)]
		add     edi, [__CEXT_V(BPADst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(___199f28h)]
		jmp     ___5909dh
___59195h:
		mov     [__CEXT_V(___199f18h)], ax
		mov     [__CEXT_V(___199f1ah)], ax
		cmp     ax, [__CEXT_V(___199f1ch)]
		jl      ___591c6h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [__CEXT_V(___199f16h)]
		mov     [__CEXT_V(___199f18h)], ax
		mov     al, [__CEXT_V(___199f1fh)]
		push    eax
		inc     dword [__CEXT_V(___199f08h)]
___591c6h:
		cmp     word [__CEXT_V(___199f18h)], 0ffh
		jle     ___59205h
		nop     
		nop     
		nop     
		nop     
		mov     bx, [__CEXT_V(___199f18h)]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, __CEXT_V(___196f00h)
		mov     al, [ebx+2]
		push    eax
		inc     dword [__CEXT_V(___199f08h)]
		mov     ax, [ebx]
		mov     [__CEXT_V(___199f18h)], ax
		jmp     ___591c6h
___59205h:
		mov     ax, [__CEXT_V(___199f18h)]
		mov     [__CEXT_V(___199f1fh)], al
		mov     [__CEXT_V(___199f1eh)], al
		push    eax
		inc     dword [__CEXT_V(___199f08h)]
		mov     ecx, [__CEXT_V(___199f08h)]
		jcxz    ___5923fh
___59225h:
		pop     eax
		mov     edi, [__CEXT_V(___199f28h)]
		add     edi, [__CEXT_V(BPADst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(___199f28h)]
		loop    ___59225h
___5923fh:
		mov     [__CEXT_V(___199f08h)], ecx
		mov     bx, [__CEXT_V(___199f1ch)]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, __CEXT_V(___196f00h)
		mov     al, [__CEXT_V(___199f1eh)]
		mov     [ebx+2], al
		mov     ax, [__CEXT_V(___199f16h)]
		mov     [ebx], ax
		inc     word [__CEXT_V(___199f1ch)]
		mov     ax, [__CEXT_V(___199f1ah)]
		mov     [__CEXT_V(___199f16h)], ax
		mov     bx, [__CEXT_V(___199f1ch)]
		cmp     bx, [__CEXT_V(___199f14h)]
		jl      ___5909dh
		nop     
		nop     
		nop     
		nop     
		cmp     dword [__CEXT_V(___199f10h)], byte 0ch
		je      ___5909dh
		nop     
		nop     
		nop     
		nop     
		inc     dword [__CEXT_V(___199f10h)]
		shl     word [__CEXT_V(___199f14h)], 1
		jmp     ___5909dh
___592b7h:
		mov     ecx, [__CEXT_V(___199f08h)]
		jcxz    ___592c3h
___592c0h:
		pop     eax
		loop    ___592c0h
___592c3h:
		popad   
		pop     ebp
		ret     8
