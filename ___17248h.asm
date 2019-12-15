cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___18c4f2h
	extern 	___13094h
	extern 	___18c542h
	extern 	___18c592h
	extern 	___18c5e2h
	extern 	___18c632h
	extern 	___18c682h
	extern 	___18c6d2h
	extern 	___18c722h
	extern 	___18c772h
	extern 	___18c7c2h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h

section .text

__GDECL(___17248h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1cah
		mov     edx, 83h
		mov     eax, 2dh
		call    near ___13248h
		mov     edx, 160bch
		mov     eax, ___18c4f2h
		call    near ___13094h
		mov     edx, 188bch
		mov     eax, ___18c542h
		call    near ___13094h
		mov     edx, 1b0bch
		mov     eax, ___18c592h
		call    near ___13094h
		mov     edx, 1d8bch
		mov     eax, ___18c5e2h
		call    near ___13094h
		mov     edx, 200bch
		mov     eax, ___18c632h
		call    near ___13094h
		mov     edx, 228bch
		mov     eax, ___18c682h
		call    near ___13094h
		mov     edx, 250bch
		mov     eax, ___18c6d2h
		call    near ___13094h
		mov     edx, 278bch
		mov     eax, ___18c722h
		call    near ___13094h
		mov     edx, 2a0bch
		mov     eax, ___18c772h
		mov     ecx, 316c0h
		call    near ___13094h
		mov     edx, 2c8bch
		mov     eax, ___18c7c2h
		mov     ebx, ___180694h
		call    near ___13094h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		pop     edx
		pop     ecx
		pop     ebx
		retn    
