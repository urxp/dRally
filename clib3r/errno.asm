cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
global __get_errno_ptr
__get_errno_ptr:
		mov     eax, _errno
		retn    
global __get_doserrno_ptr
__get_doserrno_ptr:
		mov     eax, __doserrno
		retn 


SEGMENT _BSS    PUBLIC USE32 ALIGN=4 CLASS=BSS
global _errno
_errno:
    resb    4
global __doserrno
__doserrno:
    resb    4