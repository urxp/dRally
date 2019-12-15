cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___192f00h
	extern	___13094h
	extern	___192f28h
	extern	___192f50h
	extern	___192f78h
	extern	___192fa0h
	extern	___192fc8h

section .text

__GDECL(___2d6a0h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___192f00h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___192f28h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___192f50h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___192f78h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___192fa0h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___192fc8h
		call    near ___13094h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
