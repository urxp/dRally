cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a1ffch
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___13248h
	extern	___180d2ch
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___631d4h
	extern	___63228h
	extern	___180d40h
	extern	___59e11h
	extern	___63244h
	extern	___180d44h
	extern	___2ab50h
	extern	___13bd4h
	extern	___59b3ch
	extern	___5994ch
	extern	___13c9ch
	extern	___180d48h

section .text

__GDECL(___1d688h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     edx, 0c5h
		mov     esi, ___1a1ffch
		mov     edi, esp
		xor     ah, ah
		mov     [esp+18h], edx
		mov     dl, 0dh
		mov     [esp+1dh], ah
		mov     [esp+1ch], dl
		call 	__STRCPY
		lea     esi, [esp+1ch]
		mov     edi, esp
		mov     ebp, 0b4h
		call 	__STRCAT
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 113h
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h
		call    near ___13710h
		push    byte 1
		mov     edx, 0c5h
		mov     eax, ebp
		call    near ___13248h
		mov     ecx, 20ddch
		mov     ebx, ___180d2ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     eax, esp
		xor     esi, esi
		call    near ___631d4h
		call    near ___63228h
		xor     ebx, ebx
		mov     edi, ___180d40h
		xor     ecx, ecx
___1d78dh:
		test    esi, esi
		jne     short ___1d7d4h
		cmp     cl, [___59e11h]
		jne     short ___1d7d4h
		mov     eax, edi
		call    near ___63244h
		mov     esi, eax
		test    eax, eax
		jne     short ___1d7b2h
		mov     eax, ___180d44h
		call    near ___63244h
		mov     esi, eax
___1d7b2h:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     edx, 0d8h
		mov     eax, 0c3h
		inc     ebx
		call    near ___13bd4h
		cmp     ebx, 96h
		jl      short ___1d78dh
___1d7d4h:
		call    near ___59b3ch
		call    near ___5994ch
		test    esi, esi
		jne     short ___1d830h
		mov     edx, [esp+18h]
		mov     ebx, [esp+18h]
		lea     eax, [ebp+0fh]
		add     edx, byte 13h
		add     ebx, byte 1eh
		call    near ___13c9ch
		lea     eax, [ebx*4+0]
		add     eax, ebx
		shl     eax, 7
		mov     edx, ___185c0bh
		lea     ecx, [eax+ebp*1]
		mov     ebx, ___180d48h
		mov     eax, [___1a1108h]
		add     ecx, byte 28h
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     ebx, ebx
___1d825h:
		inc     ebx
		call    near ___2ab50h
		cmp     ebx, byte 3ch
		jl      short ___1d825h
___1d830h:
		mov     eax, esi
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
