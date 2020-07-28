cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___18c1d2h
	extern 	___13094h_cdecl
	extern 	___18c222h
	extern 	___18c272h
	extern 	___18c2c2h
	extern 	___18c312h
	extern 	___18c362h
	extern 	___18c3b2h
	extern 	___18c402h
	extern 	___18c452h
	extern 	___18c4a2h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl

section .text

__GDECL(___1716ch)
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
		mov     eax, ___18c1d2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 188bch
		mov     eax, ___18c222h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1b0bch
		mov     eax, ___18c272h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d8bch
		mov     eax, ___18c2c2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 200bch
		mov     eax, ___18c312h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 228bch
		mov     eax, ___18c362h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 250bch
		mov     eax, ___18c3b2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 278bch
		mov     eax, ___18c402h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 2a0bch
		mov     eax, ___18c452h
		mov     ecx, 316c0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 2c8bch
		mov     eax, ___18c4a2h
		mov     ebx, ___180694h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
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
