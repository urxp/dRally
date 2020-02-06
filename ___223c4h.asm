cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___135fch
	extern	___3e03ch
	extern	___23230h
	extern	___1a10dch
	extern	___1a1ef8h
	extern	___1a0e34h
	extern	___1a0230h
	extern	___1a0e28h
	extern	___1a01e0h
	extern	strupr_
	extern	___196a94h
	extern	___1a0e38h
	extern	___27d24h
	extern	CONFIG_WRITE
	extern	___180724h
	extern	itoa_
	extern	___185c7ah
	extern	___1a10b8h
	extern	___12e78h
	extern	___18768ah
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2b318h
	extern	___3d1f0h
	extern	___5994ch
	extern	___59b3ch
	extern	___2ab50h
	extern	___19bd60h
	extern	___23758h

section .text

__GDECL(___223c4h)
		push    60h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 44h
		mov     ecx, 4b000h
		mov     ebx, 27fh
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 173h
		call 	__MOVS
		mov     ecx, 6dh
		xor     eax, eax
		call    near ___135fch
		call    near ___3e03ch
		call    near ___23230h
		mov     ecx, 36h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10dch]
		add     ebx, 0d200h
___22434h:
		mov     edi, edx
___22436h:
		mov     al, [esi]
		or      al, al
		je      short ___2243eh
		mov     [ebx], al
___2243eh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___22436h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___22434h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, [___1a0e34h]
		mov     edx, 0ffffffffh
		mov     ebx, [eax*4+___1a0230h]
		mov     [esp+2ch], edx
		xor     eax, eax
		xor     edx, edx
		cmp     ebx, ecx
		jge     short ___22486h
___22480h:
		mov     [esp+2ch], eax
		jmp     short ___2249ch
___22486h:
		add     edx, byte 14h
		inc     eax
		cmp     edx, 0c8h
		jge     short ___2249ch
		cmp     ebx, [edx+___1a0e34h]
		jl      short ___22480h
		jmp     short ___22486h
___2249ch:
		mov     edi, [esp+2ch]
		test    edi, edi
		jl      near ___225abh
		cmp     edi, byte 9
		je      short ___224f4h
		mov     ebx, 9
		cmp     edi, ebx
		jge     short ___224f4h
		mov     edx, ___1a0e28h
		mov     ebp, ___1a0e28h
		add     edx, 0a0h
		add     ebp, 0b4h
___224cch:
		mov     ecx, 14h
		mov     esi, edx
		mov     edi, ebp
		call 	__MOVS
		dec     ebx
		mov     ecx, [esp+2ch]
		sub     ebp, byte 14h
		sub     edx, byte 14h
		cmp     ebx, ecx
		jg      short ___224cch
___224f4h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [esp+2ch]
		lea     ebx, [edx*4+0]
		mov     esi, ___1a01e0h
		add     ebx, edx
		mov     edx, ___1a0e28h
		shl     ebx, 2
		shl     eax, 2
		add     edx, ebx
		add     esi, eax
		mov     edi, edx
		call 	__STRCPY
		mov     eax, edx
		call    near strupr_
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     eax, [eax*4+___1a0230h]
		mov     [ebx+___1a0e34h], eax
		mov     eax, [___196a94h]
		mov     edx, [esp+2ch]
		mov     [ebx+___1a0e38h], eax
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     eax, eax
		mov     ecx, 18h
		lea     edx, [eax+8ah]
		mov     ebx, 25bh
		mov     eax, 11h
		call    near ___27d24h

	push 	edx
	push 	ecx
	push 	eax
		call    CONFIG_WRITE
	pop 	eax
	pop 	ecx
	pop 	edx
	
___225abh:
		mov     edi, 16889h
		mov     ebp, ___1a0e28h
		mov     eax, 16950h
		mov     edx, 16948h
		mov     ebx, 169adh
		xor     esi, esi
		mov     [esp+38h], edi
		mov     [esp+30h], ebp
		mov     [esp+28h], eax
		mov     [esp+34h], edx
		mov     [esp+3ch], ebx
		mov     [esp+40h], esi
		xor     ebp, ebp
___225e0h:
		mov     eax, [esp+40h]
		mov     ebx, 0ah
		mov     edx, esp
		mov     esi, ___180724h
		inc     eax
		mov     edi, esp
		call    near itoa_
		call 	__STRCAT
		mov     ecx, [esp+40h]
		imul    eax, ecx, byte 16h
		add     eax, 90h
		imul    eax, eax, 280h
		cmp     ecx, byte 9
		jne     short ___22638h
		mov     ebx, esp
		lea     ecx, [eax+1ch]
		jmp     short ___2263dh
___22638h:
		mov     ebx, esp
		lea     ecx, [eax+24h]
___2263dh:
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		mov     esi, [esp+30h]
		mov     edi, esp
		call 	__STRCPY
		mov     eax, esp
		mov     edi, [esp+40h]
		call    near strupr_
		imul    eax, edi, byte 16h
		add     eax, 90h
		imul    esi, eax, 280h
		mov     ecx, [esp+38h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		call    near ___12e78h
		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [ebp+___1a0e34h]
		call    near itoa_
		mov     eax, [ebp+___1a0e34h]
		test    eax, eax
		jl      short ___226d2h
		cmp     eax, byte 0ah
		jge     short ___226d2h
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		lea     ecx, [esi+158h]
		call    near ___12e78h
___226d2h:
		mov     ebx, [ebp+___1a0e34h]
		cmp     ebx, byte 0ah
		jl      short ___226f7h
		cmp     ebx, byte 64h
		jge     short ___226f7h
		mov     ecx, [esp+28h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		call    near ___12e78h
___226f7h:
		cmp     dword [ebp+___1a0e34h], byte 64h
		jl      short ___22715h
		mov     ecx, [esp+34h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		call    near ___12e78h
___22715h:
		imul    esi, [ebp+___1a0e38h], byte 18h
		mov     ecx, [esp+3ch]
		mov     edx, ___185c7ah
		mov     edi, esp
		add     esi, ___18768ah
		add     ebp, byte 14h
		call 	__STRCPY
		mov     eax, esp
		mov     edi, [esp+40h]
		call    near strupr_
		mov     esi, [___1a10b8h]
		mov     ebx, eax
		mov     eax, esi
		inc     edi
		call    near ___12e78h
		mov     [esp+40h], edi
		mov     eax, [esp+38h]
		mov     edx, [esp+30h]
		mov     ebx, [esp+28h]
		mov     ecx, [esp+34h]
		mov     esi, [esp+3ch]
		add     eax, 3700h
		add     edx, byte 14h
		add     ebx, 3700h
		add     ecx, 3700h
		add     esi, 3700h
		mov     [esp+38h], eax
		mov     [esp+30h], edx
		mov     [esp+28h], ebx
		mov     [esp+34h], ecx
		mov     [esp+3ch], esi
		cmp     edi, byte 0ah
		jl      near ___225e0h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___2b318h
		call    near ___3d1f0h
		call    near ___5994ch
		call    near ___59b3ch
		xor     edx, edx
___227cfh:
		call    near ___2ab50h
		call    near ___5994ch
		mov     ah, al
		cmp     al, 3bh
		jne     short ___227eeh
		cmp     edx, [___19bd60h]
		je      short ___227eeh
		call    near ___23758h
		mov     ah, dl
___227eeh:
		test    ah, ah
		je      short ___227cfh
		call    near ___5994ch
		call    near ___59b3ch
		add     esp, byte 44h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
