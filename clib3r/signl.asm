%include "macros.inc"

    extern  __set_errno__clib3r
    extern  ___abort
    extern  __grab_int23
    extern  __grab_int_ctrl_break
    extern  __grab_fpe
    extern  __terminate
    extern  __restore_int23
    extern  __restore_int_ctrl_break

%include "layout.inc"

section @text

__GDECL(__sigabort)
		mov     eax, 1
		jmp     raise
__GDECL(__sigfpe_handler)
		push    edx
		push    esi
		sub     esp, byte 4
		mov     edx, [_SignalTable+8]
		mov     [esp], edx
		cmp     edx, byte 1
		je      ___7dbe1h
		cmp     edx, byte 2
		je      ___7dbe1h
		cmp     edx, byte 3
		je      ___7dbe1h
		mov     esi, 2
		mov     edx, eax
		mov     eax, esi
		mov     [_SignalTable+8], esi
		call    dword [esp]
___7dbe1h:
		add     esp, byte 4
		pop     esi
		pop     edx
		retn    
__GDECL(signal)
		push    ebx
		mov     ebx, eax
		cmp     eax, byte 1
		jl      ___7dbf4h
		cmp     eax, byte 0ch
		jle     ___7dc05h
___7dbf4h:
		mov     eax, 9
		call    __set_errno__clib3r
		mov     eax, 3
		pop     ebx
		retn    
___7dc05h:
		mov     dword [___abort], __sigabort
		cmp     eax, byte 4
		jne     ___7dc2ch
		cmp     edx, byte 2
		jne     ___7dc20h
		call    __restore_int23
		jmp     ___7dc5ch
___7dc20h:
		cmp     edx, byte 3
		je      ___7dc5ch
		call    __grab_int23
		jmp     ___7dc5ch
___7dc2ch:
		cmp     eax, byte 7
		jne     ___7dc49h
		cmp     edx, byte 2
		jne     ___7dc3dh
		call    __restore_int_ctrl_break
		jmp     ___7dc5ch
___7dc3dh:
		cmp     edx, byte 3
		je      ___7dc5ch
		call    __grab_int_ctrl_break
		jmp     ___7dc5ch
___7dc49h:
		cmp     eax, byte 2
		jne     ___7dc5ch
		cmp     edx, eax
		je      ___7dc5ch
		cmp     edx, byte 3
		je      ___7dc5ch
		call    __grab_fpe
___7dc5ch:
		mov     eax, [ebx*4+_SignalTable]
		mov     [ebx*4+_SignalTable], edx
		pop     ebx
		retn    
___7dc6ch:
dd	___7dcdbh
dd	___7dcc6h
dd	___7dd32h
dd	___7dce6h
dd	___7dd32h
dd	___7dd32h
dd	___7dd0fh
dd	___7dd32h
dd	___7dd32h
dd	___7dd32h
dd	___7dd32h
dd	___7dd32h
__GDECL(raise)
		push    ebx
		push    ecx
		push    edx
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     edx, eax
		shl     eax, 2
		mov     ebx, [eax+_SignalTable]
		mov     [esp], ebx
		lea     ebx, [edx-1]
		cmp     ebx, byte 0bh
		ja      ___7dd54h
		jmp     dword [cs:ebx*4+___7dc6ch]
___7dcc6h:
		mov     eax, 8ch
		call    __sigfpe_handler
___7dcd0h:
		xor     eax, eax
___7dcd2h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___7dcdbh:
		cmp     dword [esp], byte 2
		jne     ___7dce6h
		call    __terminate
___7dce6h:
		mov     edi, [esp]
		cmp     edi, byte 1
		je      ___7dcd0h
		cmp     edi, byte 2
		je      ___7dcd0h
		cmp     edi, byte 3
		je      ___7dcd0h
		mov     dword [edx*4+_SignalTable], 2
		call    __restore_int23
___7dd08h:
		mov     eax, edx
___7dd0ah:
		call    dword [esp]
		jmp     ___7dcd0h
___7dd0fh:
		mov     ebx, [esp]
		cmp     ebx, byte 1
		je      ___7dcd0h
		cmp     ebx, byte 2
		je      ___7dcd0h
		cmp     ebx, byte 3
		je      ___7dcd0h
		mov     dword [eax+_SignalTable], 2
		call    __restore_int_ctrl_break
		jmp     ___7dd08h
___7dd32h:
		mov     ebp, [esp]
		cmp     ebp, byte 1
		je      ___7dcd0h
		cmp     ebp, byte 2
		je      ___7dcd0h
		cmp     ebp, byte 3
		je      ___7dcd0h
		mov     ecx, 2
		mov     eax, edx
		mov     [edx*4+_SignalTable], ecx
		jmp     ___7dd0ah
___7dd54h:
		mov     eax, 0ffffffffh
		jmp     ___7dcd2h


section @data

_SignalTable:
db	1,0,0,0,2,0,0,0
db	1,0,0,0,2,0,0,0
db	2,0,0,0,2,0,0,0
db	2,0,0,0,2,0,0,0
db	1,0,0,0,1,0,0,0
db	1,0,0,0,2,0,0,0
db	2,0,0,0