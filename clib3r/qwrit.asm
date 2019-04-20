cpu 386

	extern	__IOMode
	extern	__set_errno_dos
	extern	__set_errno

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __qwrite
__qwrite:
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     esi, eax
		mov     ebp, edx
		mov     edi, ebx
		call    near __IOMode
		test    al, 80h
		je      short dr@6ca1dh
		mov     al, 2
		mov     ebx, esi
		xor     edx, edx
		mov     ah, 42h
		mov     ecx, edx
		shr     ecx, 10h
		int     21h
		rcl     dx, 1
		ror     dx, 1
		shl     edx, 10h
		mov     dx, ax
		mov     [esp], edx
		test    edx, edx
		jge     short dr@6ca1dh
dr@6ca10h:
		xor     eax, eax
		mov     ax, [esp]
		call    near __set_errno_dos
		jmp     short dr@6ca44h
dr@6ca1dh:
		mov     ecx, edi
		mov     edx, ebp
		mov     ebx, esi
		mov     ah, 40h
		int     21h
		rcl     eax, 1
		ror     eax, 1
		mov     [esp], eax
		mov     edx, eax
		test    eax, eax
		jl      short dr@6ca10h
		cmp     eax, edi
		je      short dr@6ca42h
		mov     eax, 0ch
		call    near __set_errno
dr@6ca42h:
		mov     eax, edx
dr@6ca44h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn