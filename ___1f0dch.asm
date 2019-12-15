cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___61b88h
	extern	___1ca00h

section .text

__GDECL(___1f0dch)
		push    4
		call    near __CHK
		call    near ___61b88h
		test    eax, eax
		jne     short ___1f0fch
		mov     eax, 1
		call    near ___1ca00h
		xor     eax, eax
		retn    
___1f0fch:
		mov     eax, 1
		retn    
