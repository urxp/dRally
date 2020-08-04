cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a1028h
	extern	___1a0ef8h
	extern	___1a0ef9h
	extern	___1a0efah
	extern	___1a0efbh
	extern	___19bd60h
	extern	___1a1ef8h
	extern	___1a01ech
	extern	___199f54h
	extern	___1a0224h
	extern	___185a14h_UseWeapons
	extern	___1a0248h
	extern	___1a0228h
	extern	srand_watcom106
	extern	rand_watcom106
	extern	itoa_watcom106
	extern	___1a01e0h
	extern	___13248h
	extern	___193018h
	extern	___192ff0h
	extern	___13094h_cdecl
	extern	___18239ch
	extern	___193040h
	extern	___1823b8h
	extern	___193068h
	extern	___193090h
	extern	___1930b8h
	extern	___180694h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h_cdecl
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___17324h
	extern 	__GET_TIMER_TICKS

section .text

__GDECL(___32230h)
		push    0a4h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 84h
		mov     dword [esp+80h], 2dh
		mov     edx, [___1a1028h]
		mov     al, [edx*4+___1a0ef8h]
		mov     [esp+78h], al
		mov     al, [edx*4+___1a0ef9h]
		mov     [esp+79h], al
		mov     al, [edx*4+___1a0efah]
		mov     [esp+7ah], al
		mov     al, [edx*4+___1a0efbh]
		mov     ebp, 0a5h
		mov     [esp+7bh], al
		xor     edx, edx
		xor     eax, eax
		mov     esi, [___19bd60h]
		mov     ebx, [___1a1ef8h]
		xor     ecx, ecx
___3229ah:
		cmp     eax, ebx
		je      short ___322a8h
		cmp     ecx, esi
		jne     short ___322a8h
		mov     [edx+___1a01ech], esi
___322a8h:
		inc     eax
		add     edx, byte 6ch
		cmp     eax, byte 14h
		jl      short ___3229ah
		cmp     dword [___199f54h], byte 0
		je      short ___322c1h
		xor     eax, eax
		jmp     near ___3265eh
___322c1h:
		mov     eax, 1
		mov     ecx, [___1a1ef8h]
		xor     esi, esi
		xor     edx, edx
		mov     [esp+7ch], eax
		xor     eax, eax
___322d6h:
		mov     ebx, [edx+___1a0224h]
		cmp     esi, ebx
		jge     short ___322e6h
		cmp     eax, ecx
		je      short ___322e6h
		mov     esi, ebx
___322e6h:
		inc     eax
		add     edx, byte 6ch
		cmp     eax, byte 14h
		jl      short ___322d6h
		cmp     dword [___19bd60h], byte 0
		jne     near ___32654h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     esi, [eax+___1a0224h]
		jl      near ___32654h
		cmp     dword [___185a14h_UseWeapons], byte 0
		je      near ___32654h
		cmp     dword [eax+___1a0248h], byte 1
		jne     near ___32654h
		xor     eax, eax
___3233bh:
		xor     edx, edx
		mov     dl, [esp+eax*1+78h]
		imul    edx, edx, byte 6ch
		inc     eax
		mov     dl, [edx+___1a0228h]
		mov     [esp+eax*1+33h], dl
		cmp     eax, byte 4
		jl      short ___3233bh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		movzx   edi, byte [esp+34h]
		cmp     edi, [eax*4+___1a0228h]
		jne     short ___3237bh
		movzx   edi, byte [esp+35h]
___3237bh:
		mov     edx, [___1a1ef8h]
		lea     esi, [edx*8+0]
		sub     esi, edx
		shl     esi, 2
		sub     esi, edx
		xor     eax, eax
		shl     esi, 2
___32394h:
		xor     edx, edx
		mov     dl, [esp+eax*1+34h]
		cmp     edx, edi
		jge     short ___323a8h
		cmp     edx, [esi+___1a0228h]
		je      short ___323a8h
		mov     edi, edx
___323a8h:
		inc     eax
		cmp     eax, byte 4
		jl      short ___32394h
		xor     esi, esi
___323b0h:
		xor     eax, eax
		mov     al, [esp+esi*1+78h]
		imul    eax, eax, byte 6ch
		cmp     edi, [eax+___1a0228h]
		je      short ___323c4h
		inc     esi
		jmp     short ___323b0h
___323c4h:
	push 	edx
	push 	ecx
		call	__GET_TIMER_TICKS
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
	push 	eax
		call    srand_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ecx, 19h
		sar     edx, 1fh
		idiv    ecx
		lea     edi, [edx+ecx*1]
		xor     edx, edx
		mov     dl, [esp+esi*1+78h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+6ch]
		mov     [eax*4+___1a01ech], edi
		mov     eax, edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		xor     edx, edx
		mov     dl, [esp+esi*1+78h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ecx, 0c3h
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		lea     edi, [esp+5ch]
		add     esi, eax
		mov     ebx, 1cah
		call 	__STRCPY
		push    byte 1
		mov     edx, ebp
		mov     eax, [esp+84h]
		call    near ___13248h
		lea     edx, [ebp+28h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+80h]
		shl     eax, 7
		mov     esi, ___193018h
		add     edx, eax
		mov     eax, ___192ff0h
		add     edx, byte 38h
		mov     edi, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		call 	__STRCPY
		lea     esi, [esp+6ch]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___18239ch
		mov     edi, esp
		lea     edx, [ebp+38h]
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+80h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+38h]
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     esi, ___193040h
		mov     edi, esp
		call 	__STRCPY
		lea     esi, [esp+5ch]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1823b8h
		mov     edi, esp
		lea     edx, [ebp+48h]
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edi, [esp+80h]
		shl     eax, 7
		add     eax, edi
		lea     edx, [eax+38h]
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+58h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [edi+eax*1]
		mov     eax, ___193068h
		add     edx, byte 38h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+68h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, edi
		lea     edx, [eax+38h]
		mov     eax, ___193090h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+73h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, edi
		lea     edx, [eax+38h]
		mov     eax, ___1930b8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		lea     edx, [ebp+96h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___180694h
		lea     ecx, [eax+0c0h]
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

		call    near ___17324h
		mov     eax, [esp+7ch]
		add     esp, 84h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___32654h:
		xor     esi, esi
		mov     [esp+7ch], esi
		mov     eax, [esp+7ch]
___3265eh:
		add     esp, 84h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
