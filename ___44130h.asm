cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___60a84h
	extern	___60a28h
	extern	___243cf4h
	extern	___60b48h
	extern	___611c0h
	extern	___61278h
	extern	___243874h
	extern	___243898h
	extern	___243894h
	extern	___243878h
	extern	___243330h

section .text

__GDECL(___44130h)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, eax
		call    near ___60a84h
___44143h:
		mov     eax, 2
		call    near ___60a28h
		mov     edx, [___243cf4h]
		mov     eax, ebx
		call    near ___60b48h
		cmp     al, 0ffh
		jne     short ___44143h
		xor     edx, edx
		xor     eax, eax
		call    near ___611c0h
		xor     edx, edx
		call    near ___61278h
		mov     [___243874h], edx
		mov     [___243898h], edx
		mov     [___243894h], edx
		mov     [___243878h], edx
		mov     eax, [___243894h]
		mov     [___243330h], eax
		pop     edx
		pop     ebx
		retn    
