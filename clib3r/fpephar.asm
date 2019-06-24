%include "macros.inc"

    extern  ___MST_pic
    extern  __FPEHandler
    extern  __FPE2Handler
    extern  __Extender
    extern  ___IRQ_num
    extern  ___RMAddr
    extern  ___PMAddr
    extern  ___PMSeg

%include "layout.inc"

section @text

__GDECL(__Phar_hook_init)
		push    ds
		cmp     byte [___MST_pic], 20h
		jne     ___7f1d8h
		lea     edx, [__FPEHandler]
		jmp     ___7f1deh
___7f1d8h:
		lea     edx, [__FPE2Handler]
___7f1deh:
		cmp     byte [__Extender], 3
		jae     ___7f205h
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
___7f205h:
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
		jae     ___7f27ch
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
		mov     [es:ebx+ecx], eax
		mov     [es:ebx+ecx+4], edx
		mov     cl, 50h
		pop     ds
		pop     edx
		pop     ebx
		mov     ax, 2507h
		int     21h
		jmp     ___7f287h
___7f27ch:
		;mov     ax, cs
		db	66h,8ch,0c8h
		;mov     ds, eax
		db	8eh,0d8h
		mov     ax, 2506h
		int     21h
___7f287h:
		pop     ds
		retn    
__GDECL(__Phar_hook_fini)
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
