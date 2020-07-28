cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1028h
	extern	___1de810h
	extern	___1a0efch
	extern	___35f34h
	extern	___1a0effh
	extern	___1a0efeh
	extern	___1a0efdh
	extern	___35dd0h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fc4h
	extern	___18252ch
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___38184h
	extern	___1a01ech
	extern	___1a1ef8h
	extern	___196ab0h
	extern	___1a0ff0h
	extern	___1a0224h
	extern	___182540h
	extern	___1a10b8h
	extern	___185c7ah
	extern	___182500h
	extern	___182508h
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	__DISPLAY_SET_PALETTE_COLOR
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___36358h)
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
		cmp     dword [___1a1028h], byte 1
		jne     near ___363f3h
		xor     ebx, ebx
		xor     edx, edx
		mov     [esp+4], ebx
		mov     ebx, 4
___36387h:
		cmp     dword [edx+___1de810h], byte 1
		jne     short ___3639dh
		mov     eax, [esp+4]
		mov     al, [eax+___1a0efch]
		mov     [esp], al
___3639dh:
		cmp     dword [edx+___1de810h], byte 2
		jne     short ___363b4h
		mov     eax, [esp+4]
		mov     al, [eax+___1a0efch]
		mov     [esp+1], al
___363b4h:
		cmp     dword [edx+___1de810h], byte 3
		jne     short ___363cbh
		mov     eax, [esp+4]
		mov     al, [eax+___1a0efch]
		mov     [esp+2], al
___363cbh:
		cmp     ebx, [edx+___1de810h]
		jne     short ___363e1h
		mov     eax, [esp+4]
		mov     al, [eax+___1a0efch]
		mov     [esp+3], al
___363e1h:
		mov     ecx, [esp+4]
		inc     ecx
		add     edx, byte 54h
		mov     [esp+4], ecx
		cmp     ebx, ecx
		jle     short ___36427h
		jmp     short ___36387h
___363f3h:
		mov     ebx, 1
		mov     edx, 3
		xor     eax, eax
		call    near ___35f34h
		mov     al, [___1a0effh]
		mov     [esp], al
		mov     al, [___1a0efeh]
		mov     [esp+1], al
		mov     al, [___1a0efdh]
		mov     [esp+2], al
		mov     al, [___1a0efch]
		mov     [esp+3], al
___36427h:
		test    ebp, ebp
		jne     short ___3648bh
		call    near ___35dd0h
		mov     ecx, 14h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fc4h]
		add     ebx, 0d362h
___3644ch:
		mov     edi, edx
___3644eh:
		mov     al, [esi]
		or      al, al
		je      short ___36456h
		mov     [ebx], al
___36456h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3644eh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3644ch
		mov     ecx, 0d890h
		mov     ebx, ___18252ch
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
___3648bh:
		xor     edi, edi
		mov     [esp+4], edi
___36491h:
		test    ebp, ebp
		jne     near ___3650fh
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [esp+edx*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      short ___3650fh
		cmp     eax, [___1a1ef8h]
		jne     short ___364c3h
		cmp     dword [___196ab0h], byte 1
		je      near ___36664h
___364c3h:
		mov     edx, [esp+4]
		xor     eax, eax
		mov     al, [esp+edx*1]
		imul    eax, eax, byte 13h
		add     eax, byte 57h
		imul    edx, eax, 280h
		mov     ecx, 12h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0ff0h]
		add     eax, edx
		mov     edx, 2ah
		lea     ebx, [eax+0d9h]
___364f5h:
		mov     edi, edx
___364f7h:
		mov     al, [esi]
		or      al, al
		je      short ___364ffh
		mov     [ebx], al
___364ffh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___364f7h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___364f5h
___3650fh:
		mov     edi, [esp+4]
		cmp     edi, byte 1
		jb      short ___3652ch
		jbe     near ___3659fh
		cmp     edi, byte 2
		je      near ___365f1h
		jmp     near ___36652h
___3652ch:
		test    edi, edi
		jne     near ___36652h
		xor     eax, eax
		mov     al, [esp+edi*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      near ___36652h
		cmp     eax, [___1a1ef8h]
		jne     short ___3655eh
		cmp     dword [___196ab0h], byte 1
		je      near ___36652h
___3655eh:
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    edx, edx, 280h
		mov     edi, [eax+___1a0224h]
		add     edi, byte 5
		mov     ebx, ___182540h
		mov     [eax+___1a0224h], edi
		lea     ecx, [edx+0e6h]
		mov     eax, [___1a10b8h]
		mov     edx, ___185c7ah
		jmp     near ___3664dh
___3659fh:
		xor     eax, eax
		mov     al, [esp+edi*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      near ___36652h
		cmp     eax, [___1a1ef8h]
		jne     short ___365c9h
		cmp     dword [___196ab0h], byte 1
		je      near ___36652h
___365c9h:
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    ecx, edx, 280h
		mov     edi, [eax+___1a0224h]
		add     edi, byte 3
		mov     ebx, ___182500h
		jmp     short ___36637h
___365f1h:
		xor     eax, eax
		mov     al, [esp+edi*1]
		imul    edx, eax, byte 6ch
		cmp     dword [edx+___1a01ech], byte 64h
		je      short ___36652h
		cmp     eax, [___1a1ef8h]
		jne     short ___36613h
		cmp     dword [___196ab0h], byte 1
		je      short ___36652h
___36613h:
		mov     eax, [esp+4]
		xor     edx, edx
		mov     dl, [esp+eax*1]
		imul    eax, edx, byte 6ch
		imul    edx, edx, byte 13h
		add     edx, byte 59h
		imul    ecx, edx, 280h
		mov     edi, [eax+___1a0224h]
		inc     edi
		mov     ebx, ___182508h
___36637h:
		mov     [eax+___1a0224h], edi
		mov     eax, [___1a10b8h]
		mov     edx, ___185c7ah
		add     ecx, 0e6h
___3664dh:

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___36652h:
		mov     eax, [esp+4]
		inc     eax
		mov     [esp+4], eax
		cmp     eax, byte 3
		jl      near ___36491h
___36664h:
		test    ebp, ebp
		jne     near ___3670ch
		mov     [esp+4], ebp
		xor     esi, esi
		mov     ebp, 640000h
___36677h:
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

		call    __DISPLAY_SET_PALETTE_COLOR
		add 	esp, 10h
		
		mov     ecx, [esp+4]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+4], ecx
		cmp     ecx, 100h
		jl      near ___36677h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___3670ch:
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
