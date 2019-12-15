cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___192d20h
	extern	___13094h
	extern	___192d48h
	extern	___192d70h
	extern	___192d98h
	extern	___192dc0h
	extern	___192de8h

section .text

__GDECL(___2d618h)
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
		mov     eax, ___192d20h
		call    near ___13094h
		mov     edx, 15eaah
		mov     eax, ___192d48h
		call    near ___13094h
		mov     edx, 186aah
		mov     eax, ___192d70h
		call    near ___13094h
		mov     edx, 1aeaah
		mov     eax, ___192d98h
		call    near ___13094h
		mov     edx, 1d6aah
		mov     eax, ___192dc0h
		call    near ___13094h
		mov     edx, 1feaah
		mov     eax, ___192de8h
		call    near ___13094h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
