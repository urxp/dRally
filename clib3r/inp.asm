%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(inp)
		push    edx
		mov     edx, eax
		sub     eax, eax
		in      al, dx
		pop     edx
		retn    
