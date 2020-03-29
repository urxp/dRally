cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1ef8h
	extern	___1a021ch
	extern	___1821fch
	extern	ceil_
	extern	__CHP
	extern	___185a14h
	extern	___1a01fch
	extern	___18e974h
	extern	___1a01ech
	extern	___185a2ch
	extern	___185a3ch
	extern	___19bd60h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___2b6a4h
	extern	___1a020ch
	extern	___1a0fb8h
	extern	___11378h
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___3a6a4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___185a20h
	extern	___1a1ec4h
	extern	___2b318h
	extern	___3266ch
	extern	___164d0h
	extern	___196ab0h
	extern	___14cach
	extern	___196a98h
	extern	___14dc4h
	extern	___196a9ch
	extern	___15130h
	extern	___196aa0h
	extern	___1549ch
	extern	___196aa4h
	extern	___15808h
	extern	___196aa8h
	extern	___15e3ch
	extern	___1a0218h
	extern	___168b4h
	extern	___1a0210h
	extern	___2b81ch
	extern	___165ach
	extern	___135fch
	extern	___1807cch
	extern	___185c0bh
	extern	___1a10fch
	extern	___12e78h
	extern	___1807e8h
	extern	___1a1108h
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___185a28h
	extern	___1a1ef4h
	extern	dRally_Sound_setPosition
	extern	___58c60h
	extern	dRally_Sound_setMasterVolume
	extern	___1865fch
	extern	___1a1ea0h
	extern	___1a1ee8h
	extern	___259e0h
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___13bd4h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a0228h
	extern	___185a18h
	extern	___17324h
	extern	___25330h
	extern	___185a54h
	extern	___182204h
	extern	___1a0214h
	extern	___1678ch
	extern	___27f80h
	extern	___2ab50h
	extern	___185a38h
	extern	___1a1ee4h
	extern	___185cbch
	extern	___1a1ed0h
	extern	___1a01b8h
	extern	___25a74h
	extern	___1a01f0h
	extern	___18e938h
	extern	___1a1ec8h
	extern	___1862bch
	extern	___1a01a8h
	extern	___25e40h
	extern	___1a01f4h
	extern	___18e93ch
	extern	___1a1ec0h
	extern	___18643ch
	extern	___1a0198h
	extern	___262b4h
	extern	___1a01f8h
	extern	___18e940h
	extern	___1a1eech
	extern	___1864fch
	extern	___1a01d0h
	extern	___1a1ee0h
	extern	___26650h
	extern	___186658h
	extern	___1a1e8ch
	extern	___1a1ed8h
	extern	___5994ch
	extern	___1854a4h
	extern	dRally_Sound_pushEffect
	extern	___1a0224h
	extern	___30a84h
	extern	___30c60h
	extern	___23758h
	extern	___2836ch
	extern	___283ech
	extern	___285f8h
	extern	___28880h
	extern	___28e40h
	extern	___199f54h
	extern	___59e4ch
	extern	___2a6a8h
	extern	___281d0h
	extern	___269e4h
	extern	___26e54h
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1807c0h
	extern	___2a608h
	extern	___18078ch
	extern	___1821ech
	extern	___196a84h
	extern	___2b7a0h
	extern 	restoreDefaultScreenBuffer
	
section .text

___2b894h:
dd	___2c6c4h
dd	___2c74ah
dd	___2c7e5h
dd	___2c880h
dd	___2c947h
dd	___2c9a2h
__GDECL(___2b8ach)
		push    6ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 40h
		xor     edx, edx
		mov     [esp+30h], edx
		mov     [esp+10h], edx
		mov     [esp+18h], edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		fild    dword [eax*4+___1a021ch]
		fmul    qword [___1821fch]
		sub     esp, byte 8
		fstp    qword [esp]
		call    near ceil_
		mov     eax, [___1a1ef8h]
		lea     ebx, [eax*8+0]
		sub     ebx, eax
		call    near __CHP
		shl     ebx, 2
		mov     esi, [___185a14h]
		sub     ebx, eax
		fistp   dword [esp+0ch]
		shl     ebx, 2
		test    esi, esi
		je      short ___2b961h
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+___1a01ech]
		imul    edx, eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     edx, eax
		jmp     short ___2b993h
___2b961h:
		mov     eax, [ebx+___1a01fch]
		lea     edx, [eax*8+0]
		sub     edx, eax
		shl     edx, 3
		sub     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, [ebx+___1a01ech]
		imul    edx, eax
___2b993h:
		mov     edi, [esp+0ch]
		sub     edi, edx
		mov     [esp+0ch], edi
		test    edi, edi
		jge     short ___2b9a7h
		xor     eax, eax
		mov     [esp+0ch], eax
___2b9a7h:
		cmp     dword [___185a2ch], byte 0
		jne     near ___2ba9eh
		cmp     dword [___185a3ch], byte 0
		je      short ___2b9cah
		cmp     dword [___19bd60h], byte 0
		je      near ___2ba9eh
___2b9cah:
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		call 	__MOVS
		mov     ecx, 29b80h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esi, 0f000h
		lea     edi, [eax+0f000h]
		call 	__MOVS
		call    near ___2b6a4h
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
		mov     [esp+38h], eax
		fild    word [esp+38h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+3ch], eax
		fild    word [esp+3ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+40h], eax
		fild    word [esp+40h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    near ___11378h
		call 	restoreDefaultScreenBuffer
		call    near ___3a6a4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2ba9eh:
		xor     edi, edi
		mov     esi, 5
		mov     [esp+1ch], edi
		mov     [___185a20h], edi
		mov     [___1a1ec4h], esi
___2bab5h:
		cmp     dword [___185a2ch], byte 0
		jne     near ___2cfbch
		cmp     dword [esp+30h], byte 0
		jne     near ___2cfbch
		cmp     dword [___185a3ch], byte 0
		je      short ___2bae9h
		cmp     dword [___19bd60h], byte 0
		jne     short ___2bae9h

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		call    near ___3266ch
___2bae9h:
		cmp     dword [___185a20h], byte 1
		jne     near ___2c687h
		mov     ecx, 4b000h
		xor     edi, edi
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [esp+28h], edi
		mov     [___185a20h], edi
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		call    near ___2b6a4h
		xor     eax, eax
		mov     edx, [___185a3ch]
		mov     [esp+24h], eax
		test    edx, edx
		je      short ___2bb4bh
		mov     edx, 1
		call    near ___164d0h
		mov     [esp+24h], edx
		jmp     near ___2bc81h
___2bb4bh:
		mov     ebx, [___196ab0h]
		cmp     ebx, byte 1
		jne     short ___2bb6dh
		call    near ___14cach
		mov     ebp, 9
		mov     [esp+28h], ebx
		mov     [esp+24h], ebp
		jmp     near ___2bc81h
___2bb6dh:
		cmp     dword [___196a98h], byte 3
		jne     short ___2bb89h
		mov     edi, 2
		call    near ___14dc4h
		mov     [esp+24h], edi
		jmp     near ___2bc81h
___2bb89h:
		cmp     dword [___196a9ch], byte 1
		jne     short ___2bba5h
		mov     esi, 3
		call    near ___15130h
		mov     [esp+24h], esi
		jmp     near ___2bc81h
___2bba5h:
		cmp     dword [___196aa0h], byte 1
		jne     short ___2bbc1h
		mov     ecx, 4
		call    near ___1549ch
		mov     [esp+24h], ecx
		jmp     near ___2bc81h
___2bbc1h:
		cmp     dword [___196aa4h], byte 0
		je      short ___2bbe8h
		call    near ___15808h
		test    eax, eax
		je      short ___2bbdbh
		mov     dword [esp+10h], 1
___2bbdbh:
		mov     dword [esp+24h], 5
		jmp     near ___2bc81h
___2bbe8h:
		cmp     dword [___196aa8h], byte 0
		je      short ___2bc0fh
		call    near ___15e3ch
		test    eax, eax
		je      short ___2bc02h
		mov     dword [esp+10h], 1
___2bc02h:
		mov     dword [esp+24h], 6
		jmp     near ___2bc81h
___2bc0fh:
		imul    edx, [___1a1ef8h], byte 6ch
		cmp     dword [edx+___1a0218h], byte 4
		jne     short ___2bc3ah
		call    near ___168b4h
		test    eax, eax
		je      short ___2bc30h
		mov     dword [esp+10h], 1
___2bc30h:
		mov     dword [esp+24h], 7
		jmp     short ___2bc81h
___2bc3ah:
		mov     esi, [esp+0ch]
		mov     eax, [edx+___1a0210h]
		add     eax, esi
		cmp     eax, dword 3e8h
		jge     short ___2bc81h
		call    near ___2b81ch
		cmp     eax, [edx+___1a0210h]
		jle     short ___2bc81h
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01ech], byte 5fh
		jle     short ___2bc81h
		call    near ___165ach
		mov     ebx, 8
		mov     ecx, 1
		mov     [esp+24h], ebx
		mov     [esp+28h], ecx
___2bc81h:
		mov     ebx, 5
		mov     ecx, 6dh
		mov     edx, 173h
		xor     eax, eax
		mov     [___1a1ec4h], ebx
		mov     ebx, 27fh
		call    near ___135fch
		cmp     dword [___19bd60h], byte 0
		je      short ___2bcddh
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
___2bcddh:
	
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

		cmp     dword [___185a28h], byte 0
		je      short ___2bcfah
		mov     eax, [___1a1ef4h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
___2bcfah:
		xor     ebp, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp+34h], ebp
		mov     [esp+2ch], ebp
___2bd09h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___58c60h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     dword [___185a28h], byte 0
		je      short ___2bd20h
		mov     eax, [esp+34h]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___2bd20h:
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      near ___2be33h
		cmp     dword [___185a3ch], byte 0
		jne     near ___2be33h
		cmp     dword [___196a98h], byte 3
		je      near ___2be33h
		cmp     dword [___196a9ch], byte 1
		je      near ___2be33h
		cmp     dword [___196aa0h], byte 1
		je      near ___2be33h
		cmp     dword [___196aa4h], byte 0
		jne     near ___2be33h
		cmp     dword [___196aa8h], byte 0
		jne     near ___2be33h
		cmp     dword [___196ab0h], byte 1
		je      near ___2be33h
		imul    esi, [___1a1ef8h], byte 6ch
		cmp     dword [esi+___1a0218h], byte 4
		je      near ___2be33h
		mov     edx, [esp+0ch]
		mov     eax, [esi+___1a0210h]
		add     eax, edx
		cmp     eax, dword 3e8h
		jl      near ___2be33h
		call    near ___2b81ch
		cmp     eax, [esi+___1a0210h]
		jg      short ___2be33h
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01ech], byte 5fh
		jg      short ___2be33h
		push    ___1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [___1a1ea0h]
		mov     ebx, [___1a1ee8h]
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a230h
		add     edx, 2a230h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edi, [___1a1ee8h]
		inc     edi
		mov     [___1a1ee8h], edi
		cmp     edi, byte 16h
		jle     short ___2be33h
		xor     edx, edx
		mov     [___1a1ee8h], edx
___2be33h:
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      near ___2bee3h
		cmp     dword [___185a3ch], byte 0
		jne     near ___2bed4h
		cmp     dword [___196a98h], byte 3
		je      near ___2bed4h
		cmp     dword [___196a9ch], byte 1
		je      near ___2bed4h
		cmp     dword [___196aa0h], byte 1
		je      short ___2bed4h
		cmp     dword [___196aa4h], byte 0
		jne     short ___2bed4h
		cmp     dword [___196aa8h], byte 0
		jne     short ___2bed4h
		cmp     dword [___196ab0h], byte 1
		je      short ___2bed4h
		imul    esi, [___1a1ef8h], byte 6ch
		cmp     dword [esi+___1a0218h], byte 4
		je      short ___2bed4h
		mov     edx, [esp+0ch]
		mov     eax, [esi+___1a0210h]
		add     eax, edx
		cmp     eax, dword 3e8h
		jge     short ___2bee3h
		call    near ___2b81ch
		cmp     eax, [esi+___1a0210h]
		jle     short ___2bee3h
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01ech], byte 5fh
		jle     short ___2bee3h
___2bed4h:
		mov     edx, 141h
		mov     eax, 0a4h
		call    near ___13bd4h
___2bee3h:
		xor     edi, edi
		mov     esi, [esp+2ch]
		mov     [esp+20h], edi
___2beedh:
		xor     eax, eax
		mov     al, [esp+20h]
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
		mov     eax, [esp+20h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+20h], eax
		cmp     eax, byte 60h
		jl      near ___2beedh
		mov     ebx, 80h
		mov     esi, [esp+2ch]
		mov     edi, 600h
		mov     [esp+20h], ebx
___2bf8ch:
		xor     eax, eax
		mov     al, [esp+20h]
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
		mov     ecx, [esp+20h]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+20h], ecx
		cmp     ecx, 100h
		jl      near ___2bf8ch
		add     dword [esp+34h], 51eh
		mov     edx, [esp+2eh]
		add     edx, byte 2
		inc     ebp
		mov     [esp+2eh], dx
		cmp     ebp, byte 32h
		jl      near ___2bd09h
		cmp     dword [___185a3ch], byte 0
		jne     near ___2c103h
		cmp     dword [___196a98h], byte 3
		je      near ___2c103h
		cmp     dword [___196a9ch], byte 1
		je      near ___2c103h
		cmp     dword [___196aa0h], byte 1
		je      near ___2c103h
		cmp     dword [___196aa4h], byte 0
		jne     near ___2c103h
		cmp     dword [___196aa8h], byte 0
		jne     near ___2c103h
		cmp     dword [___196ab0h], byte 1
		je      near ___2c103h
		cmp     dword [___19bd60h], byte 0
		jne     short ___2c0aeh
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a0228h], byte 7
		jle     short ___2c103h
___2c0aeh:
		cmp     dword [___185a18h], byte 4
		je      short ___2c103h
		imul    edx, [___1a1ef8h], byte 6ch
		cmp     dword [edx+___1a0218h], byte 4
		je      short ___2c103h
		mov     ebx, [esp+0ch]
		mov     eax, [edx+___1a0210h]
		add     eax, ebx
		cmp     eax, dword 3e8h
		jge     near ___2c67fh
		call    near ___2b81ch
		cmp     eax, [edx+___1a0210h]
		jle     near ___2c67fh
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01ech], byte 5fh
		jle     near ___2c67fh
___2c103h:
		cmp     dword [esp+24h], byte 0
		je      short ___2c119h
		call    near ___17324h
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2c119h:
		cmp     dword [esp+10h], byte 1
		jne     short ___2c181h
		call    near ___165ach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     edx, 1
		mov     ebx, [___19bd60h]
		mov     [esp+28h], edx
		test    ebx, ebx
		je      short ___2c17dh
		imul    edx, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		mov     edi, 1efh
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edx+___1a0210h], edi
		lea     ebp, [edi+eax*1]
		mov     [edx+___1a0210h], ebp
		call    near ___25330h
		jmp     short ___2c181h
___2c17dh:
		mov     [esp+30h], edx
___2c181h:
		cmp     dword [esp+24h], byte 1
		jne     short ___2c190h
		xor     edx, edx
		mov     [___185a3ch], edx
___2c190h:
		cmp     dword [esp+24h], byte 2
		jne     short ___2c19fh
		xor     ecx, ecx
		mov     [___196a98h], ecx
___2c19fh:
		cmp     dword [esp+24h], byte 3
		jne     short ___2c1aeh
		xor     edi, edi
		mov     [___196a9ch], edi
___2c1aeh:
		cmp     dword [esp+24h], byte 4
		jne     short ___2c1bch
		xor     eax, eax
		mov     [___196aa0h], eax
___2c1bch:
		cmp     dword [esp+24h], byte 5
		jne     short ___2c1cbh
		xor     ebx, ebx
		mov     [___196aa4h], ebx
___2c1cbh:
		cmp     dword [esp+24h], byte 6
		jne     short ___2c1dah
		xor     esi, esi
		mov     [___196aa8h], esi
___2c1dah:
		cmp     dword [esp+24h], byte 7
		jne     short ___2c1f9h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, 0ffffffffh
		mov     [eax+___1a0214h], edx
		mov     [eax+___1a0218h], edx
___2c1f9h:
		cmp     dword [esp+24h], byte 9
		jne     short ___2c208h
		xor     ecx, ecx
		mov     [___196ab0h], ecx
___2c208h:
		cmp     dword [esp+24h], byte 8
		jne     short ___2c25bh
		cmp     dword [___19bd60h], byte 0
		je      short ___2c253h
		imul    edx, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		mov     ebx, 1efh
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edx+___1a0210h], ebx
		lea     ecx, [ebx+eax*1]
		mov     [edx+___1a0210h], ecx
		call    near ___25330h
		jmp     short ___2c25bh
___2c253h:
		mov     dword [esp+30h], 1
___2c25bh:
		mov     ecx, 1efh
		mov     ebp, 0ffffffffh
		mov     ebx, 1
		xor     edx, edx
___2c26ch:
		cmp     edx, [esp+30h]
		jne     near ___2c5a8h
		mov     edi, [___196ab0h]
		mov     esi, ebx
		cmp     ebx, edi
		jne     short ___2c2ach
		call    near ___14cach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     [___196ab0h], edx
		mov     esi, edx
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     [esp+28h], edi
		jmp     near ___2c5a0h
___2c2ach:
		cmp     dword [___196a98h], byte 3
		jne     short ___2c2d1h
		call    near ___14dc4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     [___196a98h], edx
		mov     esi, edx
		jmp     near ___2c596h
___2c2d1h:
		cmp     ebx, [___196a9ch]
		jne     short ___2c2f5h
		call    near ___15130h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     [___196a9ch], edx
		mov     esi, edx
		jmp     near ___2c596h
___2c2f5h:
		cmp     ebx, [___196aa0h]
		jne     short ___2c319h
		call    near ___1549ch

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     [___196aa0h], edx
		mov     esi, edx
		jmp     near ___2c596h
___2c319h:
		mov     edi, [___196aa4h]
		cmp     edx, edi
		je      near ___2c3b8h
		call    near ___15808h
		test    eax, eax
		je      short ___2c334h
		mov     [esp+10h], ebx
___2c334h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     eax, [esp+10h]
		mov     [___196aa4h], edx
		cmp     ebx, eax
		jne     short ___2c3a7h
		call    near ___165ach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     esi, [___19bd60h]
		mov     [esp+28h], ebx
		mov     [esp+10h], edx
		cmp     edx, esi
		je      short ___2c3a3h
		imul    esi, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+___1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+___1a0210h], edi
		call    near ___25330h
		jmp     short ___2c3a7h
___2c3a3h:
		mov     [esp+30h], ebx
___2c3a7h:
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     esi, edx
		jmp     near ___2c5a0h
___2c3b8h:
		cmp     edi, [___196aa8h]
		je      near ___2c455h
		call    near ___15e3ch
		test    eax, eax
		je      short ___2c3d1h
		mov     [esp+10h], ebx
___2c3d1h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     eax, [esp+10h]
		mov     [___196aa8h], edx
		cmp     ebx, eax
		jne     short ___2c444h
		call    near ___165ach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     esi, [___19bd60h]
		mov     [esp+28h], ebx
		mov     [esp+10h], edx
		cmp     edx, esi
		je      short ___2c440h
		imul    esi, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+___1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+___1a0210h], edi
		call    near ___25330h
		jmp     short ___2c444h
___2c440h:
		mov     [esp+30h], ebx
___2c444h:
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     esi, edx
		jmp     near ___2c5a0h
___2c455h:
		imul    edi, [___1a1ef8h], byte 6ch
		cmp     dword [edi+___1a0218h], byte 4
		jne     near ___2c506h
		call    near ___168b4h
		test    eax, eax
		je      short ___2c476h
		mov     [esp+10h], ebx
___2c476h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     [eax+___1a0218h], ebp
		mov     edi, [esp+10h]
		mov     [eax+___1a0214h], ebp
		cmp     ebx, edi
		jne     short ___2c4f5h
		call    near ___165ach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     eax, [___19bd60h]
		mov     [esp+28h], edi
		mov     [esp+10h], edx
		cmp     edx, eax
		je      short ___2c4f1h
		imul    esi, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [esi+___1a0210h], ecx
		lea     edi, [ecx+eax*1]
		mov     [esi+___1a0210h], edi
		call    near ___25330h
		jmp     short ___2c4f5h
___2c4f1h:
		mov     [esp+30h], edi
___2c4f5h:
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     esi, edx
		jmp     near ___2c5a0h
___2c506h:
		mov     eax, [edi+___1a0210h]
		add     eax, [esp+0ch]
		cmp     eax, dword 3e8h
		jge     near ___2c5a0h
		call    near ___2b81ch
		cmp     eax, [edi+___1a0210h]
		jle     near ___2c5a0h
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     dword [eax+___1a01ech], byte 5fh
		jle     short ___2c5a0h
		cmp     edx, [esp+30h]
		jne     short ___2c5a0h
		call    near ___165ach

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		call    near ___17324h
		mov     edi, [___19bd60h]
		mov     [esp+28h], ebx
		cmp     edx, edi
		je      short ___2c592h
		imul    edi, [___1a1ef8h], byte 6ch
		fild    dword [___185a54h]
		fmul    qword [___182204h]
		call    near __CHP
		fistp   dword [esp+14h]
		mov     eax, [esp+14h]
		mov     [edi+___1a0210h], ecx
		add     [edi+___1a0210h], eax
		call    near ___25330h
		jmp     short ___2c596h
___2c592h:
		mov     [esp+30h], ebx
___2c596h:
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2c5a0h:
		test    esi, esi
		je      near ___2c26ch
___2c5a8h:
		cmp     dword [___185a18h], byte 4
		jne     short ___2c5ceh
		cmp     dword [___19bd60h], byte 0
		jne     short ___2c5c6h
		cmp     dword [esp+28h], byte 0
		jne     short ___2c5c6h
		call    near ___1678ch
___2c5c6h:
		xor     ebx, ebx
		mov     [___185a18h], ebx
___2c5ceh:
		cmp     dword [esp+18h], byte 0
		jne     near ___2c67fh
		mov     ecx, 29b80h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		mov     edx, 173h
		call 	__MOVS
		call    near ___2b6a4h
		mov     ecx, 6dh
		xor     eax, eax
		call    near ___135fch
		cmp     dword [___19bd60h], byte 0
		je      short ___2c65ch
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
___2c65ch:
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2c67fh:
		xor     edi, edi
		mov     [___185a28h], edi
___2c687h:
		cmp     dword [esp+18h], byte 1
		je      near ___2cfbch
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, [___185a38h]
		test    eax, eax
		jle     short ___2c6aeh
		lea     edx, [eax-1]
		mov     [___185a38h], edx
___2c6aeh:
		mov     eax, [___1a1ec4h]
		cmp     eax, byte 5
		ja      near ___2c9fch
		jmp     near dword [cs:eax*4+___2b894h]
___2c6c4h:
		mov     eax, [___1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [___1a1ee4h]
		add     eax, ___185cbch
		mov     ebx, [___1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+___1a01b8h]
		mov     eax, 10h
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 16090h
		add     edx, 16090h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edx, [___1a1ed0h]
		inc     edx
		mov     [___1a1ed0h], edx
		cmp     edx, byte 3fh
		jle     short ___2c72eh
		xor     ecx, ecx
		mov     [___1a1ed0h], ecx
___2c72eh:
		cmp     dword [___185a38h], byte 1
		jne     near ___2c9fch
		call    near ___25a74h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___2c9fch
___2c74ah:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    edx, [eax+___1a01fch], 6e0h
		mov     eax, [eax+___1a01f0h]
		cmp     eax, [edx+___18e938h]
		jge     short ___2c7c9h
		imul    edx, eax, byte 60h
		mov     ebx, [___1a1ec8h]
		add     edx, ___1862bch
		mov     ecx, [eax*4+___1a01a8h]
		push    edx
		mov     eax, 10h
		mov     edx, 10dh
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a090h
		add     edx, 2a090h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     esi, [___1a1ec8h]
		inc     esi
		mov     [___1a1ec8h], esi
		cmp     esi, byte 17h
		jle     short ___2c7c9h
		xor     ebp, ebp
		mov     [___1a1ec8h], ebp
___2c7c9h:
		cmp     dword [___185a38h], byte 1
		jne     near ___2c9fch
		call    near ___25e40h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___2c9fch
___2c7e5h:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    edx, [eax+___1a01fch], 6e0h
		mov     eax, [eax+___1a01f4h]
		cmp     eax, [edx+___18e93ch]
		jge     short ___2c864h
		imul    edx, eax, byte 30h
		mov     ebx, [___1a1ec0h]
		add     edx, ___18643ch
		mov     ecx, [eax*4+___1a0198h]
		push    edx
		mov     eax, 78h
		mov     edx, 10dh
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a0f8h
		add     edx, 2a0f8h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     ecx, [___1a1ec0h]
		inc     ecx
		mov     [___1a1ec0h], ecx
		cmp     ecx, byte 0bh
		jle     short ___2c864h
		xor     edi, edi
		mov     [___1a1ec0h], edi
___2c864h:
		cmp     dword [___185a38h], byte 1
		jne     near ___2c9fch
		call    near ___262b4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___2c9fch
___2c880h:
		imul    eax, [___1a1ef8h], byte 6ch
		imul    edx, [eax+___1a01fch], 6e0h
		mov     eax, [eax+___1a01f8h]
		cmp     eax, [edx+___18e940h]
		jge     near ___2c92bh
		mov     edx, eax
		shl     edx, 6
		mov     ebx, [___1a1eech]
		add     edx, ___1864fch
		mov     ecx, [eax*4+___1a01d0h]
		push    edx
		mov     eax, 0e0h
		mov     edx, 10dh
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a160h
		add     edx, 2a160h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		cmp     dword [___1a1ee0h], byte 0
		jne     short ___2c912h
		mov     edx, [___1a1eech]
		inc     edx
		mov     [___1a1eech], edx
		cmp     edx, byte 0eh
		jle     short ___2c92bh
		mov     dword [___1a1ee0h], 1
		jmp     short ___2c92bh
___2c912h:
		mov     edi, [___1a1eech]
		dec     edi
		mov     [___1a1eech], edi
		cmp     edi, byte 1
		jge     short ___2c92bh
		xor     eax, eax
		mov     [___1a1ee0h], eax
___2c92bh:
		cmp     dword [___185a38h], byte 1
		jne     near ___2c9fch
		call    near ___26650h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___2c9fch
___2c947h:
		push    ___186658h
		mov     edx, 10dh
		mov     eax, 148h
		mov     ecx, [___1a1e8ch]
		mov     ebx, [___1a1ed8h]
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a1c8h
		add     edx, 2a1c8h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edi, [___1a1ed8h]
		inc     edi
		mov     [___1a1ed8h], edi
		cmp     edi, byte 17h
		jle     short ___2c9fch
		xor     eax, eax
		mov     [___1a1ed8h], eax
		jmp     short ___2c9fch
___2c9a2h:
		push    ___1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [___1a1ea0h]
		mov     ebx, [___1a1ee8h]
		call    near ___259e0h
		mov     ecx, 40h
		mov     ebx, 60h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 2a230h
		add     edx, 2a230h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     ebx, [___1a1ee8h]
		inc     ebx
		mov     [___1a1ee8h], ebx
		cmp     ebx, byte 16h
		jle     short ___2c9fch
		xor     esi, esi
		mov     [___1a1ee8h], esi
___2c9fch:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     [esp+3ch], al
		test    al, al
		je      near ___2cb9fh
		xor     edi, edi
		mov     [esp+20h], edi
___2ca13h:
		mov     edx, [esp+20h]
		mov     eax, [esp+20h]
		lea     ebp, [edx+1]
		mov     al, [esp+eax*1+1]
		mov     [esp+20h], ebp
		mov     [esp+edx*1], al
		cmp     ebp, byte 9
		jl      short ___2ca13h
		mov     al, [esp+3ch]
		mov     edx, [___19bd60h]
		mov     [esp+9], al
		test    edx, edx
		jne     short ___2ca74h
		cmp     byte [esp+6], 20h
		jne     short ___2ca74h
		cmp     byte [esp+7], 13h
		jne     short ___2ca74h
		cmp     byte [esp+8], 1eh
		jne     short ___2ca74h
		cmp     al, 11h
		jne     short ___2ca74h
		imul    eax, [___1a1ef8h], byte 6ch
		add     dword [eax+___1a0210h], 3e8h
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2ca74h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___2cae2h
		cmp     byte [esp+5], 20h
		jne     short ___2cae2h
		cmp     byte [esp+6], 13h
		jne     short ___2cae2h
		mov     ch, [esp+7]
		cmp     ch, 18h
		jne     short ___2cae2h
		cmp     ch, [esp+8]
		jne     short ___2cae2h
		cmp     byte [esp+9], 26h
		jne     short ___2cae2h
		push    8000h
		mov     eax, [___1854a4h]
		mov     ecx, 0f500h
		sub     eax, 7000h
		mov     edx, 17h
		push    eax
		xor     ebx, ebx
		mov     eax, 2
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     dword [eax+___1a0210h], 7a120h
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2cae2h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___2cb44h
		cmp     byte [esp+5], 20h
		jne     short ___2cb44h
		cmp     byte [esp+6], 13h
		jne     short ___2cb44h
		cmp     byte [esp+7], 17h
		jne     short ___2cb44h
		cmp     byte [esp+8], 2fh
		jne     short ___2cb44h
		cmp     byte [esp+9], 12h
		jne     short ___2cb44h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     ebx, [eax+___1a0224h]
		add     ebx, byte 0ah
		mov     edx, 13h
		mov     [eax+___1a0224h], ebx
		xor     eax, eax
		call    near ___30a84h
		mov     eax, 14h
		call    near ___30c60h
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2cb44h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___2cb9fh
		cmp     byte [esp+6], 20h
		jne     short ___2cb9fh
		cmp     byte [esp+7], 13h
		jne     short ___2cb9fh
		cmp     byte [esp+8], 18h
		jne     short ___2cb9fh
		cmp     byte [esp+9], 19h
		jne     short ___2cb9fh
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edi, [eax+___1a0224h]
		sub     edi, byte 0ah
		mov     edx, 13h
		mov     [eax+___1a0224h], edi
		xor     eax, eax
		call    near ___30a84h
		mov     eax, 14h
		call    near ___30c60h
		call    near ___25330h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2cb9fh:
		mov     dh, [esp+3ch]
		cmp     dh, 4dh
		jb      short ___2cbf9h
		jbe     near ___2cc45h
		cmp     dh, 0c8h
		jb      short ___2cbe0h
		jbe     near ___2cc30h
		cmp     dh, 0cdh
		jb      short ___2cbd2h
		jbe     near ___2cc45h
		cmp     dh, 0d0h
		je      near ___2cc37h
		jmp     near ___2cc5bh
___2cbd2h:
		cmp     dh, 0cbh
		je      near ___2cc3eh
		jmp     near ___2cc5bh
___2cbe0h:
		cmp     dh, 50h
		jb      near ___2cc5bh
		jbe     short ___2cc37h
		cmp     dh, 9ch
		je      near ___2cc4ch
		jmp     near ___2cc5bh
___2cbf9h:
		cmp     dh, 3bh
		jb      short ___2cc12h
		jbe     short ___2cc20h
		cmp     dh, 48h
		jb      near ___2cc5bh
		jbe     short ___2cc30h
		cmp     dh, 4bh
		je      short ___2cc3eh
		jmp     short ___2cc5bh
___2cc12h:
		cmp     dh, 1
		jb      short ___2cc5bh
		jbe     short ___2cc53h
		cmp     dh, 1ch
		je      short ___2cc4ch
		jmp     short ___2cc5bh
___2cc20h:
		cmp     dword [___19bd60h], byte 0
		je      short ___2cc5bh
		call    near ___23758h
		jmp     short ___2cc5bh
___2cc30h:
		call    near ___2836ch
		jmp     short ___2cc5bh
___2cc37h:
		call    near ___283ech
		jmp     short ___2cc5bh
___2cc3eh:
		call    near ___285f8h
		jmp     short ___2cc5bh
___2cc45h:
		call    near ___28880h
		jmp     short ___2cc5bh
___2cc4ch:
		call    near ___28e40h
		jmp     short ___2cc5bh
___2cc53h:
		mov     dword [esp+1ch], 0ffffffffh
___2cc5bh:
		cmp     dword [___199f54h], byte 0
		je      short ___2cc6bh
		mov     byte [___59e4ch], 1
___2cc6bh:
		call    near ___2a6a8h
		mov     ebp, eax
		test    eax, eax
		jle     near ___2cf97h
		mov     ecx, 29b80h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		mov     ebx, 20h
		call 	__MOVS
		call    near ___2b6a4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___2b318h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     [esp+20h], ebx
		mov     esi, 180h
		mov     edi, 640000h
___2ccc4h:
		xor     eax, eax
		mov     al, [esp+20h]
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, edi
		mov     eax, [esi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+20h]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+20h], ecx
		cmp     ecx, 100h
		jl      near ___2ccc4h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 80h
		mov     edx, 73h
		xor     eax, eax
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___281d0h
		cmp     dword [___1a1ec4h], byte 0
		jne     short ___2ce08h
		mov     ecx, 72h
		mov     ebx, 80h
		mov     edx, 73h
		xor     eax, eax
		call    near ___27f80h
		call    near ___25a74h
___2ce08h:
		cmp     dword [___1a1ec4h], byte 1
		jne     short ___2ce2fh
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___25e40h
___2ce2fh:
		cmp     dword [___1a1ec4h], byte 2
		jne     short ___2ce53h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    near ___27f80h
		call    near ___262b4h
___2ce53h:
		cmp     dword [___1a1ec4h], byte 3
		jne     short ___2ce7ah
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    near ___27f80h
		call    near ___26650h
___2ce7ah:
		cmp     dword [___1a1ec4h], byte 4
		jne     short ___2cea1h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___269e4h
___2cea1h:
		cmp     dword [___1a1ec4h], byte 5
		jne     short ___2cec8h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
		call    near ___26e54h
___2cec8h:
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax
		call    near ___135fch
		cmp     dword [___19bd60h], byte 0
		je      short ___2cf19h
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
___2cf19h:
	
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

		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		call 	__MOVS
		cmp     ebp, byte 1
		jne     short ___2cf53h
		mov     eax, ___1807c0h
		call    near ___2a608h
___2cf53h:
		cmp     ebp, byte 2
		jne     short ___2cf62h
		mov     eax, ___18078ch
		call    near ___2a608h
___2cf62h:
		cmp     ebp, byte 3
		jne     short ___2cf71h
		mov     eax, ___1821ech
		call    near ___2a608h
___2cf71h:
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2cf97h:
		cmp     dword [___19bd60h], byte 0
		je      short ___2cfb1h
		cmp     dword [___196a84h], byte 0
		je      short ___2cfb1h
		mov     dword [esp+1ch], 0ffffffffh
___2cfb1h:
		cmp     dword [esp+1ch], byte 0
		je      near ___2bab5h
___2cfbch:
		cmp     dword [esp+30h], byte 1
		jne     short ___2cfc8h
		call    near ___2b7a0h
___2cfc8h:
		mov     ecx, 4b000h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     edx, 173h
		call 	__MOVS
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     ecx, 6dh
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		xor     eax, eax
		call    near ___135fch
		cmp     dword [___19bd60h], byte 0
		je      short ___2d044h
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
___2d044h:
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		add     esp, byte 40h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
