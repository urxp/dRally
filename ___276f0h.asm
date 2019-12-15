cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1each
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___18e93ch
	extern	___1a01f4h
	extern	___1a1eb8h
	extern	___18643ch
	extern	___1a0198h
	extern	___1a1ec0h
	extern	___259e0h
	extern	___18e958h
	extern	itoa_
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___13248h
	extern	___191880h
	extern	___13094h

section .text

__GDECL(___276f0h)
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
___2771eh:
		mov     ch, dl
___27720h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___27720h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2771eh
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
		mov     eax, [eax+___18e93ch]
		mov     ebx, [edx+___1a01f4h]
		dec     eax
		cmp     eax, ebx
		jne     short ___277ddh
		mov     ecx, 40h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, eax
		mov     eax, [___1a1eb8h]
		lea     esi, [edx*4+0]
		add     ebx, 2a0f8h
		sub     esi, edx
		add     eax, 6000h
		shl     esi, 0bh
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___277b6h:
		mov     ch, dl
___277b8h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___277b8h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___277b6h
		jmp     near ___2789fh
___277ddh:
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
		mov     eax, [edx+eax*4+___18e958h]
		mov     edx, esp
		mov     esi, esp
		call    near itoa_
		mov     ax, [___180728h]
		lea     edi, [esp+14h]
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]
		call    near ___25180h
		lea     edx, [eax+345f8h]
		lea     eax, [esp+14h]
		call    near ___12f60h
___2789fh:
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
		mov     edx, [eax*4+___1a01f4h]
		mov     eax, edx
		shl     eax, 4
		sub     eax, edx
		shl     eax, 4
		mov     edx, 136aah
		add     eax, ___191880h
		call    near ___13094h
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
		add     eax, ___191880h
		mov     edx, 15eaah
		add     eax, byte 28h
		call    near ___13094h
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
		add     eax, ___191880h
		mov     edx, 186aah
		add     eax, byte 50h
		call    near ___13094h
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
		add     eax, ___191880h
		mov     edx, 1aeaah
		add     eax, byte 78h
		call    near ___13094h
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
		add     eax, ___191880h
		mov     edx, 1d6aah
		add     eax, 0a0h
		call    near ___13094h
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
		add     eax, ___191880h
		mov     edx, 1feaah
		add     eax, 0c8h
		call    near ___13094h
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
