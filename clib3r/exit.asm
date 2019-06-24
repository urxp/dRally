%include "macros.inc"

    extern  __exit_

%include "layout.inc"

section @text

_null_exit_rtn:
__GDECL(__null_int23_exit)
		retn
__GDECL(__CEXT_F(exit__clib3r))
		push    edx
		mov     edx, eax
		call    dword [___atexit]
		call    dword [___int23_exit]
		mov     eax, edx
		call    near _exit
		pop     edx
		retn    
__GDECL(_exit)
		push    edx
		mov     edx, eax
		call    dword [___int23_exit]
		call    dword [___FPE_handler_exit]
		mov     eax, edx
		jmp     near __exit_


section @data

__GDECL(___atexit)
dd	_null_exit_rtn
__GDECL(___int23_exit)
dd	__null_int23_exit
__GDECL(___FPE_handler_exit)
dd	_null_exit_rtn
