cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef0h
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Audio_playSoundEffect
	extern	___2d898h
	extern	___281d0h
	extern	___27f80h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2da10h
	extern	___2db88h
	extern	___2ddc8h

section .text
 
___2e1a0h:
dd	___2e204h
dd	___2e24fh
dd	___2e29ah
dd	___2e2e8h
__GDECL(___2e1b0h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		cmp     dword [___1a1ef0h], byte 5
		jge     short ___2e1ech
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
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
___2e1ech:
		mov     ecx, [___1a1ef0h]
		dec     ecx
		cmp     ecx, byte 3
		ja      near ___2e32fh
		jmp     near dword [cs:ecx*4+___2e1a0h]
___2e204h:
		mov     ebp, 2
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], ebp
		call    near ___2d898h
		mov     eax, 0ah
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
___2e24fh:
		mov     edi, 3
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], edi
		call    near ___2da10h
		mov     eax, ecx
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
___2e29ah:
		mov     esi, 4
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], esi
		call    near ___2db88h
		mov     eax, 0dah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2e2e8h:
		mov     ecx, 5
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ef0h], ecx
		call    near ___2ddc8h
		mov     ecx, 72h
		mov     eax, 142h
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2e32fh:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
