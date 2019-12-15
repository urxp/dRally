cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___196a74h
	extern	___1a2147h
	extern	___36adch
	extern	___18250ch
	extern	___185c0bh
	extern	___37ed4h
	extern	___1a1108h
	extern	___12e78h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2b318h
	extern	___58c60h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___2ab50h
	extern	___38768h
	extern	___5994ch
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fbch
	extern	___1a0fd8h
	extern	___36068h
	extern	___185a28h
	extern	___65710h
	extern	___36358h
	extern	___36718h
	extern	___30a84h
	extern	___30c60h
	extern	___1a1ef8h
	extern	___1a0224h
	extern	___196ab4h
	extern	___1826a8h
	extern	___38708h
	extern	___1240ch
	extern	___24548h
	extern	___2faf0h
	extern	___1854b8h
	extern	___24cc54h
	extern	___654d4h
	extern	___185a14h
	extern	___185a3ch
	extern	___185a4ch
	extern	___649a8h
	extern	___64a28h
	extern	___180130h
	extern	___1a214ah
	extern	___1a0d60h
	extern	___1826c8h
	extern	GET_FILE_SIZE
	extern	___181c90h
	extern	___1826d4h
	extern	___10b80h
	extern	___181c9ch
	extern	___181ca8h
	extern	___64864h
	extern	___24cc58h
	extern	___6572ch
	extern	___65990h
	extern	___648d8h
	extern	___659b8h
	extern	___606dfh
	extern	___605deh
	extern	___196aa0h
	extern	___196a9ch
	extern	___196a98h
	extern 	VESA101_SETMODE

section .text

__GDECL(___3892ch)
		push    9ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 70h
		mov     [esp+64h], eax
		mov     ebx, [esp+64h]
		xor     edx, edx
		xor     ah, ah
		mov     [___196a74h], edx
		mov     [___1a2147h], ah
		cmp     ebx, byte 2
		jne     near ___38c51h
		call    near ___36adch
		mov     eax, 14h
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
		mov     edx, ___185c0bh
		call    near ___37ed4h
		mov     eax, [___1a1108h]
		xor     ebp, ebp
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___2b318h
___38994h:
		call    near ___58c60h
		xor     esi, esi
		xor     edi, edi
		mov     [esp+68h], esi
		mov     esi, ebp
___389a3h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     eax, [esp+68h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+68h], eax
		cmp     eax, byte 60h
		jl      near ___389a3h
		mov     ebx, 80h
		mov     edi, 600h
		mov     esi, ebp
		mov     [esp+68h], ebx
___38a40h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     ecx, [esp+68h]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+68h], ecx
		cmp     ecx, 100h
		jl      near ___38a40h
		add     ebp, 20000h
		cmp     ebp, 640000h
		jne     near ___38994h
___38ae2h:
		call    near ___2ab50h
		call    near ___38768h
		call    near ___5994ch
		test    al, al
		je      short ___38ae2h
		call    near ___2b318h
		mov     ebp, 640000h
___38affh:
		call    near ___58c60h
		mov     esi, ebp
		xor     edx, edx
		xor     edi, edi
		mov     [esp+68h], edx
___38b0eh:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     ebx, [esp+68h]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+68h], ebx
		cmp     ebx, byte 60h
		jl      near ___38b0eh
		mov     esi, 80h
		mov     edi, 600h
		mov     [esp+68h], esi
		mov     esi, ebp
___38babh:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     eax, [esp+68h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+68h], eax
		cmp     eax, dword 100h
		jl      near ___38babh
		sub     ebp, 20000h
		cmp     ebp, 0fffe0000h
		je      near ___38f99h
		jmp     near ___38affh
___38c51h:
		mov     ecx, 4b000h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 36h
		call 	__MOVS
		mov     ecx, 182h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fbch]
		add     ebx, 0d32ch
___38c8eh:
		mov     edi, edx
___38c90h:
		mov     al, [esi]
		or      al, al
		je      short ___38c98h
		mov     [ebx], al
___38c98h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___38c90h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___38c8eh
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     ebx, 0d362h
___38cc4h:
		mov     edi, edx
___38cc6h:
		mov     al, [esi]
		or      al, al
		je      short ___38cceh
		mov     [ebx], al
___38cceh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___38cc6h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___38cc4h
		mov     eax, 14h
		xor     ebp, ebp
		call    near ___37ed4h
		xor     eax, eax
		mov     [esp+6ch], ebp
		call    near ___36068h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___38cfah:
		cmp     dword [___185a28h], byte 0
		je      short ___38d0ah
		mov     eax, ebp
		call    near ___65710h
___38d0ah:
		call    near ___58c60h
		xor     edi, edi
		mov     esi, [esp+6ch]
		mov     [esp+68h], edi
___38d19h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     eax, [esp+68h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+68h], eax
		cmp     eax, dword 100h
		jl      near ___38d19h
		add     word [esp+6eh], byte 2
		mov     ebx, [esp+6ch]
		add     ebp, 51eh
		cmp     ebx, 640000h
		jne     near ___38cfah
		xor     ecx, ecx
		mov     [___185a28h], ecx
___38dcch:
		call    near ___2ab50h
		call    near ___38768h
		call    near ___5994ch
		mov     dl, al
		test    al, al
		je      short ___38dcch
		cmp     al, 1
		je      short ___38de7h
		xor     dl, al
___38de7h:
		xor     eax, eax
		mov     al, dl
		call    near ___36358h
		test    dl, dl
		jne     short ___38e0fh
___38df4h:
		call    near ___2ab50h
		call    near ___38768h
		call    near ___5994ch
		mov     dl, al
		test    al, al
		je      short ___38df4h
		cmp     al, 1
		je      short ___38e0fh
		xor     dl, al
___38e0fh:
		xor     eax, eax
		mov     al, dl
		call    near ___36718h
		test    dl, dl
		jne     short ___38e2fh
___38e1ch:
		call    near ___2ab50h
		call    near ___38768h
		call    near ___5994ch
		test    al, al
		je      short ___38e1ch
___38e2fh:
		mov     edx, 13h
		xor     eax, eax
		call    near ___30a84h
		mov     eax, 14h
		call    near ___30c60h
		call    near ___36adch
		mov     eax, 14h
		mov     esi, [esp+64h]
		call    near ___37ed4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		test    esi, esi
		jne     near ___38f61h
		mov     edx, [___1a1ef8h]
		mov     [esp+68h], esi
		xor     eax, eax
___38e71h:
		mov     ebp, [eax+___1a0224h]
		cmp     esi, ebp
		jge     short ___38e83h
		cmp     edx, [esp+68h]
		je      short ___38e83h
		mov     esi, ebp
___38e83h:
		mov     ebx, [esp+68h]
		inc     ebx
		add     eax, byte 6ch
		mov     [esp+68h], ebx
		cmp     ebx, byte 14h
		jl      short ___38e71h
		mov     edi, [___1a1ef8h]
		lea     eax, [edi*8+0]
		sub     eax, edi
		shl     eax, 2
		sub     eax, edi
		cmp     esi, [eax*4+___1a0224h]
		jge     short ___38ec1h
		cmp     dword [___196ab4h], byte 0
		jne     short ___38ec1h
		mov     byte [___1a2147h], 1
___38ec1h:
		mov     edi, [___1a1ef8h]
		lea     eax, [edi*8+0]
		sub     eax, edi
		shl     eax, 2
		sub     eax, edi
		cmp     esi, [eax*4+___1a0224h]
		setl    al
		mov     ecx, 46b6eh
		mov     ebx, ___1826a8h
		and     eax, 0ffh
		mov     edx, ___185c0bh
		mov     [___196ab4h], eax
		call    near ___38708h
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___1240ch
		call    near ___24548h
		call    near ___2faf0h
		call    near ___38708h
		push    8000h
		mov     edx, 1ch
		mov     ebx, [___1854b8h]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___38f61h:
		cmp     dword [esp+64h], byte 1
		jne     short ___38f86h
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___38f86h:
		call    near ___2ab50h
		call    near ___38768h
		call    near ___5994ch
		test    al, al
		je      short ___38f86h
___38f99h:
		cmp     dword [esp+64h], byte 2
		je      near ___39383h
		cmp     dword [___185a14h], byte 0
		je      short ___38fc3h
		cmp     dword [___185a3ch], byte 0
		jne     short ___38fc3h
		cmp     dword [___185a4ch], byte 0
		jne     near ___39383h
___38fc3h:
		call    near ___2b318h
		mov     ebp, 640000h
___38fcdh:
		call    near ___58c60h
		cmp     byte [___1a2147h], 1
		jne     near ___3907dh
		mov     esi, ebp
		xor     eax, eax
		xor     edi, edi
		mov     [esp+68h], eax
___38fe9h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     eax, [esp+68h]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+68h], eax
		cmp     eax, dword 100h
		jge     near ___391b2h
		jmp     near ___38fe9h
___3907dh:
		xor     edi, edi
		mov     esi, ebp
		mov     [esp+68h], edi
___39085h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     ecx, [esp+68h]
		inc     ecx
		add     edi, byte 0ch
		mov     [esp+68h], ecx
		cmp     ecx, byte 60h
		jl      near ___39085h
		mov     edx, 80h
		mov     edi, 600h
		mov     esi, ebp
		mov     [esp+68h], edx
___39122h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     ebx, [esp+68h]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+68h], ebx
		cmp     ebx, 100h
		jl      near ___39122h
___391b2h:
		sub     ebp, 20000h
		cmp     ebp, 0fffe0000h
		jne     near ___38fcdh
		cmp     byte [___1a2147h], 1
		jne     near ___39617h
		call    near ___649a8h
		call    near ___64a28h
		mov     al, [___180130h]
		mov     [esp], al
		cmp     byte [___1a214ah], 2
		jne     short ___39215h
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
___39215h:
		mov     esi, ___1826c8h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		test    eax, eax
		jle     short ___39275h
		push    byte 78h
		push    byte 1
		mov     ecx, 2
		mov     ebx, ___181c90h
		push    ___1826d4h
		mov     edx, 1
		mov     eax, ___1826c8h
		call    near ___10b80h
		call    near ___649a8h
		call    near ___64a28h
___39275h:
		push    byte 5
		mov     ecx, ___181c9ch
		mov     ebx, 2
		mov     edx, ___181ca8h
		mov     eax, 1
		call    near ___64864h
		mov     eax, [___24cc58h]
		call    near ___6572ch
		mov     eax, 5622h
		mov     esi, 60h
		call    near ___65990h
		call    near ___648d8h
		mov     eax, 1
		mov     edi, 640000h
		call    near ___659b8h
		xor     ah, ah
		mov     [esp+68h], esi
		mov     [___1a2147h], ah
		call    near ___606dfh
		call 	VESA101_SETMODE
		call    near ___2b318h
		mov     eax, 46h
		;xor     ebx, ebx
		xor     edx, edx
		mov     esi, 480h
		call    near ___605deh
___392eeh:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     edx, [esp+68h]
		inc     edx
		add     esi, byte 0ch
		mov     [esp+68h], edx
		cmp     edx, 80h
		jge     near ___39617h
		jmp     near ___392eeh
___39383h:
		call    near ___2b318h
		mov     ebp, 640000h
___3938dh:
		call    near ___58c60h
		cmp     byte [___1a2147h], 1
		jne     near ___39439h
		xor     esi, esi
		xor     edi, edi
		mov     [esp+68h], esi
		mov     esi, ebp
___393a9h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     ebx, [esp+68h]
		inc     ebx
		add     edi, byte 0ch
		mov     [esp+68h], ebx
		cmp     ebx, 100h
		jl      near ___393a9h
___39439h:
		sub     ebp, 20000h
		cmp     ebp, 0fffe0000h
		jne     near ___3938dh
		cmp     byte [___1a2147h], 1
		jne     near ___39617h
		call    near ___649a8h
		call    near ___64a28h
		mov     al, [___180130h]
		mov     bl, [___1a214ah]
		mov     [esp], al
		cmp     bl, 2
		jne     short ___3949eh
		mov     esi, ___1a0d60h
		mov     edi, esp
		call 	__STRCAT
___3949eh:
		mov     esi, ___1826c8h
		mov     edi, esp
		call 	__STRCAT
		mov     eax, esp
		call    near GET_FILE_SIZE
		test    eax, eax
		jle     short ___394feh
		push    byte 78h
		push    byte 1
		mov     ecx, 2
		mov     ebx, ___181c90h
		push    ___1826d4h
		mov     edx, 1
		mov     eax, ___1826c8h
		call    near ___10b80h
		call    near ___649a8h
		call    near ___64a28h
___394feh:
		push    byte 5
		mov     ecx, ___181c9ch
		mov     ebx, 2
		mov     edx, ___181ca8h
		mov     eax, 1
		call    near ___64864h
		mov     eax, [___24cc58h]
		mov     esi, 480h
		call    near ___6572ch
		mov     eax, 5622h
		mov     edi, 640000h
		call    near ___65990h
		call    near ___648d8h
		mov     eax, 1
		xor     bh, bh
		call    near ___659b8h
		mov     [___1a2147h], bh
		call    near ___606dfh
		call 	VESA101_SETMODE
		call    near ___2b318h
		mov     eax, 46h
		;xor     ebx, ebx
		xor     edx, edx
		mov     ecx, 60h
		call    near ___605deh
		xor     eax, eax
		mov     [esp+68h], ecx
		mov     [___196aa0h], eax
		mov     [___196a9ch], eax
		mov     [___196a98h], eax
___39588h:
		xor     eax, eax
		mov     al, [esp+68h]
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
		mov     eax, [esp+68h]
		inc     eax
		add     esi, byte 0ch
		mov     [esp+68h], eax
		cmp     eax, dword 80h
		jl      near ___39588h
___39617h:
		mov     ebx, 1
		call    near ___5994ch
		mov     [___196a74h], ebx
		add     esp, byte 70h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
