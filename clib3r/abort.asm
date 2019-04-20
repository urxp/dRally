cpu 386

	extern	__fatal_runtime_error

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global abort
abort:
		call    dword [___abort]
global __terminate
__terminate:
		push    edx
		mov     edx, 0ffh
		mov     eax, L$1
		call    near __fatal_runtime_error
		pop     edx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$1:
    db  "ABNORMAL TERMINATION"
    db  0dh,0ah,0

    
SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global ___abort
___abort:
    dd	__terminate