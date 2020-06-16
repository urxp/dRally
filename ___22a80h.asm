cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a10dch
	extern	___1a0e28h
	extern	___180724h
	extern	itoa_
	extern	___185c7ah
	extern	___1a10b8h
	extern	___12e78h_cdecl
	extern	strupr_
	extern	___1a0e34h
	extern	___1a0e38h
	extern	___18768ah
	extern	___1a1100h__VESA101h_DefaultScreenBuffer
	extern	___3a7e0h
	extern	dRally_Sound_getPosition
	extern	___1a1ef4h
	extern	dRally_Sound_setPosition
	extern	dRally_Sound_setMasterVolume
	extern	___5994ch
	extern	___59b3ch
	extern	___2ab50h
	extern	___19bd60h
	extern	___23758h
	extern	___1a10ach
	extern	___196abch
	extern	___21fd4h
	extern	___1a1040h
	extern	___1a10a4h
	extern	___27f80h
	extern	___3a6a4h
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern 	restoreDefaultScreenBuffer

section .text

__GDECL(___22a80h)
		push    64h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 40h
		mov     ecx, 4b000h
		mov     edx, 280h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     ebp, 169adh
		call 	__MOVS
		mov     ecx, 28f00h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esi, 10680h
		lea     edi, [eax+10680h]
		mov     [esp+3ch], ebp
		call 	__MOVS
		mov     ecx, 36h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10dch]
		add     ebx, 0d200h
		xor     ebp, ebp
___22b0ch:
		mov     edi, edx
___22b0eh:
		mov     al, [esi]
		or      al, al
		je      short ___22b16h
		mov     [ebx], al
___22b16h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___22b0eh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___22b0ch
		mov     ebx, 16889h
		mov     ecx, ___1a0e28h
		mov     esi, 16950h
		xor     edx, edx
		mov     edi, 16948h
		mov     [esp+28h], edx
		mov     [esp+2ch], ebx
		mov     [esp+34h], ecx
		mov     [esp+38h], esi
		mov     [esp+30h], edi
___22b50h:
		mov     eax, [esp+28h]
		mov     ebx, 0ah
		mov     edx, esp
		mov     esi, ___180724h
		inc     eax
		mov     edi, esp
		call    near itoa_
		mov     edx, [esp+28h]
		call 	__STRCAT
		imul    eax, edx, byte 16h
		add     eax, 90h
		imul    eax, eax, 280h
		cmp     edx, byte 9
		jne     short ___22ba8h
		mov     ebx, esp
		lea     ecx, [eax+1ch]
		jmp     short ___22badh
___22ba8h:
		mov     ebx, esp
		lea     ecx, [eax+24h]
___22badh:
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     esi, [esp+34h]
		mov     edi, esp
		call 	__STRCPY
		mov     eax, esp
		mov     ecx, [esp+28h]
		call    near strupr_
		imul    eax, ecx, byte 16h
		add     eax, 90h
		imul    esi, eax, 280h
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     ecx, [esp+2ch]
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [ebp+___1a0e34h]
		call    near itoa_
		mov     edi, [ebp+___1a0e34h]
		test    edi, edi
		jl      short ___22c42h
		cmp     edi, byte 0ah
		jge     short ___22c42h
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		lea     ecx, [esi+158h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___22c42h:
		mov     edx, [ebp+___1a0e34h]
		cmp     edx, byte 0ah
		jl      short ___22c67h
		cmp     edx, byte 64h
		jge     short ___22c67h
		mov     ecx, [esp+38h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___22c67h:
		cmp     dword [ebp+___1a0e34h], byte 64h
		jl      short ___22c85h
		mov     ecx, [esp+30h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___22c85h:
		imul    esi, [ebp+___1a0e38h], byte 18h
		mov     ecx, [esp+3ch]
		mov     edx, ___185c7ah
		mov     edi, esp
		add     esi, ___18768ah
		add     ebp, byte 14h
		call 	__STRCPY
		mov     eax, esp
		mov     edi, [esp+28h]
		call    near strupr_
		mov     esi, [___1a10b8h]
		mov     ebx, eax
		mov     eax, esi
		inc     edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     [esp+28h], edi
		mov     eax, [esp+2ch]
		mov     edx, [esp+34h]
		mov     ebx, [esp+38h]
		mov     ecx, [esp+30h]
		mov     esi, [esp+3ch]
		add     eax, 3700h
		add     edx, byte 14h
		add     ebx, 3700h
		add     ecx, 3700h
		add     esi, 3700h
		mov     [esp+2ch], eax
		mov     [esp+34h], edx
		mov     [esp+38h], ebx
		mov     [esp+30h], ecx
		mov     [esp+3ch], esi
		cmp     edi, byte 0ah
		jl      near ___22b50h
		call 	restoreDefaultScreenBuffer
		mov     eax, 0ffffffffh
		call    near ___3a7e0h
	push 	edx
	push 	ecx
		call    near dRally_Sound_getPosition
	pop 	ecx
	pop 	edx
		and     eax, 0ff00h
		mov     [___1a1ef4h], eax
		mov     eax, 5100h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setPosition
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, 10000h
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx

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
___22d67h:
		call    near ___2ab50h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ah, al
		cmp     al, 3bh
		jne     short ___22d86h
		cmp     edx, [___19bd60h]
		je      short ___22d86h
		call    near ___23758h
		mov     ah, dl
___22d86h:
		test    ah, ah
		je      short ___22d67h

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

		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		call 	__MOVS
		mov     ecx, 2c380h
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esi, 0d200h
		lea     edi, [eax+0d200h]
		mov     edx, 280h
		call 	__MOVS
		mov     ecx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10ach]
		add     ebx, 0e600h
___22e02h:
		mov     edi, edx
___22e04h:
		mov     al, [esi]
		or      al, al
		je      short ___22e0ch
		mov     [ebx], al
___22e0ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___22e04h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___22e02h
		xor     eax, eax
		mov     ecx, 62h
		mov     al, [___196abch]
		mov     edx, 80h
		call    near ___21fd4h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		movzx   esi, byte [___196abch]
		add     ebx, 21728h
		mov     esi, [esi*4+___1a1040h]
		shr     dl, 2
___22e4fh:
		mov     ch, dl
___22e51h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___22e51h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___22e4fh
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23a18h
		shr     dl, 2
___22e90h:
		mov     ch, dl
___22e92h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___22e92h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___22e90h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23aa8h
		add     esi, 540h
		shr     dl, 2
___22ed7h:
		mov     ch, dl
___22ed9h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___22ed9h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___22ed7h
		mov     ecx, 75h
		mov     ebx, 0b2h
		mov     edx, 0cch
		mov     eax, 0fh
		xor     ebp, ebp
		call    near ___27f80h
		xor     edi, edi
		call 	restoreDefaultScreenBuffer
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3a6a4h
	pop 	eax
	pop		ecx
	pop		edx

___22f25h:
		call    near ___2ab50h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		cmp     al, 4bh
		jb      short ___22f63h
		jbe     short ___22f9ah
		cmp     al, 9ch
		jb      short ___22f56h
		jbe     near ___231eeh
		cmp     al, 0cbh
		jb      near ___231f3h
		jbe     short ___22f9ah
		cmp     al, 0cdh
		je      near ___230c3h
		jmp     near ___231f3h
___22f56h:
		cmp     al, 4dh
		je      near ___230c3h
		jmp     near ___231f3h
___22f63h:
		cmp     al, 1ch
		jb      short ___22f76h
		jbe     near ___231eeh
		cmp     al, 3bh
		je      short ___22f83h
		jmp     near ___231f3h
___22f76h:
		cmp     al, 1
		je      near ___231eeh
		jmp     near ___231f3h
___22f83h:
		cmp     dword [___19bd60h], byte 0
		je      near ___231f3h
		call    near ___23758h
		jmp     near ___231f3h
___22f9ah:
		test    ebp, ebp
		jle     short ___22fa1h
		dec     ebp
		jmp     short ___22fa6h
___22fa1h:
		mov     ebp, 11h
___22fa6h:
		push    8000h
		mov     edx, 1ah
		mov     esi, [___1854b0h]
		mov     eax, 1
		push    esi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23a18h
		add     esi, 0a80h
		shr     dl, 2
___22feeh:
		mov     ch, dl
___22ff0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___22ff0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___22feeh
		mov     ecx, 62h
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		movzx   esi, byte [ebp+___196abch]
		add     ebx, 21728h
		mov     esi, [esi*4+___1a1040h]
		shr     dl, 2
___23037h:
		mov     ch, dl
___23039h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___23039h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___23037h
		xor     eax, eax
		mov     al, [ebp+___196abch]
		xor     edx, edx
		call    near ___21fd4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___2306dh:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 8
		jl      short ___2306dh
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23a18h
		shr     dl, 2
___23097h:
		mov     ch, dl
___23099h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___23099h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___23097h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___231f3h
___230c3h:
		cmp     ebp, byte 11h
		jge     short ___230cbh
		inc     ebp
		jmp     short ___230cdh
___230cbh:
		xor     ebp, ebp
___230cdh:
		push    8000h
		mov     edx, 1ah
		mov     ecx, [___1854b0h]
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23aa8h
		add     esi, 0fc0h
		shr     dl, 2
___23115h:
		mov     ch, dl
___23117h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___23117h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___23115h
		mov     ecx, 62h
		xor     eax, eax
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     al, [ebp+___196abch]
		mov     edx, 80h
		add     ebx, 21728h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___2315fh:
		mov     ch, dl
___23161h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___23161h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2315fh
		xor     eax, eax
		mov     al, [ebp+___196abch]
		xor     edx, edx
		call    near ___21fd4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___23195h:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 8
		jl      short ___23195h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 23aa8h
		add     esi, 540h
		shr     dl, 2
___231c5h:
		mov     ch, dl
___231c7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___231c7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___231c5h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     short ___231f3h
___231eeh:
		mov     edi, 0ffffffffh
___231f3h:
		test    edi, edi
		je      near ___22f25h
		mov     ecx, 4b000h
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		call 	__MOVS
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		add     esp, byte 40h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
