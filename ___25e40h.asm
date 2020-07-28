cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e98h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1a01f0h
	extern	___18e938h
	extern	___1862bch
	extern	___1a01a8h
	extern	___1a1ec8h
	extern	___259e0h
	extern	___18e944h
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___13248h
	extern	___18e298h
	extern	___13094h_cdecl
	extern	___1a1eb8h
	extern	___190e30h
	extern	___190e58h
	extern	___190e80h
	extern	___190ea8h
	extern	___190ed0h
	extern	___190ef8h

section .text

__GDECL(___25e40h)
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
		mov     esi, [___1a1e98h]
		add     ebx, 27890h
		mov     edx, ecx
		shr     dl, 2
___25e6eh:
		mov     ch, dl
___25e70h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25e70h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25e6eh
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
		mov     ebx, [edx+___1a01f0h]
		mov     ecx, [eax+___18e938h]
		cmp     ebx, ecx
		jge     near ___261e1h
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		shl     eax, 5
		mov     edx, 10dh
		add     eax, ___1862bch
		mov     ecx, [ebx*4+___1a01a8h]
		push    eax
		mov     ebx, [___1a1ec8h]
		mov     eax, 10h
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
		mov     eax, [ebx+___1a01f0h]
		shl     edx, 5
		mov     ebx, 0ah
		mov     eax, [edx+eax*4+___18e944h]
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
		lea     edx, [eax+34590h]
		mov     ebx, 180h
		lea     eax, [esp+14h]
		mov     ecx, 77h
		call    near ___12f60h
		push    byte 1
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
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
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edx, [ebx+___1a01f0h]
		add     esi, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		mov     edx, eax
		shl     edx, 4
		lea     eax, [esi+2e0h]
		add     eax, edx
		mov     edx, 136aah

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
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
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edx, [ebx+___1a01f0h]
		add     esi, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		mov     edx, eax
		shl     edx, 4
		lea     eax, [esi+2e0h]
		add     eax, edx
		mov     edx, 15eaah
		add     eax, byte 28h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
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
		mov     ecx, ___18e298h
		shl     eax, 5
		mov     edx, [ebx+___1a01f0h]
		add     ecx, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		mov     edx, eax
		shl     edx, 4
		lea     eax, [ecx+2e0h]
		add     eax, edx
		mov     edx, 186aah
		add     eax, byte 50h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ef8h]
		lea     esi, [edx*8+0]
		sub     esi, edx
		shl     esi, 2
		sub     esi, edx
		shl     esi, 2
		mov     edx, [esi+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     ebx, ___18e298h
		shl     eax, 5
		mov     edx, [esi+___1a01f0h]
		add     ebx, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		mov     edx, eax
		shl     edx, 4
		lea     eax, [ebx+2e0h]
		add     eax, edx
		mov     edx, 1aeaah
		add     eax, byte 78h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
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
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edx, [ebx+___1a01f0h]
		add     esi, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		add     esi, 2e0h
		shl     eax, 4
		add     eax, esi
		mov     edx, 1d6aah
		add     eax, 0a0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
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
		mov     esi, ___18e298h
		shl     eax, 5
		mov     edx, [ebx+___1a01f0h]
		add     esi, eax
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		add     esi, 2e0h
		shl     eax, 4
		add     eax, esi
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
___261e1h:
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		lea     edx, [ecx-1]
		mov     esi, [___1a1eb8h]
		lea     eax, [edx*4+0]
		mov     ecx, 40h
		sub     eax, edx
		add     ebx, 2a090h
		shl     eax, 0bh
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___26211h:
		mov     ch, dl
___26213h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___26213h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___26211h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___190e30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		mov     eax, ___190e58h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		mov     eax, ___190e80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, ___190ea8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___190ed0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		mov     eax, ___190ef8h

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
