/*
cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRLEN
	extern 	___3f71ch__allocateMemory
	extern 	__STOSB
	extern 	___19ded0h
	extern 	___135fch
	extern 	___23230h
	extern 	___13710h
	extern 	___13248h_cdecl
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___24e4ach
	extern 	___2ab50h
	extern 	___23594h
	extern 	___5994ch
	extern 	___59b3ch
	extern 	___24cc54h
	extern 	dRally_Sound_pushEffect
	extern 	atoi
	extern 	___185a54h
	extern 	___185a14h_UseWeapons
	extern 	___196ab8h
	extern 	___1a2010h
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1aa28h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___1ad30h
	extern 	memset
	extern 	dRally_Memory_free
	extern 	___1a10fch
	extern 	___61278h
	extern 	___623d4h
	extern 	___199f9ch
	extern 	___61cd0h
	extern 	___1123ch
	extern 	___19bd60h
	extern 	___1a1098h
	extern 	CONNECTION_TYPE
	extern 	___196adch
	extern 	___10754h
	extern 	___60705h
	extern 	___1c6bch
	extern 	shop_main
	extern 	___185a24h

section .text

__GDECL(___1b140h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     edx, 50h
		mov     eax, 64h
		mov     ebx, 60h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		xor     ecx, ecx
		mov     [esp+10h], edx
		mov     [esp], ecx
		mov     ebp, eax
		mov     ecx, 4
		lea     eax, [esp+4]
		xor     edx, edx
		mov     [esp+0ch], ebx

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

		mov     dl, 0
		xor     eax, eax
___1b18eh:
		mov     [eax+___19ded0h], dl
		add     eax, byte 20h
		cmp     eax, dword 80h
		jne     short ___1b18eh
		mov     dl, 0
		xor     eax, eax
___1b1a6h:
		mov     [eax+___19ded0h+0bh], dl
		add     eax, byte 20h
		cmp     eax, dword 80h
		jne     short ___1b1a6h
		mov     esi, 9
		xor     ebx, ebx
___1b1bdh:
		mov     eax, ebx
		mov     edx, esi
		shl     eax, 5
___1b1c4h:
		xor     cl, cl
		mov     [eax+___19ded0h+13h], cl
		inc     eax
		cmp     eax, edx
		jne     short ___1b1c4h
		inc     ebx
		add     esi, byte 20h
		cmp     ebx, byte 4
		jl      short ___1b1bdh
		xor     eax, edx
___1b1dch:
		xor     ch, ch
		mov     [eax+___19ded0h+12h], ch
		add     eax, byte 20h
		cmp     eax, dword 80h
		jne     short ___1b1dch
		xor     eax, eax
___1b1f0h:
		xor     esi, esi
		mov     [eax+___19ded0h+1ch], esi
		add     eax, byte 20h
		cmp     eax, dword 80h
		jne     short ___1b1f0h
		mov     ecx, 6dh
		mov     ebx, 27fh
		mov     edx, 173h
		xor     eax, eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		xor     edx, edx
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx

		mov     eax, 2
		xor     edx, edx
		mov     ecx, 64h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0e9h
		mov     ebx, 88h
		mov     eax, edx

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 294fah
		mov     ebx, loc_wait
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, [___24e4ach]
		mov     dx, [eax+2]
		mov     [eax], dx
		mov     edi, 12h
___1b279h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edx, 0ah
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1b3e7h
		cmp     byte [ebp+1], 1
		jne     near ___1b327h
		mov     edx, ebp
		xor     eax, eax
___1b2a0h:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		shl     ebx, 5
		inc     edx
		lea     ecx, [ebx+eax*1]
		mov     bl, [edx+1]
		inc     eax
		mov     [ecx+___19ded0h], bl
		cmp     eax, byte 0bh
		jl      short ___1b2a0h
		mov     edx, ebp
		xor     eax, eax
___1b2bfh:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		mov     cl, [edx+0dh]
		shl     ebx, 5
		inc     edx
		mov     [ebx+eax+___19ded0h+0bh], cl
		inc     eax
		cmp     eax, byte 7
		jl      short ___1b2bfh
		mov     edx, ebp
		xor     eax, eax
___1b2dch:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		shl     ebx, 5
		inc     edx
		lea     ecx, [ebx+eax*1]
		mov     bl, [edx+14h]
		inc     eax
		mov     [ecx+___19ded0h+13h], bl
		cmp     eax, byte 9
		jl      short ___1b2dch
		xor     eax, eax
		mov     al, [ebp+0]
		mov     edx, eax
		shl     edx, 5
		mov     al, [ebp+14h]
		mov     [edx+___19ded0h+12h], al
		xor     eax, eax
		mov     al, [ebp+0]
		xor     edx, edx
		shl     eax, 5
		mov     dl, [ebp+1eh]
		mov     [eax+___19ded0h+1ch], edx
		xor     eax, eax
		mov     al, [ebp+0]
		mov     byte [esp+eax*1+4], 1
___1b327h:
		cmp     byte [ebp+1], 0
		jne     near ___1b3c7h
		xor     eax, eax
___1b333h:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h], dl
		cmp     eax, byte 4
		jl      short ___1b333h
		mov     dl, 0
		xor     eax, eax
___1b357h:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h+0bh], dl
		cmp     eax, byte 4
		jl      short ___1b357h
		xor     ebx, ebx
___1b36dh:
		xor     eax, eax
___1b36fh:
		xor     edx, edx
		mov     dl, [ebp+0]
		shl     edx, 5
		xor     cl, cl
		mov     [edx+eax+___19ded0h+13h], cl
		inc     eax
		cmp     eax, byte 9
		jl      short ___1b36fh
		inc     ebx
		cmp     ebx, byte 4
		jl      short ___1b36dh
		xor     eax, eax
___1b38eh:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ch, ch
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+12h], ch
		cmp     eax, byte 4
		jl      short ___1b38eh
		xor     eax, eax
___1b3a6h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ebx, ebx
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+1ch], ebx
		cmp     eax, byte 4
		jl      short ___1b3a6h
		xor     eax, eax
		mov     al, [ebp+0]
		xor     dl, dl
		mov     [esp+eax*1+4], dl
___1b3c7h:
		mov     dh, [ebp+1]
		cmp     dh, 2
		jne     short ___1b3e7h
		xor     eax, eax
		mov     al, [ebp+0]
		shl     eax, 5
		mov     byte [eax+___19ded0h], 0ffh
		xor     eax, eax
		mov     al, [ebp+0]
		mov     [esp+eax*1+4], dh
___1b3e7h:
		mov     edx, edi
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1b4b9h
		cmp     byte [ebp+1], 1
		jne     short ___1b417h
		xor     eax, eax
		mov     al, [ebp+0]
		shl     eax, 5
		mov     byte [eax+___19ded0h], 0ffh
		xor     eax, eax
		mov     al, [ebp+0]
		mov     byte [esp+eax*1+4], 2
___1b417h:
		cmp     byte [ebp+1], 0
		jne     near ___1b4b9h
		xor     eax, eax
___1b423h:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h], dl
		cmp     eax, byte 4
		jl      short ___1b423h
		xor     eax, eax
___1b441h:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h+0bh], dl
		cmp     eax, byte 4
		jl      short ___1b441h
		xor     ebx, ebx
___1b45fh:
		xor     eax, eax
___1b461h:
		xor     edx, edx
		mov     dl, [ebp+0]
		shl     edx, 5
		xor     cl, cl
		mov     [edx+eax+___19ded0h+13h], cl
		inc     eax
		cmp     eax, byte 9
		jl      short ___1b461h
		inc     ebx
		cmp     ebx, byte 4
		jl      short ___1b45fh
		xor     eax, eax
___1b480h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ch, ch
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+12h], ch
		cmp     eax, byte 4
		jl      short ___1b480h
		xor     eax, eax
___1b498h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ecx, ecx
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+1ch], ecx
		cmp     eax, byte 4
		jl      short ___1b498h
		xor     eax, eax
		mov     al, [ebp+0]
		xor     dl, dl
		mov     [esp+eax*1+4], dl
___1b4b9h:
		inc     esi
		cmp     esi, byte 46h
		jl      near ___1b279h

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

		mov     eax, [___24e4ach]
		mov     dx, [eax+2]
		mov     [eax], dx
		xor     dh, dh
		mov     [esp+20h], dh
		mov     edx, [esp+0ch]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+10h]
		shl     eax, 7
		add     eax, esi
		mov     bl, 1
		add     eax, byte 14h
		mov     [esp+24h], bl
		mov     [esp+18h], eax
___1b505h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     esi, 1
		mov     edi, 0ah
___1b514h:
		mov     edx, edi
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1b6cch
		cmp     byte [ebp+1], 1
		jne     near ___1b5d3h
		xor     eax, eax
		mov     al, [ebp+0]
		mov     cl, [esp+eax*1+4]
		test    cl, cl
		je      short ___1b545h
		cmp     cl, 2
		jne     near ___1b5d3h
___1b545h:
		mov     edx, ebp
		xor     eax, eax
___1b549h:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		mov     cl, [edx+2]
		shl     ebx, 5
		inc     edx
		mov     [ebx+eax+___19ded0h], cl
		inc     eax
		cmp     eax, byte 0bh
		jl      short ___1b549h
		mov     edx, ebp
		xor     eax, eax
___1b566h:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		shl     ebx, 5
		inc     edx
		lea     ecx, [ebx+eax*1]
		mov     bl, [edx+0ch]
		inc     eax
		mov     [ecx+___19ded0h+0bh], bl
		cmp     eax, byte 7
		jl      short ___1b566h
		mov     edx, ebp
		xor     eax, eax
___1b585h:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		shl     ebx, 5
		inc     edx
		lea     ecx, [ebx+eax*1]
		mov     bl, [edx+14h]
		inc     eax
		mov     [ecx+___19ded0h+13h], bl
		cmp     eax, byte 9
		jl      short ___1b585h
		xor     eax, eax
		mov     al, [ebp+0]
		shl     eax, 5
		mov     dl, [ebp+14h]
		mov     [eax+___19ded0h+12h], dl
		xor     eax, eax
		mov     al, [ebp+0]
		xor     edx, edx
		shl     eax, 5
		mov     dl, [ebp+1eh]
		mov     [eax+___19ded0h+1ch], edx
		xor     eax, eax
		mov     dl, 1
		mov     al, [ebp+0]
		mov     [esp+24h], dl
		mov     [esp+eax*1+4], dl
___1b5d3h:
		cmp     byte [ebp+1], 0
		jne     near ___1b692h
		xor     eax, eax
		mov     al, [ebp+0]
		mov     bh, [esp+eax*1+4]
		cmp     bh, 1
		je      short ___1b5f4h
		cmp     bh, 2
		jne     near ___1b692h
___1b5f4h:
		xor     eax, eax
___1b5f6h:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h], dl
		cmp     eax, byte 4
		jl      short ___1b5f6h
		xor     eax, eax
___1b614h:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h+0bh], dl
		cmp     eax, byte 4
		jl      short ___1b614h
		xor     ebx, ebx
___1b632h:
		xor     eax, eax
___1b634h:
		xor     edx, edx
		mov     dl, [ebp+0]
		shl     edx, 5
		xor     ch, ch
		mov     [edx+eax+___19ded0h+13h], ch
		inc     eax
		cmp     eax, byte 9
		jl      short ___1b634h
		inc     ebx
		cmp     ebx, byte 4
		jl      short ___1b632h
		xor     eax, eax
___1b653h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     bl, bl
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+12h], bl
		cmp     eax, byte 4
		jl      short ___1b653h
		xor     eax, eax
___1b66bh:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ebx, ebx
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+1ch], ebx
		cmp     eax, byte 4
		jl      short ___1b66bh
		xor     eax, eax
		mov     cl, 1
		mov     al, [ebp+0]
		xor     bh, bh
		mov     [esp+24h], cl
		mov     [esp+eax*1+4], bh
___1b692h:
		cmp     byte [ebp+1], 2
		jne     short ___1b6ceh
		xor     eax, eax
		mov     al, [ebp+0]
		mov     dl, [esp+eax*1+4]
		cmp     dl, 1
		je      short ___1b6aah
		test    dl, dl
		jne     short ___1b6ceh
___1b6aah:
		xor     eax, eax
		mov     al, [ebp+0]
		shl     eax, 5
		mov     byte [eax+___19ded0h], 0ffh
		xor     eax, eax
		mov     cl, 1
		mov     al, [ebp+0]
		mov     bh, 2
		mov     [esp+24h], cl
		mov     [esp+eax*1+4], bh
		jmp     short ___1b6ceh
___1b6cch:
		xor     esi, esi
___1b6ceh:
		cmp     esi, byte 1
		je      near ___1b514h
		mov     esi, 1
		mov     cl, 2
		mov     edi, 12h
___1b6e3h:
		mov     edx, edi
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1b7e9h
		mov     ch, [ebp+1]
		cmp     ch, 1
		jne     short ___1b72bh
		xor     eax, eax
		mov     al, [ebp+0]
		mov     dl, [esp+eax*1+4]
		cmp     dl, ch
		je      short ___1b70dh
		test    dl, dl
		jne     short ___1b72bh
___1b70dh:
		xor     eax, eax
		mov     al, [ebp+0]
		shl     eax, 5
		mov     byte [eax+___19ded0h], 0ffh
		xor     eax, eax
		mov     bh, 1
		mov     al, [ebp+0]
		mov     [esp+24h], bh
		mov     [esp+eax*1+4], cl
___1b72bh:
		cmp     byte [ebp+1], 0
		jne     near ___1b7ebh
		xor     eax, eax
		mov     al, [ebp+0]
		mov     dl, [esp+eax*1+4]
		cmp     dl, 1
		je      short ___1b74bh
		cmp     cl, dl
		jne     near ___1b7ebh
___1b74bh:
		xor     eax, eax
___1b74dh:
		xor     edx, edx
		mov     dl, [ebp+0]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h], dl
		cmp     eax, byte 4
		jl      short ___1b74dh
		mov     bl, 0
		xor     eax, eax
___1b771h:
		xor     edx, edx
		mov     dl, [ebp+0]
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+0bh], bl
		cmp     eax, byte 4
		jl      short ___1b771h
		xor     ebx, ebx
___1b787h:
		xor     eax, eax
___1b789h:
		xor     edx, edx
		mov     dl, [ebp+0]
		shl     edx, 5
		xor     ch, ch
		mov     [edx+eax+___19ded0h+13h], ch
		inc     eax
		cmp     eax, byte 9
		jl      short ___1b789h
		inc     ebx
		cmp     ebx, byte 4
		jl      short ___1b787h
		xor     eax, eax
___1b7a8h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     bl, bl
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+12h], bl
		cmp     eax, byte 4
		jl      short ___1b7a8h
		xor     eax, eax
___1b7c0h:
		xor     edx, edx
		mov     dl, [ebp+0]
		xor     ebx, ebx
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+1ch], ebx
		cmp     eax, byte 4
		jl      short ___1b7c0h
		xor     eax, eax
		mov     ch, 1
		mov     al, [ebp+0]
		xor     bh, bh
		mov     [esp+24h], ch
		mov     [esp+eax*1+4], bh
		jmp     short ___1b7ebh
___1b7e9h:
		xor     esi, esi
___1b7ebh:
		cmp     esi, byte 1
		je      near ___1b6e3h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [esp+1ch], eax
		cmp     eax, byte 50h
		jb      short ___1b832h
		jbe     near ___1b88ah
		cmp     eax, dword 0c8h
		jb      short ___1b822h
		jbe     short ___1b84ah
		cmp     eax, dword 0d0h
		je      short ___1b88ah
		jmp     near ___1bb10h
___1b822h:
		cmp     eax, dword 9ch
		je      near ___1b8cbh
		jmp     near ___1bb10h
___1b832h:
		cmp     eax, byte 1ch
		jb      near ___1bb10h
		jbe     near ___1b8cbh
		cmp     eax, byte 48h
		jne     near ___1bb10h
___1b84ah:
		mov     bl, [esp+20h]
		test    bl, bl
		jbe     short ___1b85ch
		mov     cl, bl
		dec     cl
		mov     [esp+20h], cl
		jmp     short ___1b861h
___1b85ch:
		mov     byte [esp+20h], 3
___1b861h:
		mov     ch, 1
		push    8000h
		mov     eax, 1
		mov     edx, 28000h
		xor     ebx, ebx
		mov     [esp+28h], ch
		push    edx
		mov     edx, 1ah
		mov     ecx, [___24cc54h]
		jmp     near ___1bb0bh
___1b88ah:
		mov     al, [esp+20h]
		cmp     al, 3
		jae     short ___1b89ch
		mov     dl, al
		inc     dl
		mov     [esp+20h], dl
		jmp     short ___1b8a2h
___1b89ch:
		xor     ah, ah
		mov     [esp+20h], ah
___1b8a2h:
		mov     dh, 1
		push    8000h
		mov     eax, 1
		mov     ecx, 28000h
		xor     ebx, ebx
		mov     [esp+28h], dh
		push    ecx
		mov     edx, 1ah
		mov     ecx, [___24cc54h]
		jmp     near ___1bb0bh
___1b8cbh:
		movzx   esi, byte [esp+20h]
		mov     eax, ___19ded0h
		shl     esi, 5
		add     eax, esi
		mov     edi, eax
		mov     [esp+14h], eax
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___1baedh
		cmp     byte [esi+___19ded0h], 0ffh
		je      near ___1baedh
		push    8000h
		mov     edx, 19h
		mov     ecx, 28000h
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
		mov     eax, [esp+14h]
		add     eax, byte 0bh

	push 	edx
	push 	ecx
	push 	eax
		call    atoi
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [___185a54h], eax
		mov     eax, [esi+___19ded0h+1ch]
		mov     [___185a14h_UseWeapons], eax
		xor     eax, eax
		mov     al, [esi+___19ded0h+12h]
		mov     [___196ab8h], eax
		xor     eax, eax
___1b94dh:
		xor     ebx, ebx
		mov     bl, [esp+20h]
		mov     edx, ebx
		shl     edx, 5
		mov     dl, [edx+eax+___19ded0h+13h]
		mov     [eax+___1a2010h+1], dl
		inc     eax
		cmp     eax, byte 9
		jl      short ___1b94dh
		mov     ecx, 2a580h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 0c5h
		mov     eax, 97h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___1aa28h
	add 	esp, 0ch
	pop 	ecx

		mov     [esp+8], eax
		cmp     eax, byte 1
		jne     short ___1b9ceh
		mov     [esp+1ch], eax
		mov     [esp], eax
		jmp     ___1ba46h
___1b9ceh:
		mov     ecx, 2a580h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0f000h
		add     edi, 0f000h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 1c2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 10dh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+10h]
		mov     eax, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, [esp+18h]
		mov     ebx, __dfr_180a78h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     byte [esp+24h], 1
___1ba46h:
		cmp     dword [esp+8], byte 2
		jne     near ___1bb10h
		xor     eax, eax
___1ba53h:
		xor     edx, edx
		mov     dl, [esp+20h]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h], dl
		cmp     eax, byte 4
		jl      short ___1ba53h
		xor     eax, eax
___1ba72h:
		xor     edx, edx
		mov     dl, [esp+20h]
		mov     ebx, edx
		mov     dl, 0
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h+0bh], dl
		cmp     eax, byte 4
		jl      short ___1ba72h
		xor     ebx, ebx
___1ba91h:
		xor     eax, eax
___1ba93h:
		xor     edx, edx
		mov     dl, [esp+20h]
		shl     edx, 5
		xor     cl, cl
		mov     [edx+eax+___19ded0h+13h], cl
		inc     eax
		cmp     eax, byte 9
		jl      short ___1ba93h
		inc     ebx
		cmp     ebx, byte 4
		jl      short ___1ba91h
		xor     eax, eax
___1bab3h:
		xor     edx, edx
		mov     dl, [esp+20h]
		xor     ch, ch
		shl     edx, 5
		inc     eax
		mov     [edx+___19ded0h+12h], ch
		cmp     eax, byte 4
		jl      short ___1bab3h
		xor     eax, eax
___1bacch:
		xor     edx, edx
		mov     dl, [esp+20h]
		mov     ebx, edx
		xor     ecx, ecx
		shl     ebx, 5
		inc     eax
		mov     [ebx+___19ded0h+1ch], ecx
		cmp     eax, byte 4
		jl      short ___1bacch
		xor     al, al
		mov     [esp+edx*1+4], al
		jmp     short ___1bb10h
___1baedh:
		push    8000h
		mov     edx, 1dh
		mov     ebx, 28000h
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
___1bb0bh:
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
___1bb10h:
		cmp     dword [esp+1ch], byte 1
		je      short ___1bb42h
		cmp     byte [esp+24h], 0
		je      short ___1bb37h
		mov     edx, [esp+0ch]
		xor     ebx, ebx
		mov     eax, [esp+10h]
		mov     bl, [esp+20h]
		call    near ___1ad30h
		xor     dl, dl
		mov     [esp+24h], dl
___1bb37h:
		cmp     dword [esp+1ch], byte 1
		jne     near ___1b505h
___1bb42h:
		mov     eax, [___24e4ach]
		add     eax, byte 4
		mov     dx, [eax-2]
		mov     ebx, 1000h
		mov     [eax-4], dx
		xor     edx, edx
		mov     ecx, 390a3h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

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

		mov     ebx, chat_mode
		mov     eax, ebp
		mov     edx, ___185c0bh

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

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
		mov     ebp, [esp]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h


	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx

		test    ebp, ebp
		je      ___1bc14h
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

		xor     eax, eax
		mov     al, [esp+20h]
		inc     eax
		mov     [___199f9ch], eax

	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1bbd1h
		call    near ___1123ch
___1bbd1h:
		mov     dword [___19bd60h], 1
		mov     eax, [___1a1098h]
		mov     edx, [CONNECTION_TYPE]
		mov     [___196adch], eax
		cmp     edx, byte 2
		jne     short ___1bbfah
		mov     eax, ___10754h

	push 	edx
	push 	ecx
	push 	eax
		call    ___60705h
	add 	esp, 4
	pop 	ecx
	pop 	edx

___1bbfah:
		mov     eax, [___185a54h]
		mov     ebx, 1
		call    near ___1c6bch

	push 	edx
	push 	ecx
	push 	eax
		call    shop_main
	pop		eax
	pop 	ecx
	pop 	edx

		mov     [___185a24h], ebx
___1bc14h:
		add     esp, byte 28h
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
loc_wait:
	db 	"Wait...",0
__dfr_180a78h:
	db	4ch,6fh,6fh,6bh,69h,6eh,67h,20h,66h,6fh,72h,20h,6eh,65h,74h,67h,61h,6dh,65h,73h,2ch,20h,70h,72h,65h,73h,73h,20h,65h,6eh,74h,65h,72h,20h,74h,6fh,20h,6ah,6fh,69h,6eh,2eh,2eh,2eh,0,0,0,0
*/
