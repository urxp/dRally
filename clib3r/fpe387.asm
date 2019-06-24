%include "macros.inc"

    extern  __8087
    extern  __Ergo_hook_init
    extern  __DOS4G_hook_init
    extern  __Intel_hook_init
    extern  __Phar_hook_init
    extern  __Enable_FPE
    extern  __Ergo_hook_fini
    extern  __DOS4G_hook_fini
    extern  __Extender
    extern  __Intel_hook_fini
    extern  __Phar_hook_fini

%include "layout.inc"

section @text

__GDECL(__Init_FPE_handler)
		cmp     word [___PMSeg], byte 0
		jne     ___7ee43h
		cmp     byte [__8087], 0
		je      ___7ee43h
		jmp     ___7ee44h
___7ee43h:
		retn    
___7ee44h:
		push    eax
		push    ebx
		push    ecx
		push    edx
		push    es
		push    ds
		cmp     byte [__Extender], 0
		jne     ___7ee5ah
		call    __Ergo_hook_init
		jmp     ___7ee7fh
___7ee5ah:
		cmp     byte [__Extender], 1
		jne     ___7ee6ah
		call    __DOS4G_hook_init
		jmp     ___7ee7fh
___7ee6ah:
		cmp     byte [__Extender], 9
		jne     ___7ee7ah
		call    __Intel_hook_init
		jmp     ___7ee7fh
___7ee7ah:
		call    __Phar_hook_init
___7ee7fh:
		pop     ds
		call    __Enable_FPE
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		retn    
__GDECL(__Fini_FPE_handler)
		cmp     word [___PMSeg], byte 0
		jne     ___7ee96h
		retn    
___7ee96h:
		push    eax
		push    ebx
		push    edx
		push    ds
		sub     esp, byte 4
		wait    
		fnstcw  word [esp]
		wait    
		mov     byte [esp], 7fh
		fldcw   word [esp]
		wait    
		add     esp, byte 4
		cmp     byte [__Extender], 0
		jne     ___7eebdh
		call    __Ergo_hook_fini
		jmp     ___7eee2h
___7eebdh:
		cmp     byte [__Extender], 1
		jne     ___7eecdh
		call    __DOS4G_hook_fini
		jmp     ___7eee2h
___7eecdh:
		cmp     byte [__Extender], 9
		jne     ___7eeddh
		call    __Intel_hook_fini
		jmp     ___7eee2h
___7eeddh:
		call    __Phar_hook_fini
___7eee2h:
		pop     ds
		pop     edx
		pop     ebx
		pop     eax
		retn    


section @data

__GDECL(___PMSeg)
db	0,0
__GDECL(___PMAddr)
db	0,0,0,0
__GDECL(___RMAddr)
db	0,0,0,0
