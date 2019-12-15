cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___193cc0h
	extern	___13094h
	extern	___193ce8h
	extern	___193d10h
	extern	___193d38h
	extern	___193d60h
	extern	___193d88h

section .text

__GDECL(___2d20ch)
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
		mov     eax, ___193cc0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___193ce8h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___193d10h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___193d38h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___193d60h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___193d88h
		call    near ___13094h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
