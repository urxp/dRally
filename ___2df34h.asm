cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef0h
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Audio_pushSoundEffect
	extern	___2d728h
	extern	___281d0h
	extern	___27f80h
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___2df34h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, [___1a1ef0h]
		test    ecx, ecx
		jne     short ___2dfb5h
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
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     ebx, 1
		mov     ecx, 72h
		mov     edx, 73h
		mov     [___1a1ef0h], ebx
		call    near ___2d728h
		mov     ebx, 6ch
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2dfb5h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
