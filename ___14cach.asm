cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e74h
	extern 	___18ce52h
	extern 	___13094h
	extern 	___18cea2h
	extern 	___18cef2h
	extern 	___18cf42h
	extern 	___18cf92h
	extern 	___18cfe2h
	extern 	___18d032h
	extern 	___18d082h
	extern 	___18d0d2h
	extern 	___18d122h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl

section .text

__GDECL(___14cach)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, 83h
		mov     eax, 21h
		call    near ___13248h
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e74h]
		add     ebx, 1a42dh
___14cf2h:
		mov     edi, edx
___14cf4h:
		mov     al, [esi]
		or      al, al
		je      short ___14cfch
		mov     [ebx], al
___14cfch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___14cf4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___14cf2h
		mov     edx, 154a1h
		mov     eax, ___18ce52h
		call    near ___13094h
		mov     edx, 17ca1h
		mov     eax, ___18cea2h
		call    near ___13094h
		mov     edx, 1a4a1h
		mov     eax, ___18cef2h
		call    near ___13094h
		mov     edx, 1cca1h
		mov     eax, ___18cf42h
		call    near ___13094h
		mov     edx, 1f4a1h
		mov     eax, ___18cf92h
		call    near ___13094h
		mov     edx, 21ca1h
		mov     eax, ___18cfe2h
		call    near ___13094h
		mov     edx, 244a1h
		mov     eax, ___18d032h
		call    near ___13094h
		mov     edx, 26ca1h
		mov     eax, ___18d082h
		call    near ___13094h
		mov     edx, 294a1h
		mov     eax, ___18d0d2h
		mov     ecx, 316c0h
		call    near ___13094h
		mov     edx, 2bca1h
		mov     eax, ___18d122h
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

		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
