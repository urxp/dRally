%include "macros.inc"

    extern  __fatal_runtime_error

%include "layout.inc"

section @text

_no_support_loaded_
		push    edx
		mov     edx, 1
		mov     eax, ___185130h
		call    __fatal_runtime_error
		pop     edx
		retn    


section @const

___185130h:
db	"Floating-point support not loaded",0dh,0ah,0


section @data

__GDECL(___EFG_printf)
dd	_no_support_loaded_
__GDECL(___EFG_scanf)
dd	_no_support_loaded_
