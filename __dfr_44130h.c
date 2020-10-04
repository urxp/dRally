/*
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

__GDECL(___44130h_cdecl)
	mov 	eax, [esp+4]
	call 	___44130h
	retn

__GDECL(___44130h)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, eax

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

___44143h:
		mov     eax, 2
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___60a28h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     edx, [___243cf4h]
		mov     eax, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		cmp     al, 0ffh
		jne     short ___44143h
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

		xor     edx, edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [___243874h], edx
		mov     [___243898h], edx
		mov     [___243894h], edx
		mov     [___243878h], edx
		mov     eax, [___243894h]
		mov     [___243330h], eax
		pop     edx
		pop     ebx
		retn    
*/
