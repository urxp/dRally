%include "macros.inc"

    extern  __CEXT_V(BPK_Src)
    extern  __CEXT_V(BPK_Dst)
    extern  __CEXT_V(BPK_Dst_Offset)
    extern  __CEXT_V(BPK_Bytes)
    extern  __CEXT_V(BPK_Src_BitsPosition)
    extern  __CEXT_V(___199f14h)
    extern  __CEXT_V(BPK_Src_BitsToRead)
    extern  __CEXT_V(___199f00h)
    extern  __CEXT_V(BPK_Dict)
    extern  __CEXT_V(BPK_Work)
    extern  __CEXT_V(BPK_End)
    extern  __CEXT_V(___199f38h)
    extern  __CEXT_V(BPK_Dst_i)
    extern  __CEXT_V(BPK_Src_i)
    extern  __CEXT_V(BPK_Next)
    extern  __CEXT_V(BPK_Current)
    extern  __CEXT_V(BPK_Previous)
    extern  __CEXT_V(BPK_DictTop)
    extern  __CEXT_V(BPK_Pushed)

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
		mov     [__CEXT_V(BPK_Dst_Offset)], eax
		mov     eax, [ebp+8]
		mov     [__CEXT_V(BPK_Bytes)], eax
		xor     eax, eax
		mov     [__CEXT_V(BPK_Src_BitsPosition)], eax
		mov     [__CEXT_V(BPK_Pushed)], eax
		mov     [__CEXT_V(BPK_Dst_i)], eax
		mov     [__CEXT_V(BPK_Src_i)], eax
		mov     [__CEXT_V(___199f38h)], al
		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(BPK_DictTop)], 102h
___59323h:
		mov     eax, [__CEXT_V(BPK_Src_BitsPosition)]
		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
		xchg    eax, [__CEXT_V(BPK_Src_BitsPosition)]
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
		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		cmp     ax, word 100h
		je      ___595c4h
		cmp     byte [__CEXT_V(___199f38h)], 0
		jne     ___595c4h
		cmp     ax, word 101h
		jne     ___59465h
		mov     dword [__CEXT_V(BPK_Src_BitsToRead)], 9
		mov     word [__CEXT_V(___199f14h)], 200h
		mov     word [__CEXT_V(BPK_DictTop)], 102h
		mov     eax, [__CEXT_V(BPK_Src_BitsPosition)]
		add     eax, [__CEXT_V(BPK_Src_BitsToRead)]
		xchg    eax, [__CEXT_V(BPK_Src_BitsPosition)]
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
		mov     ebx, [__CEXT_V(BPK_Src_BitsToRead)]
		sub     ebx, byte 9
		shl     ebx, 1
		and     ax, [ebx+__CEXT_V(___199f00h)]
		mov     [__CEXT_V(BPK_Work)], ax
		mov     [__CEXT_V(BPK_Previous)], ax
		mov     [__CEXT_V(BPK_Next)], al
		mov     [__CEXT_V(BPK_End)], al
		mov     edi, [__CEXT_V(BPK_Src_i)]
		cmp     edi, [__CEXT_V(BPK_Dst_Offset)]
		jl      ___5945ah
		nop     
		nop     
		nop     
		nop     
		mov     edi, [__CEXT_V(BPK_Dst_i)]
		cmp     dword [__CEXT_V(BPK_Bytes)], byte 0
		je      ___59449h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [__CEXT_V(BPK_Bytes)]
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
		inc     dword [__CEXT_V(BPK_Dst_i)]
___5945ah:
		inc     dword [__CEXT_V(BPK_Src_i)]
		jmp     ___59323h
___59465h:
		mov     [__CEXT_V(BPK_Work)], ax
		mov     [__CEXT_V(BPK_Current)], ax
		cmp     ax, [__CEXT_V(BPK_DictTop)]
		jl      ___59496h
		nop     
		nop     
		nop     
		nop     
		mov     ax, [__CEXT_V(BPK_Previous)]
		mov     [__CEXT_V(BPK_Work)], ax
		mov     al, [__CEXT_V(BPK_End)]
		push    eax
		inc     dword [__CEXT_V(BPK_Pushed)]
___59496h:
		cmp     word [__CEXT_V(BPK_Work)], 0ffh
		jle     ___594d5h
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
		add     ebx, __CEXT_V(BPK_Dict)
		mov     al, [ebx+2]
		push    eax
		inc     dword [__CEXT_V(BPK_Pushed)]
		mov     ax, [ebx]
		mov     [__CEXT_V(BPK_Work)], ax
		jmp     ___59496h
___594d5h:
		mov     ax, [__CEXT_V(BPK_Work)]
		mov     [__CEXT_V(BPK_End)], al
		mov     [__CEXT_V(BPK_Next)], al
		push    eax
		inc     dword [__CEXT_V(BPK_Pushed)]
		mov     ecx, [__CEXT_V(BPK_Pushed)]
		jcxz    ___5954ch
___594f5h:
		pop     eax
		mov     edi, [__CEXT_V(BPK_Src_i)]
		cmp     edi, [__CEXT_V(BPK_Dst_Offset)]
		jl      ___59544h
		nop     
		nop     
		nop     
		nop     
		mov     edi, [__CEXT_V(BPK_Dst_i)]
		cmp     dword [__CEXT_V(BPK_Bytes)], byte 0
		je      ___59533h
		nop     
		nop     
		nop     
		nop     
		cmp     edi, [__CEXT_V(BPK_Bytes)]
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
		inc     dword [__CEXT_V(BPK_Dst_i)]
___59544h:
		inc     dword [__CEXT_V(BPK_Src_i)]
		loop    ___594f5h
___5954ch:
		mov     [__CEXT_V(BPK_Pushed)], ecx
		mov     bx, [__CEXT_V(BPK_DictTop)]
		mov     cx, bx
		xor     ebx, ebx
		mov     bx, cx
		shl     bx, 1
		add     bx, cx
		add     ebx, __CEXT_V(BPK_Dict)
		mov     al, [__CEXT_V(BPK_Next)]
		mov     [ebx+2], al
		mov     ax, [__CEXT_V(BPK_Previous)]
		mov     [ebx], ax
		inc     word [__CEXT_V(BPK_DictTop)]
		mov     ax, [__CEXT_V(BPK_Current)]
		mov     [__CEXT_V(BPK_Previous)], ax
		mov     bx, [__CEXT_V(BPK_DictTop)]
		cmp     bx, [__CEXT_V(___199f14h)]
		jl      ___59323h
		nop     
		nop     
		nop     
		nop     
		cmp     dword [__CEXT_V(BPK_Src_BitsToRead)], byte 0ch
		je      ___59323h
		nop     
		nop     
		nop     
		nop     
		inc     dword [__CEXT_V(BPK_Src_BitsToRead)]
		shl     word [__CEXT_V(___199f14h)], 1
		jmp     ___59323h
___595c4h:
		mov     ecx, [__CEXT_V(BPK_Pushed)]
		jcxz    ___595d0h
___595cdh:
		pop     eax
		loop    ___595cdh
___595d0h:
		popad   
		pop     ebp
		ret     10h
