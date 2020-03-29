cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___180124h
	extern 	entrysize_bpa

section .text

__GDECL(entrysize_musics_bpa)
		push    8
		call    near __CHK
	mov 	eax, [esp+4]
		push    edx
		mov     edx, eax
		mov     eax, ___180124h		;; "MUSICS.BPA"

	push 	ecx
	push 	edx
	push 	eax
		call    entrysize_bpa
	add 	esp, 8
	pop 	ecx

		pop     edx
		retn    
