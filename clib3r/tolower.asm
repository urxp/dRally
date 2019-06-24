%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(tolower)
		cmp     eax, byte 41h
		jl      ___6740dh
		cmp     eax, byte 5ah
		jg      ___6740dh
		add     eax, byte 20h
___6740dh:
		retn    
