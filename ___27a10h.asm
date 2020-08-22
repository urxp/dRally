cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e94h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___18e940h
	extern	___1a01f8h
	extern	___1a1eb8h
	extern	___1864fch
	extern	___1a01d0h
	extern	___1a1eech
	extern	___259e0h_cdecl
	extern	___18e968h
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h_cdecl
	extern	___12f60h_cdecl
	extern	___13248h
	extern	___192000h
	extern	___13094h_cdecl

section .text

__GDECL(___27a10h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 28h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e94h]
		add     ebx, 27960h
		mov     edx, ecx
		shr     dl, 2
___27a3eh:
		mov     ch, dl
___27a40h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___27a40h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___27a3eh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edx, [eax*4+0]
		mov     ebx, [edx+___1a01fch]
		lea     eax, [ebx*8+0]
		sub     eax, ebx
		shl     eax, 3
		sub     eax, ebx
		shl     eax, 5
		mov     eax, [eax+___18e940h]
		mov     ebx, [edx+___1a01f8h]
		dec     eax
		cmp     eax, ebx
		jne     short ___27afbh
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1eb8h]
		mov     edx, eax
		shl     eax, 2
		add     ebx, 2a160h
		sub     eax, edx
		add     esi, 0c000h
		shl     eax, 0bh
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___27ad4h:
		mov     ch, dl
___27ad6h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___27ad6h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___27ad4h
		jmp     near ___27bb4h
___27afbh:
		mov     eax, ebx
		shl     eax, 6
		mov     edx, 10dh
		add     eax, ___1864fch
		mov     ecx, [ebx*4+___1a01d0h]
		push    eax
		mov     ebx, [___1a1eech]
		mov     eax, 0e0h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___259e0h_cdecl
	add 	esp, 14h
	
		mov     edx, [___1a1ef8h]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		sub     ebx, edx
		shl     ebx, 2
		mov     edx, [ebx+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     edx, [ebx+___1a01f8h]
		shl     eax, 5
		mov     ebx, 0ah
		mov     eax, [eax+edx*4+___18e968h]
		mov     edx, esp
		mov     esi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

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

		lea     edx, [eax+34660h]
		lea     eax, [esp+14h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___12f60h_cdecl
	add 	esp, 8
	pop 	ecx

___27bb4h:
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		mov     edx, 136aah
		add     eax, ___192000h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___192000h
		mov     edx, 15eaah
		add     eax, byte 28h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___192000h
		mov     edx, 186aah
		add     eax, byte 50h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___192000h
		mov     edx, 1aeaah
		add     eax, byte 78h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___192000h
		mov     edx, 1d6aah
		add     eax, 0a0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f8h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___192000h
		mov     edx, 1feaah
		add     eax, 0c8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
