%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(isatty)
		push    ebx
		push    ecx
		push    edx
		mov     ebx, eax
		mov     al, 0
		mov     ah, 44h
		int     21h
		rcl     edx, 1
		ror     edx, 1
		xor     dh, dh
		xor     eax, eax
		and     dl, 80h
		mov     ax, dx
		test    eax, eax
		setnz   al
		and     eax, 0ffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    