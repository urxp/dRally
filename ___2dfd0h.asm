cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef0h
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Audio_pushSoundEffect
	extern	___2d294h
	extern	___281d0h
	extern	___27f80h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2d728h
	extern	___2d898h
	extern	___2da10h
	extern	___2db88h

section .text

___2dfbch:
dd	___2e024h
dd	___2e06eh
dd	___2e0b9h
dd	___2e104h
dd	___2e152h
__GDECL(___2dfd0h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		cmp     dword [___1a1ef0h], byte 0
		jle     short ___2e00ch
		push    8000h
		mov     edx, 1ah
		mov     ebx, [___1854b0h]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
___2e00ch:
		mov     ecx, [___1a1ef0h]
		dec     ecx
		cmp     ecx, byte 4
		ja      near ___2e199h
		jmp     near dword [cs:ecx*4+___2dfbch]
___2e024h:
		mov     ecx, 72h
		mov     ebx, 6ch
		xor     eax, eax
		mov     edx, 0f3h
		mov     [___1a1ef0h], eax
		call    near ___2d294h
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 73h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e06eh:
		mov     ebp, 1
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], ebp
		call    near ___2d728h
		mov     eax, ecx
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e0b9h:
		mov     edi, 2
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], edi
		call    near ___2d898h
		mov     eax, 0dah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e104h:
		mov     esi, 3
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], esi
		call    near ___2da10h
		mov     eax, 142h
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e152h:
		mov     ecx, 4
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], ecx
		call    near ___2db88h
		mov     ecx, 72h
		mov     eax, 1aah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2e199h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   
