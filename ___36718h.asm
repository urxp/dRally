cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1028h
	extern	___1de810h
	extern	___1a0f00h
	extern	___35f34h
	extern	___1a0f03h
	extern	___1a0f02h
	extern	___1a0f01h
	extern	___35dd0h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fe4h
	extern	___182544h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___38184h
	extern	___1a01ech
	extern	___1a1ef8h
	extern	___196ab0h
	extern	___1a0fa8h
	extern	___1a0224h
	extern	___182558h
	extern	___185c7ah
	extern	___1a10b8h
	extern	___18255ch
	extern	___182560h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___36718h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		mov     ebp, eax
		cmp     dword [___1a1028h], byte 2
		jne     near ___367b3h
		xor     ebx, ebx
		xor     edx, edx
		mov     [esp+4], ebx
		mov     ebx, 4
___36747h:
		cmp     dword [edx+___1de810h], byte 1
		jne     short ___3675dh
		mov     eax, [esp+4]
		mov     al, [eax+___1a0f00h]
		mov     [esp], al
___3675dh:
		cmp     dword [edx+___1de810h], byte 2
		jne     short ___36774h
		mov     eax, [esp+4]
		mov     al, [eax+___1a0f00h]
		mov     [esp+1], al
___36774h:
		cmp     dword [edx+___1de810h], byte 3
		jne     short ___3678bh
		mov     eax, [esp+4]
		mov     al, [eax+___1a0f00h]
		mov     [esp+2], al
___3678bh:
		cmp     ebx, [edx+___1de810h]
		jne     short ___367a1h
		mov     eax, [esp+4]
		mov     al, [eax+___1a0f00h]
		mov     [esp+3], al
___367a1h:
		mov     ecx, [esp+4]
		inc     ecx
		add     edx, byte 54h
		mov     [esp+4], ecx
		cmp     ebx, ecx
		jle     short ___367e7h
		jmp     short ___36747h
___367b3h:
		mov     ebx, 2
		mov     edx, 3
		xor     eax, eax
		call    near ___35f34h
		mov     al, [___1a0f03h]
		mov     [esp], al
		mov     al, [___1a0f02h]
		mov     [esp+1], al
		mov     al, [___1a0f01h]
		mov     [esp+2], al
		mov     al, [___1a0f00h]
		mov     [esp+3], al
___367e7h:
		test    ebp, ebp
		jne     short ___3684bh
		call    near ___35dd0h
		mov     ecx, 14h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fe4h]
		add     ebx, 0d362h
___3680ch:
		mov     edi, edx
___3680eh:
		mov     al, [esi]
		or      al, al
		je      short ___36816h
		mov     [ebx], al
___36816h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3680eh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3680ch
		mov     ecx, 0d890h
		mov     ebx, ___182544h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     edx, esp
		mov     eax, 4
		call    near ___38184h
___3684bh:
		xor     edi, edi
		mov     [esp+4], edi
___36851h:
		test    ebp, ebp
		jne     near ___368d0h
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		cmp     dword [eax+___1a01ech], byte 64h
		je      short ___368d0h
		cmp     edx, [___1a1ef8h]
		jne     short ___36883h
		cmp     dword [___196ab0h], byte 1
		je      near ___36a27h
___36883h:
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [esp+edx*1]
		imul    eax, eax, byte 13h
		add     eax, byte 57h
		imul    eax, eax, 280h
		mov     ecx, 12h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fa8h]
		add     ebx, eax
		mov     edx, 2ah
		add     ebx, 0d9h
___368b6h:
		mov     edi, edx
___368b8h:
		mov     al, [esi]
		or      al, al
		je      short ___368c0h
		mov     [ebx], al
___368c0h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___368b8h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___368b6h
___368d0h:
		mov     edi, [esp+4]
		cmp     edi, byte 1
		jb      short ___368edh
		jbe     near ___36960h
		cmp     edi, byte 2
		je      near ___369b2h
		jmp     near ___36a15h
___368edh:
		test    edi, edi
		jne     near ___36a15h
		xor     edx, edx
		mov     dl, [esp+edi*1]
		imul    eax, edx, byte 6ch
		cmp     dword [eax+___1a01ech], byte 64h
		je      near ___36a15h
		cmp     edx, [___1a1ef8h]
		jne     short ___3691fh
		cmp     dword [___196ab0h], byte 1
		je      near ___36a15h
___3691fh:
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [esp+edx*1]
		imul    edx, eax, byte 6ch
		imul    eax, eax, byte 13h
		add     eax, byte 59h
		imul    eax, eax, 280h
		mov     edi, [edx+___1a0224h]
		add     edi, byte 0ah
		mov     ebx, ___182558h
		mov     [edx+___1a0224h], edi
		lea     ecx, [eax+0e6h]
		mov     edx, ___185c7ah
		mov     eax, [___1a10b8h]
		jmp     near ___36a10h
___36960h:
		xor     eax, eax
		mov     al, [esp+edi*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      near ___36a15h
		cmp     eax, [___1a1ef8h]
		jne     short ___3698ah
		cmp     dword [___196ab0h], byte 1
		je      near ___36a15h
___3698ah:
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    edx, edx, 280h
		mov     edi, [eax+___1a0224h]
		add     edi, byte 7
		mov     ebx, ___18255ch
		jmp     short ___369fah
___369b2h:
		xor     eax, eax
		mov     al, [esp+edi*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      short ___36a15h
		cmp     eax, [___1a1ef8h]
		jne     short ___369d4h
		cmp     dword [___196ab0h], byte 1
		je      short ___36a15h
___369d4h:
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    edx, edx, 280h
		mov     edi, [eax+___1a0224h]
		add     edi, byte 4
		mov     ebx, ___182560h
___369fah:
		mov     [eax+___1a0224h], edi
		lea     ecx, [edx+0e6h]
		mov     eax, [___1a10b8h]
		mov     edx, ___185c7ah
___36a10h:
		call    near ___12e78h
___36a15h:
		mov     eax, [esp+4]
		inc     eax
		mov     [esp+4], eax
		cmp     eax, byte 3
		jl      near ___36851h
___36a27h:
		test    ebp, ebp
		jne     near ___36acfh
		mov     [esp+4], ebp
		xor     esi, esi
		mov     ebp, 640000h
___36a3ah:
		xor     eax, eax
		mov     al, [esp+4]
		push    eax
		mov     edx, ebp
		mov     eax, [esi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, ebp
		mov     eax, [esi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, ebp
		mov     eax, [esi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+4]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+4], ecx
		cmp     ecx, 100h
		jl      near ___36a3ah

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___36acfh:
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
