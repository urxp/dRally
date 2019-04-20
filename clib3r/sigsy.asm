cpu 386

    extern	__GETDS
    extern	__STACKLOW
    extern	__child
    extern	___int23_exit
    extern	__null_int23_exit_
    extern	raise
    extern	_chain_intr
    extern	__Extender
    extern	_dos_setvect
    extern	_dos_getvect

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

__int23_handler:
		pushad  
		push    ds
		push    es
		push    fs
		push    gs
		mov     ebp, esp
		cld     
		call    near __GETDS
		mov     eax, _my_stack+0ff0h
		;mov     edx, ds
		db	8ch,0dah
		;mov     bx, ss
		db	66h,8ch,0d3h
		mov     ecx, esp
		;mov     ss, edx
		db	8eh,0d2h
		mov     esp, eax
		mov     dx, bx
		mov     eax, ecx
		mov     esi, [__STACKLOW]
		mov     edi, [__child]
		mov     ecx, edx
		mov     edx, _my_stack
		mov     ebx, eax
		mov     [__STACKLOW], edx
		test    edi, edi
		jne     short dr@7bf46h
		mov     eax, [___int23_exit]
		cmp     eax, __null_int23_exit_
		je      short dr@7bf46h
		cmp     eax, __restore_int_ctrl_break
		je      short dr@7bf46h
		mov     eax, 4
		sti     
		cld     
		call    near raise
		jmp     short dr@7bf57h
dr@7bf46h:
		mov     dx, [___old_int23+4]
		mov     eax, [___old_int23]
dr@7bf52h:
		call    near _chain_intr
dr@7bf57h:
		mov     edx, ecx
		mov     eax, ebx
		;mov     bx, ss
		db	66h,8ch,0d3h
		mov     ecx, esp
		;mov     ss, edx
		db	8eh,0d2h
		mov     esp, eax
		mov     dx, bx
		mov     eax, ecx
		mov     [__STACKLOW], esi
		pop     gs
		pop     fs
		pop     es
		pop     ds
		popad   
		iret    
__int_ctrl_break_handler:
		pushad  
		push    ds
		push    es
		push    fs
		push    gs
		mov     ebp, esp
;33:0007bf80
		cld     
		call    near __GETDS
		mov     eax, _my_stack+0ff0h
		;mov     edx, ds
		db	8ch,0dah
		;mov     bx, ss
		db	66h,8ch,0d3h
		mov     ecx, esp
		;mov     ss, edx
		db	8eh,0d2h
		mov     esp, eax
		mov     dx, bx
		mov     eax, ecx
		mov     esi, [__STACKLOW]
		mov     edi, [__child]
		mov     ecx, edx
		mov     edx, _my_stack
		mov     ebx, eax
		mov     [__STACKLOW], edx
		test    edi, edi
		jne     short dr@7bfdeh
		mov     eax, [___int23_exit]
		cmp     eax, __null_int23_exit_
		je      short dr@7bfdeh
		cmp     eax, __restore_int23
		je      short dr@7bfdeh
		mov     eax, 7
		sti     
		cld     
		call    near raise
		jmp     near dr@7bf57h
dr@7bfdeh:
		mov     dx, [___old_int_ctrl_break+4]
		mov     eax, [___old_int_ctrl_break]
		jmp     near dr@7bf52h
global __DPMI_hosted_
__DPMI_hosted_:
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 8
		cmp     dword [L$32], byte 0
		jne     near dr@7c076h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		je      short dr@7c01ah
		mov     ax, 1686h
		int     2fh
		test    ax, ax
		jne     short dr@7c06ch
dr@7c01ah:
		mov     esi, esp
		xor     ah, ah
		xor     dl, dl
		mov     [esp], ah
		xor     dh, dh
		mov     [esp+1], ah
		mov     [esp+2], dx
		;mov     edx, ds
		db	8ch,0dah
		mov     [esp+4], ah
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		mov     ax, 400h
		int     31h
		mov     [esi], ah
		mov     [esi+1], al
		mov     [esi+2], bx
		mov     [esi+4], cl
		mov     [esi+5], dh
		mov     [esi+6], dl
		pop     ds
		xor     eax, eax
		movzx   esi, byte [esp+1]
		mov     al, [esp]
		add     eax, esi
		test    eax, eax
		jle     short dr@7c06ch
		mov     dword [L$32], 1
		jmp     short dr@7c076h
dr@7c06ch:
		mov     dword [L$32], 0ffffffffh
dr@7c076h:
		mov     eax, [L$32]
		add     esp, byte 8
		pop     esi
		pop     edx
;33:0007c080
		pop     ecx
		pop     ebx
		retn    
global __restore_int23
__restore_int23:
		push    ebx
		push    ecx
		push    edx
		push    ebp
		cmp     dword [___old_int23], byte 0
		jne     short dr@7c09eh
		cmp     word [___old_int23+4], byte 0
		je      near dr@7c171h
dr@7c09eh:
		mov     ebx, [___int23_exit]
		cmp     ebx, __restore_int
		jne     short dr@7c0b8h
		mov     dword [___int23_exit], __restore_int_ctrl_break
		jmp     short dr@7c0cah
dr@7c0b8h:
		cmp     ebx, __restore_int23
		jne     short dr@7c0cah
		mov     dword [___int23_exit], __null_int23_exit_
dr@7c0cah:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      short dr@7c113h
		cmp     eax, byte 8
		jg      short dr@7c113h
		mov     cl, 23h
		mov     dx, [___old_int23+4]
		mov     eax, [___old_int23]
		mov     ebx, eax
		shl     ebx, 10h
		mov     bx, dx
		mov     ax, 2505h
		int     21h
		mov     cl, 23h
		mov     dx, [___old_pm_int23+4]
;33:0007c100
		mov     eax, [___old_pm_int23]
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		mov     edx, eax
		mov     ax, 2504h
		int     21h
		pop     ds
		jmp     short dr@7c160h
dr@7c113h:
		call    near __DPMI_hosted_
		cmp     eax, byte 1
		jne     short dr@7c149h
		mov     bl, 23h
		mov     cx, [___old_int23+4]
		mov     edx, [___old_int23]
		mov     ax, 201h
		int     31h
		mov     bl, 23h
		mov     cx, [___old_pm_int23+4]
		mov     edx, [___old_pm_int23]
		mov     ax, 205h
		int     31h
		jmp     short dr@7c160h
dr@7c149h:
		mov     eax, 23h
		mov     cx, [___old_int23+4]
		mov     ebx, [___old_int23]
		call    near _dos_setvect
dr@7c160h:
		xor     ebx, ebx
		xor     ebp, ebp
		mov     [___old_int23+4], bx
		mov     [___old_int23], ebp
dr@7c171h:
		pop     ebp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@7c176h:
		cmp     ebx, __restore_int_ctrl_break
		jne     short dr@7c188h
		mov     dword [___int23_exit], __null_int23_exit_
dr@7c188h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      short dr@7c1d1h
		cmp     eax, byte 8
		jg      short dr@7c1d1h
		mov     cl, 1bh
		mov     dx, [___old_int_ctrl_break+4]
		mov     eax, [___old_int_ctrl_break]
		mov     ebx, eax
		shl     ebx, 10h
		mov     bx, dx
		mov     ax, 2505h
		int     21h
		mov     cl, 1bh
		mov     dx, [___old_pm_int_ctrl_break+4]
		mov     eax, [___old_pm_int_ctrl_break]
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		mov     edx, eax
		mov     ax, 2504h
		int     21h
		pop     ds
		jmp     short dr@7c21eh
dr@7c1d1h:
		call    near __DPMI_hosted_
		cmp     eax, byte 1
		jne     short dr@7c207h
		mov     bl, 1bh
		mov     cx, [___old_int_ctrl_break+4]
		mov     edx, [___old_int_ctrl_break]
		mov     ax, 201h
		int     31h
		mov     bl, 1bh
		mov     cx, [___old_pm_int_ctrl_break+4]
		mov     edx, [___old_pm_int_ctrl_break]
		mov     ax, 205h
		int     31h
		jmp     short dr@7c21eh
dr@7c207h:
		mov     eax, 1bh
		mov     cx, [___old_int_ctrl_break+4]
		mov     ebx, [___old_int_ctrl_break]
		call    near _dos_setvect
dr@7c21eh:
		xor     ebx, ebx
		xor     ebp, ebp
		mov     [___old_int_ctrl_break+4], bx
		mov     [___old_int_ctrl_break], ebp
dr@7c22fh:
		pop     ebp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__restore_int:
		call    near __restore_int23
global __restore_int_ctrl_break
__restore_int_ctrl_break:
		push    ebx
		push    ecx
		push    edx
		push    ebp
		cmp     dword [___old_int_ctrl_break], byte 0
		jne     short dr@7c250h
		cmp     word [___old_int_ctrl_break+4], byte 0
		je      short dr@7c22fh
dr@7c250h:
		mov     ebx, [___int23_exit]
		cmp     ebx, __restore_int
		jne     near dr@7c176h
		mov     dword [___int23_exit], __restore_int23
		jmp     near dr@7c188h
global __grab_int23
__grab_int23:
		push    ebx
		push    ecx
		push    edx
		cmp     dword [___old_int23], byte 0
		jne     near dr@7c388h
		cmp     word [___old_int23+4], byte 0
		jne     near dr@7c388h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      short dr@7c2eeh
		cmp     eax, byte 8
		jg      short dr@7c2eeh
		mov     cl, 23h
		mov     ax, 2503h
		int     21h
		mov     cx, bx
		shr     ebx, 10h
		mov     edx, ebx
		mov     [___old_int23+4], cx
		mov     [___old_int23], edx
		mov     cl, 23h
		mov     edx, __int23_handler
		push    es
		mov     ax, 2502h
		int     21h
		;mov     cx, es
		db	66h,8ch,0c1h
		pop     es
		mov     al, 23h
		mov     [___old_pm_int23+4], cx
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_pm_int23], ebx
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cl, al
		mov     al, 6
		mov     ah, 25h
		int     21h
		pop     ds
		jmp     short dr@7c35ah
dr@7c2eeh:
		call    near __DPMI_hosted_
		cmp     eax, byte 1
		jne     short dr@7c333h
		mov     bl, 23h
		mov     ax, 200h
		int     31h
;33:0007c300
		mov     bl, 23h
		mov     [___old_int23+4], cx
		mov     [___old_int23], edx
		mov     ax, 204h
		int     31h
		mov     bl, 23h
		mov     [___old_pm_int23+4], cx
		mov     [___old_pm_int23], edx
		mov     edx, __int23_handler
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ax, 205h
		int     31h
		jmp     short dr@7c35ah
dr@7c333h:
		mov     eax, 23h
		mov     ebx, __int23_handler
		call    near _dos_getvect
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_int23], eax
		mov     eax, 23h
		mov     [___old_int23+4], dx
		call    near _dos_setvect
dr@7c35ah:
		mov     ebx, [___int23_exit]
		cmp     ebx, __null_int23_exit_
		jne     short dr@7c376h
		mov     dword [___int23_exit], __restore_int23
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@7c376h:
		cmp     ebx, __restore_int_ctrl_break
		jne     short dr@7c388h
		mov     dword [___int23_exit], __restore_int
dr@7c388h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
global __grab_int_ctrl_break
__grab_int_ctrl_break:
		push    ebx
		push    ecx
		push    edx
		cmp     dword [___old_int_ctrl_break], byte 0
		jne     near dr@7c4a3h
		cmp     word [___old_int_ctrl_break+4], byte 0
		jne     near dr@7c4a3h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      short dr@7c409h
		cmp     eax, byte 8
		jg      short dr@7c409h
		mov     cl, 1bh
		mov     ax, 2503h
		int     21h
		mov     cx, bx
		shr     ebx, 10h
		mov     edx, ebx
		mov     [___old_int_ctrl_break+4], cx
		mov     [___old_int_ctrl_break], edx
		mov     cl, 1bh
		mov     edx, __int_ctrl_break_handler
		push    es
		mov     ax, 2502h
		int     21h
		;mov     cx, es
		db	66h,8ch,0c1h
		pop     es
		mov     al, 1bh
		mov     [___old_pm_int_ctrl_break+4], cx
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_pm_int_ctrl_break], ebx
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cl, al
;33:0007c400
		mov     al, 6
		mov     ah, 25h
		int     21h
		pop     ds
		jmp     short dr@7c475h
dr@7c409h:
		call    near __DPMI_hosted_
		cmp     eax, byte 1
		jne     short dr@7c44eh
		mov     bl, 1bh
		mov     ax, 200h
		int     31h
		mov     bl, 1bh
		mov     [___old_int_ctrl_break+4], cx
		mov     [___old_int_ctrl_break], edx
		mov     ax, 204h
		int     31h
		mov     bl, 1bh
		mov     [___old_pm_int_ctrl_break+4], cx
		mov     [___old_pm_int_ctrl_break], edx
		mov     edx, __int_ctrl_break_handler
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ax, 205h
		int     31h
		jmp     short dr@7c475h
dr@7c44eh:
		mov     eax, 1bh
		mov     ebx, __int_ctrl_break_handler
		call    near _dos_getvect
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_int_ctrl_break], eax
		mov     eax, 1bh
		mov     [___old_int_ctrl_break+4], dx
		call    near _dos_setvect
dr@7c475h:
		mov     ebx, [___int23_exit]
		cmp     ebx, __null_int23_exit_
		jne     short dr@7c491h
		mov     dword [___int23_exit], __restore_int_ctrl_break
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@7c491h:
		cmp     ebx, __restore_int23
		jne     short dr@7c4a3h
		mov     dword [___int23_exit], __restore_int
dr@7c4a3h:
		pop     edx
		pop     ecx
		pop     ebx
		retn 



SEGMENT _DATA    PUBLIC USE32 ALIGN=4 CLASS=DATA
___old_int23:
    DB	0, 0, 0, 0, 0, 0
___old_int_ctrl_break:
    DB	0, 0, 0, 0, 0, 0
___old_pm_int23:
    DB	0, 0, 0, 0, 0, 0
___old_pm_int_ctrl_break:
    DB	0, 0, 0, 0, 0, 0
L$32:
    db	0,0,0,0

SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
_my_stack:
    resb    400h
