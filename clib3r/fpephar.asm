cpu 386

    extern	___MST_pic
    extern	__FPEHandler
    extern	__FPE2Handler
    extern	__Extender
    extern	___IRQ_num
    extern	___PMAddr
    extern	___PMSeg
    extern	___RMAddr

SEGMENT _TEXT   PUBLIC USE32 ALIGN=2 CLASS=CODE

global __Phar_hook_init
__Phar_hook_init:
		push    ds
		cmp     byte [___MST_pic], 20h
		jne     short dr@7f1d8h
		lea     edx, [__FPEHandler]
		jmp     short dr@7f1deh
dr@7f1d8h:
		lea     edx, [__FPE2Handler]
dr@7f1deh:
		cmp     byte [__Extender], 3
		jae     short dr@7f205h
		mov     cl, 50h
		mov     ax, 2503h
		int     21h
		push    ebx
		mov     ax, 2502h
		int     21h
		push    ebx
		push    es
		push    ds
		;mov     ax, cs
		db	66h,8ch,0c8h
		;mov     ds, eax
		db	8eh,0d8h
		mov     ax, 2506h
		int     21h
		pop     ds
dr@7f205h:
		mov     ax, 250ch
		int     21h
		mov     cl, ah
		add     cl, [___IRQ_num]
		sub     cl, 8
		mov     ax, 2502h
		int     21h
		mov     [___PMAddr], ebx
		;mov     [___PMSeg], es
		db	66h,8ch,5
		dd	___PMSeg
		mov     ax, 2503h
		int     21h
		mov     [___RMAddr], ebx
		cmp     byte [__Extender], 3
		jae     short dr@7f27ch
		sub     esp, byte 8
		sidt    [esp]
		mov     ax, 60h
		;mov     es, eax
		db	8eh,0c0h
		mov     ebx, [esp+2]
		add     esp, byte 8
		mov     eax, [es:ebx+280h]
		mov     edx, [es:ebx+284h]
		movzx   ecx, cl
		shl     ecx, 3
		mov     [es:ebx+ecx*1], eax
		mov     [es:ebx+ecx*1+4], edx
		mov     cl, 50h
		pop     ds
		pop     edx
		pop     ebx
		mov     ax, 2507h
		int     21h
		jmp     short dr@7f287h
dr@7f27ch:
		;mov     ax, cs
		db	66h,8ch,0c8h
		;mov     ds, eax
		db	8eh
		db	0d8h
		mov     ax, 2506h
		int     21h
dr@7f287h:
		pop     ds
		retn    
global __Phar_hook_fini
__Phar_hook_fini:
		push    ds
		mov     ax, 250ch
		int     21h
		mov     cl, ah
		add     cl, [___IRQ_num]
		sub     cl, 8
		mov     ebx, [___RMAddr]
		mov     edx, [___PMAddr]
		;mov     ds, [___PMSeg]
		db	66h,8eh,1dh
		dd	___PMSeg
		mov     ax, 2507h
		int     21h
		pop     ds
		retn