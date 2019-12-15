cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e6ch
	extern	___1a1ee4h
	extern	___1a1ea8h
	extern	___185cbch
	extern	___1a1ed0h
	extern	___1a01b8h
	extern	___259e0h
	extern	___18e2a4h
	extern	itoa_
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___13248h
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___18e298h
	extern	___13094h
	extern	___1a1e78h

section .text

__GDECL(___27078h)
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
		mov     esi, [___1a1e6ch]
		add     ebx, 13890h
		mov     edx, ecx
		shr     dl, 2
___270a6h:
		mov     ch, dl
___270a8h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___270a8h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___270a6h
		mov     ecx, 10h
		mov     edx, [___1a1ee4h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		lea     eax, [edx*4+0]
		mov     esi, [___1a1ea8h]
		sub     eax, edx
		add     ebx, 13890h
		shl     eax, 9
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___270fbh:
		mov     ch, dl
___270fdh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___270fdh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___270fbh
		mov     eax, [___1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [___1a1ee4h]
		add     eax, ___185cbch
		mov     ebx, [___1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+___1a01b8h]
		mov     eax, 10h
		call    near ___259e0h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     ebx, 0ah
		shl     eax, 5
		mov     edx, esp
		mov     eax, [eax+___18e2a4h]
		lea     edi, [esp+14h]
		call    near itoa_
		mov     ax, [___180728h]
		mov     esi, esp
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]
		call    near ___25180h
		lea     edx, [eax+20590h]
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
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 136aah
		add     eax, 1f0h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 15eaah
		add     eax, 218h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 186aah
		add     eax, 240h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1aeaah
		add     eax, 268h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1d6aah
		add     eax, 290h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1feaah
		add     eax, 2b8h
		mov     ecx, 40h
		call    near ___13094h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 16080h
___27378h:
		mov     edi, edx
___2737ah:
		mov     al, [esi]
		or      al, al
		je      short ___27382h
		mov     [ebx], al
___27382h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2737ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27378h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 160f0h
		add     esi, 400h
___273b4h:
		mov     edi, edx
___273b6h:
		mov     al, [esi]
		or      al, al
		je      short ___273beh
		mov     [ebx], al
___273beh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___273b6h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___273b4h
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
