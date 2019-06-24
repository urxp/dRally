%include "macros.inc"
%include "layout.inc"

section @text

__GDECL(strlwr)
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		mov     edx, eax
___66365h:
		mov     al, [edx]
		test    al, al
		je      ___6637dh
		sub     al, 41h
		xor     ebx, ebx
		mov     bl, al
		cmp     ebx, byte 19h
		jg      ___6637ah
		add     al, 61h
		mov     [edx], al
___6637ah:
		inc     edx
		jmp     ___66365h
___6637dh:
		mov     eax, ecx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
