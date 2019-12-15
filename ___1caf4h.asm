cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___24e4d0h
	extern	IPX_CHECK
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h
	extern	___180c20h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h
	extern	___180848h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch
	extern	___61cd0h
	extern	___1123ch
	extern	___19bd60h
	extern	___180c44h
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___180130h
	extern	___1a1dbah
	extern	___180c5ch
	extern	___1a1f63h
	extern	___3f71ch__allocateMemory
	extern	___1a0f9ch
	extern	___23488h
	extern	___58c60h
	extern	___6168ch
	extern	___23594h
	extern	___3f77ch__freeMemory
	extern	___180864h
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___180c88h
	extern	___23230h
	extern	___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	extern	___185b58h
	extern	___185aach
	extern	___185b6ah
	extern	___185b6bh
	extern	___185b6ch
	extern	___185b6dh
	extern	___185b6eh
	extern	___185b6fh
	extern	___135fch
	extern	___1807cch
	extern	___185c0bh
	extern	___1a10fch
	extern	___1807e8h
	extern	___1a1108h

section .text

__GDECL(___1caf4h)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 68h
		mov     edx, [___24e4d0h]
		xor     ebp, ebp
		cmp     edx, byte 2
		jne     near ___1cbdah
		call    near IPX_CHECK
		test    eax, eax
		jne     near ___1cbdah
		mov     ebp, 1
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
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 56h
		call    near ___13710h
		push    ebp
		mov     edx, 0c6h
		mov     eax, 1ch
		call    near ___13248h
		mov     ecx, 20825h
		mov     ebx, ___180c20h
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
___1cbc7h:
		call    near ___5994ch
		test    al, al
		je      short ___1cbc7h
		call    near ___5994ch
		call    near ___59b3ch
___1cbdah:
		test    ebp, ebp
		jne     near ___1cffdh
		cmp     dword [___24e4d0h], byte 2
		jne     short ___1cbf9h
		call    near ___61cd0h
		test    eax, eax
		jne     short ___1cbf9h
		call    near ___1123ch
___1cbf9h:
		mov     ecx, 1
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     [___19bd60h], ecx
		add     esi, 10680h
		add     edi, 10680h
		mov     ecx, 28f00h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 1aeh
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 38h
		call    near ___13710h
		push    byte 1
		mov     edx, 0c6h
		mov     eax, 4bh
		call    near ___13248h
		mov     ecx, 20856h
		mov     ebx, ___180c44h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     ecx, ___1a116ch
		xor     edx, edx
		lea     ebx, [ecx+96h]
___1cc8ch:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1cc8ch
		mov     ebx, ___1a116ch
		mov     al, [___180130h]
		xor     edx, edx
		mov     [___1a1dbah], al
		lea     ecx, [ebx+96h]
___1ccdfh:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1ccdfh
		mov     ecx, 0ah
		mov     edi, ___1a1dbah
		xor     ah, ah
		mov     esi, ___180c5ch
		mov     [___1a1f63h], ah
		mov     eax, 64h
		rep movsd   
		movsw   
		call    near ___3f71ch__allocateMemory
		mov     esi, [___24e4d0h]
		mov     [___1a0f9ch], eax
		cmp     esi, byte 2
		jne     short ___1cd5ch
		mov     ebx, 7
		xor     edx, edx
		call    near ___23488h
___1cd5ch:
		mov     eax, ___1a116ch
		add     eax, 96h
		xor     ebp, ebp
		mov     [esp+64h], eax
___1cd6ch:
		call    near ___58c60h
		call    near ___6168ch
		mov     edx, 8
		mov     eax, [___1a0f9ch]
		call    near ___23594h
		test    eax, eax
		je      near ___1ce1ah
		mov     ecx, 64h
		mov     edi, esp
		mov     esi, [___1a0f9ch]
		mov     ebx, [esp+64h]
		call 	__MOVS
		xor     edx, edx
		mov     ecx, ___1a116ch
___1cdb5h:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1cdb5h
		mov     esi, esp
		mov     edi, ___1a1dbah
		xor     dl, dl
		call 	__STRCPY
		mov     [___1a1f63h], dl
___1ce1ah:
		inc     ebp
		cmp     ebp, byte 1eh
		jl      near ___1cd6ch
		mov     eax, [___1a0f9ch]
		mov     ecx, ___1a116ch
		call    near ___3f77ch__freeMemory
		xor     edx, edx
		lea     ebx, [ecx+96h]
___1ce3bh:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1ce3bh
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1dbah
		add     esi, eax
		mov     ebx, 6
		call 	__STRCAT
		mov     esi, ___180c88h
		xor     dh, dh
		call 	__STRCAT
		mov     [___1a1f63h], dh
		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		call    near ___23230h
		call    near ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
		xor     edi, edi
		xor     bl, bl
		mov     ebp, [___24e4d0h]
		mov     [___185b58h], bl
		mov     bh, 1
		mov     [___185aach], edi
		mov     [___185b6ah], bh
		mov     [___185b6bh], bh
		mov     [___185b6ch], bl
		mov     [___185b6dh], bl
		mov     [___185b6eh], bl
		mov     [___185b6fh], bl
		cmp     ebp, byte 2
		jne     short ___1cf62h
		mov     [___185b6ch], bh
___1cf62h:
		cmp     dword [___24e4d0h], byte 1
		jne     short ___1cf72h
		mov     byte [___185b6dh], 1
___1cf72h:
		cmp     dword [___24e4d0h], byte 3
		jne     short ___1cf82h
		mov     byte [___185b6eh], 1
___1cf82h:
		cmp     dword [___24e4d0h], byte 4
		jne     short ___1cf92h
		mov     byte [___185b6fh], 1
___1cf92h:
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax
		call    near ___135fch
		mov     ecx, 390a3h
		mov     ebx, ___1807cch
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		call    near ___12e78h
		mov     ecx, 390d9h
		mov     ebx, ___1807e8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___23230h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___59b3ch
		call    near ___5994ch
		mov     eax, 1
		add     esp, byte 68h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1cffdh:
		xor     eax, eax
		add     esp, byte 68h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
