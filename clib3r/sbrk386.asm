cpu 386

    extern	__Extender
    extern	__ExtenderSubtype
    extern	__get_errno_ptr
    extern	__curbrk
    extern	__STACKTOP

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global sbrk
sbrk:
		push    ebx
		push    ecx
		push    esi
		push    edi
		mov     ebx, eax
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     short dr@78256h
		cmp     byte [__ExtenderSubtype], 0
		je      short dr@78266h
dr@78256h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 9
		jne     near dr@782dah
dr@78266h:
		test    ebx, ebx
		jle     short dr@782c5h
		xor     eax, eax
		add     ebx, 0fffh
		mov     al, [__Extender]
		and     bx, 0f000h
		cmp     eax, byte 1
		jne     short dr@782a7h
		mov     eax, ebx
		sar     eax, 10h
		mov     ecx, ebx
		mov     ebx, eax
		mov     ah, 5
		mov     al, 1
		int     31h
		sbb     eax, eax
		inc     eax
		je      short dr@782a5h
		mov     ax, bx
		shl     eax, 10h
		mov     ax, cx
		mov     [eax], di
		mov     [eax+2], si
dr@782a5h:
		jmp     short dr@782b4h
dr@782a7h:
		mov     eax, 80004800h
		int     21h
		sbb     ebx, ebx
		not     ebx
		and     eax, ebx
dr@782b4h:
		test    eax, eax
		jne     short dr@782feh
		call    near __get_errno_ptr
		mov     dword [eax], 5
		jmp     short dr@782d0h
dr@782c5h:
		call    near __get_errno_ptr
		mov     dword [eax], 9
dr@782d0h:
		mov     eax, 0ffffffffh
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
dr@782dah:
		cmp     eax, byte 2
		jl      short dr@782f2h
		cmp     eax, byte 8
		jg      short dr@782f2h
		xor     eax, eax
		;mov     ax, ds
		db	66h,8ch,0d8h
		lsl     eax, eax
		inc     eax
		mov     [__curbrk], eax
dr@782f2h:
		mov     eax, [__curbrk]
		add     eax, ebx
		call    near __brk
dr@782feh:
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
global __brk
__brk:
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    es
		push    ebp
		push    eax
		cmp     eax, [__STACKTOP]
		jb      short dr@7836eh
		cmp     byte [__Extender], 0
		jne     short dr@78380h
		mov     ebp, [esp]
		add     ebp, byte 0fh
		shr     ebp, 4
		test    ebp, ebp
		jne     short dr@7832eh
		mov     ebp, 0fffffffh
dr@7832eh:
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
		jge     short dr@7835bh
		mov     ebx, ebp
		;mov     es, edi
		db	8eh,0c7h
		mov     ah, 4ah
		int     21h
		rcl     eax, 1
		ror     eax, 1
		test    eax, eax
		jl      short dr@7836eh
dr@7835bh:
		;mov     ax, ds
		db	66h,8ch,0d8h
		mov     ebx, ebp
dr@78360h:
		;mov     es, eax
		db	8eh,0c0h
		mov     ah, 4ah
		int     21h
		rcl     eax, 1
		ror     eax, 1
		test    eax, eax
		jge     short dr@783b5h
dr@7836eh:
		call    near __get_errno_ptr
		mov     dword [eax], 5
		mov     eax, 0ffffffffh
		jmp     short dr@783c3h
dr@78380h:
		mov     ebx, [esp]
		add     ebx, 0fffh
		shr     ebx, 0ch
		test    ebx, ebx
		jne     short dr@78395h
		mov     ebx, 0fffffh
dr@78395h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		jne     short dr@783b0h
		xor     eax, eax
		mov     al, [__ExtenderSubtype]
		cmp     eax, byte 1
		jne     short dr@783b0h
		shl     ebx, 8
dr@783b0h:
		;mov     ax, ds
		db	66h,8ch,0d8h
		jmp     short dr@78360h
dr@783b5h:
		mov     ebx, [esp]
		mov     eax, [__curbrk]
		mov     [__curbrk], ebx
dr@783c3h:
		add     esp, byte 4
		pop     ebp
		pop     es
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn