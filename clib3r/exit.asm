cpu 386

    extern	__exit_

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

_null_exit_rtn_:
global __null_int23_exit_
__null_int23_exit_:
		retn  
global exit_  
exit_:
		push    edx
		mov     edx, eax
		call    dword [___atexit]
		call    dword [___int23_exit]
		mov     eax, edx
		call    near _exit
		pop     edx
		retn
global _exit    
_exit:
		push    edx
		mov     edx, eax
		call    dword [___int23_exit]
		call    dword [___FPE_handler_exit]
		mov     eax, edx
		jmp     near __exit_


SEGMENT _DATA       PUBLIC USE32 ALIGN=4 CLASS=DATA
global	___atexit
___atexit:
    dd	_null_exit_rtn_
global	___int23_exit
___int23_exit:
    dd	__null_int23_exit_
global	___FPE_handler_exit
___FPE_handler_exit:
    dd	_null_exit_rtn_