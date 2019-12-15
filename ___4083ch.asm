cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243328h
	extern	___243320h
	extern	___243324h

section .text

__GDECL(___4083ch)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, 50h
		xor     edx, edx
		mov     [___243328h], ebx
		mov     [___243320h], ebx
		mov     [___243324h], edx
		pop     edx
		pop     ebx
		retn   
