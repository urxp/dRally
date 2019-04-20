cpu 386

    extern	__8087
    extern	__Extender
    extern	__Ergo_hook_init
    extern	__DOS4G_hook_init
    extern	__Intel_hook_init
    extern	__Phar_hook_init
    extern	__Enable_FPE
    extern	__Ergo_hook_fini
    extern	__DOS4G_hook_fini
    extern	__Intel_hook_fini
    extern	__Phar_hook_fini

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __Init_FPE_handler
__Init_FPE_handler:
		cmp     word [___PMSeg], byte 0
		jne     short dr@7ee43h
		cmp     byte [__8087], 0
		je      short dr@7ee43h
		jmp     short dr@7ee44h
dr@7ee43h:
		retn    
dr@7ee44h:
		push    eax
		push    ebx
		push    ecx
		push    edx
		push    es
		push    ds
		cmp     byte [__Extender], 0
		jne     short dr@7ee5ah
		call    near __Ergo_hook_init
		jmp     short dr@7ee7fh
dr@7ee5ah:
		cmp     byte [__Extender], 1
		jne     short dr@7ee6ah
		call    near __DOS4G_hook_init
		jmp     short dr@7ee7fh
dr@7ee6ah:
		cmp     byte [__Extender], 9
		jne     short dr@7ee7ah
		call    near __Intel_hook_init
		jmp     short dr@7ee7fh
dr@7ee7ah:
		call    near __Phar_hook_init
dr@7ee7fh:
		pop     ds
;33:0007ee80
		call    near __Enable_FPE
		pop     es
		pop     edx
		pop     ecx
		pop     ebx
		pop     eax
		retn    
global __Fini_FPE_handler
__Fini_FPE_handler:
		cmp     word [___PMSeg], byte 0
		jne     short dr@7ee96h
		retn    
dr@7ee96h:
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
		jne     short dr@7eebdh
		call    near __Ergo_hook_fini
		jmp     short dr@7eee2h
dr@7eebdh:
		cmp     byte [__Extender], 1
		jne     short dr@7eecdh
		call    near __DOS4G_hook_fini
		jmp     short dr@7eee2h
dr@7eecdh:
		cmp     byte [__Extender], 9
		jne     short dr@7eeddh
		call    near __Intel_hook_fini
		jmp     short dr@7eee2h
dr@7eeddh:
		call    near __Phar_hook_fini
dr@7eee2h:
		pop     ds
		pop     edx
		pop     ebx
		pop     eax
		retn 


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global ___PMSeg
___PMSeg:
    db	0, 0
global ___PMAddr
___PMAddr:
    db	0, 0, 0, 0
global ___RMAddr
___RMAddr:
    db	0, 0, 0, 0