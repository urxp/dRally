cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___5eefch

section .text

__GDECL(___3f77ch__freeMemory)
		push    4
		call    near __CHK
		call    near ___5eefch
		retn    
