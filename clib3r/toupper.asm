%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(toupper)
		cmp     eax, byte 61h
		jl      ___6eb4eh
		cmp     eax, byte 7ah
		jg      ___6eb4eh
		sub     eax, byte 20h
___6eb4eh:
		retn    
