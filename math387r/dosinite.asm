%include "macros.inc"

    extern  __8087cw
    extern  __8087
    extern  __X32VM
    extern  __x386_zero_base_selector
    extern  __Extender
    extern  __int7
    extern  __GDAptr
    extern  __D16Infoseg
    extern  __hook387
    extern  __int7_pl3
    extern  __unhook387

%include "layout.inc"

section @text

__GDECL(__sys_init_387_emulator)
		push    es
		push    ecx
		push    ebx
		push    edx
		fninit  
		push    eax
		fnstcw  word [esp]
		pop     eax
		cmp     ah, 3
		je      ___6e3d1h
		inc     ebp
___6e3d1h:
		or      ebp, ebp
		je      ___6e3dah
		call    ___6e3f0h
___6e3dah:
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
___6e3f0h:
		mov     byte [__8087], 3
		mov     byte [___19a34ch], 1
		;smsw    [___19a34ah]
		db	66h,0fh,1,25h
		dd	___19a34ah
		and     word [___19a34ah], byte 6
		sub     esp, byte 8
		sidt    [esp]
		mov     ebx, [esp+2]
		add     ebx, byte 38h
		add     esp, byte 8
		cmp     byte [__X32VM], 0
		je      ___6e442h
		call    ___6e4bbh
		;mov     es, [__x386_zero_base_selector]
		db	66h,8eh,5
		dd	__x386_zero_base_selector
		mov     [es:ebx], edx
		mov     [es:ebx+4], ecx
		call    ___6e525h
		jmp     ___6e4bah
___6e442h:
		cmp     byte [__Extender], 0
		jne     ___6e466h
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
		jmp     ___6e4bah
___6e466h:
		cmp     byte [__Extender], 9
		jne     ___6e48eh
		call    ___6e4bbh
		mov     [ebx], edx
		mov     [ebx+4], ecx
		mov     eax, 0e02h
		mov     ebx, 4
		mov     ecx, [__GDAptr]
		call    dword [ecx+30h]
		jmp     ___6e4bah
___6e48eh:
		cmp     byte [__Extender], 1
		jne     ___6e4a7h
		mov     dx, [__D16Infoseg]
		sub     eax, eax
		call    __hook387
		jmp     ___6e4bah
___6e4a7h:
		sub     dx, dx
		sub     eax, eax
		call    __hook387
		cmp     al, 1
		je      ___6e4bah
		call    ___6e4d8h
___6e4bah:
		retn    
___6e4bbh:
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
___6e4d8h:
		mov     cl, 7
		mov     ax, 2502h
		int     21h
		mov     [___19a344h], ebx
		;mov     [___19a348h], es
		db	66h,8ch,5
		dd	___19a348h
		cmp     byte [__Extender], 3
		mov     cl, 7
		mov     ax, 2504h
		push    ds
		push    cs
		pop     ds
		jl      ___6e50fh
		lea     edx, [__int7_pl3]
		int     21h
		pop     ds
		call    ___6e525h
		jmp     ___6e524h
___6e50fh:
		lea     edx, [__int7]
		int     21h
		pop     ds
		mov     ecx, cr0
		or      ecx, byte 4
		and     ecx, byte 0fffffffdh
		mov     cr0, ecx
___6e524h:
		retn    
___6e525h:
		xor     ebx, ebx
		lea     edx, [___19a304h]
		mov     ax, 2535h
		int     21h
		or      dword [___19a304h], byte 4
		and     dword [___19a304h], byte 0fffffffdh
		inc     ebx
		int     21h
		retn    
__GDECL(__sys_fini_387_emulator)
		cmp     byte [___19a34ch], 1
		je      ___6e54fh
		retn    
___6e54fh:
		push    ecx
		push    ebx
		push    edx
		mov     al, [__Extender]
		cmp     byte [__X32VM], 0
		je      ___6e567h
		call    ___6e5fah
		jmp     ___6e5b4h
___6e567h:
		cmp     al, 9
		jne     ___6e580h
		mov     eax, 0e02h
		mov     ebx, 0
		mov     ecx, [__GDAptr]
		call    dword [ecx+30h]
		jmp     ___6e5b4h
___6e580h:
		cmp     al, 0
		jne     ___6e590h
		mov     ax, [___19a34ah]
		mov     ah, 0f3h
		int     21h
		jmp     ___6e5b4h
___6e590h:
		cmp     al, 1
		jne     ___6e5a4h
		mov     dx, [__D16Infoseg]
		sub     eax, eax
		call    __unhook387
		jmp     ___6e5b4h
___6e5a4h:
		sub     edx, edx
		call    __unhook387
		cmp     al, 1
		je      ___6e5b4h
		call    ___6e5bfh
___6e5b4h:
		mov     byte [___19a34ch], 0
		pop     edx
		pop     ebx
		pop     ecx
		retn    
___6e5bfh:
		mov     cl, 7
		mov     ax, 2504h
		mov     edx, [___19a344h]
		push    ds
		;mov     ds, [___19a348h]
		db	66h,8eh,1dh
		dd	___19a348h
		int     21h
		pop     ds
		cmp     byte [__Extender], 3
		jl      ___6e5e6h
		call    ___6e5fah
		jmp     ___6e5f9h
___6e5e6h:
		mov     ecx, cr0
		and     ecx, byte 0fffffff9h
		mov     dx, [___19a34ah]
		or      cx, dx
		mov     cr0, ecx
___6e5f9h:
		retn    
___6e5fah:
		xor     ebx, ebx
		lea     edx, [___19a304h]
		mov     ax, 2535h
		int     21h
		xor     ecx, ecx
		mov     cx, [___19a34ah]
		mov     [___19a304h], ecx
		inc     ebx
		int     21h
		retn    


section @data

___19a304h:
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
___19a344h:
db	0,0,0,0
___19a348h:
db	0,0
___19a34ah:
db	0,0
___19a34ch:
db	0