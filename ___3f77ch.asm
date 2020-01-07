cpu 386
%include "macros.inc"

	extern	__CHK
	extern	dRally_Memory_free

section .text

__GDECL(___3f77ch__freeMemory)
		push    4
		call    near __CHK
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		retn    
