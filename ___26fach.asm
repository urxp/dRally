cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___13248h
	extern	___192870h
	extern	___13094h

section .text

__GDECL(___26fach)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		sub     esp, byte 4
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		mov     bl, 5
		sub     bl, [eax*4+___1a01fch]
		mov     edx, [eax*4+___1a01fch]
		mov     [esp], bl
		test    edx, edx
		jne     short ___26febh
		mov     byte [esp], 4
___26febh:
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		xor     ebx, ebx
		mov     bl, [esp]
		mov     eax, ebx
		shl     eax, 4
		sub     eax, ebx
		mov     ebx, ___192870h
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
		add     esp, byte 4
		pop     edx
		pop     ecx
		pop     ebx
		retn    
