cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___5994ch
	extern 	___59b3ch
	extern 	___2ab50h
	extern 	___13bd4h

section .text

__GDECL(___17324h)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		call    near ___5994ch
		xor     bl, bl
		call    near ___59b3ch
		xor     bh, bh
___1733eh:
		cmp     bl, 1ch
		je      short ___17374h
		cmp     bl, 9ch
		je      short ___17374h
		cmp     bh, 0ah
		jbe     short ___17354h
		call    near ___5994ch
		mov     bl, al
___17354h:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, 141h
		mov     eax, 0a4h
		inc     bh
		call    near ___13bd4h
		cmp     bl, 1
		jne     short ___1733eh
___17374h:
		call    near ___5994ch
		call    near ___59b3ch
		pop     edx
		pop     ebx
		retn    
