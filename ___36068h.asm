cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1028h
	extern	___1de810h
	extern	___1a0ef8h
	extern	___35f34h
	extern	___1a0efbh
	extern	___1a0efah
	extern	___1a0ef9h
	extern	___35dd0h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fech
	extern	___1824ech
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___38184h
	extern	___1a01ech
	extern	___1a1ef8h
	extern	___196ab0h
	extern	___1a0fb0h
	extern	___1a0224h
	extern	___182500h
	extern	___182504h
	extern	___185c7ah
	extern	___1a10b8h
	extern	___182508h
	extern	___18250ch
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text
 
__GDECL(___36068h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     [esp+4], eax
		mov     edx, [___1a1028h]
		test    edx, edx
		jne     short ___360e5h
		mov     ebx, 4
		xor     ebp, ebp
___36090h:
		cmp     dword [edx+___1de810h], byte 1
		jne     short ___360a2h
		mov     al, [ebp+___1a0ef8h]
		mov     [esp], al
___360a2h:
		cmp     dword [edx+___1de810h], byte 2
		jne     short ___360b5h
		mov     al, [ebp+___1a0ef8h]
		mov     [esp+1], al
___360b5h:
		cmp     dword [edx+___1de810h], byte 3
		jne     short ___360c8h
		mov     al, [ebp+___1a0ef8h]
		mov     [esp+2], al
___360c8h:
		cmp     ebx, [edx+___1de810h]
		jne     short ___360dah
		mov     al, [ebp+___1a0ef8h]
		mov     [esp+3], al
___360dah:
		inc     ebp
		add     edx, byte 54h
		cmp     ebp, byte 4
		jge     short ___36116h
		jmp     short ___36090h
___360e5h:
		mov     edx, 3
		xor     ebx, ebx
		xor     eax, eax
		call    near ___35f34h
		mov     al, [___1a0efbh]
		mov     [esp], al
		mov     al, [___1a0efah]
		mov     [esp+1], al
		mov     al, [___1a0ef9h]
		mov     [esp+2], al
		mov     al, [___1a0ef8h]
		mov     [esp+3], al
___36116h:
		cmp     dword [esp+4], byte 0
		jne     short ___3617dh
		call    near ___35dd0h
		mov     ecx, 14h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fech]
		add     ebx, 0d362h
___3613eh:
		mov     edi, edx
___36140h:
		mov     al, [esi]
		or      al, al
		je      short ___36148h
		mov     [ebx], al
___36148h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___36140h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3613eh
		mov     ecx, 0d890h
		mov     ebx, ___1824ech
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, esp
		mov     eax, 4
		call    near ___38184h
___3617dh:
		xor     ebp, ebp
___3617fh:
		cmp     dword [esp+4], byte 0
		jne     short ___361f5h
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      short ___361f5h
		cmp     eax, [___1a1ef8h]
		jne     short ___361ach
		cmp     dword [___196ab0h], byte 1
		je      near ___36328h
___361ach:
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    eax, eax, byte 13h
		add     eax, byte 57h
		imul    eax, eax, 280h
		mov     ecx, 12h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fb0h]
		add     eax, edx
		mov     edx, 2ah
		lea     ebx, [eax+0d9h]
___361dbh:
		mov     edi, edx
___361ddh:
		mov     al, [esi]
		or      al, al
		je      short ___361e5h
		mov     [ebx], al
___361e5h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___361ddh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___361dbh
___361f5h:
		cmp     ebp, byte 1
		jb      short ___3620ah
		jbe     short ___36263h
		cmp     ebp, byte 2
		je      near ___362c1h
		jmp     near ___3631eh
___3620ah:
		test    ebp, ebp
		jne     near ___3631eh
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      near ___3631eh
		cmp     eax, [___1a1ef8h]
		jne     short ___3623ch
		cmp     dword [___196ab0h], byte 1
		je      near ___3631eh
___3623ch:
		xor     edx, edx
		mov     dl, [esp+ebp*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		lea     ecx, [edx+59h]
		imul    ecx, ecx, 280h
		mov     edi, [eax+___1a0224h]
		add     edi, byte 3
		mov     ebx, ___182500h
		jmp     near ___36303h
___36263h:
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      near ___3631eh
		cmp     eax, [___1a1ef8h]
		jne     short ___3628dh
		cmp     dword [___196ab0h], byte 1
		je      near ___3631eh
___3628dh:
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    edx, eax, byte 6ch
		imul    eax, eax, byte 13h
		add     eax, byte 59h
		imul    ecx, eax, 280h
		mov     edi, [edx+___1a0224h]
		add     edi, byte 2
		mov     ebx, ___182504h
		mov     [edx+___1a0224h], edi
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		jmp     short ___36313h
___362c1h:
		xor     eax, eax
		mov     al, [esp+ebp*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      short ___3631eh
		cmp     eax, [___1a1ef8h]
		jne     short ___362e3h
		cmp     dword [___196ab0h], byte 1
		je      short ___3631eh
___362e3h:
		xor     edx, edx
		mov     dl, [esp+ebp*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    ecx, edx, 280h
		mov     edi, [eax+___1a0224h]
		inc     edi
		mov     ebx, ___182508h
___36303h:
		mov     [eax+___1a0224h], edi
		mov     eax, [___1a10b8h]
		mov     edx, ___185c7ah
___36313h:
		add     ecx, 0e6h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___3631eh:
		inc     ebp
		cmp     ebp, byte 3
		jl      near ___3617fh
___36328h:
		cmp     dword [esp+4], byte 0
		jne     short ___3634dh
		mov     ecx, 46b6eh
		mov     ebx, ___18250ch
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

___3634dh:
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
