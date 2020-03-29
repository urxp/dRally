cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a116ch
	extern	___185a58h
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___180864h
	extern	___1a1ef8h
	extern	___1a1dbah
	extern	___1a01e0h
	extern	___180ca4h
	extern	___1a1f63h
	extern	___23488h
	extern	___180130h
	extern	___1e62ch
	extern	___196a84h
	extern	___135fch
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___19bd60h
	extern	CONNECTION_TYPE
	extern	___2415ch
	extern	___13710h
	
section .text

__GDECL(___1d4e8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, ___1a116ch
		xor     edx, edx
		lea     ebx, [ecx+96h]
		mov     [___185a58h], edx
___1d50ah:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1d50ah
		mov     edx, [___180864h]
		mov     ebx, [___1a1ef8h]
		mov     [___1a1dbah], edx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		mov     esi, ___1a01e0h
		shl     edx, 2
		mov     edi, ___1a1dbah
		add     esi, edx
		call 	__STRCAT
		mov     esi, ___180ca4h
		mov     ebx, 9
		call 	__STRCAT
		xor     ah, ah
		mov     edx, 64h
		mov     [___1a1f63h], ah
		mov     eax, edi
		mov     ecx, ___1a116ch
		call    near ___23488h
		lea     ebx, [ecx+96h]
		xor     edx, edx
___1d5e4h:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1d5e4h
		mov     ecx, 6dh
		mov     al, [___180130h]
		mov     edx, 173h
		mov     [___1a1dbah], al
		xor     eax, eax
		xor     ebx, ebx
		call    near ___1e62ch
		mov     [___196a84h], ebx
		xor     eax, eax
		mov     ebx, 27fh
		call    near ___135fch
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     ecx, ecx
		mov     edx, 1
		mov     [___19bd60h], ecx
		mov     [CONNECTION_TYPE], ecx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     eax, 2
		call    near ___13710h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
