/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___61b88h
	extern	___1ca00h

section .text

__GDECL(___1f0dch)
		push    4
		call    near __CHK
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61b88h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1f0fch
		mov     eax, 1
		call    near ___1ca00h
		xor     eax, eax
		retn    
___1f0fch:
		mov     eax, 1
		retn    
*/
