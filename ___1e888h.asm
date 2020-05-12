cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd60h
	extern	___196a78h
	extern	___196a84h
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___185a74h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___2b318h
	extern	___58c60h
	extern	___185a34h
	extern	dRally_Sound_setMasterVolume
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___135fch
	extern	___196a7ch
	extern	___1807cch
	extern	___185c0bh
	extern	___1a10fch
	extern	___12e78h
	extern	___1807e8h
	extern	___1a1108h
	extern	___23230h
	extern	___13710h
	extern	___196a80h
	extern	___16e6ch
	extern	___1a1ef8h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1a1ef4h
	extern	dRally_Sound_setPosition
	extern	CONNECTION_TYPE
	extern	___185a24h
	extern	___196a74h
	extern	___5994ch
	extern	___59b3ch
	extern	___2ab50h
	extern	___196ad4h
	extern	___3a6a4h
	extern	___146c4h
	extern	___180b88h
	extern	___1866b8h
	extern	strcmp_
	extern	___2b8ach
	extern	___1c374h
	extern	___180ba0h
	extern	___1866b8h
	extern	___13248h
	extern	___181078h
	extern	___148cch
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___180864h
	extern	___1a1dbah
	extern	___1a01e0h
	extern	___18108ch
	extern	___1a1f63h
	extern	___23488h
	extern	___1e4f8h
	extern	___2415ch
	extern	___1b140h
	extern	___1c178h
	extern	___1d00ch
	extern	___1d2a8h
	extern	___1d9f8h
	extern	___1e09ch
	extern	___1f124h
	extern	___185aach
	extern	___185b6ah
	extern	___185a94h
	extern 	restoreDefaultScreenBuffer
	
section .text

__GDECL(___1e888h_cdecl)
	mov 	eax, [esp+4]
	call 	___1e888h
	retn

___1e868h:
dd	___1ee20h
dd	___1ee5ah
dd	___1efe9h
dd	___1effbh
dd	___1f00dh
dd	___1f01ch
dd	___1f02bh
dd	___1f032h
__GDECL(___1e888h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		cmp     eax, byte 0ffffffffh
		je      near ___1f080h
___1e8a4h:
		mov     edx, 1
		mov     ebx, [___19bd60h]
		mov     [___196a78h], edx
		test    ebx, ebx
		je      near ___1eaddh
		cmp     dword [___196a84h], byte 0
		je      near ___1eaddh
		mov     ebp, 0ffdch
		mov     edi, 640000h
		mov     [___185a74h], edx
		call 	restoreDefaultScreenBuffer

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e8e9h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___185a34h], byte 0
		je      short ___1e8feh
		mov     eax, ebp
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___1e8feh:
		xor     edx, edx
		mov     esi, edi
		mov     [esp], edx
___1e905h:
		xor     eax, eax
		mov     al, [esp]
		mov     ebx, [esp]
		push    eax
		imul    eax, ebx, byte 0ch
		mov     edx, esi
		mov     eax, [eax+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+8]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+0ch]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		inc     ecx
		mov     [esp], ecx
		cmp     ecx, byte 60h
		jl      near ___1e905h
		mov     edx, 80h
		mov     esi, edi
		mov     [esp], edx
___1e9ach:
		xor     eax, eax
		mov     al, [esp]
		mov     ebx, [esp]
		push    eax
		imul    eax, ebx, byte 0ch
		mov     edx, esi
		mov     eax, [eax+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+8]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+0ch]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		inc     ecx
		mov     [esp], ecx
		cmp     ecx, 100h
		jl      near ___1e9ach
		sub     edi, 20000h
		sub     ebp, 51eh
		cmp     edi, 0fffe0000h
		jne     near ___1e8e9h
		mov     ecx, 4b000h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 173h
		call 	__MOVS
		mov     ecx, 6dh
		xor     eax, eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

		cmp     dword [___196a7ch], byte 0
		jne     short ___1ead6h
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
___1ead6h:
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		jmp     short ___1eb0ah
___1eaddh:
		mov     ecx, 2c380h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		call 	__MOVS
___1eb0ah:
		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 2

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		cmp     dword [___19bd60h], byte 0
		je      near ___1edd6h
		cmp     dword [___196a84h], byte 0
		je      near ___1edd6h
		cmp     dword [___196a80h], byte 0
		je      short ___1eb4ah
		call    near ___16e6ch
___1eb4ah:
		mov     dword [___1a1ef8h], 13h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___185a34h], byte 0
		je      short ___1eb71h
		mov     eax, [___1a1ef4h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
___1eb71h:
		xor     edi, edi
		xor     ebp, ebp
___1eb75h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___185a34h], byte 0
		je      short ___1eb8ah
		mov     eax, ebp
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___1eb8ah:
		xor     edx, edx
		mov     esi, edi
		mov     [esp], edx
___1eb91h:
		xor     eax, eax
		mov     al, [esp]
		mov     ebx, [esp]
		push    eax
		imul    eax, ebx, byte 0ch
		mov     edx, esi
		mov     eax, [eax+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+8]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+0ch]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		inc     ecx
		mov     [esp], ecx
		cmp     ecx, byte 60h
		jl      near ___1eb91h
		mov     edx, 80h
		mov     esi, edi
		mov     [esp], edx
___1ec38h:
		xor     eax, eax
		mov     al, [esp]
		mov     ebx, [esp]
		push    eax
		imul    eax, ebx, byte 0ch
		mov     edx, esi
		mov     eax, [eax+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+8]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     eax, [esp+0ch]
		lea     eax, [eax+eax*2]
		mov     edx, esi
		mov     eax, [eax*4+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		inc     ecx
		mov     [esp], ecx
		cmp     ecx, 100h
		jl      near ___1ec38h
		add     edi, 20000h
		add     ebp, 51eh
		cmp     edi, 640000h
		jne     near ___1eb75h
		cmp     dword [___196a7ch], byte 1
		jne     short ___1ed10h
		cmp     dword [CONNECTION_TYPE], byte 2
		je      short ___1ed10h
		xor     ecx, ecx
		mov     [___19bd60h], ecx
		mov     [CONNECTION_TYPE], ecx
___1ed10h:
		mov     ebx, 1
		xor     edi, edi
		mov     ecx, [___196a80h]
		mov     [___196a7ch], edi
		mov     [___185a24h], edi
		mov     [___185a34h], edi
		mov     [___196a74h], ebx
		mov     [___196a84h], edi
		test    ecx, ecx
		je      near ___1edd6h

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

		xor     edx, edx
___1ed4fh:
		cmp     edx, byte 1ch
		je      short ___1ed74h
		cmp     edx, 9ch
		je      short ___1ed74h
		xor     edx, edx

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dl, al
		call    near ___2ab50h
		call    near ___2ab50h
		cmp     edx, byte 1
		jne     short ___1ed4fh
___1ed74h:

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

		mov     ecx, 2c380h
		xor     esi, esi
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     [___196a80h], esi
		mov     [___196ad4h], esi
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     edi, 0d200h
		add     esi, 0d200h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1
		mov     eax, 2

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___1edd6h:
		cmp     dword [___185a24h], byte 0
		jne     short ___1ede6h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     short ___1ee01h
___1ede6h:
		call 	restoreDefaultScreenBuffer
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3a6a4h
	pop 	eax
	pop		ecx
	pop		edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     eax, eax
		mov     [___185a24h], eax
___1ee01h:
		mov     eax, 2
		call    near ___146c4h
		mov     [esp+4], eax
		cmp     eax, byte 7
		ja      near ___1f075h
		jmp     near dword [cs:eax*4+___1e868h]
___1ee20h:
		mov     edx, ___180b88h
		xor     esi, esi
		mov     eax, ___1866b8h+384h
		mov     [___196a78h], esi
		call    near strcmp_
		test    eax, eax
		jne     short ___1ee50h
		mov     edi, 1

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b8ach
	pop		eax
	pop 	ecx
	pop 	edx

		mov     [___185a24h], edi
		jmp     near ___1f075h
___1ee50h:
		call    near ___1c374h
		jmp     near ___1f075h
___1ee5ah:
		xor     eax, eax
		mov     edx, ___180ba0h
		mov     [___196a78h], eax
		mov     eax, ___1866b8h+3b6h
		call    near strcmp_
		test    eax, eax
		jne     near ___1efcch
		mov     eax, 2
		mov     ecx, 50h
		xor     edx, edx
		mov     ebx, 12ch

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0dch
		mov     eax, 0aah
		call    near ___13248h
		mov     ecx, 23adah
		mov     ebx, ___181078h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ebx, 1
		mov     ecx, esp
		mov     edx, 102h
		mov     eax, 0b4h
		mov     [esp], ebx
		call    near ___148cch
		mov     ecx, [esp]
		and     eax, 0ffh
		test    ecx, ecx
		je      near ___1f075h
		test    eax, eax
		je      near ___1f075h
		mov     ebp, ___1a116ch
		xor     edx, edx
		lea     ebx, [ebp+96h]
___1eef6h:
		mov     esi, ebx
		mov     edi, ebp
		inc     edx
		call 	__STRCPY
		add     ebp, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1eef6h
		mov     eax, [___180864h]
		mov     [___1a1dbah], eax
		imul    esi, [___1a1ef8h], byte 6ch
		mov     edi, ___1a1dbah
		add     esi, ___1a01e0h
		mov     ebx, 14h
		call 	__STRCAT
		mov     esi, ___18108ch
		xor     dh, dh
		call 	__STRCAT
		mov     [___1a1f63h], dh
		mov     eax, edi
		mov     edx, 64h
		call    near ___23488h
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		xor     edx, edx
		call    near ___1e4f8h
		mov     [___196a84h], edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		jmp     near ___1f075h
___1efcch:
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___1efdfh
		call    near ___1b140h
		jmp     near ___1f075h
___1efdfh:
		call    near ___1c178h
		jmp     near ___1f075h
___1efe9h:
		xor     ebp, ebp
		mov     [___196a78h], ebp
		call    near ___1d00ch
		jmp     near ___1f075h
___1effbh:
		xor     edi, edi
		mov     [___196a78h], edi
		call    near ___1d2a8h
		jmp     near ___1f075h
___1f00dh:
		xor     esi, esi
		mov     [___196a78h], esi
		call    near ___1d9f8h
		jmp     short ___1f075h
___1f01ch:
		xor     ecx, ecx
		mov     [___196a78h], ecx
		call    near ___1e09ch
		jmp     short ___1f075h
___1f02bh:
		call    near ___1f124h
		jmp     short ___1f075h
___1f032h:
		mov     edx, 0ffffffffh
		xor     ebx, ebx
		xor     ecx, ecx
		mov     [___185aach], ebx
		mov     [esp+4], edx
___1f045h:
		mov     eax, [___185aach]
		cmp     cl, [eax+___185b6ah]
		jne     short ___1f06dh
		mov     edx, [___185a94h]
		dec     edx
		cmp     eax, edx
		jge     short ___1f065h
		inc     eax
		mov     [___185aach], eax
		jmp     short ___1f045h
___1f065h:
		mov     [___185aach], ecx
		jmp     short ___1f045h
___1f06dh:
		xor     ebp, ebp
		mov     [___196a78h], ebp
___1f075h:
		cmp     dword [esp+4], byte 0ffffffffh
		jne     near ___1e8a4h
___1f080h:
		xor     ecx, ecx
		mov     [___196a78h], ecx
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
