cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd58h
	extern	___59db8h
	extern	___243890h
	extern	___243888h
	extern	___24388ch
	extern	___243884h

section .text

__GDECL(___596f0h)
	pushad
		push    4
		call    near __CHK
		cmp     dword [___19bd58h], byte 0
		jle     short ___5971ch
		call    near ___59db8h
		mov     eax, [___243890h]
		mov     [___243888h], eax
		mov     eax, [___24388ch]
		mov     [___243884h], eax
___5971ch:
	popad
		retn    
