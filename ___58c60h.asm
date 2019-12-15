cpu 386
%include "macros.inc"

	extern	__CHK
	extern	GET_FRAME_COUNTER

section .text

__GDECL(___58c60h)
		push    8
		call    near __CHK
		push    edx
		call    near GET_FRAME_COUNTER
		mov     edx, eax
___58c72h:
		call    near GET_FRAME_COUNTER
		cmp     edx, eax
		je      short ___58c72h
		pop     edx
		retn    
