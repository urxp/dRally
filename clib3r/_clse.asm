%include "macros.inc"

    extern  __SetIOMode
    extern  __set_errno__clib3r

%include "layout.inc"

section @text

__GDECL(__close)
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
		jl      ___6778ch
		mov     eax, ecx
		xor     edx, edx
		call    __SetIOMode
		xor     eax, eax
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___6778ch:
		mov     eax, 4
		call    __set_errno__clib3r
		mov     eax, 0ffffffffh
		pop     edx
		pop     ecx
		pop     ebx
		retn    
