cpu 386
%include "macros.inc"

	extern	___24cc84h
	extern	___24cc7ch
	extern	___5eefch
	extern	___5f080h

section .text

__GDECL(___5f2b4h)
		push    ebx
		push    edx
		mov     edx, [___24cc84h]
		mov     eax, [___24cc7ch]
		cmp     eax, edx
		jne     short ___5f2cdh
		call    near ___5eefch
		pop     edx
		pop     ebx
		retn    
___5f2cdh:
		mov     ebx, [___24cc84h]
		mov     edx, eax
		mov     eax, ebx
		sub     edx, ebx
		call    near ___5f080h
		pop     edx
		pop     ebx
		retn    
