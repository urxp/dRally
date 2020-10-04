/*
cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___3f71ch__allocateMemory
	extern 	___185a54h
	extern 	itoa_watcom106
	extern 	___135fch
	extern 	___23230h
	extern 	___13710h
	extern 	___13248h_cdecl
	extern 	___180824h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___24e4ach
	extern 	__STOSB
	extern 	___2ab50h
	extern 	___23594h
	extern 	___18082ch
	extern 	___180848h
	extern 	___5994ch
	extern 	___59b3ch
	extern 	___1a116ch
	extern 	___1a1f4eh
	extern 	___1a1f4dh
	extern 	___180864h
	extern 	___1a1ef8h
	extern 	___1a1dbah
	extern 	___1a01e0h
	extern 	___180868h
	extern 	___1a1f63h
	extern 	___23488h
	extern 	___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	extern 	___180130h
	extern 	___1a0ff1h
	extern 	___19dec0h
	extern 	__STOSD
	extern 	___196ab8h
	extern 	___1a2011h
	extern 	___185a14h_UseWeapons
	extern 	___180888h
	extern 	___185c0bh
	extern 	___1a110ch
	extern 	___180890h
	extern 	___1808a4h
	extern 	___1808b8h
	extern 	___1808c8h
	extern 	___1808cch
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a0220h
	extern 	___19de70h
	extern 	___1808d0h
	extern 	___1a1108h
	extern 	___1808ech
	extern 	___180918h
	extern 	___18093ch
	extern 	___25138h
	extern 	___180940h
	extern 	___180944h
	extern 	___180948h
	extern 	___1a0ffch
	extern 	___19dec4h
	extern 	___19dec8h
	extern 	___19decch
	extern 	memset
	extern 	___197d0h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE
	extern 	___1807cch
	extern 	___1a10fch
	extern 	___1807e8h
	extern 	___18094ch
	extern 	___180964h
	extern 	___180974h
	extern 	dRally_Memory_free
	extern 	___61278h
	extern 	___623d4h
	extern 	___199f9ch
	extern 	___61cd0h
	extern 	___1123ch
	extern 	CONNECTION_TYPE
	extern 	___196adch
	extern 	___19bd60h
	extern 	___10754h
	extern 	___60705h
	extern 	___185a54h
	extern 	___1c6bch
	extern 	shop_main
	extern 	___185a24h
	extern 	___180980h

section .text

__GDECL(___198a0h)
		push    130h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 110h
		mov     edx, 58h
		mov     eax, 1fh
		mov     ebx, 68h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [esp+0c4h], edx
		mov     [esp+0dch], ebx
		mov     [esp+0fch], eax
		mov     eax, 1fh
		mov     ebx, 0ah
		lea     edx, [esp+0ach]
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebp, eax
		mov     eax, [___185a54h]
		mov     ecx, 6dh

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

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

		mov     eax, 4
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
		mov     ebx, ___180824h
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
		mov     dx, [eax]
		mov     ecx, 4
		mov     [eax+2], dx
		lea     eax, [esp+0b4h]
		xor     edx, edx
		xor     ebx, ebx

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

		mov     edi, 12h
		mov     esi, 0ah
		xor     ecx, ecx
___1998bh:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     eax, [esp+0fch]
		mov     edx, esi
		call    near ___23594h
		test    eax, eax
		je      short ___19a00h
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 1
		jne     short ___199c2h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
___199c2h:
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 2
		jne     short ___199e2h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
___199e2h:
		mov     eax, [esp+0fch]
		cmp     cl, [eax+1]
		jne     short ___19a00h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+eax*1+0b4h], cl
___19a00h:
		mov     eax, [esp+0fch]
		mov     edx, edi
		call    near ___23594h
		test    eax, eax
		je      short ___19a50h
		mov     eax, [esp+0fch]
		cmp     byte [eax+1], 1
		jne     short ___19a32h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     byte [esp+eax*1+0b4h], 1
___19a32h:
		mov     eax, [esp+0fch]
		cmp     cl, [eax+1]
		jne     short ___19a50h
		mov     edx, [esp+0fch]
		xor     eax, eax
		mov     al, [edx]
		mov     [esp+eax*1+0b4h], cl
___19a50h:
		inc     ebx
		cmp     ebx, byte 46h
		jl      near ___1998bh
		mov     ecx, 4
		mov     bl, [esp+0b4h]
		xor     eax, eax
		mov     [esp+0d8h], ecx
		test    bl, bl
		jne     short ___19a7ch
___19a73h:
		mov     [esp+0d8h], eax
		jmp     short ___19a8eh
___19a7ch:
		inc     eax
		cmp     eax, byte 4
		jge     short ___19a8eh
		cmp     byte [esp+eax*1+0b4h], 0
		je      short ___19a73h
		jmp     short ___19a7ch
___19a8eh:
		cmp     dword [esp+0d8h], byte 3
		jle     near ___19b26h
		mov     eax, 4
		mov     ecx, 58h
		xor     edx, edx
		mov     ebx, 1e2h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, 0c6h
		mov     eax, 46h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     ecx, 20851h
		mov     ebx, ___18082ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 25851h
		mov     ebx, ___180848h
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

___19b04h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		test    al, al
		je      short ___19b04h

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

		xor     eax, eax
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___19b26h:
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___19b33h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___19b33h
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
		call 	__STRCAT
		mov     esi, ___180868h
		call 	__STRCAT
		xor     cl, cl
		mov     ebx, 6
		mov     [___1a1f63h], cl
		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		mov     edi, 1
		call    near ___23488h
	
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
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		mov     dl, [___180130h]
		mov     [esp+108h], edi
		xor     eax, eax
___19c27h:
		add     eax, byte 0bh
		mov     [eax+___1a0ff1h], dl
		cmp     eax, byte 2ch
		jne     short ___19c27h
		mov     ecx, 4
		mov     eax, ___19dec0h
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSD
	add 	esp, 0ch

		mov     edx, [esp+0fch]
		mov     al, [esp+0d8h]
		mov     [edx], al
		mov     eax, edx
		mov     byte [edx+1], 1
		xor     eax, edx
___19c5eh:
		imul    ebx, [___1a1ef8h], byte 6ch
		inc     edx
		mov     bl, [ebx+eax*1+___1a01e0h]
		inc     eax
		mov     [edx+1], bl
		cmp     eax, byte 0bh
		jl      short ___19c5eh
		mov     edx, [esp+0fch]
		xor     eax, eax
___19c7fh:
		inc     edx
		mov     bl, [esp+eax*1+0ach]
		inc     eax
		mov     [edx+0ch], bl
		cmp     eax, byte 7
		jl      short ___19c7fh
		mov     edx, [esp+0fch]
		mov     al, [___196ab8h]
		mov     [edx+14h], al
		xor     eax, eax
___19ca1h:
		inc     edx
		mov     bl, [eax+___1a2011h]
		inc     eax
		mov     [edx+14h], bl
		cmp     eax, byte 9
		jl      short ___19ca1h
		mov     eax, [esp+0fch]
		push    byte 1
		mov     ecx, 106h
		mov     dl, [___185a14h_UseWeapons]
		mov     ebx, 1c2h
		mov     [eax+1eh], dl
		mov     edx, [esp+0e0h]
		mov     eax, [esp+0c8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___13248h_cdecl
	add 	esp, 14h
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
		mov     edx, [esp+0dch]
		call 	__STRCPY
		mov     esi, ___180888h
		mov     edi, esp
		add     edx, byte 73h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+0c4h]
		shl     eax, 7
		mov     ebx, esp
		add     eax, esi
		mov     edi, esp
		lea     ecx, [eax+16h]
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]
		mov     esi, ___180890h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [___196ab8h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		lea     esi, [esp+50h]
		mov     edi, esp
		mov     edx, [esp+0dch]
		mov     ebx, esp
		add     edx, byte 2eh
		call 	__STRCAT
		lea     eax, [edx*4+0]
		mov     ecx, [esp+0c4h]
		add     eax, edx
		mov     edi, esp
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a110ch]
		add     ecx, byte 5dh
		mov     esi, ___1808a4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     ebx, esp
		lea     esi, [esp+0ach]
		mov     edi, esp
		add     edx, byte 3eh
		call 	__STRCAT
		lea     eax, [edx*4+0]
		mov     ecx, [esp+0c4h]
		add     eax, edx
		mov     edi, esp
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a110ch]
		add     ecx, byte 5dh
		mov     esi, ___1808b8h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsd   
		movsd   
		movsd   
		movsw   
		cmp     dword [___185a14h_UseWeapons], byte 0
		je      short ___19e78h
		mov     esi, ___1808c8h
		jmp     short ___19e7dh
___19e78h:
		mov     esi, ___1808cch
___19e7dh:
		mov     edi, esp
		call 	__STRCAT
		mov     edx, [esp+0dch]
		add     edx, byte 4eh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		add     eax, edx
		mov     ebx, esp
		lea     ecx, [eax+5dh]
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		add     edx, byte 27h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ebx, [esp+0c4h]
		add     eax, edx
		add     eax, ebx
		mov     edx, [___1a1ef8h]
		lea     ebx, [eax+17h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 40h
		mov     esi, [eax*4+___1a0220h]
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		shr     dl, 2
___19f2ah:
		mov     ch, dl
___19f2ch:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___19f2ch
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___19f2ah
		mov     edx, [esp+0dch]
		lea     ebx, [edx*4+0]
		add     ebx, edx
		shl     ebx, 7
		mov     cl, 0c4h
		lea     eax, [ebx+6180h]
		mov     esi, [esp+0c4h]
		add     ebx, 10400h
___19f74h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, eax
		add     edx, esi
		mov     byte [edx+57h], 9
		mov     [edx+17h], cl
		add     eax, 280h
		mov     [edx+18h], cl
		cmp     eax, ebx
		jne     short ___19f74h
		mov     edx, [esp+0dch]
		add     edx, byte 68h
		lea     esi, [edx*4+0]
		mov     edi, [esp+0c4h]
		add     esi, edx
		mov     eax, 4
		shl     esi, 7
___19fb3h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, esi
		inc     eax
		add     edx, edi
		mov     byte [edx+eax*1+16h], 9
		cmp     eax, byte 40h
		jl      short ___19fb3h
		mov     byte [edx+57h], 0fh
		mov     edx, [esp+0dch]
		mov     ecx, 6
		add     edx, byte 0ah
		mov     edi, esp
		lea     eax, [edx*4+0]
		mov     esi, ___1808d0h
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		rep movsd   
		movsw   
		movsb   
		add     eax, edx
		mov     ebx, esp
		lea     ecx, [eax+64h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0dah
		mov     esi, ___1808ech
		lea     eax, [edx*4+0]
		mov     ecx, 0ah
		add     eax, edx
		mov     ebx, [esp+0c4h]
		shl     eax, 7
		rep movsd   
		movsw   
		add     eax, ebx
		mov     edx, ___185c0bh
		lea     ecx, [eax+14h]
		mov     ebx, esp
		mov     eax, [___1a1108h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		mov     esi, ___180918h
		add     edx, 0eah
		mov     ecx, 8
		lea     eax, [edx*4+0]
		rep movsd   
		movsb   
		add     eax, edx
		mov     ecx, [esp+0c4h]
		shl     eax, 7
		add     eax, ecx
		mov     ebx, esp
		lea     ecx, [eax+14h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+0dch]
		mov     edi, esp
		add     eax, 8dh
		mov     esi, ___18093ch
		mov     [esp+0d4h], eax
		mov     edx, eax
		shl     eax, 2
		mov     ebx, esp
		add     eax, edx
		movsw   
		movsb   
		shl     eax, 7
		mov     edi, [esp+0c4h]
		mov     [esp+0d0h], eax
		lea     esi, [eax+edi*1]
		mov     edx, ___185c0bh
		mov     eax, esp
		lea     ecx, [esi+27h]
		call    near ___25138h
		sub     ecx, eax
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		mov     ebx, ___1a01e0h
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		add     esi, byte 2ch
		sub     eax, edx
		mov     ecx, esi
		shl     eax, 2
		mov     edx, ___185c0bh
		add     ebx, eax
		mov     eax, [___1a1108h]
		mov     [esp+0bch], esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+0dch]
		mov     esi, ___180940h
		add     eax, 9dh
		mov     ecx, [esp+0c4h]
		mov     [esp+0c0h], eax
		mov     edx, eax
		shl     eax, 2
		mov     ebx, esp
		add     eax, edx
		movsw   
		movsb   
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, esp
		add     ecx, byte 27h
		call    near ___25138h
		sub     ecx, eax
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0adh
		mov     esi, ___180944h
		lea     eax, [edx*4+0]
		mov     ebx, esp
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		movsw   
		movsb   
		add     edx, eax
		mov     eax, esp
		lea     ecx, [edx+27h]
		call    near ___25138h
		mov     edx, ___185c0bh
		sub     ecx, eax
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+0dch]
		mov     edi, esp
		add     edx, 0bdh
		mov     esi, ___180948h
		lea     eax, [edx*4+0]
		mov     ebx, esp
		add     eax, edx
		mov     edx, [esp+0c4h]
		shl     eax, 7
		movsw   
		movsb   
		add     edx, eax
		mov     eax, esp
		lea     ecx, [edx+27h]
		call    near ___25138h
		mov     edx, ___185c0bh
		sub     ecx, eax
		mov     eax, [___1a1108h]

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
		mov     dx, [eax]
		mov     [eax+2], dx

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

		mov     dword [esp+0f8h], 0ffffffffh
		mov     eax, [esp+0d0h]
		mov     [esp+0e0h], eax
		mov     eax, [esp+0bch]
		mov     [esp+0e4h], eax
		mov     eax, [esp+0d8h]
		xor     edx, edx
		add     eax, byte 0bh
		mov     [esp+0f0h], edx
		mov     [esp+104h], eax
		mov     eax, [esp+0bch]
		mov     edx, [esp+0c0h]
		mov     [esp+0e8h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [esp+0d4h]
		mov     [esp+0c8h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+0bb80h]
		mov     [esp+100h], edx
		mov     edx, ___1a0ffch
		add     edx, byte 21h
		mov     [esp+0b8h], edx
		mov     edx, [esp+0c4h]
		mov     ecx, 1
		add     edx, byte 2ch
		mov     [esp+0cch], eax
		mov     [esp+0ech], edx
___1a2d8h:
		mov     ebx, [esp+0f8h]
		cmp     ebx, byte 1ch
		je      near ___1a655h
		cmp     ebx, 9ch
		je      near ___1a655h

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     edi, [esp+0f0h]
		mov     al, 1
		inc     edi
		mov     [esp+10ch], al
		mov     [esp+0f0h], edi
___1a311h:
		mov     edx, [esp+104h]
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1a459h
		cmp     byte [ebp+0], 1
		jne     near ___1a3e7h
		mov     ebx, ebp
		xor     edx, edx
___1a335h:
		inc     edx
		mov     al, [ebx+5]
		inc     ebx
		mov     [esp+edx*1+9fh], al
		cmp     edx, byte 0bh
		jl      short ___1a335h
		xor     eax, eax
		xor     edx, edx
		mov     al, [ebp+2]
		mov     dl, [ebp+1]
		shl     eax, 8
		add     edx, eax
		xor     eax, eax
		mov     al, [ebp+3]
		shl     eax, 10h
		add     edx, eax
		xor     eax, eax
		mov     al, [ebp+4]
		shl     eax, 18h
		xor     ebx, ebx
		add     edx, eax
		xor     eax, eax
___1a36dh:
		cmp     edx, [___19dec0h]
		je      short ___1a3deh
		cmp     edx, [___19dec4h]
		je      short ___1a3deh
		cmp     edx, [___19dec8h]
		je      short ___1a3deh
		cmp     edx, [___19decch]
		je      short ___1a3deh
		cmp     dword [ebx+___19dec0h], byte 0
		jne     short ___1a3deh
		imul    eax, eax, byte 0bh
		mov     edi, ___1a0ffch
		lea     esi, [esp+0a0h]
		add     edi, eax
		mov     ecx, 1
		call 	__STRCPY
		mov     edi, [esp+108h]
		add     edi, ecx
		mov     [ebx+___19dec0h], edx
		mov     [esp+108h], edi
		jmp     short ___1a3e7h
___1a3deh:
		add     ebx, byte 4
		inc     eax
		cmp     ebx, byte 10h
		jl      short ___1a36dh
___1a3e7h:
		cmp     byte [ebp+0], 0
		jne     near ___1a462h
		xor     edx, edx
		xor     eax, eax
		mov     dl, [ebp+2]
		mov     al, [ebp+1]
		shl     edx, 8
		add     eax, edx
		xor     edx, edx
		mov     dl, [ebp+3]
		shl     edx, 10h
		add     eax, edx
		xor     edx, edx
		mov     dl, [ebp+4]
		mov     esi, [___19dec0h]
		shl     edx, 18h
		xor     ebx, ebx
		add     eax, edx
		xor     edx, edx
		cmp     eax, esi
		jne     short ___1a446h
___1a422h:
		imul    ebx, ebx, byte 0bh
		mov     al, [___180130h]
		mov     [ebx+___1a0ffch], al
		xor     eax, eax
		mov     ecx, 1
		mov     [edx+___19dec0h], eax
		sub     [esp+108h], ecx
		jmp     short ___1a462h
___1a446h:
		add     edx, byte 4
		inc     ebx
		cmp     edx, byte 10h
		jge     short ___1a462h
		cmp     eax, [edx+___19dec0h]
		je      short ___1a422h
		jmp     short ___1a446h
___1a459h:
		xor     ah, ah
		mov     [esp+10ch], ah
___1a462h:
		cmp     byte [esp+10ch], 1
		je      near ___1a311h
		mov     eax, [esp+0f0h]
		mov     edx, eax
		mov     ebx, 4
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     short ___1a49dh
		mov     ebx, 0ah
		mov     edx, 1fh
		mov     eax, [esp+0fch]
		call    near ___23488h
___1a49dh:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     ebx, [esp+108h]
		mov     [esp+0f8h], eax
		cmp     ebx, byte 4
		jne     short ___1a4c5h
		mov     dword [esp+0f8h], 1ch
___1a4c5h:
		mov     edi, [esp+0f8h]
		cmp     edi, byte 1ch
		je      short ___1a4d9h
		cmp     edi, 9ch
		jne     short ___1a515h
___1a4d9h:
		cmp     dword [esp+108h], byte 1
		jle     short ___1a515h
		mov     eax, [esp+0fch]
		mov     edx, [esp+0fch]
		mov     byte [eax+1], 2
		mov     al, [esp+108h]
		mov     ebx, 0ah
		mov     [edx+2], al
		mov     edx, 1fh
		mov     eax, [esp+0fch]
		call    near ___23488h
___1a515h:
		mov     ebx, [esp+0f8h]
		cmp     ebx, byte 1ch
		je      short ___1a529h
		cmp     ebx, 9ch
		jne     short ___1a53eh
___1a529h:
		cmp     dword [esp+108h], byte 1
		jg      short ___1a53eh
		mov     dword [esp+0f8h], 0ffffffffh
___1a53eh:
		test    ecx, ecx
		je      near ___1a647h
		mov     edi, 190h
		mov     esi, [esp+0cch]
		mov     ecx, 0c4h
___1a557h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+0c4h]
		add     eax, esi
		add     eax, edx
		mov     ebx, edi
		add     eax, byte 2ch
		mov     edx, ecx
		add     esi, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     esi, [esp+100h]
		jne     short ___1a557h
		mov     edx, 3
		xor     eax, eax
		call    near ___197d0h
		imul    ebx, [___1a1ef8h], byte 6ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ecx, [esp+0e8h]
		add     ebx, ___1a01e0h
		mov     edi, [esp+0c8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+0ech]
		add     eax, edi
		mov     esi, [esp+0b8h]
		mov     [esp+0f4h], eax
___1a5cfh:
		mov     edi, esi
		call 	__STRLEN
		test    ecx, ecx
		jbe     short ___1a5f7h
		mov     ecx, [esp+0f4h]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     ebx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___1a5f7h:
		mov     eax, [esp+0f4h]
		add     eax, 2800h
		sub     esi, byte 0bh
		mov     [esp+0f4h], eax
		cmp     esi, ___1a0ffch
		jne     short ___1a5cfh
		mov     edx, [esp+0e0h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, [esp+0c4h]
		add     eax, edx
		add     eax, ebx
		mov     ecx, 4bh
		lea     edx, [eax+2ch]
		mov     ebx, 190h
		mov     eax, [esp+0e4h]

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		xor     ecx, ecx
___1a647h:
		cmp     dword [esp+0f8h], byte 1
		jne     near ___1a2d8h
___1a655h:
		mov     ecx, 390a3h
		mov     ebx, ___1807cch
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 390d9h
		mov     ebx, ___1807e8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     edi, [esp+0f8h]

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

		cmp     edi, byte 1ch
		je      short ___1a6a4h
		cmp     edi, 9ch
		jne     near ___1a8d8h
___1a6a4h:
		mov     edx, ___1a116ch
		xor     ebx, ebx
		lea     ecx, [edx+96h]
___1a6b1h:
		mov     esi, ecx
		mov     edi, edx
		inc     ebx
		call 	__STRCPY
		add     edx, 96h
		mov     al, [ebx+___1a1f4eh]
		add     ecx, 96h
		mov     [ebx+___1a1f4dh], al
		cmp     ebx, byte 15h
		jl      short ___1a6b1h
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
		mov     ebx, 0ah
		call 	__STRCAT
		mov     esi, ___18094ch
		mov     edx, esp
		call 	__STRCAT
		mov     eax, [esp+108h]
		mov     esi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, ___180964h
		mov     ebx, 0ah
		mov     edx, esp
		call 	__STRCAT
		mov     eax, [___196ab8h]
		mov     esi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, ___180974h
		call 	__STRCAT
		xor     cl, cl
		mov     ebx, 6
		mov     [___1a1f63h], cl
	
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
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     eax, [esp+0fch]

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx


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

		mov     eax, [esp+0d8h]
		inc     eax
		mov     [___199f9ch], eax

	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1a883h
		call    near ___1123ch
___1a883h:
		mov     eax, [esp+108h]
		mov     edx, 1
		mov     ebx, [CONNECTION_TYPE]
		mov     [___196adch], eax
		mov     [___19bd60h], edx
		cmp     ebx, byte 2
		jne     short ___1a8afh
		mov     eax, ___10754h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___60705h
	add 	esp, 4
	pop 	ecx
	pop 	edx

___1a8afh:
		mov     eax, [___185a54h]
		mov     ecx, 1
		call    near ___1c6bch

	push 	edx
	push 	ecx
	push 	eax
		call    shop_main
	pop		eax
	pop 	ecx
	pop 	edx

		mov     [___185a24h], ecx
		mov     eax, ecx
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1a8d8h:
		mov     edx, ___1a116ch
		xor     ebx, ebx
		lea     ecx, [edx+96h]
___1a8e5h:
		mov     esi, ecx
		mov     edi, edx
		inc     ebx
		call 	__STRCPY
		add     edx, 96h
		mov     al, [ebx+___1a1f4eh]
		add     ecx, 96h
		mov     [ebx+___1a1f4dh], al
		cmp     ebx, byte 15h
		jl      short ___1a8e5h
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
		call 	__STRCAT
		mov     esi, ___180980h
		xor     bh, bh
		call 	__STRCAT
		mov     [___1a1f63h], bh
	
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
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		call 	__STRLEN
		mov     ebx, 6
		mov     eax, ___1a1dbah
		lea     edx, [ecx+1]
		call    near ___23488h
		mov     eax, [esp+0fch]
		mov     ebx, 0ah
		mov     edx, 1fh
		mov     byte [eax+1], 0
		call    near ___23488h
		mov     eax, [___24e4ach]
		add     eax, byte 4
		mov     dx, [eax-4]
		mov     ebx, 1000h
		mov     [eax-2], dx
		xor     edx, edx
		
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

		mov     eax, [esp+0fch]

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, ebp

	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Memory_free
	add 	esp, 4
	pop 	ecx
	pop 	edx

		xor     eax, eax
		add     esp, 110h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
