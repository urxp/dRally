%include "macros.inc"

    extern  __STACKLOW
    extern  __fatal_runtime_error
;    extern  ___199f7ch
;    extern  ___199f7eh

%include "layout.inc"

section @text

___5ea0ch:
		;mov     [___199f7ch], ss
		db	66h,8ch,15h
		dd	___199f7ch
		retn    
__GDECL(__CHK)
		xchg    eax, [esp+4]
		call    __STK
		mov     eax, [esp+4]
		ret     4
__GDECL(__GRO)
		ret     4
__GDECL(__STK)
		cmp     eax, esp
		jae     ___5ea38h
		sub     eax, esp
		neg     eax
		cmp     eax, [__STACKLOW]
		jbe     ___5ea38h
		retn    
___5ea38h:
		;mov     ax, ss
		db	66h,8ch,0d0h
		cmp     ax, [___199f7ch]
		je      __STKOVERFLOW
		retn    
__GDECL(__STKOVERFLOW)
		mov     eax, ___199f7eh
		mov     edx, 1
		call    __fatal_runtime_error


section @data

___199f7ch:
db	0,0
___199f7eh:
db	"Stack Overflow!"
db	0dh,0ah,0


section @xi

db	0,20h
dd	___5ea0ch