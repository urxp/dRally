cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___13248h
	extern	___193720h
	extern	___13094h

section .text

__GDECL(___2d054h)
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
		mov     ebx, ___193720h
		shl     eax, 4
		add     ebx, eax
		mov     edx, 136aah
		mov     eax, ebx
		call    near ___13094h
		mov     edx, 15eaah
		lea     eax, [ebx+28h]
		call    near ___13094h
		mov     edx, 186aah
		lea     eax, [ebx+50h]
		call    near ___13094h
		mov     edx, 1aeaah
		lea     eax, [ebx+78h]
		call    near ___13094h
		mov     edx, 1d6aah
		lea     eax, [ebx+0a0h]
		call    near ___13094h
		mov     edx, 1feaah
		lea     eax, [ebx+0c8h]
		call    near ___13094h
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
