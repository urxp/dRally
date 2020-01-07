cpu 386
%include "macros.inc"

	extern	___24cc84h
	extern	___24cc7ch
	extern	dRally_Memory_free
	extern	dRally_Memory_resize

section .text

__GDECL(___5f2b4h)
		push    ebx
		push    edx
		mov     edx, [___24cc84h]
		mov     eax, [___24cc7ch]
		cmp     eax, edx
		jne     short ___5f2cdh
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx
		pop     edx
		pop     ebx
		retn    
___5f2cdh:
		mov     ebx, [___24cc84h]
		mov     edx, eax
		mov     eax, ebx
		sub     edx, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_resize
	add 	esp, 8
	pop 	ecx

		pop     edx
		pop     ebx
		retn    
