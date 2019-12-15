cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h
	extern	___180bd8h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h
	extern	___180bech
	extern	___185c0bh
	extern	___1a1108h
	extern	___180848h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___1ca00h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ebx, eax
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		call    near ___13710h
		test    ebx, ebx
		je      short ___1ca63h
		mov     eax, 7
		xor     edx, edx
		call    near ___13710h
___1ca63h:
		push    byte 1
		mov     ecx, 78h
		mov     ebx, 1efh
		mov     edx, 0c6h
		mov     eax, 46h
		call    near ___13248h
		mov     ecx, 20851h
		mov     ebx, ___180bd8h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 25851h
		mov     ebx, ___180bech
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2a851h
		mov     ebx, ___180848h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___5994ch
		call    near ___59b3ch
___1cad8h:
		call    near ___5994ch
		test    al, al
		je      short ___1cad8h
		call    near ___5994ch
		call    near ___59b3ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
