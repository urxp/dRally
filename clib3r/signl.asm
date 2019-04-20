cpu 386

    extern	__set_errno
    extern	___abort
    extern	__restore_int23
    extern	__grab_int23
    extern	__restore_int_ctrl_break
    extern	__grab_int_ctrl_break
    extern	__grab_fpe
    extern	__terminate


SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __sigabort
__sigabort:
		mov     eax, 1
		jmp     near raise
global __sigfpe_handler
__sigfpe_handler:
		push    edx
		push    esi
		sub     esp, byte 4
		mov     edx, [_SignalTable+8]
		mov     [esp], edx
		cmp     edx, byte 1
		je      short dr@7dbe1h
		cmp     edx, byte 2
		je      short dr@7dbe1h
		cmp     edx, byte 3
		je      short dr@7dbe1h
		mov     esi, 2
		mov     edx, eax
		mov     eax, esi
		mov     [_SignalTable+8], esi
		call    dword [esp]
dr@7dbe1h:
		add     esp, byte 4
		pop     esi
		pop     edx
		retn  
global signal 
signal:
		push    ebx
		mov     ebx, eax
		cmp     eax, byte 1
		jl      short dr@7dbf4h
		cmp     eax, byte 0ch
		jle     short dr@7dc05h
dr@7dbf4h:
		mov     eax, 9
		call    near __set_errno
		mov     eax, 3
		pop     ebx
		retn    
dr@7dc05h:
		mov     dword [___abort], __sigabort
		cmp     eax, byte 4
		jne     short dr@7dc2ch
		cmp     edx, byte 2
		jne     short dr@7dc20h
		call    near __restore_int23
		jmp     short dr@7dc5ch
dr@7dc20h:
		cmp     edx, byte 3
		je      short dr@7dc5ch
		call    near __grab_int23
		jmp     short dr@7dc5ch
dr@7dc2ch:
		cmp     eax, byte 7
		jne     short dr@7dc49h
		cmp     edx, byte 2
		jne     short dr@7dc3dh
		call    near __restore_int_ctrl_break
		jmp     short dr@7dc5ch
dr@7dc3dh:
		cmp     edx, byte 3
		je      short dr@7dc5ch
		call    near __grab_int_ctrl_break
		jmp     short dr@7dc5ch
dr@7dc49h:
		cmp     eax, byte 2
		jne     short dr@7dc5ch
		cmp     edx, eax
		je      short dr@7dc5ch
		cmp     edx, byte 3
		je      short dr@7dc5ch
		call    near __grab_fpe
dr@7dc5ch:
		mov     eax, [ebx*4+_SignalTable]
		mov     [ebx*4+_SignalTable], edx
		pop     ebx
		retn    
dr@7dc6ch:
dd	dr@7dcdbh
dd	dr@7dcc6h
dd	dr@7dd32h
dd	dr@7dce6h
dd	dr@7dd32h
dd	dr@7dd32h
dd	dr@7dd0fh
dd	dr@7dd32h
dd	dr@7dd32h
dd	dr@7dd32h
dd	dr@7dd32h
dd	dr@7dd32h
global raise 
raise:
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
		ja      near dr@7dd54h
		jmp     near dword [cs:ebx*4+dr@7dc6ch]
dr@7dcc6h:
		mov     eax, 8ch
		call    near __sigfpe_handler
dr@7dcd0h:
		xor     eax, eax
dr@7dcd2h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@7dcdbh:
		cmp     dword [esp], byte 2
		jne     short dr@7dce6h
		call    near __terminate
dr@7dce6h:
		mov     edi, [esp]
		cmp     edi, byte 1
		je      short dr@7dcd0h
		cmp     edi, byte 2
		je      short dr@7dcd0h
		cmp     edi, byte 3
		je      short dr@7dcd0h
		mov     dword [edx*4+_SignalTable], 2
		call    near __restore_int23
dr@7dd08h:
		mov     eax, edx
dr@7dd0ah:
		call    dword [esp]
		jmp     short dr@7dcd0h
dr@7dd0fh:
		mov     ebx, [esp]
		cmp     ebx, byte 1
		je      short dr@7dcd0h
		cmp     ebx, byte 2
		je      short dr@7dcd0h
		cmp     ebx, byte 3
		je      short dr@7dcd0h
		mov     dword [eax+_SignalTable], 2
		call    near __restore_int_ctrl_break
		jmp     short dr@7dd08h
dr@7dd32h:
		mov     ebp, [esp]
		cmp     ebp, byte 1
		je      short dr@7dcd0h
		cmp     ebp, byte 2
		je      short dr@7dcd0h
		cmp     ebp, byte 3
		je      short dr@7dcd0h
		mov     ecx, 2
		mov     eax, edx
		mov     [edx*4+_SignalTable], ecx
		jmp     short dr@7dd0ah
dr@7dd54h:
		mov     eax, 0ffffffffh
		jmp     near dr@7dcd2h


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
_SignalTable:
    db	1, 0, 0, 0, 2, 0, 0, 0
    db	1, 0, 0, 0, 2, 0, 0, 0
    db	2, 0, 0, 0, 2, 0, 0, 0
    db	2, 0, 0, 0, 2, 0, 0, 0
    db	1, 0, 0, 0, 1, 0, 0, 0
    db	1, 0, 0, 0, 2, 0, 0, 0
    db	2, 0, 0, 0