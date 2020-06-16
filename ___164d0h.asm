cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___18bb92h
	extern 	___13094h
	extern 	___18bbe2h
	extern 	___18bc32h
	extern 	___18bc82h
	extern 	___18bcd2h
	extern 	___18bd22h
	extern 	___18bd72h
	extern 	___18bdc2h
	extern 	___18be12h
	extern 	___18be62h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl

section .text

__GDECL(___164d0h)
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
		mov     eax, ___18bb92h
		call    near ___13094h
		mov     edx, 188bch
		mov     eax, ___18bbe2h
		call    near ___13094h
		mov     edx, 1b0bch
		mov     eax, ___18bc32h
		call    near ___13094h
		mov     edx, 1d8bch
		mov     eax, ___18bc82h
		call    near ___13094h
		mov     edx, 200bch
		mov     eax, ___18bcd2h
		call    near ___13094h
		mov     edx, 228bch
		mov     eax, ___18bd22h
		call    near ___13094h
		mov     edx, 250bch
		mov     eax, ___18bd72h
		call    near ___13094h
		mov     edx, 278bch
		mov     eax, ___18bdc2h
		call    near ___13094h
		mov     edx, 2a0bch
		mov     eax, ___18be12h
		mov     ecx, 316c0h
		call    near ___13094h
		mov     edx, 2c8bch
		mov     eax, ___18be62h
		mov     ebx, ___180694h
		call    near ___13094h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		pop     edx
		pop     ecx
		pop     ebx
		retn    
