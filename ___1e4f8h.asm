cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___186a3ch
	extern	___180cc0h
	extern	CONNECTION_TYPE
	extern	___185b6ch
	extern	___185b6dh
	extern	___185b6eh
	extern	___185b6fh
	extern	___186a6eh
	extern	___180cd8h
	extern	___185aach
	extern	___196a84h
	extern	___196a78h
	extern	___13710h
	extern	___2415ch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___623d4h
	extern	___199f9ch
	extern	___61cd0h
	extern	___1123ch
	extern	___19bd60h
	extern	___60719h
	extern	___63b20h

section .text

__GDECL(___1e4f8h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, 1
		mov     edi, ___186a3ch
		mov     esi, ___180cc0h
		mov     ecx, [CONNECTION_TYPE]
		xor     ah, ah
		xor     ebx, ebx
		mov     [___185b6ch], ah
		mov     [___185b6dh], ah
		mov     [___185b6eh], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___185b6fh], ah
		mov     edi, ___186a6eh
		mov     esi, ___180cd8h
		mov     [___185aach], ebx
		mov     [___196a84h], edx
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		cmp     ecx, byte 2
		jne     short ___1e568h
		mov     byte [___185b6ch], 1
___1e568h:
		cmp     dword [CONNECTION_TYPE], byte 1
		jne     short ___1e578h
		mov     byte [___185b6dh], 1
___1e578h:
		cmp     dword [CONNECTION_TYPE], byte 3
		jne     short ___1e588h
		mov     byte [___185b6eh], 1
___1e588h:
		cmp     dword [CONNECTION_TYPE], byte 4
		jne     short ___1e598h
		mov     byte [___185b6fh], 1
___1e598h:
		cmp     dword [___196a78h], byte 0
		je      short ___1e5c2h
		mov     edx, 1
		mov     eax, 2
		call    near ___13710h
		xor     edx, edx
		mov     [___196a84h], edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
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

___1e5c2h:
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e61ch
		call    near ___623d4h
		xor     ecx, ecx
		mov     edx, [___199f9ch]
		mov     [___199f9ch], ecx
		call    near ___61cd0h
		test    eax, eax
		jne     short ___1e5ech
		call    near ___1123ch
___1e5ech:
		cmp     dword [___19bd60h], byte 0
		je      short ___1e603h
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e603h

	push 	edx
	push 	ecx
	push 	eax
		call    near ___60719h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e603h:
		cmp     dword [___19bd60h], byte 0
		je      short ___1e61ch
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1e61ch
		xor     eax, eax
		call    near ___63b20h
___1e61ch:
		mov     dword [___19bd60h], 1
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
