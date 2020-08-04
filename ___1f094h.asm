cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185ba9h

section .text

__GDECL(___1f094h_cdecl)
	mov 	eax, [esp+4]
	call 	___1f094h
	retn

__GDECL(___1f094h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     edx, eax
		xor     ebx, ebx
		xor     esi, esi
		jmp     short ___1f0c2h
___1f0aeh:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185ba9h-1eh]			;; ___185b8bh
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     esi, ecx
___1f0c2h:
		mov     edi, ebp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___1f0aeh
		mov     eax, esi
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
