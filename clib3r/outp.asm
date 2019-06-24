%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(outp)
		push    ebx
		mov     ebx, eax
		mov     al, dl
		mov     edx, ebx
		out     dx, al
		pop     ebx
		retn    
