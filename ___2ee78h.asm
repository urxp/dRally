cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1ef8h
	extern	___1a0224h
	extern	___19bd60h
	extern	___1a0a5ch
	extern	___2b318h
	extern	___58c60h
	extern	dRally_Audio_setMasterVolume
	extern	___1865fch
	extern	___1a1ea0h
	extern	___1a1ee8h
	extern	___259e0h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	dRally_Audio____68284h
	extern	___1a1ef4h
	extern	dRally_Audio_setPosition
	extern	___1a1ef0h
	extern	___2ed2ch
	extern	___185a40h
	extern	___27f80h
	extern	___1716ch
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___13bd4h
	extern	___17324h
	extern	___185a20h
	extern	___2ab50h
	extern	___185a38h
	extern	___2d294h
	extern	___2d728h
	extern	___2d898h
	extern	___2da10h
	extern	___2db88h
	extern	___5994ch
	extern	___23758h
	extern	___2deb0h
	extern	___2df34h
	extern	___2dfd0h
	extern	___2e1b0h
	extern	___2e350h
	extern	___185a28h
	extern	___2a6a8h
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___281d0h
	extern	___2ddc8h
	extern	___135fch
	extern	___1807cch
	extern	___185c0bh
	extern	___1a10fch
	extern	___12e78h
	extern	___1807e8h
	extern	___1a1108h
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1807c0h
	extern	___2a608h
	extern	___18078ch
	extern	___1821ech
	extern	___196a84h
	extern	___185a34h
	extern	___185a2ch

section .text

___2ee60h:
dd	___2f3c0h
dd	___2f3dch
dd	___2f3f8h
dd	___2f414h
dd	___2f42dh
dd	___2f442h
__GDECL(___2ee78h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     esi, [___1a1ef8h]
		xor     edx, edx
		xor     eax, eax
		mov     [esp], edx
___2ee98h:
		mov     ecx, [eax+___1a0224h]
		cmp     edx, ecx
		jge     short ___2eea9h
		cmp     esi, [esp]
		je      short ___2eea9h
		mov     edx, ecx
___2eea9h:
		mov     edi, [esp]
		inc     edi
		add     eax, byte 6ch
		mov     [esp], edi
		cmp     edi, byte 14h
		jl      short ___2ee98h
		cmp     dword [___19bd60h], byte 0
		jne     short ___2eee6h
		mov     ebx, [___1a1ef8h]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		cmp     edx, [eax*4+___1a0224h]
		jge     short ___2eee6h
		xor     ecx, ecx
		mov     [___1a0a5ch], ecx
___2eee6h:
		call    near ___2b318h
		mov     ebp, 32h
		mov     esi, 0ffdch
		mov     edi, 640000h
		mov     [esp+10h], esi
		mov     [esp+14h], edi
___2ef02h:
		call    near ___58c60h
		mov     eax, [esp+10h]
		mov     ebx, 2
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      short ___2ef7ah
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
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     eax, [___1a1ee8h]
		inc     eax
		mov     [___1a1ee8h], eax
		cmp     eax, byte 16h
		jle     short ___2ef7ah
		xor     ebx, ebx
		mov     [___1a1ee8h], ebx
___2ef7ah:
		mov     esi, [esp+14h]
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp], ecx
___2ef85h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     eax, [esp]
		inc     eax
		add     edi, byte 0ch
		mov     [esp], eax
		cmp     eax, byte 60h
		jl      near ___2ef85h
		mov     ebx, 80h
		mov     esi, [esp+14h]
		mov     edi, 600h
		mov     [esp], ebx
___2f020h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     ecx, [esp]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp], ecx
		cmp     ecx, 100h
		jl      near ___2f020h
		mov     ebx, [esp+14h]
		mov     edx, [esp+10h]
		dec     ebp
		sub     ebx, 20000h
		sub     edx, 51eh
		mov     [esp+14h], ebx
		mov     [esp+10h], edx
		test    ebp, ebp
		jge     near ___2ef02h
	push 	edx
	push 	ecx
		call    near dRally_Audio____68284h
	pop 	ecx
	pop 	edx
		and     eax, 0ff00h
		mov     [___1a1ef4h], eax
		mov     eax, 3100h
		mov     ecx, 5
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     [___1a1ef0h], ecx
		call    near ___2ed2ch
		cmp     dword [___185a40h], byte 0
		jne     short ___2f11dh
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
___2f11dh:
		cmp     dword [___185a40h], byte 0
		je      short ___2f12bh
		call    near ___1716ch
___2f12bh:
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     ebp, ebp
		call    near ___2b318h
		mov     [esp+18h], ebp
		mov     [esp+8], ebp
___2f13fh:
		call    near ___58c60h
		mov     eax, [esp+18h]
		mov     ebx, 2
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      short ___2f1c2h
		cmp     dword [___185a40h], byte 0
		jne     short ___2f1c2h
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
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     ecx, [___1a1ee8h]
		inc     ecx
		mov     [___1a1ee8h], ecx
		cmp     ecx, byte 16h
		jle     short ___2f1c2h
		xor     edi, edi
		mov     [___1a1ee8h], edi
___2f1c2h:
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      short ___2f1ech
		cmp     dword [___185a40h], byte 0
		je      short ___2f1ech
		mov     edx, 141h
		mov     eax, 0a4h
		call    near ___13bd4h
___2f1ech:
		mov     esi, [esp+8]
		xor     edx, edx
		xor     edi, edi
		mov     [esp], edx
___2f1f7h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     ebx, [esp]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp], ebx
		cmp     ebx, byte 60h
		jl      near ___2f1f7h
		mov     esi, 80h
		mov     edi, 600h
		mov     [esp], esi
		mov     esi, [esp+8]
___2f292h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     eax, [esp]
		inc     eax
		add     edi, byte 0ch
		mov     [esp], eax
		cmp     eax, dword 100h
		jl      near ___2f292h
		mov     edx, [esp+0ah]
		mov     ebx, [esp+18h]
		inc     ebp
		add     edx, byte 2
		add     ebx, 51eh
		mov     [esp+0ah], dx
		mov     [esp+18h], ebx
		cmp     ebp, byte 32h
		jl      near ___2f13fh
		cmp     dword [___185a40h], byte 0
		je      short ___2f37bh
		call    near ___17324h
		mov     ecx, 72h
		mov     ebx, 6ch
		xor     esi, esi
		mov     edx, 0f3h
		mov     [___185a40h], esi
		call    near ___2ed2ch
		mov     eax, 1aah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2f37bh:
		xor     edi, edi
		mov     [esp+4], edi
___2f381h:
		cmp     dword [___185a20h], byte 0
		jne     near ___2f8ach
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, [___185a38h]
		test    eax, eax
		jle     short ___2f3aah
		lea     edx, [eax-1]
		mov     [___185a38h], edx
___2f3aah:
		mov     eax, [___1a1ef0h]
		cmp     eax, byte 5
		ja      near ___2f49ch
		jmp     near dword [cs:eax*4+___2ee60h]
___2f3c0h:
		cmp     dword [___185a38h], byte 1
		jne     near ___2f49ch
		call    near ___2d294h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     near ___2f49ch
___2f3dch:
		cmp     dword [___185a38h], byte 1
		jne     near ___2f49ch
		call    near ___2d728h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     near ___2f49ch
___2f3f8h:
		cmp     dword [___185a38h], byte 1
		jne     near ___2f49ch
		call    near ___2d898h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     near ___2f49ch
___2f414h:
		cmp     dword [___185a38h], byte 1
		jne     near ___2f49ch
		call    near ___2da10h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     short ___2f49ch
___2f42dh:
		cmp     dword [___185a38h], byte 1
		jne     short ___2f49ch
		call    near ___2db88h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     short ___2f49ch
___2f442h:
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
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     ebx, [___1a1ee8h]
		inc     ebx
		mov     [___1a1ee8h], ebx
		cmp     ebx, byte 16h
		jle     short ___2f49ch
		xor     esi, esi
		mov     [___1a1ee8h], esi
___2f49ch:
		call    near ___5994ch
		cmp     al, 4dh
		jb      short ___2f4f0h
		jbe     near ___2f537h
		cmp     al, 0c8h
		jb      short ___2f4d9h
		jbe     near ___2f522h
		cmp     al, 0cdh
		jb      short ___2f4cch
		jbe     near ___2f537h
		cmp     al, 0d0h
		je      near ___2f529h
		jmp     near ___2f559h
___2f4cch:
		cmp     al, 0cbh
		je      near ___2f530h
		jmp     near ___2f559h
___2f4d9h:
		cmp     al, 50h
		jb      near ___2f559h
		jbe     short ___2f529h
		cmp     al, 9ch
		je      near ___2f53eh
		jmp     near ___2f559h
___2f4f0h:
		cmp     al, 3bh
		jb      short ___2f506h
		jbe     short ___2f512h
		cmp     al, 48h
		jb      near ___2f559h
		jbe     short ___2f522h
		cmp     al, 4bh
		je      short ___2f530h
		jmp     short ___2f559h
___2f506h:
		cmp     al, 1
		jb      short ___2f559h
		jbe     short ___2f545h
		cmp     al, 1ch
		je      short ___2f53eh
		jmp     short ___2f559h
___2f512h:
		cmp     dword [___19bd60h], byte 0
		je      short ___2f559h
		call    near ___23758h
		jmp     short ___2f559h
___2f522h:
		call    near ___2deb0h
		jmp     short ___2f559h
___2f529h:
		call    near ___2df34h
		jmp     short ___2f559h
___2f530h:
		call    near ___2dfd0h
		jmp     short ___2f559h
___2f537h:
		call    near ___2e1b0h
		jmp     short ___2f559h
___2f53eh:
		call    near ___2e350h
		jmp     short ___2f559h
___2f545h:
		mov     edi, 0ffffffffh
		mov     esi, 1
		mov     [esp+4], edi
		mov     [___185a28h], esi
___2f559h:
		call    near ___2a6a8h
		mov     ebp, eax
		test    eax, eax
		jle     near ___2f887h
		mov     ecx, 29b80h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		call 	__MOVS
		call    near ___2ed2ch
		call    near ___2b318h
		mov     eax, 20h
		mov     esi, 180h
		mov     edi, 640000h
		mov     [esp], eax
___2f5b1h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     edx, [esp]
		inc     edx
		add     esi, byte 0ch
		mov     [esp], edx
		cmp     edx, 100h
		jl      near ___2f5b1h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 73h
		mov     eax, 0ah
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
		cmp     dword [___1a1ef0h], byte 0
		jne     short ___2f6f8h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 73h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___2d294h
___2f6f8h:
		cmp     dword [___1a1ef0h], byte 1
		jne     short ___2f71fh
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___2d728h
___2f71fh:
		cmp     dword [___1a1ef0h], byte 2
		jne     short ___2f743h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    near ___27f80h
		call    near ___2d898h
___2f743h:
		cmp     dword [___1a1ef0h], byte 3
		jne     short ___2f76ah
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    near ___27f80h
		call    near ___2da10h
___2f76ah:
		cmp     dword [___1a1ef0h], byte 4
		jne     short ___2f791h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___2db88h
___2f791h:
		cmp     dword [___1a1ef0h], byte 5
		jne     short ___2f7b8h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
		call    near ___2ddc8h
___2f7b8h:
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax
		call    near ___135fch
		cmp     dword [___19bd60h], byte 0
		je      short ___2f809h
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
___2f809h:
		call    near ___23230h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		call 	__MOVS
		cmp     ebp, byte 1
		jne     short ___2f843h
		mov     eax, ___1807c0h
		call    near ___2a608h
___2f843h:
		cmp     ebp, byte 2
		jne     short ___2f852h
		mov     eax, ___18078ch
		call    near ___2a608h
___2f852h:
		cmp     ebp, byte 3
		jne     short ___2f861h
		mov     eax, ___1821ech
		call    near ___2a608h
___2f861h:
		mov     ecx, 4b000h
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		call 	__MOVS
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___2f887h:
		cmp     dword [___19bd60h], byte 0
		je      short ___2f8a1h
		cmp     dword [___196a84h], byte 0
		je      short ___2f8a1h
		mov     dword [esp+4], 0ffffffffh
___2f8a1h:
		cmp     dword [esp+4], byte 0
		je      near ___2f381h
___2f8ach:
		mov     edx, 1
		mov     ebx, [___196a84h]
		mov     [___185a20h], edx
		test    ebx, ebx
		je      short ___2f8c7h
		mov     [___185a34h], edx
___2f8c7h:
		cmp     dword [___196a84h], byte 0
		jne     near ___2fae5h
		cmp     dword [___185a2ch], byte 0
		jne     near ___2fae5h
		call    near ___2b318h
		mov     ebp, 32h
		mov     eax, 0ffdch
		mov     edx, 640000h
		mov     [esp+0ch], eax
		mov     [esp+1ch], edx
___2f8fdh:
		call    near ___58c60h
		mov     ebx, 2
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		je      short ___2f97dh
		cmp     dword [___1a1ef0h], byte 5
		jne     short ___2f97dh
		cmp     dword [esp+4], byte 0ffffffffh
		jne     short ___2f97dh
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
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     esi, [___1a1ee8h]
		inc     esi
		mov     [___1a1ee8h], esi
		cmp     esi, byte 16h
		jle     short ___2f97dh
		xor     eax, eax
		mov     [___1a1ee8h], eax
___2f97dh:
		cmp     dword [esp+4], byte 0ffffffffh
		jne     short ___2f98dh
		mov     eax, [esp+0ch]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___2f98dh:
		mov     esi, [esp+1ch]
		xor     ebx, ebx
		xor     edi, edi
		mov     [esp], ebx
___2f998h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     ecx, [esp]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp], ecx
		cmp     ecx, byte 60h
		jl      near ___2f998h
		mov     edx, 80h
		mov     esi, [esp+1ch]
		mov     edi, 600h
		mov     [esp], edx
___2fa33h:
		xor     eax, eax
		mov     al, [esp]
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
		mov     ebx, [esp]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      near ___2fa33h
		mov     edi, [esp+1ch]
		mov     esi, [esp+0ch]
		dec     ebp
		sub     edi, 20000h
		sub     esi, 51eh
		mov     [esp+1ch], edi
		mov     [esp+0ch], esi
		test    ebp, ebp
		jge     near ___2f8fdh
___2fae5h:
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
