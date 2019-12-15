cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___180124h
	extern 	___10240h

section .text

__GDECL(___10474h)
		push    8
		call    near __CHK
		push    edx
		mov     edx, eax
		mov     eax, ___180124h
		call    near ___10240h
		pop     edx
		retn    
