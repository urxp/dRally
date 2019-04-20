cpu 386


    extern	___FPE_int
    extern	___PMAddr
    extern	___PMSeg
    extern	__FPE2Handler

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __DOS4G_hook_init
__DOS4G_hook_init:
		push    ds
		mov     ah, 35h
		mov     al, [___FPE_int]
		int     21h
		mov     [___PMAddr], ebx
		;mov     [___PMSeg], es
		db	66h,8ch,5
		dd	___PMSeg
		mov     ah, 25h
		mov     al, [___FPE_int]
		;mov     dx, cs
		db	66h,8ch,0cah
		;mov     ds, edx
		db	8eh,0dah
		lea     edx, [__FPE2Handler]
		int     21h
		pop     ds
		retn    
global __DOS4G_hook_fini
__DOS4G_hook_fini:
		push    ds
		mov     ah, 25h
		mov     al, [___FPE_int]
		mov     edx, [___PMAddr]
		;mov     ds, [___PMSeg]
		db	66h,8eh,1dh
		dd	___PMSeg
		int     21h
		pop     ds
		retn