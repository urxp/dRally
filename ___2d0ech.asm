cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___193db0h
	extern	___13094h_cdecl

section .text

__GDECL(___2d0ech_cdecl)
	mov 	eax, [esp+4]
	call 	___2d0ech
	retn

__GDECL(___2d0ech)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     esi, eax
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     ebx, esi
		mov     eax, ebx
		shl     eax, 4
		sub     eax, ebx
		mov     ebx, ___193db0h
		shl     eax, 4
		add     ebx, eax
		mov     edx, 136aah
		mov     eax, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx

		mov     edx, 15eaah
		lea     eax, [ebx+28h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		lea     eax, [ebx+50h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		lea     eax, [ebx+78h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		lea     eax, [ebx+0a0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		lea     eax, [ebx+0c8h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
