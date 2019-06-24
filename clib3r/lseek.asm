%include "macros.inc"

    extern  __set_errno_dos

%include "layout.inc"

section @text

__GDECL(lseek__clib3r)
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
		jge     ___67761h
		xor     eax, eax
		mov     ax, dx
		call    __set_errno_dos
		mov     eax, 0ffffffffh
		jmp     ___67764h
___67761h:
		mov     eax, [esp]
___67764h:
		add     esp, byte 4
		pop     edi
		pop     ecx
		retn    
