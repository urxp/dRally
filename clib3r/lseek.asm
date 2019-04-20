cpu 386

	extern  __set_errno_dos

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global _lseek
global lseek
_lseek:
lseek:
		push    ecx
		push    edi
		sub     esp, byte 4
		mov     ecx, eax
		mov     edi, esp
		mov     al, bl
		mov     ebx, ecx
		mov     ah, 42h
		mov     ecx, edx
		shr     ecx, 10h
		int     21h
		mov     [ss:edi], ax
		mov     [ss:edi+2], dx
		rcl     eax, 1
		ror     eax, 1
		mov     edx, eax
		test    eax, eax
		jge     short dr@67761h
		xor     eax, eax
		mov     ax, dx
		call    near __set_errno_dos
		mov     eax, 0ffffffffh
		jmp     short dr@67764h
dr@67761h:
		mov     eax, [esp]
dr@67764h:
		add     esp, byte 4
		pop     edi
		pop     ecx
		retn