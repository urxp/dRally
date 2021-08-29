/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a10e4h__VESA101h_DefaultScreenBufferA
	extern	___1a1160h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___135fch
	extern	___19bd60h
	extern	___185c0bh
	extern	___1a10fch
	extern	___12e78h_cdecl
	extern	___1a1108h
	extern	___23230h
	extern	___25330h
	extern	___1a0ff8h
	extern	___196abch
	extern	___1a1040h
	extern	___1a10a4h
	extern	___27f80h_cdecl
	extern	___2fca4h
	extern	___196ab8h
	extern	___196af4h
	extern	___1a2010h
	extern	___3a968h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___5994ch
	extern	___23758h
	extern	___24cc54h_sfx_volume
	extern	dRally_Sound_pushEffect
	extern	___1a1030h
	extern	___1a1038h
	extern 	restoreDefaultScreenBuffer

section .text

__GDECL(___2fe64h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     ecx, 4b000h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		xor     edx, edx
		mov     edi, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     [___1a1160h], edx
		call 	__MOVS
		mov     ecx, 6dh
		mov     eax, [___1a10e4h__VESA101h_DefaultScreenBufferA]
		mov     edx, 173h
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		xor     eax, eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

		cmp     dword [___19bd60h], byte 0
		je      short ___2fefbh
		mov     ecx, 390a3h
		mov     ebx, chat_mode
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 390d9h
		mov     ebx, k_f1
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___2fefbh:

	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     ecx, 29b80h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		mov     edx, 280h
		call 	__MOVS
	
	push 	edx
	push 	ecx
		call    ___25330h
	pop 	ecx
	pop 	edx

		mov     ecx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0ff8h]
		add     ebx, 0d200h
___2ff4eh:
		mov     edi, edx
___2ff50h:
		mov     al, [esi]
		or      al, al
		je      short ___2ff58h
		mov     [ebx], al
___2ff58h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2ff50h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2ff4eh
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, [___1a1160h]
		add     ebx, 12c20h
		mov     al, [eax+___196abch]
		and     eax, 0ffh
		mov     ecx, 62h
		mov     edx, 80h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___2ff98h:
		mov     ch, dl
___2ff9ah:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2ff9ah
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2ff98h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 14f10h
		shr     dl, 2
___2ffd9h:
		mov     ch, dl
___2ffdbh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2ffdbh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2ffd9h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 14fa0h
		add     esi, 540h
		shr     dl, 2
___30020h:
		mov     ch, dl
___30022h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30022h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30020h
		mov     ecx, 75h
		mov     ebx, 0b2h
		mov     edx, 6eh
		mov     eax, 7

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___27f80h_cdecl
	add 	esp, 10h

		call    near ___2fca4h
		mov     ecx, [___196ab8h]
		xor     edi, edi
		test    ecx, ecx
		jle     short ___300c7h
		xor     ebp, ebp
___3006eh:
		mov     ecx, 62h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		xor     eax, eax
		mov     esi, [ebp+___196af4h]
		mov     al, [edi+___1a2010h+1]
		mov     edx, 80h
		add     ebx, esi
		mov     esi, [eax*4+___1a1040h]
		inc     edi
		shr     dl, 2
___30099h:
		mov     ch, dl
___3009bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3009bh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30099h
		mov     eax, [___196ab8h]
		add     ebp, byte 4
		cmp     edi, eax
		jl      short ___3006eh
___300c7h:
		xor     edx, edx

	push 	edx
	push 	ecx
		call 	restoreDefaultScreenBuffer
	pop 	ecx
	pop 	edx

		xor     eax, eax
		mov     [esp], edx
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___3a968h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___300e2h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		cmp     eax, byte 4bh
		jb      short ___30134h
		jbe     near ___3016eh
		cmp     eax, dword 9ch
		jb      short ___30126h
		jbe     near ___3051dh
		cmp     eax, dword 0cbh
		jb      near ___306edh
		jbe     short ___3016eh
		cmp     eax, dword 0cdh
		je      near ___30345h
		jmp     near ___306edh
___30126h:
		cmp     eax, byte 4dh
		je      near ___30345h
		jmp     near ___306edh
___30134h:
		cmp     eax, byte 1ch
		jb      short ___30149h
		jbe     near ___3051dh
		cmp     eax, byte 3bh
		je      short ___30157h
		jmp     near ___306edh
___30149h:
		cmp     eax, byte 1
		je      near ___306e6h
		jmp     near ___306edh
___30157h:
		cmp     dword [___19bd60h], byte 0
		je      near ___306edh
		call    near ___23758h
		jmp     near ___306edh
___3016eh:
		mov     ebx, [___1a1160h]
		test    ebx, ebx
		jle     short ___30183h
		lea     esi, [ebx-1]
		mov     [___1a1160h], esi
		jmp     short ___3018dh
___30183h:
		mov     dword [___1a1160h], 13h
___3018dh:
		push    8000h
		mov     edx, 1ah
		mov     edi, 28000h
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h_sfx_volume]
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
		add     ebx, 14f10h
		add     esi, 0a80h
		shr     dl, 2
___301d5h:
		mov     ch, dl
___301d7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___301d7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___301d5h
		cmp     dword [___1a1160h], byte 12h
		jne     short ___30241h
		mov     ecx, 62h
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1030h]
		add     ebx, 12c20h
		shr     dl, 2
___3021fh:
		mov     ch, dl
___30221h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30221h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3021fh
___30241h:
		cmp     dword [___1a1160h], byte 13h
		jne     short ___3028bh
		mov     ecx, 62h
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1038h]
		add     ebx, 12c20h
		shr     dl, 2
___30269h:
		mov     ch, dl
___3026bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3026bh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30269h
___3028bh:
		mov     edx, [___1a1160h]
		cmp     edx, byte 12h
		jge     short ___302e3h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     al, [edx+___196abch]
		add     ebx, 12c20h
		and     eax, 0ffh
		mov     ecx, 62h
		mov     edx, 80h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___302c1h:
		mov     ch, dl
___302c3h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___302c3h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___302c1h
___302e3h:
		call    near ___2fca4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___302efh:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 8
		jl      short ___302efh
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 14f10h
		shr     dl, 2
___30319h:
		mov     ch, dl
___3031bh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3031bh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30319h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___306edh
___30345h:
		mov     ebx, [___1a1160h]
		cmp     ebx, byte 13h
		jge     short ___3035bh
		lea     esi, [ebx+1]
		mov     [___1a1160h], esi
		jmp     short ___30363h
___3035bh:
		xor     ecx, ecx
		mov     [___1a1160h], ecx
___30363h:
		push    8000h
		mov     edx, 1ah
		mov     edi, 28000h
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h_sfx_volume]
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
		add     ebx, 14fa0h
		add     esi, 0fc0h
		shr     dl, 2
___303abh:
		mov     ch, dl
___303adh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___303adh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___303abh
		cmp     dword [___1a1160h], byte 12h
		jne     short ___30417h
		mov     ecx, 62h
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1030h]
		add     ebx, 12c20h
		shr     dl, 2
___303f5h:
		mov     ch, dl
___303f7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___303f7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___303f5h
___30417h:
		cmp     dword [___1a1160h], byte 13h
		jne     short ___30461h
		mov     ecx, 62h
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1038h]
		add     ebx, 12c20h
		shr     dl, 2
___3043fh:
		mov     ch, dl
___30441h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30441h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3043fh
___30461h:
		mov     edx, [___1a1160h]
		cmp     edx, byte 12h
		jge     short ___304b5h
		mov     ecx, 62h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		movzx   esi, byte [edx+___196abch]
		mov     edx, 80h
		add     ebx, 12c20h
		mov     esi, [esi*4+___1a1040h]
		shr     dl, 2
___30493h:
		mov     ch, dl
___30495h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30495h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30493h
___304b5h:
		call    near ___2fca4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___304c1h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 8
		jl      short ___304c1h
		mov     ecx, 54h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10a4h]
		add     ebx, 14fa0h
		add     esi, 540h
		shr     dl, 2
___304f1h:
		mov     ch, dl
___304f3h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___304f3h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___304f1h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     near ___306edh
___3051dh:
		push    8000h
		mov     edx, 19h
		mov     ecx, 28000h
		mov     eax, 1
		push    ecx
		xor     ebx, ebx
		mov     ecx, [___24cc54h_sfx_volume]
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		cmp     dword [___1a1160h], byte 12h
		jne     near ___3063bh
		mov     edi, [___196ab8h]
		test    edi, edi
		jle     near ___30618h
		xor     dl, dl
		mov     eax, edi
		mov     [edi+___1a2010h+1], dl
		test    edi, edi
		jle     short ___30571h
		lea     eax, [edi-1]
		mov     [___196ab8h], eax
___30571h:
		mov     edx, 23f00h
		mov     ebx, 203h
___3057bh:
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, ebx
		add     esi, edx
		add     edi, edx
		add     edx, 280h
		call 	__MOVS
		cmp     edx, 39080h
		jne     short ___3057bh
		mov     edx, [___196ab8h]
		xor     edi, edi
		test    edx, edx
		jle     near ___3063bh
		xor     ebp, ebp
___305bdh:
		mov     edx, 80h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		movzx   esi, byte [edi+___1a2010h+1]
		mov     ecx, [ebp+___196af4h]
		mov     esi, [esi*4+___1a1040h]
		add     ebx, ecx
		mov     ecx, 62h
		inc     edi
		shr     dl, 2
___305e7h:
		mov     ch, dl
___305e9h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___305e9h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___305e7h
		mov     esi, [___196ab8h]
		add     ebp, byte 4
		cmp     edi, esi
		jge     short ___3063bh
		jmp     short ___305bdh
___30618h:
		push    8000h
		mov     edx, 1dh
		mov     ebp, 28000h
		mov     eax, 1
		push    ebp
		mov     ecx, [___24cc54h_sfx_volume]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___3063bh:
		cmp     dword [___1a1160h], byte 13h
		jne     short ___3064bh
		mov     dword [esp], 0ffffffffh
___3064bh:
		mov     eax, [___1a1160h]
		cmp     eax, byte 12h
		jge     near ___306dah
		mov     edx, [___196ab8h]
		cmp     edx, byte 9
		jge     short ___306d3h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, [edx*4+___196af4h]
		mov     al, [eax+___196abch]
		add     ebx, ecx
		and     eax, 0ffh
		mov     ecx, 62h
		mov     edx, 80h
		mov     esi, [eax*4+___1a1040h]
		shr     dl, 2
___30692h:
		mov     ch, dl
___30694h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___30694h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___30692h
		mov     eax, [___196ab8h]
		mov     edx, [___1a1160h]
		mov     dl, [edx+___196abch]
		mov     [eax+___1a2010h+1], dl
		inc     eax
		mov     [___196ab8h], eax
		jmp     short ___306dah
___306d3h:
		mov     dword [esp], 0fffffffeh
___306dah:
		call    near ___2fca4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		jmp     short ___306edh
___306e6h:
		mov     dword [esp], 0ffffffffh
___306edh:
		cmp     dword [esp], byte 0
		je      near ___300e2h
		mov     edi, [___196ab8h]
		test    edi, edi
		jne     short ___30711h
		lea     eax, [edi+1]
		xor     dh, dh
		mov     [___196ab8h], eax
		mov     [edi+___1a2010h+1], dh
___30711h:
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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

		cmp     dword [___19bd60h], byte 0
		je      short ___3078dh
		mov     ecx, 390a3h
		mov     ebx, chat_mode
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 390d9h
		mov     ebx, k_f1
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___3078dh:
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
chat_mode:
	db 	"press   to enter chat mode",0,0
k_f1:
	db 	"F1",0,0
*/
