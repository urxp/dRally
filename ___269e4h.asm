cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e9ch
	extern	___186658h
	extern	___1a1e8ch
	extern	___1a1ed8h
	extern	___259e0h_cdecl
	extern	___1a1ef8h
	extern	___1a01ech
	extern	itoa_watcom106
	extern	___185c7ah
	extern	___251e8h
	extern	___1a10b8h
	extern	___12e78h_cdecl
	extern	___185a14h_UseWeapons
	extern	___1a01fch
	extern	___18e974h
	extern	___181f60h
	extern	___180728h
	extern	___25180h_cdecl
	extern	___12f60h_cdecl
	extern	___13248h
	extern	___194170h
	extern	___13094h_cdecl

section .text

__GDECL(___269e4h)
		push    48h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e9ch]
		add     ebx, 279c8h
		mov     edx, ecx
		shr     dl, 2
___26a13h:
		mov     ch, dl
___26a15h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___26a15h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___26a13h
		push    ___186658h
		mov     edx, 10dh
		mov     eax, 148h
		mov     ecx, [___1a1e8ch]
		mov     ebx, [___1a1ed8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___259e0h_cdecl
	add 	esp, 14h
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     edx, [eax+___1a01ech]
		cmp     edx, byte 0ah
		jge     near ___26b3fh
		mov     ebx, 0ah
		mov     eax, edx
		mov     edx, esp
		mov     ecx, 27f1ah

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, esp
		mov     ebx, esp
		mov     edx, ___185c7ah
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		sub     ebx, edx
		mov     ecx, [___185a14h_UseWeapons]
		shl     ebx, 2
		test    ecx, ecx
		je      short ___26affh
		mov     edx, [ebx+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		jmp     short ___26b2ah
___26affh:
		mov     edx, [ebx+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		mov     ecx, 0ah
		sar     edx, 1fh
		idiv    ecx
___26b2ah:
		imul    eax, [ebx+___1a01ech]
		mov     ebx, ecx
		mov     edx, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		jmp     near ___26bdfh
___26b3fh:
		mov     eax, ___181f60h
		mov     ecx, 27f1ah
		mov     ebx, ___181f60h
		mov     edx, ___185c7ah
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, [___185a14h_UseWeapons]
		shl     eax, 2
		test    ebx, ebx
		je      short ___26bb6h
		mov     edx, [eax+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		mov     ebx, 0ah
		mov     edx, esp
		jmp     short ___26bdah
___26bb6h:
		mov     eax, [eax+___1a01fch]
		lea     esi, [eax*8+0]
		sub     esi, eax
		shl     esi, 3
		sub     esi, eax
		mov     ebx, 0ah
		shl     esi, 5
		mov     edx, esp
		mov     eax, [esi+___18e974h]
___26bdah:

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

___26bdfh:
		mov     esi, esp
		mov     ax, [___180728h]
		lea     edi, [esp+14h]
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]

	push 	edx
	push 	ecx
	push 	eax
		call    ___25180h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx

		lea     edx, [eax+346c8h]
		lea     eax, [esp+14h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___12f60h_cdecl
	add 	esp, 8
	pop 	ecx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebp, [eax*4+___1a01ech]
		xor     esi, esi
		cmp     ebp, byte 64h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 64h
		jge     short ___26c6dh
		mov     esi, 1
___26c6dh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 5ah
		jge     short ___26c90h
		mov     esi, 2
___26c90h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 50h
		jge     short ___26cb3h
		mov     esi, 3
___26cb3h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 46h
		jge     short ___26cd6h
		mov     esi, 4
___26cd6h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 3ch
		jge     short ___26cf9h
		mov     esi, 5
___26cf9h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 32h
		jge     short ___26d1ch
		mov     esi, 6
___26d1ch:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 28h
		jge     short ___26d3fh
		mov     esi, 7
___26d3fh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 1eh
		jge     short ___26d62h
		mov     esi, 8
___26d62h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 14h
		jge     short ___26d85h
		mov     esi, 9
___26d85h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 0ah
		jge     short ___26da8h
		mov     esi, 0ah
___26da8h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01ech], byte 0
		jne     short ___26dcbh
		mov     esi, 0bh
___26dcbh:
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     eax, esi
		shl     eax, 4
		sub     eax, esi
		mov     esi, ___194170h
		shl     eax, 4
		add     esi, eax
		mov     edx, 136aah
		mov     eax, esi

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		lea     eax, [esi+28h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		lea     eax, [esi+50h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		lea     eax, [esi+78h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		lea     eax, [esi+0a0h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		lea     eax, [esi+0c8h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
