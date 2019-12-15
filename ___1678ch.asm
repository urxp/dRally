cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e74h
	extern 	___18d172h
	extern 	___13094h
	extern 	___18d1c2h
	extern 	___18d212h
	extern 	___18d262h
	extern 	___18d2b2h
	extern 	___18d302h
	extern 	___18d352h
	extern 	___18d3a2h
	extern 	___18d3f2h
	extern 	___18d442h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h
	extern 	___59e2ch
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___17324h

section .text

__GDECL(___1678ch)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1f1h
		mov     edx, 83h
		mov     eax, 21h
		call    near ___13248h
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e74h]
		add     ebx, 1a42dh
___167d2h:
		mov     edi, edx
___167d4h:
		mov     al, [esi]
		or      al, al
		je      short ___167dch
		mov     [ebx], al
___167dch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___167d4h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___167d2h
		mov     edx, 154a1h
		mov     eax, ___18d172h
		call    near ___13094h
		mov     edx, 17ca1h
		mov     eax, ___18d1c2h
		call    near ___13094h
		mov     edx, 1a4a1h
		mov     eax, ___18d212h
		call    near ___13094h
		mov     edx, 1cca1h
		mov     eax, ___18d262h
		call    near ___13094h
		mov     edx, 1f4a1h
		mov     eax, ___18d2b2h
		call    near ___13094h
		mov     edx, 21ca1h
		mov     eax, ___18d302h
		call    near ___13094h
		mov     edx, 244a1h
		mov     eax, ___18d352h
		call    near ___13094h
		mov     edx, 26ca1h
		mov     eax, ___18d3a2h
		call    near ___13094h
		mov     edx, 294a1h
		mov     eax, ___18d3f2h
		mov     ecx, 316c0h
		call    near ___13094h
		mov     edx, 2bca1h
		mov     eax, ___18d442h
		mov     ebx, ___180694h
		call    near ___13094h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		xor     ah, ah
		mov     [___59e2ch], ah
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___17324h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
