%include "macros.inc"

    extern  __Extender
    extern  __ExtenderSubtype
    extern  __get_errno_ptr__clib3r
    extern  __curbrk
    extern  __STACKTOP

%include "layout.inc"

section @text

__GDECL(sbrk);
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ebx, eax
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     ___78256h
		cmp     byte [__ExtenderSubtype], 0
		je      ___78266h
___78256h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 9
		jne     ___782dah
___78266h:
		test    ebx, ebx
		jle     ___782c5h
		xor     eax, eax
		add     ebx, 0fffh
		mov     al, [__Extender]
		and     bx, 0f000h
		cmp     eax, byte 1
		jne     ___782a7h
		mov     eax, ebx
		sar     eax, 10h
		mov     ecx, ebx
		mov     ebx, eax
		mov     ah, 5
		mov     al, 1
		int     31h
		sbb     eax, eax
		inc     eax
		je      ___782a5h
		mov     ax, bx
		shl     eax, 10h
		mov     ax, cx
		mov     [eax], di
		mov     [eax+2], si
___782a5h:
		jmp     ___782b4h
___782a7h:
		mov     eax, 80004800h
		int     21h
		sbb     ebx, ebx
		not     ebx
		and     eax, ebx
___782b4h:
		test    eax, eax
		jne     ___782feh
		call    __get_errno_ptr__clib3r
		mov     dword [eax], 5
		jmp     ___782d0h
___782c5h:
		call    __get_errno_ptr__clib3r
		mov     dword [eax], 9
___782d0h:
		mov     eax, 0ffffffffh
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
___782dah:
		cmp     eax, byte 2
		jl      ___782f2h
		cmp     eax, byte 8
		jg      ___782f2h
		xor     eax, eax
		;mov     ax, ds
		db	66h,8ch,0d8h
		lsl     eax, eax
		inc     eax
		mov     [__curbrk], eax
___782f2h:
		mov     eax, [__curbrk]
		add     eax, ebx
		call    __brk
___782feh:
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
__GDECL(__brk)
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		push    ebp
		push    eax
		cmp     eax, [__STACKTOP]
		jb      ___7836eh
		cmp     byte [__Extender], 0
		jne     ___78380h
		mov     ebp, [esp]
		add     ebp, byte 0fh
		shr     ebp, 4
		test    ebp, ebp
		jne     ___7832eh
		mov     ebp, 0fffffffh
___7832eh:
		xor     ebx, ebx
		;mov     ax, ds
		db	66h,8ch,0d8h
		mov     bx, ax
		mov     ah, 0edh
		int     21h
		shl     eax, 1fh
		and     edi, 0ffffh
		or      edi, eax
		mov     eax, edi
		test    edi, edi
		jge     ___7835bh
		mov     ebx, ebp
		;mov     es, edi
		db	8eh,0c7h
		mov     ah, 4ah
		int     21h
		rcl     eax, 1
		ror     eax, 1
		test    eax, eax
		jl      ___7836eh
___7835bh:
		;mov     ax, ds
		db	66h,8ch,0d8h
		mov     ebx, ebp
___78360h:
		;mov     es, eax
		db	8eh,0c0h
		mov     ah, 4ah
		int     21h
		rcl     eax, 1
		ror     eax, 1
		test    eax, eax
		jge     ___783b5h
___7836eh:
		call    __get_errno_ptr__clib3r
		mov     dword [eax], 5
		mov     eax, 0ffffffffh
		jmp     ___783c3h
___78380h:
		mov     ebx, [esp]
		add     ebx, 0fffh
		shr     ebx, 0ch
		test    ebx, ebx
		jne     ___78395h
		mov     ebx, 0fffffh
___78395h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     ___783b0h
		xor     eax, eax
		mov     al, [__ExtenderSubtype]
		cmp     eax, byte 1
		jne     ___783b0h
		shl     ebx, 8
___783b0h:
		;mov     ax, ds
		db	66h,8ch,0d8h
		jmp     ___78360h
___783b5h:
		mov     ebx, [esp]
		mov     eax, [__curbrk]
		mov     [__curbrk], ebx
___783c3h:
		add     esp, byte 4
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
