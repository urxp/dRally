cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___18068ch
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h
	extern 	___180690h
	extern 	___1a10e0h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___2ab50h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset_
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE
	extern 	___5994ch
	extern 	___19bd60h
	extern 	___23758h
	extern 	___1854ach
	extern 	___24cc54h
	extern 	___654d4h
	extern 	___1854b8h

section .text

__GDECL(___148cch)
		push    34h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 1ch
		mov     esi, eax
		mov     [esp+10h], ebx
		mov     [esp+4], ecx
		mov     eax, [ecx]
		mov     [esp+0ch], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     ecx, [eax+esi*1]
		xor     ebx, ebx
		lea     ebp, [ecx+7]
		mov     [esp+14h], ebx
		lea     esi, [ecx+0ffffef48h]
		mov     edi, [esp+0ch]
		sub     ecx, 1162h
		cmp     edi, byte 1
		jne     short ___1493eh
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		jmp     short ___14961h
___1493eh:
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
___14961h:
		mov     ecx, esi
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		cmp     dword [esp+14h], byte 0
		jl      near ___14c13h
		lea     eax, [ebp+0ffffee97h]
		mov     [esp+18h], eax
		lea     eax, [ebp+0ffffef41h]
		mov     [esp], eax
		lea     eax, [ebp-5]
		mov     [esp+8], eax
___14992h:
		call    near ___2ab50h
		mov     esi, 1
		mov     ebx, [esp+0ch]
		call    near ___2ab50h
		sub     esi, ebx
		xor     ecx, ecx
		imul    esi, esi, 0aah
___149afh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ebx, 14h
		add     eax, esi
		mov     edx, 0c4h
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3200h
		jne     short ___149afh
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ecx, [___1a1e68h]
		lea     ebx, [eax+esi*1]
		imul    esi, ecx, 190h
		mov     eax, [___1a10f4h]
		mov     ecx, 14h
		add     esi, eax
		mov     edx, ecx
___149fbh:
		mov     edi, edx
___149fdh:
		mov     al, [esi]
		or      al, al
		je      short ___14a05h
		mov     [ebx], al
___14a05h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___149fdh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___149fbh
		mov     ecx, 1ch
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, 0f0h
		add     edx, ebp
		mov     eax, [esp+8]
		sub     edx, byte 5
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     esi, [___1a1e68h]
		inc     esi
		mov     [___1a1e68h], esi
		cmp     esi, byte 31h
		jle     short ___14a4ch
		xor     eax, eax
		mov     [___1a1e68h], eax
___14a4ch:
		call    near ___5994ch
		cmp     al, 15h
		jne     short ___14a57h
		mov     al, 0cbh
___14a57h:
		cmp     al, 31h
		jne     short ___14a5dh
		mov     al, 0cdh
___14a5dh:
		cmp     al, 4bh
		jb      short ___14a91h
		jbe     short ___14ac8h
		cmp     al, 9ch
		jb      short ___14a84h
		jbe     near ___14be8h
		cmp     al, 0cbh
		jb      near ___14c08h
		jbe     short ___14ac8h
		cmp     al, 0cdh
		je      near ___14b5ch
		jmp     near ___14c08h
___14a84h:
		cmp     al, 4dh
		je      near ___14b5ch
		jmp     near ___14c08h
___14a91h:
		cmp     al, 1ch
		jb      short ___14aa4h
		jbe     near ___14be8h
		cmp     al, 3bh
		je      short ___14ab1h
		jmp     near ___14c08h
___14aa4h:
		cmp     al, 1
		je      near ___14bf2h
		jmp     near ___14c08h
___14ab1h:
		cmp     dword [___19bd60h], byte 0
		je      near ___14c08h
		call    near ___23758h
		jmp     near ___14c08h
___14ac8h:
		cmp     dword [esp+0ch], byte 0
		jne     short ___14af2h
		push    8000h
		mov     edx, 19h
		mov     edi, [___1854ach]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___14af2h:
		mov     eax, 1
		xor     ecx, ecx
		mov     [esp+0ch], eax
		mov     esi, 0c4h
___14b02h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ebx, 0f0h
		sub     eax, byte 5
		mov     edx, esi
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3e80h
		jne     short ___14b02h
		mov     ecx, [esp+18h]
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     ecx, [esp]
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		jmp     near ___14c08h
___14b5ch:
		cmp     dword [esp+0ch], byte 1
		jne     short ___14b86h
		push    8000h
		mov     edx, 19h
		mov     ebx, [___1854ach]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___14b86h:
		xor     ecx, ecx
		mov     [esp+0ch], ecx
		mov     esi, 0c4h
___14b91h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ebx, 0f0h
		sub     eax, byte 5
		mov     edx, esi
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3e80h
		jne     short ___14b91h
		mov     ecx, [esp+18h]
		mov     ebx, ___18068ch
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		call    near ___12e78h
		mov     ecx, [esp]
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		call    near ___12e78h
		jmp     short ___14c08h
___14be8h:
		mov     dword [esp+14h], 0ffffffffh
		jmp     short ___14c08h
___14bf2h:
		cmp     dword [esp+10h], byte 0
		je      short ___14c08h
		mov     edi, 0fffffffeh
		xor     esi, esi
		mov     [esp+14h], edi
		mov     [esp+0ch], esi
___14c08h:
		cmp     dword [esp+14h], byte 0
		jge     near ___14992h
___14c13h:
		push    8000h
		mov     edx, 1ch
		mov     ebp, [___1854b8h]
		mov     eax, 1
		push    ebp
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		mov     edx, [esp+4]
		mov     eax, [esp+0ch]
		mov     [edx], eax
		cmp     dword [esp+14h], byte 0fffffffeh
		setnz   al
		add     esp, byte 1ch
		pop     ebp
		pop     edi
		pop     esi
		retn    
