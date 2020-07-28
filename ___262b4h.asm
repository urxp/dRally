cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1each
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a01f4h
	extern	___18e93ch
	extern	___18643ch
	extern	___1a0198h
	extern	___1a1ec0h
	extern	___259e0h
	extern	___18e954h
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___13248h
	extern	___1914c0h
	extern	___13094h_cdecl
	extern	___1a1eb8h
	extern	___190f20h
	extern	___190f48h
	extern	___190f70h
	extern	___190f98h
	extern	___190fc0h
	extern	___190fe8h

section .text

__GDECL(___262b4h)
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
		mov     esi, [___1a1each]
		add     ebx, 278f8h
		mov     edx, ecx
		shr     dl, 2
___262e2h:
		mov     ch, dl
___262e4h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___262e4h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___262e2h
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
		mov     ebx, [edx+___1a01f4h]
		mov     ecx, [eax+___18e93ch]
		cmp     ebx, ecx
		jge     near ___2657bh
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		shl     eax, 4
		mov     edx, 10dh
		add     eax, ___18643ch
		mov     ecx, [ebx*4+___1a0198h]
		push    eax
		mov     ebx, [___1a1ec0h]
		mov     eax, 78h
		call    near ___259e0h
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
		mov     edx, eax
		mov     eax, [ebx+___1a01f4h]
		shl     edx, 5
		mov     ebx, 0ah
		mov     eax, [edx+eax*4+___18e954h]
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
		call    near ___25180h
		lea     edx, [eax+345f8h]
		mov     ebx, 180h
		lea     eax, [esp+14h]
		mov     ecx, 77h
		call    near ___12f60h
		push    byte 1
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		mov     edx, 136aah
		add     eax, ___1914c0h

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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___1914c0h
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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___1914c0h
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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___1914c0h
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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___1914c0h
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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		add     eax, ___1914c0h
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
___2657bh:
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		lea     edx, [ecx-1]
		mov     eax, [___1a1eb8h]
		mov     ecx, 40h
		lea     esi, [edx*4+0]
		add     ebx, 2a0f8h
		sub     esi, edx
		add     eax, 6000h
		shl     esi, 0bh
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___265afh:
		mov     ch, dl
___265b1h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___265b1h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___265afh
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___190f20h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		mov     eax, ___190f48h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		mov     eax, ___190f70h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, ___190f98h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___190fc0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		mov     eax, ___190fe8h

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
