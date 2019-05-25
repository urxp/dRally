%include "layout.inc"

section @text

global strncmp__clib3r
strncmp__clib3r:
		push    ecx
___7c4a8h:
		test    ebx, ebx
		jne     ___7c4b0h
___7c4ach:
		xor     eax, eax
		pop     ecx
		retn    
___7c4b0h:
		mov     cl, [eax]
		mov     ch, [edx]
		cmp     cl, ch
		je      ___7c4c6h
		xor     ebx, ebx
		xor     eax, eax
		mov     bl, cl
		mov     al, ch
		sub     ebx, eax
		mov     eax, ebx
		pop     ecx
		retn    
___7c4c6h:
		cmp     byte [eax], 0
		je      ___7c4ach
		inc     eax
		inc     edx
		dec     ebx
		jmp     ___7c4a8h
