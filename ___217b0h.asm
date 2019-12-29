cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1854bch
	extern	___24cc54h
	extern	dRally_Audio_playSoundEffect
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h
	extern	___181be4h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h
	extern	___180848h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___217b0h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    8000h
		mov     eax, 1
		mov     edx, [___1854bch]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 1dh
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 253h
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 56h
		call    near ___13710h
		push    byte 1
		mov     edx, 0c6h
		mov     eax, 1ch
		call    near ___13248h
		mov     ecx, 2088ch
		mov     ebx, ___181be4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, 25861h
		mov     ebx, ___180848h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___5994ch
		call    near ___59b3ch
___21880h:
		call    near ___5994ch
		test    al, al
		je      short ___21880h
		call    near ___5994ch
		call    near ___59b3ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
