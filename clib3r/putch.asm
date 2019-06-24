%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(putch)
		push    ebx
		push    edx
		mov     ebx, eax
		mov     edx, eax
		mov     ah, 6
		int     21h
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn    
