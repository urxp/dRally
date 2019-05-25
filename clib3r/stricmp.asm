%include "layout.inc"

section @text

global stricmp__clib3r
stricmp__clib3r:
		push    ebx
		push    ecx
		mov     ebx, eax
___5ea58h:
		mov     al, [ebx]
		xor     ecx, ecx
		mov     ah, [edx]
		mov     cl, al
		cmp     ecx, 41h
		jl      ___5ea6ch
		cmp     ecx, 5ah
		jg      ___5ea6ch
		add     al, 20h
___5ea6ch:
		xor     ecx, ecx
		mov     cl, ah
		cmp     ecx, 41h
		jl      ___5ea7dh
		cmp     ecx, 5ah
		jg      ___5ea7dh
		add     ah, 20h
___5ea7dh:
		cmp     al, ah
		jne     ___5ea89h
		test    ah, ah
		je      ___5ea89h
		inc     ebx
		inc     edx
		jmp     ___5ea58h
___5ea89h:
		xor     edx, edx
		mov     dl, al
		mov     al, ah
		and     eax, 0ffh
		sub     edx, eax
		mov     eax, edx
		pop     ecx
		pop     ebx
		retn 
