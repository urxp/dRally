cpu 386

	extern	__SetIOMode
	extern	__set_errno

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __close
__close:
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     ebx, eax
		mov     ah, 3eh
		int     21h
		rcl     eax, 1
		ror     eax, 1
		test    eax, eax
		jl      short dr@6778ch
		mov     eax, ecx
		xor     edx, edx
		call    near __SetIOMode
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
dr@6778ch:
		mov     eax, 4
		call    near __set_errno
		mov     eax, 0ffffffffh
		pop     edx
		pop     ecx
		pop     ebx
		retn