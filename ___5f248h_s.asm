cpu 386
%include "macros.inc"

	extern	dRally_Memory_alloc
	extern	___24cc7ch
	extern	___24cc84h
	extern	___24cc80h

section .text

__GDECL(___5f248h)
		push    ebx
		mov     ebx, eax
		and     edx, 0ffh

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

		mov     [___24cc7ch], eax
		mov     [___24cc84h], eax
		lea     edx, [eax+ebx*1]
		mov     [___24cc80h], edx
		pop     ebx
		retn    
