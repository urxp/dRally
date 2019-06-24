%include "macros.inc"

    extern  __IOMode
    extern  __set_errno_dos
    extern  __set_errno__clib3r

%include "layout.inc"

section @text

__GDECL(__qwrite__clib3r)
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     esi, eax
		mov     ebp, edx
		mov     edi, ebx
		call    __IOMode
		test    al, 80h
		je      ___6ca1dh
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
		jge     ___6ca1dh
___6ca10h:
		xor     eax, eax
		mov     ax, [esp]
		call    __set_errno_dos
		jmp     ___6ca44h
___6ca1dh:
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
		jl      ___6ca10h
		cmp     eax, edi
		je      ___6ca42h
		mov     eax, 0ch
		call    __set_errno__clib3r
___6ca42h:
		mov     eax, edx
___6ca44h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
