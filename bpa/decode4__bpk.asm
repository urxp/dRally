%include "macros.inc"

    extern  __CEXT_V(BPK_Src)
    extern  __CEXT_V(BPK_Dst)
    extern  __CEXT_V(___199f30h)
    extern  __CEXT_V(___199f34h)
    extern  __CEXT_V(___199f0ch)
    extern  __CEXT_V(___199f14h)
    extern  __CEXT_V(___199f10h)
    extern  __CEXT_V(___199f00h)
    extern  __CEXT_V(___196f00h)
    extern  __CEXT_V(___199f18h)
    extern  __CEXT_V(___199f1fh)
    extern  __CEXT_V(___199f38h)
    extern  __CEXT_V(___199f28h)
    extern  __CEXT_V(___199f2ch)
    extern  __CEXT_V(___199f1eh)
    extern  __CEXT_V(___199f1ah)
    extern  __CEXT_V(___199f16h)
    extern  __CEXT_V(___199f1ch)
    extern  __CEXT_V(___199f08h)

%include "layout.inc"

section @text

;; 592c8h
__GDECL(__CEXT_F(decode4__bpk))
		push    ebp
		mov     ebp, esp
		pushad  
		mov     eax, [ebp+14h]
		mov     [__CEXT_V(BPK_Src)], eax
		mov     eax, [ebp+10h]
		mov     [__CEXT_V(BPK_Dst)], eax
		mov     eax, [ebp+0ch]
		mov     [__CEXT_V(___199f30h)], eax
		mov     eax, [ebp+8]
		mov     [__CEXT_V(___199f34h)], eax
		xor     eax, eax
		mov     [__CEXT_V(___199f0ch)], eax
		mov     [__CEXT_V(___199f08h)], eax
		mov     [__CEXT_V(___199f28h)], eax
		mov     [__CEXT_V(___199f2ch)], eax
		mov     [__CEXT_V(___199f38h)], al
		mov     dword [__CEXT_V(___199f10h)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
___59323h:
		mov     eax, [__CEXT_V(___199f0ch)]
		add     eax, [__CEXT_V(___199f10h)]
		xchg    eax, [__CEXT_V(___199f0ch)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPK_Src)]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___59357h
___59350h:
		shr     al, 1
		rcr     bx, 1
		loop    ___59350h
___59357h:
		mov     ax, bx
		xor     ebx, ebx
		mov     ebx, [__CEXT_V(___199f10h)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		cmp     ax, word 100h
		je      ___595c4h
		cmp     byte [__CEXT_V(___199f38h)], 0
		jne     ___595c4h
		cmp     ax, word 101h
		jne     ___59465h
		mov     dword [__CEXT_V(___199f10h)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(___199f1ch)], 102h
		mov     eax, [__CEXT_V(___199f0ch)]
		add     eax, [__CEXT_V(___199f10h)]
		xchg    eax, [__CEXT_V(___199f0ch)]
		mov     ecx, 8
		xor     edx, edx
		div     ecx
		add     eax, [__CEXT_V(BPK_Src)]
		mov     esi, eax
		lodsw   
		mov     bx, ax
		lodsb   
		mov     ecx, edx
		jcxz    ___593dfh
___593d8h:
		shr     al, 1
		rcr     bx, 1
		loop    ___593d8h
___593dfh:
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
		mov     edi, [__CEXT_V(___199f2ch)]
		cmp     edi, [__CEXT_V(___199f30h)]
		jl      ___5945ah
		nop     
		nop     
		nop     
		nop     
		mov     edi, [__CEXT_V(___199f28h)]
		cmp     dword [__CEXT_V(___199f34h)], byte 0
		je      ___59449h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [__CEXT_V(___199f34h)]
		jne     ___59449h
		nop     
		nop     
		nop     
		nop     
		mov     byte [__CEXT_V(___199f38h)], 1
		jmp     ___5945ah
		nop     
		nop     
		nop
___59449h:
		add     edi, [__CEXT_V(BPK_Dst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(___199f28h)]
___5945ah:
		inc     dword [__CEXT_V(___199f2ch)]
		jmp     ___59323h
___59465h:
		mov     [__CEXT_V(___199f18h)], ax
		mov     [__CEXT_V(___199f1ah)], ax
		cmp     ax, [__CEXT_V(___199f1ch)]
		jl      ___59496h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [__CEXT_V(___199f16h)]
		mov     [__CEXT_V(___199f18h)], ax
		mov     al, [__CEXT_V(___199f1fh)]
		push    eax
		inc     dword [__CEXT_V(___199f08h)]
___59496h:
		cmp     word [__CEXT_V(___199f18h)], 0ffh
		jle     ___594d5h
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
		jmp     ___59496h
___594d5h:
		mov     ax, [__CEXT_V(___199f18h)]
		mov     [__CEXT_V(___199f1fh)], al
		mov     [__CEXT_V(___199f1eh)], al
		push    eax
		inc     dword [__CEXT_V(___199f08h)]
		mov     ecx, [__CEXT_V(___199f08h)]
		jcxz    ___5954ch
___594f5h:
		pop     eax
		mov     edi, [__CEXT_V(___199f2ch)]
		cmp     edi, [__CEXT_V(___199f30h)]
		jl      ___59544h
		nop     
		nop     
		nop     
		nop     
		mov     edi, [__CEXT_V(___199f28h)]
		cmp     dword [__CEXT_V(___199f34h)], byte 0
		je      ___59533h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [__CEXT_V(___199f34h)]
		jne     ___59533h
		nop     
		nop     
		nop     
		nop     
		mov     byte [__CEXT_V(___199f38h)], 1
		jmp     ___59544h
		nop     
		nop     
		nop
___59533h:
		add     edi, [__CEXT_V(BPK_Dst)]
		ror     al, 3
		mov     [edi], al
		inc     dword [__CEXT_V(___199f28h)]
___59544h:
		inc     dword [__CEXT_V(___199f2ch)]
		loop    ___594f5h
___5954ch:
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
		jl      ___59323h
		nop     
		nop     
		nop     
		nop     
		cmp     dword [__CEXT_V(___199f10h)], byte 0ch
		je      ___59323h
		nop     
		nop     
		nop     
		nop     
		inc     dword [__CEXT_V(___199f10h)]
		shl     word [__CEXT_V(___199f14h)], 1
		jmp     ___59323h
___595c4h:
		mov     ecx, [__CEXT_V(___199f08h)]
		jcxz    ___595d0h
___595cdh:
		pop     eax
		loop    ___595cdh
___595d0h:
		popad   
		pop     ebp
		ret     10h
