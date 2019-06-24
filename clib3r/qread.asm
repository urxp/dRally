%include "macros.inc"

    extern   __set_errno_dos

%include "layout.inc"

section @text

__GDECL(__qread)
		push    ecx
		mov     ecx, ebx
		mov     ebx, eax
		mov     ah, 3fh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jge     ___67604h
		xor     eax, eax
		mov     ax, dx
		call    __set_errno_dos
___67604h:
		pop     ecx
		retn    
