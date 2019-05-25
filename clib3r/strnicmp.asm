%include "layout.inc"

section @text

global strnicmp__clib3r
strnicmp__clib3r:
		push    ecx
		push    esi
		mov     ecx, eax
		mov     esi, ebx
___66f3eh:
		test    esi, esi
		jne     ___66f47h
___66f42h:
		xor     eax, eax
		pop     esi
		pop     ecx
		retn    
___66f47h:
		mov     al, [ecx]
		xor     ebx, ebx
		mov     ah, [edx]
		mov     bl, al
		cmp     ebx, 41h
		jl      ___66f5bh
		cmp     ebx, 5ah
		jg      ___66f5bh
		add     al, 20h
___66f5bh:
		xor     ebx, ebx
		mov     bl, ah
		cmp     ebx, 41h
		jl      ___66f6ch
		cmp     ebx, 5ah
		jg      ___66f6ch
		add     ah, 20h
___66f6ch:
		cmp     al, ah
		je      ___66f82h
		xor     edx, edx
		mov     dl, al
		mov     al, ah
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, edx
		pop     esi
		pop     ecx
		retn    
___66f82h:
		test    ah, ah
		je      ___66f42h
		inc     ecx
		inc     edx
		dec     esi
		jmp     ___66f3eh
