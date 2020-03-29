cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ec4h
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___25e40h
	extern	___281d0h
	extern	___27f80h
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___283ech)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, [___1a1ec4h]
		test    ecx, ecx
		jne     short ___2846ah
		push    8000h
		mov     eax, 1
		mov     edx, [___1854b0h]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 1ah
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ebx, 1
		mov     ecx, 72h
		mov     edx, 73h
		mov     [___1a1ec4h], ebx
		call    near ___25e40h
		mov     ebx, 80h
		xor     eax, eax
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2846ah:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
