cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___5eefch_freeMemory_cdecl

section .text

__GDECL(___3f77ch__freeMemory)
		push    4
		call    near __CHK
	push 	edx
	push 	ecx
	push 	eax
		call    near ___5eefch_freeMemory_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx
		retn    
