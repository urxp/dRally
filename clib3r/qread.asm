cpu 386

	extern	__set_errno_dos

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __qread
__qread:
		push    ecx
		mov     ecx, ebx
		mov     ebx, eax
		mov     ah, 3fh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jge     short dr@67604h
		xor     eax, eax
		mov     ax, dx
		call    near __set_errno_dos
dr@67604h:
		pop     ecx
		retn 