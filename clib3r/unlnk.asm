%include "macros.inc"

    extern  __set_errno_dos

%include "layout.inc"

section @text

__GDECL(unlink)
		push    edx
		mov     edx, eax
		mov     ah, 41h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jge     ___6edc8h
		xor     eax, eax
		mov     ax, dx
		call    __set_errno_dos
		pop     edx
		retn    
___6edc8h:
		xor     eax, eax
		pop     edx
		retn    
