cpu 386

    extern	_EFG_Format
    extern	__cnvs2d
    extern	___EFG_printf
    extern	___EFG_scanf

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __setEFGfmt
__setEFGfmt:
		push    ebx
		push    edx
		mov     edx, _EFG_Format
		mov     ebx, __cnvs2d
		mov     [___EFG_printf], edx
		mov     [___EFG_scanf], ebx
		pop     edx
		pop     ebx
		retn