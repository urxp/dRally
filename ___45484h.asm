cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243314h
	extern	___3f77ch__freeMemory
	extern	___243310h
	extern	___59e11h

section .text

__GDECL(___45484h)
		push    4
		call    near __CHK
		mov     eax, [___243314h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___243310h]
		call    near ___3f77ch__freeMemory
		xor     ah, ah
		mov     [___59e11h], ah
		retn    
