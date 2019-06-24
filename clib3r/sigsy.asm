%include "macros.inc"

    extern  __GETDS
    extern  __child
    extern  ___int23_exit
    extern  __null_int23_exit
    extern  raise
    extern  _chain_intr
    extern  __STACKLOW
    extern  _my_stack
    extern  __Extender
    extern  ___old_pm_int23
    extern  _dos_setvect
    extern  _dos_getvect

%include "layout.inc"

section @text

__int23_handler:
		pushad  
		push    ds
		push    es
		push    fs
		push    gs
		mov     ebp, esp
		cld     
		call    __GETDS
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
		jne     ___7bf46h
		mov     eax, [___int23_exit]
		cmp     eax, __null_int23_exit
		je      ___7bf46h
		cmp     eax, __restore_int_ctrl_break
		je      ___7bf46h
		mov     eax, 4
		sti     
		cld     
		call    raise
		jmp     ___7bf57h
___7bf46h:
		mov     dx, [___19b8d4h]
		mov     eax, [___old_int23]
___7bf52h:
		call    _chain_intr
___7bf57h:
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
		cld     
		call    __GETDS
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
		jne     ___7bfdeh
		mov     eax, [___int23_exit]
		cmp     eax, __null_int23_exit
		je      ___7bfdeh
		cmp     eax, __restore_int23
		je      ___7bfdeh
		mov     eax, 7
		sti     
		cld     
		call    raise
		jmp     ___7bf57h
___7bfdeh:
		mov     dx, [___19b8dah]
		mov     eax, [___old_int_ctrl_break]
		jmp     ___7bf52h
__GDECL(__DPMI_hosted_)
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 8
		cmp     dword [___19b8e8h], byte 0
		jne     ___7c076h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 1
		je      ___7c01ah
		mov     ax, 1686h
		int     2fh
		test    ax, ax
		jne     ___7c06ch
___7c01ah:
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
		jle     ___7c06ch
		mov     dword [___19b8e8h], 1
		jmp     ___7c076h
___7c06ch:
		mov     dword [___19b8e8h], 0ffffffffh
___7c076h:
		mov     eax, [___19b8e8h]
		add     esp, byte 8
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__restore_int23)
		push    ebx
		push    ecx
		push    edx
		push    ebp
		cmp     dword [___old_int23], byte 0
		jne     ___7c09eh
		cmp     word [___19b8d4h], byte 0
		je      ___7c171h
___7c09eh:
		mov     ebx, [___int23_exit]
		cmp     ebx, __restore_int
		jne     ___7c0b8h
		mov     dword [___int23_exit], __restore_int_ctrl_break
		jmp     ___7c0cah
___7c0b8h:
		cmp     ebx, __restore_int23
		jne     ___7c0cah
		mov     dword [___int23_exit], __null_int23_exit
___7c0cah:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___7c113h
		cmp     eax, byte 8
		jg      ___7c113h
		mov     cl, 23h
		mov     dx, [___19b8d4h]
		mov     eax, [___old_int23]
		mov     ebx, eax
		shl     ebx, 10h
		mov     bx, dx
		mov     ax, 2505h
		int     21h
		mov     cl, 23h
		mov     dx, [___19b8e0h]
		mov     eax, [___old_pm_int23]
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		mov     edx, eax
		mov     ax, 2504h
		int     21h
		pop     ds
		jmp     ___7c160h
___7c113h:
		call    __DPMI_hosted_
		cmp     eax, byte 1
		jne     ___7c149h
		mov     bl, 23h
		mov     cx, [___19b8d4h]
		mov     edx, [___old_int23]
		mov     ax, 201h
		int     31h
		mov     bl, 23h
		mov     cx, [___19b8e0h]
		mov     edx, [___old_pm_int23]
		mov     ax, 205h
		int     31h
		jmp     ___7c160h
___7c149h:
		mov     eax, 23h
		mov     cx, [___19b8d4h]
		mov     ebx, [___old_int23]
		call    _dos_setvect
___7c160h:
		xor     ebx, ebx
		xor     ebp, ebp
		mov     [___19b8d4h], bx
		mov     [___old_int23], ebp
___7c171h:
		pop     ebp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7c176h:
		cmp     ebx, __restore_int_ctrl_break
		jne     ___7c188h
		mov     dword [___int23_exit], __null_int23_exit
___7c188h:
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___7c1d1h
		cmp     eax, byte 8
		jg      ___7c1d1h
		mov     cl, 1bh
		mov     dx, [___19b8dah]
		mov     eax, [___old_int_ctrl_break]
		mov     ebx, eax
		shl     ebx, 10h
		mov     bx, dx
		mov     ax, 2505h
		int     21h
		mov     cl, 1bh
		mov     dx, [___19b8e6h]
		mov     eax, [___old_pm_int_ctrl_break]
		push    ds
		;mov     ds, edx
		db	8eh,0dah
		mov     edx, eax
		mov     ax, 2504h
		int     21h
		pop     ds
		jmp     ___7c21eh
___7c1d1h:
		call    __DPMI_hosted_
		cmp     eax, byte 1
		jne     ___7c207h
		mov     bl, 1bh
		mov     cx, [___19b8dah]
		mov     edx, [___old_int_ctrl_break]
		mov     ax, 201h
		int     31h
		mov     bl, 1bh
		mov     cx, [___19b8e6h]
		mov     edx, [___old_pm_int_ctrl_break]
		mov     ax, 205h
		int     31h
		jmp     ___7c21eh
___7c207h:
		mov     eax, 1bh
		mov     cx, [___19b8dah]
		mov     ebx, [___old_int_ctrl_break]
		call    _dos_setvect
___7c21eh:
		xor     ebx, ebx
		xor     ebp, ebp
		mov     [___19b8dah], bx
		mov     [___old_int_ctrl_break], ebp
___7c22fh:
		pop     ebp
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__restore_int:
		call    __restore_int23
__GDECL(__restore_int_ctrl_break)
		push    ebx
		push    ecx
		push    edx
		push    ebp
		cmp     dword [___old_int_ctrl_break], byte 0
		jne     ___7c250h
		cmp     word [___19b8dah], byte 0
		je      ___7c22fh
___7c250h:
		mov     ebx, [___int23_exit]
		cmp     ebx, __restore_int
		jne     ___7c176h
		mov     dword [___int23_exit], __restore_int23
		jmp     ___7c188h
__GDECL(__grab_int23)
		push    ebx
		push    ecx
		push    edx
		cmp     dword [___old_int23], byte 0
		jne     ___7c388h
		cmp     word [___19b8d4h], byte 0
		jne     ___7c388h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___7c2eeh
		cmp     eax, byte 8
		jg      ___7c2eeh
		mov     cl, 23h
		mov     ax, 2503h
		int     21h
		mov     cx, bx
		shr     ebx, 10h
		mov     edx, ebx
		mov     [___19b8d4h], cx
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
		mov     [___19b8e0h], cx
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
		jmp     ___7c35ah
___7c2eeh:
		call    __DPMI_hosted_
		cmp     eax, byte 1
		jne     ___7c333h
		mov     bl, 23h
		mov     ax, 200h
		int     31h
		mov     bl, 23h
		mov     [___19b8d4h], cx
		mov     [___old_int23], edx
		mov     ax, 204h
		int     31h
		mov     bl, 23h
		mov     [___19b8e0h], cx
		mov     [___old_pm_int23], edx
		mov     edx, __int23_handler
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ax, 205h
		int     31h
		jmp     ___7c35ah
___7c333h:
		mov     eax, 23h
		mov     ebx, __int23_handler
		call    _dos_getvect
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_int23], eax
		mov     eax, 23h
		mov     [___19b8d4h], dx
		call    _dos_setvect
___7c35ah:
		mov     ebx, [___int23_exit]
		cmp     ebx, __null_int23_exit
		jne     ___7c376h
		mov     dword [___int23_exit], __restore_int23
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7c376h:
		cmp     ebx, __restore_int_ctrl_break
		jne     ___7c388h
		mov     dword [___int23_exit], __restore_int
___7c388h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
__GDECL(__grab_int_ctrl_break)
		push    ebx
		push    ecx
		push    edx
		cmp     dword [___old_int_ctrl_break], byte 0
		jne     ___7c4a3h
		cmp     word [___19b8dah], byte 0
		jne     ___7c4a3h
		xor     eax, eax
		mov     al, [__Extender]
		cmp     eax, byte 2
		jl      ___7c409h
		cmp     eax, byte 8
		jg      ___7c409h
		mov     cl, 1bh
		mov     ax, 2503h
		int     21h
		mov     cx, bx
		shr     ebx, 10h
		mov     edx, ebx
		mov     [___19b8dah], cx
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
		mov     [___19b8e6h], cx
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_pm_int_ctrl_break], ebx
		push    ds
		;mov     ds, ecx
		db	8eh,0d9h
		mov     cl, al
		mov     al, 6
		mov     ah, 25h
		int     21h
		pop     ds
		jmp     ___7c475h
___7c409h:
		call    __DPMI_hosted_
		cmp     eax, byte 1
		jne     ___7c44eh
		mov     bl, 1bh
		mov     ax, 200h
		int     31h
		mov     bl, 1bh
		mov     [___19b8dah], cx
		mov     [___old_int_ctrl_break], edx
		mov     ax, 204h
		int     31h
		mov     bl, 1bh
		mov     [___19b8e6h], cx
		mov     [___old_pm_int_ctrl_break], edx
		mov     edx, __int_ctrl_break_handler
		;mov     ecx, cs
		db	8ch,0c9h
		mov     ax, 205h
		int     31h
		jmp     ___7c475h
___7c44eh:
		mov     eax, 1bh
		mov     ebx, __int_ctrl_break_handler
		call    _dos_getvect
		;mov     ecx, cs
		db	8ch,0c9h
		mov     [___old_int_ctrl_break], eax
		mov     eax, 1bh
		mov     [___19b8dah], dx
		call    _dos_setvect
___7c475h:
		mov     ebx, [___int23_exit]
		cmp     ebx, __null_int23_exit
		jne     ___7c491h
		mov     dword [___int23_exit], __restore_int_ctrl_break
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7c491h:
		cmp     ebx, __restore_int23
		jne     ___7c4a3h
		mov     dword [___int23_exit], __restore_int
___7c4a3h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    


section @data

___old_int23:
db	0,0,0,0
___19b8d4h:
db	0,0
___old_int_ctrl_break:
db	0,0,0,0
___19b8dah:
db	0,0
___old_pm_int23:
db	0,0,0,0
___19b8e0h:
db	0,0
___old_pm_int_ctrl_break:
db	0,0,0,0
___19b8e6h:
db	0,0
___19b8e8h:
db	0,0,0,0


section @bss

_my_stack:
    resb	400h