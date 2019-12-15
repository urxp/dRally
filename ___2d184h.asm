cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___193bd0h
	extern	___13094h
	extern	___193bf8h
	extern	___193c20h
	extern	___193c48h
	extern	___193c70h
	extern	___193c98h
	
section .text

__GDECL(___2d184h)
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
		mov     eax, ___193bd0h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___193bf8h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___193c20h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___193c48h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___193c70h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___193c98h
		call    near ___13094h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
