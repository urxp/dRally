cpu 386

	extern  __fatal_runtime_error

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE
_no_support_loaded_:
		push    edx
		mov     edx, 1
		mov     eax, L$1
		call    near __fatal_runtime_error
		pop     edx
		retn


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$1:
    db "Floating-point support not loaded"
    db  0dh,0ah,0


SEGMENT _DATA   PUBLIC USE32 ALIGN=4 CLASS=DATA
global ___EFG_printf
___EFG_printf:
    dd	_no_support_loaded_
global ___EFG_scanf
___EFG_scanf:
    dd	_no_support_loaded_