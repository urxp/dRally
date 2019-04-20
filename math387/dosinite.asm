cpu 386

    extern	__8087cw
    extern	__8087
    extern	__X32VM
    extern	__x386_zero_base_selector
    extern	__Extender
    extern	__int7
    extern	__GDAptr
    extern	__D16Infoseg
    extern	__hook387
    extern	__int7_pl3
    extern	__unhook387

DGROUP		GROUP	_DATA
SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __sys_init_387_emulator
__sys_init_387_emulator:
		push    es
		push    ecx
		push    ebx
		push    edx
		fninit  
		push    eax
		fnstcw  word [esp]
		pop     eax
		cmp     ah, 3
		je      short dr@6e3d1h
		inc     ebp
dr@6e3d1h:
		or      ebp, ebp
		je      short dr@6e3dah
		call    near dr@6e3f0h
dr@6e3dah:
		wait    
		fninit  
		fldcw   word [__8087cw]
		fldz    
		fldz    
		fldz    
		fldz    
		pop     edx
		pop     ebx
		pop     ecx
		pop     es
		retn    
dr@6e3f0h:
		mov     byte [__8087], 3
		mov     byte [L$28], 1
		;smsw    [L$27]
		db	66h,0fh
		db	1,25h
		dd	L$27
		and     word [L$27], byte 6
		sub     esp, byte 8
		sidt    [esp]
		mov     ebx, [esp+2]
		add     ebx, byte 38h
		add     esp, byte 8
		cmp     byte [__X32VM], 0
		je      short dr@6e442h
		call    near dr@6e4bbh
		;mov     es, [__x386_zero_base_selector]
		db	66h,8eh,5
		dd	__x386_zero_base_selector
		mov     [es:ebx], edx
		mov     [es:ebx+4], ecx
		call    near dr@6e525h
		jmp     short dr@6e4bah
dr@6e442h:
		cmp     byte [__Extender], 0
		jne     short dr@6e466h
		mov     ax, 2507h
		push    ds
		;mov     cx, cs
		db	66h,8ch,0c9h
		;mov     ds, ecx
		db	8eh,0d9h
		lea     edx, [__int7]
		int     21h
		pop     ds
		mov     al, 4
		mov     ah, 0f3h
		int     21h
		jmp     short dr@6e4bah
dr@6e466h:
		cmp     byte [__Extender], 9
		jne     short dr@6e48eh
		call    near dr@6e4bbh
		mov     [ebx], edx
		mov     [ebx+4], ecx
		mov     eax, 0e02h
		mov     ebx, 4
		mov     ecx, [__GDAptr]
		call    dword [ecx+30h]
		jmp     short dr@6e4bah
dr@6e48eh:
		cmp     byte [__Extender], 1
		jne     short dr@6e4a7h
		mov     dx, [__D16Infoseg]
		sub     eax, eax
		call    near __hook387
		jmp     short dr@6e4bah
dr@6e4a7h:
		sub     dx, dx
		sub     eax, eax
		call    near __hook387
		cmp     al, 1
		je      short dr@6e4bah
		call    near dr@6e4d8h
dr@6e4bah:
		retn    
dr@6e4bbh:
		lea     ecx, [__int7]
		;mov     dx, cs
		db	66h,8ch,0cah
		shl     edx, 10h
		mov     dx, cx
		;mov     cx, cs
		db	66h,8ch,0c9h
		and     cl, 3
		shl     cx, 0dh
		or      ch, 8eh
		retn    
dr@6e4d8h:
		mov     cl, 7
		mov     ax, 2502h
		int     21h
		mov     [L$25], ebx
		;mov     [L$26], es
		db	66h,8ch,5
		dd	L$26
		cmp     byte [__Extender], 3
		mov     cl, 7
		mov     ax, 2504h
		push    ds
		push    cs
		pop     ds
		jl      short dr@6e50fh
		lea     edx, [__int7_pl3]
		int     21h
		pop     ds
		call    near dr@6e525h
		jmp     short dr@6e524h
dr@6e50fh:
		lea     edx, [__int7]
		int     21h
		pop     ds
		mov     ecx, cr0
		or      ecx, byte 4
		and     ecx, byte 0fffffffdh
		mov     cr0, ecx
dr@6e524h:
		retn    
dr@6e525h:
		xor     ebx, ebx
		lea     edx, [L$24]
		mov     ax, 2535h
		int     21h
		or      dword [L$24], byte 4
		and     dword [L$24], byte 0fffffffdh
		inc     ebx
		int     21h
		retn    
global __sys_fini_387_emulator
__sys_fini_387_emulator:
		cmp     byte [L$28], 1
		je      short dr@6e54fh
		retn    
dr@6e54fh:
		push    ecx
		push    ebx
		push    edx
		mov     al, [__Extender]
		cmp     byte [__X32VM], 0
		je      short dr@6e567h
		call    near dr@6e5fah
		jmp     short dr@6e5b4h
dr@6e567h:
		cmp     al, 9
		jne     short dr@6e580h
		mov     eax, 0e02h
		mov     ebx, 0
		mov     ecx, [__GDAptr]
		call    dword [ecx+30h]
		jmp     short dr@6e5b4h
;30:0006e580
dr@6e580h:
		cmp     al, 0
		jne     short dr@6e590h
		mov     ax, [L$27]
		mov     ah, 0f3h
		int     21h
		jmp     short dr@6e5b4h
dr@6e590h:
		cmp     al, 1
		jne     short dr@6e5a4h
		mov     dx, [__D16Infoseg]
		sub     eax, eax
		call    near __unhook387
		jmp     short dr@6e5b4h
dr@6e5a4h:
		sub     edx, edx
		call    near __unhook387
		cmp     al, 1
		je      short dr@6e5b4h
		call    near dr@6e5bfh
dr@6e5b4h:
		mov     byte [L$28], 0
		pop     edx
		pop     ebx
		pop     ecx
		retn    
dr@6e5bfh:
		mov     cl, 7
		mov     ax, 2504h
		mov     edx, [L$25]
		push    ds
		;mov     ds, [L$26]
		db	66h,8eh,1dh
		dd	L$26
		int     21h
		pop     ds
		cmp     byte [__Extender], 3
		jl      short dr@6e5e6h
		call    near dr@6e5fah
		jmp     short dr@6e5f9h
dr@6e5e6h:
		mov     ecx, cr0
		and     ecx, byte 0fffffff9h
		mov     dx, [L$27]
		or      cx, dx
		mov     cr0, ecx
dr@6e5f9h:
		retn    
dr@6e5fah:
		xor     ebx, ebx
		lea     edx, [L$24]
		mov     ax, 2535h
		int     21h
		xor     ecx, ecx
		mov     cx, [L$27]
		mov     [L$24], ecx
		inc     ebx
		int     21h
		retn


SEGMENT _DATA	PUBLIC USE32 ALIGN=4 CLASS=DATA
L$24:
times 8 db  0,0,0,0,0,0,0,0
L$25:
    db	0,0,0,0
L$26:
    db	0,0
L$27:
    db	0,0
L$28:
    db	0