cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd60h
	extern	___1a116ch
	extern	___185a58h
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___1a1dbah
	extern	___180864h
	extern	___180ca4h
	extern	___1a1f63h
	extern	___23488h
	extern	___180130h
	extern	___186a3ch
	extern	___180cc0h
	extern	___135fch
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___61278h
	extern	___623d4h
	extern	___186a6eh
	extern	___180cd8h
	extern	___185b58h
	extern	___180cf0h
	extern	___185b6ah
	extern	___185b6bh
	extern	___185b6ch
	extern	___185b6dh
	extern	___185b6eh
	extern	___24e4d0h
	extern	___186aa0h
	extern	___185b6fh
	extern	___2415ch
	extern	___13710h
	extern	___3ab5ch
	extern	___199f9ch
	extern	___1a020ch
	extern	___2b5f0h
	extern	___1caf4h
	extern	___180d04h

section .text

__GDECL(___1d00ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, [___19bd60h]
		test    edx, edx
		je      near ___1d21eh
		mov     ecx, ___1a116ch
		xor     esi, esi
		xor     edx, edx
		lea     ebx, [ecx+96h]
		mov     [___185a58h], esi
___1d03eh:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1d03eh
		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		mov     esi, ___1a01e0h
		sub     edx, ebx
		mov     edi, ___1a1dbah
		shl     edx, 2
		mov     eax, [___180864h]
		add     esi, edx
		mov     [___1a1dbah], eax
		call 	__STRCAT
		mov     esi, ___180ca4h
		mov     ebx, 6
		call 	__STRCAT
		xor     ah, ah
		mov     edx, 64h
		mov     [___1a1f63h], ah
		mov     eax, edi
		call    near ___23488h
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___1d116h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1d116h
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		mov     al, [___180130h]
		mov     edi, ___186a3ch
		mov     [___1a1dbah], al
		xor     eax, eax
		mov     esi, ___180cc0h
		call    near ___135fch
		call    near ___23230h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___61278h
		call    near ___623d4h
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     dl, 1
		mov     edi, ___186a6eh
		mov     esi, ___180cd8h
		mov     [___185b58h], dl
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		xor     dh, dh
		mov     esi, ___180cf0h
		mov     [___185b6ah], dh
		mov     [___185b6bh], dh
		mov     [___185b6ch], dl
		mov     [___185b6dh], dl
		xor     edi, edi
		mov     [___185b6eh], dl
		mov     [___19bd60h], edi
		mov     [___24e4d0h], edi
		mov     edi, ___186aa0h
		mov     [___185b6fh], dl
		mov     edx, 1
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		call    near ___2415ch
		mov     eax, 2
		call    near ___13710h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     dword [___1a1ef8h], 13h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1d21eh:
		mov     eax, 2
		call    near ___13710h
		xor     eax, eax
		call    near ___3ab5ch
		test    eax, eax
		je      short ___1d29fh
		mov     dword [___24e4d0h], 2
		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		xor     ecx, ecx
		sub     edx, ebx
		mov     [___199f9ch], ecx
		mov     ecx, [edx*4+___1a020ch]
		call    near ___2415ch
		mov     ebx, [___1a1ef8h]
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		mov     [edx*4+___1a020ch], ecx
		call    near ___2b5f0h
		call    near ___1caf4h
		test    eax, eax
		je      short ___1d29fh
		mov     edi, ___186aa0h
		mov     esi, ___180d04h
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
___1d29fh:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
