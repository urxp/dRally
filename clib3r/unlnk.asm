cpu 386

	extern	__set_errno_dos

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global unlink
unlink:
		push    edx
		mov     edx, eax
		mov     ah, 41h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jge     short dr@6edc8h
		xor     eax, eax
		mov     ax, dx
		call    near __set_errno_dos
		pop     edx
		retn    
dr@6edc8h:
		xor     eax, eax
		pop     edx
		retn 