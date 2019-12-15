cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___112d4h__VGA_GETTYPE
	extern 	___12bd4h__VESA101_SETBANK

section .text
		
__GDECL(___12c38h__VESA101_CHECKBANKS)
		push    4
		call    near __CHK
		call    near ___112d4h__VGA_GETTYPE
		xor     eax, eax
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		mov     byte [eax], 1
		mov     eax, 1
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		cmp     byte [eax], 1
		jne     short ___12c91h
		mov     eax, 1
		retn    
___12c91h:
		xor     eax, eax
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		mov     byte [eax], 0
		mov     eax, 1
		call    near ___12bd4h__VESA101_SETBANK
		mov     eax, 0a0000h
		mov     byte [eax], 0
		xor     eax, eax
		retn    
