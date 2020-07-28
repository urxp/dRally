cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___5994ch
	extern 	___59b3ch
	extern 	___2ab50h
	extern 	___13bd4h_cdecl

section .text

__GDECL(___17324h)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		xor     bl, bl

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		xor     bh, bh
___1733eh:
		cmp     bl, 1ch
		je      short ___17374h
		cmp     bl, 9ch
		je      short ___17374h
		cmp     bh, 0ah
		jbe     short ___17354h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     bl, al
___17354h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edx, 141h
		mov     eax, 0a4h
		inc     bh
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___13bd4h_cdecl
	add 	esp, 8
	pop 	ecx

		cmp     bl, 1
		jne     short ___1733eh
___17374h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		pop     edx
		pop     ebx
		retn    
