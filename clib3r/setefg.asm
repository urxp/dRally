%include "macros.inc"

    extern  _EFG_Format
    extern  __cnvs2d
    extern  ___EFG_printf
    extern  ___EFG_scanf

%include "layout.inc"

section @text

__GDECL(__setEFGfmt)
		push    ebx
		push    edx
		mov     edx, _EFG_Format
		mov     ebx, __cnvs2d
		mov     [___EFG_printf], edx
		mov     [___EFG_scanf], ebx
		pop     edx
		pop     ebx
		retn    
