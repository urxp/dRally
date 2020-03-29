cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRLEN
	extern	rand_watcom106
	extern	___1a1f67h
	extern	___1a01fch
	extern	___1a1ef8h
	extern	___1a0f04h
	extern	___1a0ef8h
	extern	___1a0228h
	extern	itoa_
	extern	___180130h
	extern	___181f50h
	extern	___180724h
	extern	___1a01e0h
	extern	___1a10b8h
	extern	___185c7ah
	extern	___12e78h
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___3079ch)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 6ch
		mov     ebx, eax

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     near ___30a78h
		xor     ebx, ebx
		mov     ecx, 3
___307cch:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ecx
		inc     ebx
		mov     ah, [edx+___1a1f67h]
		mov     ebp, edx
		cmp     cl, ah
		jae     short ___307eah
		cmp     ebx, byte 32h
		jl      short ___307cch
___307eah:
		cmp     ebx, byte 32h
		jge     near ___30a78h
		mov     ecx, 2
		xor     edi, edi
___307fah:
		test    ebp, ebp
		jne     short ___30831h
		mov     esi, 14h
		mov     ebx, edi
___30805h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		mov     [esp+68h], edx
		imul    edx, edx, byte 6ch
		mov     eax, [edx+___1a01fch]
		inc     ebx
		cmp     edi, eax
		je      short ___30831h
		cmp     eax, byte 1
		je      short ___30831h
		cmp     ecx, eax
		je      short ___30831h
		cmp     ebx, byte 64h
		jl      short ___30805h
___30831h:
		cmp     ebp, byte 1
		jne     near ___308b5h
		mov     ebx, edi
		mov     esi, 3
___30841h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     dword [esp+64h], 14h
		sar     edx, 1fh
		idiv    dword [esp+64h]
		mov     eax, [___1a1ef8h]
		mov     [esp+68h], edx
		imul    edx, eax, byte 6ch
		mov     eax, [edx+___1a01fch]
		inc     ebx
		cmp     edi, eax
		jg      short ___30886h
		cmp     ecx, eax
		jl      short ___30886h
		imul    edx, [esp+68h], byte 6ch
		mov     eax, [edx+___1a01fch]
		cmp     eax, byte 1
		jl      short ___30886h
		cmp     esi, eax
		jge     short ___308b5h
___30886h:
		imul    edx, [___1a1ef8h], byte 6ch
		mov     eax, [edx+___1a01fch]
		cmp     esi, eax
		jg      short ___308b0h
		cmp     eax, byte 5
		jg      short ___308b0h
		imul    edx, [esp+68h], byte 6ch
		mov     eax, [edx+___1a01fch]
		cmp     ecx, eax
		jg      short ___308b0h
		cmp     eax, byte 4
		jle     short ___308b5h
___308b0h:
		cmp     ebx, byte 64h
		jl      short ___30841h
___308b5h:
		cmp     ebp, byte 2
		jne     short ___308efh
		mov     esi, 14h
		mov     ebx, edi
___308c1h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    esi
		mov     [esp+68h], edx
		imul    edx, edx, byte 6ch
		mov     eax, [edx+___1a01fch]
		inc     ebx
		cmp     eax, byte 3
		je      short ___308efh
		cmp     eax, byte 4
		je      short ___308efh
		cmp     eax, byte 5
		je      short ___308efh
		cmp     ebx, byte 64h
		jl      short ___308c1h
___308efh:
		mov     eax, [esp+68h]
		cmp     byte [eax+___1a0f04h], 1
		je      near ___307fah
		mov     byte [eax+___1a0f04h], 1
		xor     eax, eax
		lea     edx, [ebp*4+0]
		mov     al, [ebp+___1a1f67h]
		add     eax, edx
		mov     dl, [esp+68h]
		mov     ebx, [esp+68h]
		mov     [eax+___1a0ef8h], dl
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		mov     bl, [ebp+___1a1f67h]
		mov     eax, [edx*4+___1a0228h]
		inc     bl
		lea     edx, [esp+50h]
		mov     [ebp+___1a1f67h], bl
		mov     ebx, 0ah
		call    near itoa_
		mov     al, [___180130h]
		lea     edi, [esp+50h]
		mov     [esp], al
		call 	__STRLEN
		cmp     ecx, byte 2
		jae     short ___3099bh
		mov     esi, ___181f50h
		mov     edi, esp
		call 	__STRCAT
___3099bh:
		lea     esi, [esp+50h]
		mov     edi, esp
		mov     ebx, [esp+68h]
		call 	__STRCAT
		lea     edx, [ebx*8+0]
		mov     esi, ___180724h
		sub     edx, ebx
		mov     edi, esp
		shl     edx, 2
		call 	__STRCAT
		sub     edx, ebx
		mov     esi, ___1a01e0h
		shl     edx, 2
		mov     edi, esp
		add     esi, edx
		xor     ebx, ebx
		call 	__STRCAT
		mov     bl, [ebp+___1a1f67h]
		lea     edx, [ebx*8+0]
		add     edx, ebx
		add     edx, edx
		lea     eax, [edx+100h]
		mov     ebx, esp
		lea     ecx, [eax*4+0]
		lea     edx, [ebp*4+0]
		add     ecx, eax
		add     edx, ebp
		shl     ecx, 7
		shl     edx, 5
		mov     eax, [___1a10b8h]
		add     ecx, edx
		mov     edx, ___185c7ah
		add     ecx, byte 22h
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___30a78h:
		add     esp, byte 6ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
