cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___13248h
	extern 	___180a04h
	extern 	___185c0bh
	extern 	___1a110ch
	extern 	___12e78h_cdecl
	extern 	___19ded0h
	extern 	___180a34h
	extern 	itoa_watcom106
	extern 	___25138h
	extern 	___1a1108h
	extern 	___1a10fch
	extern 	___180888h
	extern 	___19deech
	extern 	___180a38h
	extern 	___180a40h
	extern 	___180a4ch
	extern 	___180890h
	extern 	___19dee2h
	extern 	___1808a4h
	extern 	___180a54h
	extern 	___180a58h
	extern 	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___1ad30h)
		push    0d4h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, 0bch
		mov     edi, eax
		mov     esi, edx
		mov     [esp+0a4h], ebx
		push    byte 1
		mov     ecx, 10dh
		mov     ebx, 1c2h
		call    near ___13248h
		lea     edx, [esi+0dh]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, edi
		mov     ebx, ___180a04h
		lea     ecx, [eax+14h]
		mov     edx, ___185c0bh
		mov     eax, [___1a110ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     ecx, [esi+29h]
		xor     edx, edx
		lea     eax, [ecx*4+0]
		mov     [esp+0b4h], edx
		add     ecx, eax
		mov     eax, ___19ded0h
		lea     ebx, [esi+39h]
		add     eax, byte 0bh
		add     esi, byte 49h
		mov     [esp+0a8h], eax
		lea     eax, [esi*4+0]
		lea     edx, [edi+28h]
		add     eax, esi
		add     edi, byte 20h
		shl     eax, 7
		add     eax, edi
		xor     ebp, ebp
		mov     [esp+0b0h], eax
		lea     eax, [ebx*4+0]
		mov     [esp+0b8h], ebp
		add     eax, ebx
		shl     ecx, 7
		shl     eax, 7
		add     edx, ecx
		add     eax, edi
		mov     [esp+0a0h], edx
		mov     [esp+0ach], eax
		lea     ebp, [edi+ecx*1]
___1adfah:
		mov     eax, [esp+0b4h]
		mov     ebx, 0ah
		mov     edx, esp
		mov     esi, ___180a34h
		inc     eax
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     eax, [esp+0a4h]
		cmp     eax, [esp+0b4h]
		jne     short ___1ae65h
		mov     eax, esp
		mov     ecx, [esp+0a0h]
		mov     ebx, esp
		mov     edx, ___185c0bh
		call    near ___25138h
		sub     ecx, eax
		mov     eax, [___1a1108h]
		jmp     short ___1ae81h
___1ae65h:
		mov     eax, esp
		mov     ecx, [esp+0a0h]
		mov     ebx, esp
		mov     edx, ___185c0bh
		call    near ___25138h
		sub     ecx, eax
		mov     eax, [___1a10fch]
___1ae81h:

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     esi, ___19ded0h
		mov     ebx, [esp+0b8h]
		add     esi, ebx
		mov     edi, esi
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___1b047h
		cmp     byte [ebx+___19ded0h], 0ffh
		je      near ___1b047h
		mov     edi, esp
		call 	__STRCPY
		mov     esi, ___180888h
		mov     edi, esp
		call 	__STRCAT
		cmp     dword [ebx+___19deech], byte 0
		je      short ___1af0ah
		mov     esi, ___180a38h
		jmp     short ___1af0fh
___1af0ah:
		mov     esi, ___180a40h
___1af0fh:
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___180a4ch
		mov     edi, esp
		call 	__STRCAT
		mov     eax, [esp+0a4h]
		cmp     eax, [esp+0b4h]
		jne     short ___1af7ah
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		jmp     short ___1af86h
___1af7ah:
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
___1af86h:
		mov     ecx, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edi, esp
		mov     edx, [esp+0b8h]
		mov     esi, ___180890h
		xor     eax, eax
		mov     ebx, 0ah
		mov     al, [edx+___19dee2h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		lea     edx, [esp+50h]
		lea     esi, [esp+50h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     ecx, [esp+0ach]
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     edi, esp
		mov     eax, [___1a10fch]
		mov     esi, ___1808a4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     ebx, esp
		mov     esi, [esp+0a8h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, [esp+0b0h]
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___1b047h:
		mov     eax, [esp+0b8h]
		cmp     byte [eax+___19ded0h], 0ffh
		jne     short ___1b0b1h
		mov     ebx, ___180a54h
		mov     edx, ___185c0bh
		mov     edi, esp
		mov     eax, [___1a10fch]
		mov     ecx, ebp
		mov     esi, ___180a58h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 7
		mov     ebx, esp
		mov     edx, ___185c0bh
		rep movsd   
		movsw   
		movsb   
		mov     eax, [___1a10fch]
		mov     ecx, [esp+0ach]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, [esp+0b0h]
		mov     ebx, ___180a54h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___1b0b1h:
		mov     eax, [esp+0a8h]
		mov     edx, [esp+0b8h]
		mov     ebx, [esp+0b0h]
		mov     ecx, [esp+0ach]
		mov     esi, [esp+0b4h]
		mov     edi, [esp+0a0h]
		add     ebp, 8200h
		add     eax, byte 20h
		add     edx, byte 20h
		add     ebx, 8200h
		add     ecx, 8200h
		inc     esi
		add     edi, 8200h
		mov     [esp+0a8h], eax
		mov     [esp+0b8h], edx
		mov     [esp+0b0h], ebx
		mov     [esp+0ach], ecx
		mov     [esp+0b4h], esi
		mov     [esp+0a0h], edi
		cmp     esi, byte 4
		jl      near ___1adfah

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		add     esp, 0bch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
