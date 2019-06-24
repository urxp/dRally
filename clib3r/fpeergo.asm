%include "macros.inc"

    extern  ___MST_pic
    extern  __FPEHandler
    extern  __FPE2Handler
    extern  ___IRQ_int
    extern  ___PMAddr
    extern  ___PMSeg

%include "layout.inc"

section @text

__GDECL(__Ergo_hook_init)
		push    ds
		mov     ah, 35h
		mov     al, [___IRQ_int]
		int     21h
		mov     [___PMAddr], ebx
		;mov     [___PMSeg], es
		db	66h,8ch,5
		dd	___PMSeg
		mov     ah, 25h
		mov     al, [___IRQ_int]
		cmp     byte [___MST_pic], 20h
		jne     ___7f32bh
		lea     edx, [__FPEHandler]
		jmp     ___7f331h
___7f32bh:
		lea     edx, [__FPE2Handler]
___7f331h:
		;mov     bx, cs
		db	66h,8ch,0cbh
		;mov     ds, ebx
		db	8eh,0dbh
		int     21h
		pop     ds
		retn    
__GDECL(__Ergo_hook_fini)
		push    ds
		mov     ah, 25h
		mov     al, [___IRQ_int]
		mov     edx, [___PMAddr]
		;mov     ds, [___PMSeg]
		db	66h,8eh,1dh
		dd	___PMSeg
		int     21h
		pop     ds
		retn    
