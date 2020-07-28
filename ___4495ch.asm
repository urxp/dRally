cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___61278h
	extern	___24e4ach
	extern	___24e4c0h
	extern	___24cee0h
	extern	___24cee4h
	extern	___24cee8h
	extern	___24ceech
	extern	memset

section .text

__GDECL(___4495ch)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, [___24e4ach]
		mov     word [eax], 0
		mov     dx, [eax]
		mov     [eax+2], dx
		mov     edx, [___24e4c0h]
		mov     word [edx], 0
		mov     bx, [edx]
		mov     [edx+2], bx
		mov     edx, [___24cee0h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24cee4h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24cee8h]
		mov     word [edx], 0
		mov     word [edx+2], 0
		mov     edx, [___24ceech]
		add     eax, byte 4
		mov     word [edx], 0
		mov     ebx, 1000h
		mov     word [edx+2], 0
		xor     edx, edx
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1000h
		mov     eax, [___24cee0h]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1000h
		mov     eax, [___24cee4h]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1000h
		mov     eax, [___24cee8h]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1000h
		mov     eax, [___24ceech]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 1000h
		mov     eax, [___24e4c0h]
		xor     edx, edx
		add     eax, byte 4
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		pop     edx
		pop     ebx
		retn    
