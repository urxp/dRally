/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___24cc54h_sfx_volume
	extern	dRally_Sound_pushEffect
	extern	___1a1138h__VESA101_BACKGROUND
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h_cdecl
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h_cdecl
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
		mov     edx, 28000h
		mov     ecx, [___24cc54h_sfx_volume]
		push    edx
		xor     ebx, ebx
		mov     edx, 1dh
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101_BACKGROUND]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 253h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 56h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0c6h
		mov     eax, 1ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 2088ch
		mov     ebx, __dfr_181be4h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 25861h
		mov     ebx, press_k
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

___21880h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___21880h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
press_k:
	db 	"Press any key to continue.",0,0
__dfr_181be4h:
	db 	"Gamepad not detected!",0,0,0
*/
