cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___181000h
	extern	___19bd60h
	extern	___1d4e8h
	extern	___1d83ch
	extern	___199fa4h
	extern	___61b88h
	extern	___1ca00h
	extern	___13710h
	extern	___3ab5ch
	extern	___1a1ef8h
	extern	CONNECTION_TYPE
	extern	___199fach
	extern	___1a020ch
	extern	___2415ch
	extern	___2b5f0h
	extern	___61cd0h
	extern	___1123ch
	extern	___1d688h
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13248h
	extern	___181010h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___180ac8h
	extern	___13bd4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___631d4h
	extern	___63228h
	extern	kmap
	extern	___181024h
	extern	___63244h
	extern	memset_
	extern	___18102ch
	extern	___181044h
	extern	___180fb4h
	extern	___180fdch
	extern	___180fe4h
	extern	___2ab50h
	extern	___60a84h
	extern	___5994ch
	extern	___199fa0h
	extern	___60b48h
	extern	___611c0h
	extern	___61278h
	extern	___1866b8h
	extern	___180fech
	extern	___185b70h
	extern	___1caf4h
	extern	___623d4h
	extern	___59b3ch

section .text

__GDECL(___1e09ch)
		push    64h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 44h
		mov     edx, 0c5h
		mov     edi, esp
		mov     esi, ___181000h
		xor     ah, ah
		mov     [esp+24h], edx
		mov     [esp+41h], ah
		movsd   
		movsd   
		movsd   
		movsb   
		mov     dl, 0dh
		lea     esi, [esp+40h]
		mov     edi, esp
		mov     [esp+40h], dl
		call 	__STRCAT
		mov     ebx, [___19bd60h]
		mov     ebp, 0b4h
		test    ebx, ebx
		je      short ___1e110h
		call    near ___1d4e8h
		jmp     near ___1e4eeh
___1e110h:
		call    near ___1d83ch
		mov     eax, [___199fa4h]
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61b88h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1e132h
		call    near ___1ca00h
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1e132h:
		mov     eax, 2
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     eax, eax
		call    near ___3ab5ch
		test    eax, eax
		je      near ___1e4eeh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ecx, 4
		shl     eax, 2
		mov     esi, 4b00h
		sub     eax, edx
		mov     [CONNECTION_TYPE], ecx
		mov     [___199fach], esi
		mov     ebx, [eax*4+___1a020ch]

	push 	edx
	push 	ecx
	push 	eax
		call    ___2415ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     [eax*4+___1a020ch], ebx
		call    near ___2b5f0h

	push 	edx
	push 	ecx
		call    ___61cd0h
	pop 	ecx
	pop 	edx

		test    eax, eax
		jne     short ___1e1b1h
		call    near ___1123ch
___1e1b1h:
		call    near ___1d688h
		test    eax, eax
		je      near ___1e4e9h
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 113h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		push    byte 1
		mov     edx, [esp+28h]
		mov     eax, ebp
		call    near ___13248h
		mov     edx, [esp+24h]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___181010h
		mov     [esp+18h], eax
		lea     esi, [eax+ebp*1]
		mov     edx, ___185c0bh
		add     esi, byte 28h
		mov     eax, [___1a1108h]
		mov     ecx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+24h]
		add     edx, byte 1eh
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___180ac8h
		lea     ecx, [eax+ebp*1]
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		add     ecx, byte 28h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, [esp+24h]
		lea     edi, [ebp+0fh]
		add     ebx, byte 13h
		mov     eax, edi
		mov     edx, ebx
		call    near ___13bd4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    ___631d4h
	add 	esp, 4
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     dh, [kmap+1]
		xor     ecx, ecx
		test    dh, dh
		jne     near ___1e414h
		mov     eax, [esp+18h]
		mov     [esp+2ch], edi
		mov     [esp+28h], esi
		mov     [esp+34h], esi
		mov     [esp+30h], ebx
		mov     [esp+1ch], eax
		mov     [esp+20h], eax
___1e2c7h:
		test    ecx, ecx
		jne     near ___1e414h
		mov     eax, ___181024h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      near ___1e36fh
		xor     esi, esi
		mov     ecx, 0c4h
		mov     edi, 0d8h
___1e2edh:
		mov     edx, [esp+20h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, ebp
		mov     ebx, edi
		add     eax, byte 28h
		mov     edx, ecx
		add     eax, esi
		add     esi, 280h
		call    near memset_
		cmp     esi, 2800h
		jne     short ___1e2edh
		mov     ecx, [esp+34h]
		mov     ebx, ___18102ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		lea     esi, [esp+40h]

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

		mov     eax, [___181044h]
		mov     edi, esp
		mov     [esp], eax
		call 	__STRCAT
		mov     eax, esp

	push 	edx
	push 	ecx
	push 	eax
		call    ___631d4h
	add 	esp, 4
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e36fh:
		mov     eax, ___180fb4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		test    eax, eax
		je      short ___1e3d4h
		xor     ecx, ecx
		mov     edi, 0c4h
		mov     esi, 0d8h
___1e389h:
		mov     ebx, [esp+1ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebx
		add     eax, ebp
		mov     edx, edi
		add     eax, byte 28h
		mov     ebx, esi
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 2800h
		jne     short ___1e389h
		mov     ecx, [esp+28h]
		mov     ebx, ___181010h
		mov     edx, ___185c0bh
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


	push 	edx
	push 	ecx
	push 	eax
		call    ___63228h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e3d4h:
		mov     eax, ___180fdch

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ecx, eax
		test    eax, eax
		jne     short ___1e3f0h
		mov     eax, ___180fe4h

	push 	edx
	push 	ecx
	push 	eax
		call    ___63244h
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ecx, eax
___1e3f0h:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, [esp+30h]
		mov     eax, [esp+2ch]
		call    near ___13bd4h
		cmp     byte [kmap+1], 0
		je      near ___1e2c7h
___1e414h:

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		mov     bh, [kmap+1]
		xor     edi, edi
		xor     esi, esi
		mov     [esp+38h], edi
		cmp     bh, 1
		jne     short ___1e430h
		mov     bl, bh
		jmp     short ___1e432h
___1e430h:
		xor     bl, bl
___1e432h:
		mov     edi, [esp+24h]
		add     ebp, byte 0fh
		add     edi, byte 13h
___1e43ch:
		cmp     bl, 1
		je      short ___1e49ah
		cmp     dword [esp+38h], 0ffh
		je      short ___1e49ah
		cmp     ecx, byte 1
		jne     short ___1e49ah

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dword [esp+3ch], 0ah
		mov     bl, al
		mov     edx, esi
		mov     eax, esi
		sar     edx, 1fh
		idiv    dword [esp+3ch]
		cmp     edx, ecx
		jne     short ___1e484h
		mov     eax, [___199fa0h]
		mov     edx, 2
		add     eax, byte 6

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		mov     [esp+38h], eax
___1e484h:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, edi
		mov     eax, ebp
		call    near ___13bd4h
		inc     esi
		jmp     short ___1e43ch
___1e49ah:
		cmp     bl, 1
		je      short ___1e4a8h
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

___1e4a8h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     bl, 1
		je      short ___1e4d0h
		mov     edi, ___1866b8h+47eh
		xor     cl, cl
		mov     esi, ___180fech
		mov     [___185b70h], cl

	push 	edx
	push 	ecx
		call    ___1caf4h
	pop 	ecx
	pop 	edx
	
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		jmp     short ___1e4d5h
___1e4d0h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e4d5h:

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

		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1e4e9h:

	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

___1e4eeh:
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
