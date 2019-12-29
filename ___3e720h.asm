cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___3e3cch
	extern	___3e164h
	extern	___3e1c4h
	extern	___1a202fh
	extern	___199fa0h
	extern	__STOSB
	extern	___1a2148h
	extern	___2415ch
	extern	CONFIG_READ
	extern	___1a1f3ch
	extern	___3aaf8h
	extern	___2432c8h
	extern	CONFIG_WRITE
	extern	___182bf8h
	extern	printf_
	extern	___181c9ch
	extern	___3d908h
	extern	___181ca8h
	extern	dRally_Audio_load
	extern	___24cc58h
	extern	dRally_Audio_setMusicVolume
	extern	___24cc54h
	extern	dRally_Audio_setEffectVolume
	extern	dRally_Audio_setPosition
	extern	dRally_Audio_setSampleRate
	extern	dRally_Audio_play
	;extern	___659b8h
	extern	___196abch
	extern	___1a2011h
	extern	___196abdh
	extern	___1a2012h
	extern	___196abeh
	extern	___19bd58h
	extern	___1a2013h
	extern	___196abfh
	extern	___196ab8h
	extern	___1a2014h
	extern	___186cc6h
	extern	___181c30h
	extern	___596f0h
	extern	___181c4ch
	extern	___196a90h
	extern	___187432h
	extern	___1811c8h
	extern	srand_
	extern	___606dfh
	extern	___12c38h__VESA101_CHECKBANKS
	extern	VGA3_SETMODE
	extern	___182c24h
	extern	___182cb8h
	extern	___64a28h_cdecl
	extern	___5ec04h_freeMemPool
	extern	___5a101h
	extern	exit_
	extern	___605deh
	extern	___117d4h
	extern	___3d38ch
	extern	___3d890h
	extern	___117f4h
	extern	___1240ch
	extern	___117c8h
	extern	___24548h
	extern	___2faf0h
	extern	___3d2bch
	extern	___12940h
	extern	___1a1ef8h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___11564h
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___180130h
	extern	___1a0220h
	extern	___1a01e0h
	extern	___1a116ch
	extern	___1a1f4dh
	extern	___1a1dbah
	extern	___182d08h
	extern	___1a1f63h
	extern	___1a1f4fh
	extern	___182d3ch
	extern	___1a1f4eh
	extern	___182d78h
	extern	___135fch
	extern	___23230h
	extern	___13710h
	extern	___196d84h
	extern	___185a2ch
	extern	___196a84h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2b318h
	extern	___58c60h
	extern	___13a98h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___3a7e0h
	extern	___649a8h_cdecl
	extern	___1a1ef4h
	extern	dRally_Audio_setMasterVolume
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h
	extern	___3e4a0h
	extern	___13248h
	extern	___182db8h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___180694h
	extern	___185ba9h
	extern	___1a10cch
	extern	___13bd4h
	extern	___1854bch
	extern	dRally_Audio_playSoundEffect
	extern	___5994ch
	extern	___59b3ch
	extern	___2ab50h
	extern	___194a8h
	extern	___1e888h
	extern	___218b4h
	extern	___22a80h
	extern	___3d4f0h
	extern	___3da48h
	extern	___182de4h
	extern	___148cch
	extern	___19bd60h
	extern	___180ba0h
	extern	___186a6eh
	extern	strcmp_
	extern	___180864h
	extern	___180ca4h
	extern	___23488h
	extern	___18108ch
	extern	___24e4d0h
	extern	___61278h
	extern	___623d4h
	extern	___3d79ch
	extern	___12200h
	extern	___12a54h
	extern	___24ec0h
	extern	___2fc50h
	extern 	restoreDefaultScreenBuffer
	extern 	restoreDefaultScreenBufferA
	extern 	VESA101_SETMODE
	extern 	getTimerTicks

section .text

___3e700h:
dd	___3ef4dh
dd	___3ee58h
dd	___3ef4dh
dd	___3ef57h
dd	___3ef5eh
dd	___3ef6eh
dd	___3ef75h
dd	___3ef7ch
__GDECL(___3e720h)
		push    58h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		xor     edx, edx
		mov     ecx, 4eh
		mov     [esp+24h], edx
		mov     [esp+0ch], edx
		mov     [esp+18h], ecx
		call    near ___3e3cch
		call    near ___3e164h
		call    near ___3e1c4h
		mov     ecx, 13h
		mov     eax, ___1a202fh
		mov     [___199fa0h], edx
		call    near __STOSB
		xor     ah, ah
		mov     esi, 0afh
		mov     [___1a2148h], ah
		call    near ___2415ch
		call    near CONFIG_READ
		mov     eax, [___1a1f3ch]
		mov     ebp, ___3aaf8h
		inc     eax
		mov     [___2432c8h], ebp
		mov     [___1a1f3ch], eax
		call    near CONFIG_WRITE
		push    ___182bf8h
		mov     [esp+24h], esi
		call    near printf_
		add     esp, byte 4
		mov     ebx, 2
		mov     ecx, ___181c9ch
		call    near ___3d908h
		push    byte 5
		mov     edx, ___181ca8h
		mov     eax, 1

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_load
	add 	esp, 14h
	
		mov     eax, [___24cc58h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMusicVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [___24cc54h]
	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Audio_setEffectVolume
	add 	esp, 4
	pop		edx
	pop 	ecx
		mov     eax, 2d00h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 5622h		;; 22050 Hz
		;mov     eax, 0ac44h		;; 44100 Hz
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Audio_setSampleRate
	add 	esp, 4
	pop 	ecx
	pop 	edx
		call    near dRally_Audio_play
		;mov     eax, 1
		;call    near ___659b8h
		mov     al, [___196abch]
		mov     [___1a2011h], al
		mov     al, [___196abdh]
		mov     edx, 4
		mov     [___1a2012h], al
		mov     al, [___196abeh]
		mov     ebx, [___19bd58h]
		mov     [___1a2013h], al
		mov     al, [___196abfh]
		mov     [___196ab8h], edx
		mov     [___1a2014h], al
		cmp     ebx, byte 1
		je      short ___3e847h
		cmp     ebx, byte 2
		jne     short ___3e860h
___3e847h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c30h
		call    near ___596f0h
		rep movsd   
		movsb   
		jmp     short ___3e873h
___3e860h:
		mov     ecx, 6
		mov     edi, ___186cc6h
		mov     esi, ___181c4ch
		rep movsd   
		movsw   
___3e873h:
		cmp     dword [___196a90h], byte 0
		jne     short ___3e88bh
		mov     edi, ___187432h
		mov     esi, ___1811c8h
		movsd   
		movsd   
		movsd   
		movsw   
___3e88bh:
		call 	getTimerTicks
		call    near srand_
		call    near ___606dfh
		call 	VESA101_SETMODE
		call    near ___12c38h__VESA101_CHECKBANKS
		test    eax, eax
		je      short ___3e8e7h
		call    near VGA3_SETMODE
		push    ___182c24h
		call    near printf_
		add     esp, byte 4
		push    ___182cb8h
		call    near printf_
		add     esp, byte 4
	push 	eax
	push 	ecx
	push 	edx
		call    near ___64a28h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax
		call    near ___5ec04h_freeMemPool
		call    near ___5a101h
		mov     eax, 70h
		call    near exit_
___3e8e7h:
		mov     eax, 3ch
		;xor     ebx, ebx
		xor     edx, edx
		call    near ___605deh
		call    near ___117d4h
		call    near ___3d38ch 		;; APOGEE, GT, REMEDY
		call    near ___3d890h
		call    near ___117f4h
		call    near ___1240ch
		call    near ___117c8h
		call    near ___24548h
		call    near ___2faf0h
		call    near ___3d2bch
		call    near ___12940h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+28h], eax
		fild    word [esp+28h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+2ch], eax
		fild    word [esp+2ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+30h], eax
		fild    word [esp+30h]
		sub     esp, byte 4
		fstp    dword [esp]
		mov     ecx, 4b000h
		call    near ___11564h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		xor     edi, edi
		mov     dl, [___180130h]
		mov     [eax*4+___1a0220h], edi
		mov     [esp+8], edi
		mov     [eax*4+___1a01e0h], dl
		xor     eax, eax
___3e9dfh:
		mov     dl, [___180130h]
		mov     [eax+___1a116ch], dl
		mov     edx, [esp+8]
		inc     edx
		xor     bl, bl
		add     eax, 96h
		mov     [edx+___1a1f4dh], bl
		mov     [esp+8], edx
		cmp     edx, byte 16h
		jl      short ___3e9dfh
		mov     ecx, 0dh
		mov     edi, ___1a1dbah
		mov     esi, ___182d08h
		mov     bh, 1
		rep movsd   
		mov     edx, ___1a116ch
		xor     ecx, ecx
		mov     [___1a1f63h], bh
		mov     [esp+8], ecx
		lea     ecx, [edx+96h]
___3ea30h:
		mov     esi, ecx
		mov     edi, edx
		call 	__STRCPY
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     edx, 96h
		add     ecx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      short ___3ea30h
		mov     ecx, 0eh
		mov     edi, ___1a1dbah
		mov     esi, ___182d3ch
		rep movsd   
		movsw   
		mov     cl, 1
		xor     ebp, ebp
		mov     [___1a1f63h], cl
		mov     ecx, ___1a116ch
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eaa4h:
		mov     esi, edx
		mov     edi, ecx
		call 	__STRCPY
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      short ___3eaa4h
		mov     byte [___1a1f63h], 1
		xor     ecx, ecx
		mov     al, [___180130h]
		mov     [esp+8], ecx
		mov     ecx, ___1a116ch
		mov     [___1a1dbah], al
		lea     edx, [ecx+96h]
___3eb10h:
		mov     esi, edx
		mov     edi, ecx
		call 	__STRCPY
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		add     ecx, 96h
		add     edx, 96h
		inc     esi
		mov     al, [eax+___1a1f4fh]
		mov     [esp+8], esi
		mov     [esi+___1a1f4dh], al
		cmp     esi, byte 15h
		jl      short ___3eb10h
		mov     ecx, 0fh
		mov     edi, ___1a1dbah
		mov     esi, ___182d78h
		mov     al, 1
		xor     ebp, ebp
		rep movsd   
		movsw   
		movsb   
		mov     [___1a1f63h], al
		mov     ecx, ___1a116ch
		mov     [esp+8], ebp
		lea     edx, [ecx+96h]
___3eb84h:
		mov     esi, edx
		mov     edi, ecx
		call 	__STRCPY
		mov     eax, [esp+8]
		mov     esi, [esp+8]
		mov     al, [eax+___1a1f4fh]
		add     ecx, 96h
		mov     [esi+___1a1f4eh], al
		lea     eax, [esi+1]
		add     edx, 96h
		mov     [esp+8], eax
		cmp     eax, byte 15h
		jl      short ___3eb84h
		mov     ecx, 6dh
		mov     al, [___180130h]
		mov     ebx, 27fh
		mov     [___1a1dbah], al
		mov     ah, 1
		mov     edx, 173h
		mov     [___1a1f63h], ah
		xor     eax, eax
		call    near ___135fch
		call    near ___23230h
		cmp     dword [esp+0ch], byte 0
		jne     near ___3efdch
		mov     eax, [esp+20h]
		mov     edx, [esp+20h]
		add     eax, byte 38h
		add     edx, byte 12h
		mov     [esp+4], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+18h]
		shl     eax, 7
		add     eax, esi
		mov     edx, [esp+20h]
		add     eax, byte 28h
		add     edx, byte 32h
		mov     [esp+10h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		mov     ebp, [esp+18h]
		add     eax, 0a6h
		add     ebp, 8ch
		mov     [esp+14h], eax
___3ec59h:
		mov     ecx, 2c380h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		mov     edx, 1
		call 	__MOVS
		xor     eax, eax
		call    near ___13710h
		cmp     dword [___196d84h], byte 0
		jne     short ___3eca8h
		cmp     dword [___185a2ch], byte 0
		je      near ___3edeah
___3eca8h:
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     near ___3edeah
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___2b318h
		mov     [esp+1ch], ebx
		mov     [esp], ebx
___3ecc7h:
		call    near ___58c60h
		mov     eax, [esp+1ch]
		mov     edx, eax
		mov     ecx, 2
		sar     edx, 1fh
		idiv    ecx
		test    edx, edx
		je      short ___3ece7h
		xor     eax, eax
		call    near ___13a98h
___3ece7h:
		xor     edi, edi
		mov     esi, [esp]
		mov     [esp+8], edi
___3ecf0h:
		xor     eax, eax
		mov     al, [esp+8]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     eax, [esp+8]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+8], eax
		cmp     eax, dword 100h
		jl      near ___3ecf0h
		mov     ebx, [esp+1ch]
		mov     edx, [esp+2]
		inc     ebx
		add     edx, byte 2
		mov     [esp+1ch], ebx
		mov     [esp+2], dx
		cmp     ebx, byte 32h
		jl      near ___3ecc7h
		xor     esi, esi
		mov     edi, [___185a2ch]
		mov     [___196d84h], esi
		test    edi, edi
		je      short ___3edeah
		mov     ecx, 4b000h
		mov     edi, [___1a1100h__VESA101h_DefaultScreenBuffer]
		mov     [___185a2ch], esi
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		call 	__MOVS
		call 	restoreDefaultScreenBuffer
		call 	restoreDefaultScreenBufferA
___3edeah:
		cmp     dword [esp+24h], byte 0
		je      short ___3ee31h
		mov     ebx, [___196a84h]
		test    ebx, ebx
		jne     short ___3ee31h
		call 	restoreDefaultScreenBuffer
		mov     eax, 0ffffffffh
		call    near ___3a7e0h
	push 	eax
	push 	ecx
	push 	edx
		call    near ___649a8h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax
		call    near dRally_Audio_play
		mov     eax, [___1a1ef4h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 10000h
		mov     [esp+24h], ebx
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___3ee31h:
		cmp     dword [___196a84h], byte 0
		jne     short ___3ee3fh
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___3ee3fh:
		xor     eax, eax
		call    near ___146c4h
		inc     eax
		cmp     eax, byte 7
		ja      near ___3efd1h
		jmp     near dword [cs:eax*4+___3e700h]
___3ee58h:
		call    near ___3e4a0h
		test    eax, eax
		jne     near ___3ef43h
		mov     ecx, 61h
		xor     edx, edx
		mov     ebx, 1e4h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+24h]
		mov     eax, [esp+1ch]
		call    near ___13248h
		mov     ecx, [esp+10h]
		mov     ebx, ___182db8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, [esp+14h]
		mov     ebx, ___180694h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     edx, [esp+4]
		mov     eax, ebp
		call    near ___13bd4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     esi, 1dh
___3eecah:
		push    8000h
		mov     eax, [___1854bch]
		mov     ecx, [___24cc54h]
		mov     edx, esi
		push    eax
		xor     ebx, ebx
		mov     eax, 1
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		call    near ___5994ch
		call    near ___59b3ch
		xor     bh, bh
___3eef5h:
		cmp     bh, 1ch
		je      short ___3ef22h
		cmp     bh, 9ch
		je      short ___3ef22h
		call    near ___5994ch
		mov     bl, al
		mov     edx, [esp+4]
		mov     bh, al
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, ebp
		call    near ___13bd4h
		cmp     bl, 1
		jne     short ___3eef5h
___3ef22h:
		call    near ___5994ch
		call    near ___59b3ch
		call    near ___3e4a0h
		test    eax, eax
		jne     short ___3ef3ah
		cmp     bh, 1
		jne     short ___3eecah
___3ef3ah:
		cmp     bh, 1
		je      near ___3efd1h
___3ef43h:
		call    near ___194a8h
		jmp     near ___3efd1h
___3ef4dh:
		call    near ___1e888h
		jmp     near ___3efd1h
___3ef57h:
		call    near ___218b4h
		jmp     short ___3efd1h
___3ef5eh:
		mov     edi, 1
		call    near ___22a80h
		mov     [esp+24h], edi
		jmp     short ___3efd1h
___3ef6eh:
		call    near ___3d4f0h
		jmp     short ___3efd1h
___3ef75h:
		call    near ___3da48h
		jmp     short ___3efd1h
___3ef7ch:
		mov     ecx, 50h
		xor     edx, edx
		xor     eax, eax
		mov     ebx, 12ch
		call    near ___13710h
		push    byte 1
		mov     edx, 0c8h
		mov     eax, 0aah
		call    near ___13248h
		mov     ecx, 208fdh
		mov     ebx, ___182de4h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		lea     ecx, [esp+0ch]
		mov     ebx, 1
		mov     edx, 0eeh
		mov     eax, 0b4h
		call    near ___148cch
___3efd1h:
		cmp     dword [esp+0ch], byte 0
		je      near ___3ec59h
___3efdch:
		cmp     dword [___19bd60h], byte 0
		je      near ___3f1bah
		mov     edx, ___180ba0h
		mov     eax, ___186a6eh
		call    near strcmp_
		mov     edx, [___1a1ef8h]
		mov     ecx, eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		test    ecx, ecx
		jne     near ___3f131h
		mov     edi, ___1a1dbah
		mov     eax, [___180864h]
		mov     ebx, 14h
		mov     [___1a1dbah], eax
		call 	__STRCAT
		mov     esi, ___180ca4h
		xor     dh, dh
		call 	__STRCAT
		mov     [___1a1f63h], dh
		mov     eax, edi
		mov     edx, 64h
		call    near ___23488h
		mov     eax, [___180864h]
		mov     edx, [___1a1ef8h]
		mov     [___1a1dbah], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		call 	__STRCAT
		mov     esi, ___18108ch
		xor     bl, bl
		call 	__STRCAT
		mov     ecx, [___24e4d0h]
		mov     [___1a1f63h], bl
		cmp     ecx, byte 2
		jne     short ___3f123h
		mov     ebx, 6
		mov     edx, 64h
		mov     eax, edi
		jmp     short ___3f19dh
___3f123h:
		mov     ebx, 9
		mov     edx, 64h
		mov     eax, edi
		jmp     short ___3f19dh
___3f131h:
		mov     edi, ___1a1dbah
		mov     eax, [___180864h]
		mov     ebx, 6
		mov     [___1a1dbah], eax
		call 	__STRCAT
		mov     esi, ___180ca4h
		xor     dl, dl
		call 	__STRCAT
		mov     [___1a1f63h], dl
		mov     eax, edi
		mov     edx, 64h
___3f19dh:
		call    near ___23488h
		call    near ___61278h
		xor     esi, esi
		call    near ___623d4h
		mov     [___19bd60h], esi
		mov     [___24e4d0h], esi
___3f1bah:
		call    near ___3d79ch
		call    near CONFIG_WRITE
		call    near ___12200h
		call    near ___12a54h
		call    near ___24ec0h
		call    near ___2fc50h
	push 	eax
	push 	ecx
	push 	edx
		call    near ___649a8h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax
	push 	eax
	push 	ecx
	push 	edx
		call    near ___64a28h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
