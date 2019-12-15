cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___182720h
	extern	___180144h
	extern	___1a1114h
	extern	bpa_read
	extern	___1a54d0h
	extern	bpk_decode2
	extern	___1a1ef8h
	extern	___1a1ed0h
	extern	___1a020ch
	extern	___135fch
	extern	___23230h
	extern	___1a0fb8h
	extern	___11378h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10f8h
	extern	___19de70h
	extern	___18068ch
	extern	___185ba9h
	extern	___1a10e0h
	extern	___12e78h
	extern	___180690h
	extern	___1a1e6ch
	extern	___1a1ea8h
	extern	___18e2a4h
	extern	itoa_
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___185cbch
	extern	___1a01b8h
	extern	___259e0h
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___1a1e88h
	extern	___1a1eb4h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___5994ch
	extern	___59b3ch
	extern	___1a01e0h
	extern	___1858c8h
	extern	___180130h
	extern	___17510h
	extern	___1854b8h
	extern	___24cc54h
	extern	___654d4h
	extern	___1a0220h
	extern	___1a10cch
	extern	___185a14h
	extern	___148cch
	extern	___1854ach
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___13710h
	extern	___13248h
	extern	___182730h
	extern	___196a94h
	extern	___13bd4h
	extern	___18768ah
	extern	___1876a2h
	extern	___1876bah
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	memset_
	extern	strlwr_
	extern	___1a1efch
	extern	___185bedh
	extern	___19bd60h
	extern	___1807cch
	extern	___185c0bh
	extern	___1a10fch
	extern	___1807e8h
	extern	___1a1108h

section .text

__GDECL(___3ab5ch)
		push    8ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 5ch
		mov     [esp+2ch], eax
		mov     edx, 70h
		mov     ebx, ___182720h
		mov     eax, ___180144h
		mov     [esp+44h], edx
		mov     edx, [___1a1114h]
		call    near bpa_read
		mov     ebx, [___1a1114h]
		push    ebx
		push    ___1a54d0h
		call    near bpk_decode2
		mov     ah, 1
		mov     edx, [___1a1ef8h]
		mov     [esp+54h], ah
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     ebx, 27fh
		shl     eax, 2
		xor     ecx, ecx
		sub     eax, edx
		mov     [___1a1ed0h], ecx
		mov     edx, 173h
		mov     [eax*4+___1a020ch], ecx
		mov     ecx, 6dh
		xor     eax, eax
		call    near ___135fch
		call    near ___23230h
		mov     edx, [___1a0fb8h]
		xor     eax, eax
		mov     al, [edx+182h]
		mov     [esp+50h], eax
		fild    word [esp+50h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+181h]
		mov     [esp+54h], eax
		fild    word [esp+54h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+180h]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		mov     ebp, 3fh
		fstp    dword [esp]
		mov     edi, [esp+38h]
		call    near ___11378h
		test    edi, edi
		je      short ___3ac47h
		mov     ecx, 0f9h
		jmp     short ___3ac4ch
___3ac47h:
		mov     ecx, 0b2h
___3ac4ch:
		mov     edx, 212h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, ___1a54d0h
		add     ebx, 1183fh
___3ac62h:
		mov     edi, edx
___3ac64h:
		mov     al, [esi]
		or      al, al
		je      short ___3ac6ch
		mov     [ebx], al
___3ac6ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3ac64h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3ac62h
		mov     edx, [esp+44h]
		add     edx, byte 3ch
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ecx, 66h
		add     eax, edx
		mov     esi, [___1a10f8h]
		add     eax, ebp
		mov     edx, 44h
		lea     ebx, [eax+19h]
		shr     dl, 2
___3acaeh:
		mov     ch, dl
___3acb0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3acb0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3acaeh
		mov     edx, [esp+44h]
		add     edx, byte 4fh
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ecx, 40h
		add     eax, edx
		mov     esi, [___19de70h]
		lea     ebx, [eax+ebp*1]
		mov     edx, ecx
		add     ebx, byte 1bh
		shr     dl, 2
___3ad00h:
		mov     ch, dl
___3ad02h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3ad02h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3ad00h
		cmp     dword [esp+2ch], byte 0
		je      near ___3ade2h
		mov     edx, [esp+44h]
		add     edx, 0cch
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___18068ch
		lea     esi, [eax+ebp*1]
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		lea     ecx, [esi+0a0h]
		call    near ___12e78h
		mov     ebx, ___180690h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
		lea     ecx, [esi+14ah]
		call    near ___12e78h
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, 1bf80h
		xor     edi, edi
		mov     [esp+48h], eax
		mov     bl, 0c4h
___3ad97h:
		mov     ecx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ecx
		cmp     edx, 212h
		jge     short ___3adceh
		mov     esi, [esp+48h]
		lea     eax, [edx+ebp*1]
___3adb4h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, byte 2
		add     ecx, esi
		add     edx, byte 2
		mov     [ecx+eax*1-2], bl
		cmp     edx, 212h
		jl      short ___3adb4h
___3adceh:
		mov     edx, [esp+48h]
		add     edx, 280h
		inc     edi
		mov     [esp+48h], edx
		cmp     edi, byte 45h
		jl      short ___3ad97h
___3ade2h:
		mov     edx, [esp+44h]
		add     edx, byte 40h
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edi, 7
		mov     ecx, 60h
		add     eax, edi
		mov     esi, [___1a1e6ch]
		add     eax, ebp
		mov     edx, ecx
		lea     ebx, [eax+1a0h]
		shr     dl, 2
___3ae14h:
		mov     ch, dl
___3ae16h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3ae16h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3ae14h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 10h
		add     eax, edi
		mov     edx, 60h
		add     eax, ebp
		mov     esi, [___1a1ea8h]
		lea     ebx, [eax+1a0h]
		lea     edi, [esp+0ch]
		shr     dl, 2
___3ae5ch:
		mov     ch, dl
___3ae5eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3ae5eh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3ae5ch
		mov     ebx, 0ah
		lea     edx, [esp+18h]
		mov     eax, [___18e2a4h]
		lea     esi, [esp+18h]
		call    near itoa_
		mov     ax, [___180728h]
		mov     edx, [esp+44h]
		mov     [esp+0ch], ax
		add     edx, 92h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+ebp*1]
		mov     esi, [esp+44h]
		lea     eax, [esp+0ch]
		add     edx, 1a0h
		call    near ___25180h
		add     edx, eax
		lea     eax, [esp+0ch]
		add     esi, byte 50h
		call    near ___12f60h
		push    ___185cbch
		mov     ecx, [___1a01b8h]
		mov     ebx, [___1a1ed0h]
		lea     eax, [ebp+1a0h]
		mov     edx, esi
		call    near ___259e0h
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ecx, 40h
		add     edx, eax
		mov     ebx, 60h
		add     edx, ebp
		add     eax, ebp
		add     edx, 1a0h
		add     eax, 1a0h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     ebx, [___1a1ed0h]
		inc     ebx
		mov     [___1a1ed0h], ebx
		cmp     ebx, byte 3fh
		jle     short ___3af66h
		xor     esi, esi
		mov     [___1a1ed0h], esi
___3af66h:
		mov     edx, [esp+44h]
		add     edx, 8fh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ecx, 10h
		add     eax, edx
		mov     esi, [___1a1e88h]
		add     eax, ebp
		mov     edx, 126h
		lea     ebx, [eax+6bh]
___3af99h:
		mov     edi, edx
___3af9bh:
		mov     al, [esi]
		or      al, al
		je      short ___3afa3h
		mov     [ebx], al
___3afa3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3af9bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3af99h
		mov     edx, [esp+44h]
		add     edx, 8bh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ecx, 18h
		add     eax, edx
		mov     esi, [___1a1eb4h]
		add     eax, ebp
		mov     edx, 0ah
		lea     ebx, [eax+0f9h]
___3afe9h:
		mov     edi, edx
___3afebh:
		mov     al, [esi]
		or      al, al
		je      short ___3aff3h
		mov     [ebx], al
___3aff3h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3afebh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3afe9h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___5994ch
		call    near ___59b3ch
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
		mov     ebx, [esp+44h]
		call 	__STRCPY
		push    byte 1
		mov     ecx, ___1858c8h
		mov     edx, [___1a1ef8h]
		push    byte 1
		lea     eax, [edx*8+0]
		add     ebx, byte 60h
		sub     eax, edx
		push    byte 0
		shl     eax, 2
		push    12ch
		sub     eax, edx
		mov     dl, [___180130h]
		shl     eax, 2
		push    byte 0ah
		mov     [eax+___1a01e0h], dl
		lea     edx, [ebp+6eh]
		add     eax, ___1a01e0h
		call    near ___17510h
		test    eax, eax
		je      near ___3ba76h
		push    8000h
		mov     edx, 1ch
		mov     eax, [___1854b8h]
		mov     ecx, [___24cc54h]
		push    eax
		xor     ebx, ebx
		mov     eax, 1
		call    near ___654d4h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a0220h], byte 2
		jne     short ___3b0feh
		push    8000h
		mov     edx, 6
		mov     eax, 5
		push    24000h
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___3b0feh:
		cmp     dword [esp+2ch], byte 0
		je      near ___3b97bh
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		mov     ecx, 0f9h
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     esi, ___1a54d0h
		add     eax, edx
		mov     edx, 212h
		lea     ebx, [eax+ebp*1]
___3b132h:
		mov     edi, edx
___3b134h:
		mov     al, [esi]
		or      al, al
		je      short ___3b13ch
		mov     [ebx], al
___3b13ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3b134h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3b132h
		mov     edx, [esp+44h]
		add     edx, byte 60h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edx, [___1a1ef8h]
		lea     ecx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, ___1a01e0h
		sub     eax, edx
		add     ecx, byte 6eh
		shl     eax, 2
		mov     edx, ___185ba9h
		add     ebx, eax
		mov     eax, [___1a10cch]
		call    near ___12e78h
		mov     edx, [esp+44h]
		add     edx, byte 3ch
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ecx, 66h
		add     eax, edx
		mov     esi, [___1a10f8h]
		lea     ebx, [eax+ebp*1]
		mov     edx, 44h
		add     ebx, byte 19h
		shr     dl, 2
___3b1c5h:
		mov     ch, dl
___3b1c7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3b1c7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3b1c5h
		mov     edx, [esp+44h]
		add     edx, byte 4fh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		add     eax, edx
		mov     edx, [___1a1ef8h]
		lea     ebx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 40h
		mov     esi, [eax*4+___1a0220h]
		add     ebx, byte 1bh
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		shr     dl, 2
___3b234h:
		mov     ch, dl
___3b236h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3b236h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3b234h
		mov     edx, [esp+44h]
		add     edx, byte 40h
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edi, 7
		mov     ecx, 60h
		add     eax, edi
		mov     esi, [___1a1e6ch]
		add     eax, ebp
		mov     edx, ecx
		lea     ebx, [eax+1a0h]
		shr     dl, 2
___3b288h:
		mov     ch, dl
___3b28ah:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3b28ah
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3b288h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 10h
		add     edi, eax
		mov     edx, 60h
		lea     ebx, [edi+ebp*1]
		mov     esi, [___1a1ea8h]
		add     ebx, 1a0h
		lea     edi, [esp+0ch]
		shr     dl, 2
___3b2d1h:
		mov     ch, dl
___3b2d3h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___3b2d3h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___3b2d1h
		mov     ebx, 0ah
		lea     edx, [esp+18h]
		mov     eax, [___18e2a4h]
		lea     esi, [esp+18h]
		call    near itoa_
		mov     ax, [___180728h]
		mov     edx, [esp+44h]
		mov     [esp+0ch], ax
		add     edx, 92h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [eax+ebp*1]
		mov     esi, [esp+44h]
		lea     eax, [esp+0ch]
		add     edx, 1a0h
		call    near ___25180h
		add     edx, eax
		lea     eax, [esp+0ch]
		add     esi, byte 50h
		call    near ___12f60h
		push    ___185cbch
		mov     ecx, [___1a01b8h]
		mov     ebx, [___1a1ed0h]
		lea     eax, [ebp+1a0h]
		mov     edx, esi
		call    near ___259e0h
		lea     eax, [esi*4+0]
		add     eax, esi
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     ecx, 40h
		add     edx, eax
		mov     ebx, 60h
		add     edx, ebp
		add     eax, ebp
		add     edx, 1a0h
		add     eax, 1a0h
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     ecx, [___1a1ed0h]
		inc     ecx
		mov     [___1a1ed0h], ecx
		cmp     ecx, byte 3fh
		jle     short ___3b3dbh
		xor     edi, edi
		mov     [___1a1ed0h], edi
___3b3dbh:
		mov     edx, [esp+44h]
		add     edx, 8fh
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ecx, 10h
		add     eax, edx
		mov     esi, [___1a1e88h]
		add     eax, ebp
		mov     edx, 126h
		lea     ebx, [eax+6bh]
___3b40dh:
		mov     edi, edx
___3b40fh:
		mov     al, [esi]
		or      al, al
		je      short ___3b417h
		mov     [ebx], al
___3b417h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3b40fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3b40dh
		mov     edx, [esp+44h]
		add     edx, 8bh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		add     eax, edx
		mov     edx, [___1a1ef8h]
		lea     ebx, [eax+ebp*1]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ecx, 18h
		add     ebx, byte 79h
		mov     edx, [eax*4+___1a020ch]
		mov     esi, [___1a1eb4h]
		add     ebx, edx
		mov     edx, 0ah
___3b478h:
		mov     edi, edx
___3b47ah:
		mov     al, [esi]
		or      al, al
		je      short ___3b482h
		mov     [ebx], al
___3b482h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___3b47ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3b478h
		mov     edx, [esp+44h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     bl, 0c4h
		shl     eax, 7
		xor     edi, edi
		mov     [esp+4ch], eax
___3b4aah:
		mov     ecx, 2
		mov     edx, edi
		mov     eax, edi
		sar     edx, 1fh
		idiv    ecx
		mov     eax, edx
		cmp     edx, 212h
		jge     short ___3b4e1h
		mov     esi, [esp+4ch]
		add     edx, ebp
___3b4c8h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, byte 2
		add     ecx, esi
		add     eax, byte 2
		mov     [ecx+edx*1-2], bl
		cmp     eax, dword 212h
		jl      short ___3b4c8h
___3b4e1h:
		mov     ecx, [esp+4ch]
		add     ecx, 280h
		inc     edi
		mov     [esp+4ch], ecx
		cmp     edi, 0b2h
		jl      short ___3b4aah
		mov     esi, 1
		mov     edx, [esp+44h]
		mov     ecx, ___185a14h
		lea     eax, [ebp+82h]
		add     edx, 0d3h
		mov     ebx, esi
		mov     [___185a14h], esi
		call    near ___148cch
		test    al, al
		jne     short ___3b54eh
		push    8000h
		mov     edx, 19h
		mov     ebp, [___1854ach]
		mov     ecx, [___24cc54h]
		push    ebp
		mov     eax, esi
		xor     ebx, ebx
		call    near ___654d4h
		xor     dh, dh
		mov     [esp+54h], dh
		jmp     near ___3b97bh
___3b54eh:
		mov     edi, [esp+44h]
		mov     ecx, 2c380h
		mov     ebx, 1b8h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     edi, byte 1eh
		add     ebp, byte 1eh
		mov     [esp+44h], edi
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0d200h
		add     edi, 0d200h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		mov     ecx, 0bah
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+48h]
		mov     eax, ebp
		call    near ___13248h
		mov     edx, [esp+44h]
		add     edx, byte 12h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___182730h
		lea     ecx, [eax+ebp*1]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		add     ecx, byte 50h
		call    near ___12e78h
		mov     edx, [___196a94h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edx, [esp+44h]
		shl     eax, 2
		add     edx, byte 4fh
		add     edx, eax
		lea     eax, [ebp+16h]
		call    near ___13bd4h
		mov     edx, [esp+44h]
		add     edx, byte 4ah
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		mov     edi, [___196a94h]
		lea     ecx, [eax+2eh]
		test    edi, edi
		jne     short ___3b62ch
		mov     ebx, ___18768ah
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b63bh
___3b62ch:
		mov     ebx, ___18768ah
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b63bh:
		call    near ___12e78h
		mov     edx, [esp+44h]
		add     edx, byte 66h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     ecx, [eax+ebp*1+2eh]
		cmp     edi, byte 1
		jne     short ___3b66dh
		mov     ebx, ___1876a2h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b67ch
___3b66dh:
		mov     ebx, ___1876a2h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b67ch:
		call    near ___12e78h
		mov     edx, [esp+44h]
		add     edx, 82h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebp
		lea     ecx, [eax+2eh]
		cmp     edi, byte 2
		jne     short ___3b6b2h
		mov     ebx, ___1876bah
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b6c1h
___3b6b2h:
		mov     ebx, ___1876bah
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b6c1h:
		call    near ___12e78h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     eax, [esp+44h]
		add     eax, byte 4ah
		mov     [esp+28h], eax
		mov     edx, eax
		shl     eax, 2
		add     eax, edx
		shl     eax, 7
		mov     [esp+24h], eax
		add     eax, ebp
		add     eax, byte 16h
		mov     [esp+34h], eax
		mov     eax, [esp+44h]
		add     eax, 82h
		mov     [esp+30h], eax
		mov     eax, [esp+44h]
		add     eax, byte 66h
		mov     [esp+38h], eax
		mov     eax, [esp+44h]
		add     eax, byte 4fh
		mov     [esp+3ch], eax
		lea     eax, [ebp+16h]
		mov     [esp+40h], eax
___3b717h:
		imul    edx, edi, byte 1ch
		call    near ___5994ch
		mov     cl, al
		mov     [esp+58h], al
		call    near ___2ab50h
		call    near ___2ab50h
		add     edx, [esp+3ch]
		mov     eax, [esp+40h]
		call    near ___13bd4h
		xor     al, al
		cmp     cl, 0c8h
		jne     short ___3b74ah
		test    edi, edi
		jle     short ___3b74ah
		mov     al, 1
		dec     edi
___3b74ah:
		cmp     byte [esp+58h], 48h
		jne     short ___3b758h
		test    edi, edi
		jle     short ___3b758h
		mov     al, 1
		dec     edi
___3b758h:
		cmp     byte [esp+58h], 0d0h
		jne     short ___3b767h
		cmp     edi, byte 2
		jge     short ___3b767h
		mov     al, 1
		inc     edi
___3b767h:
		cmp     byte [esp+58h], 50h
		jne     short ___3b776h
		cmp     edi, byte 2
		jge     short ___3b776h
		mov     al, 1
		inc     edi
___3b776h:
		test    al, al
		je      near ___3b89fh
		mov     edx, [esp+28h]
		imul    esi, edx, 280h
		mov     ecx, esi
		add     esi, 0d200h
___3b790h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     ebx, 163h
		add     eax, ebp
		mov     edx, 0c4h
		add     eax, byte 16h
		add     ecx, 280h
		call    near memset_
		cmp     ecx, esi
		jne     short ___3b790h
		imul    eax, [esp+28h], 280h
		add     eax, ebp
		lea     ecx, [eax+2eh]
		test    edi, edi
		jne     short ___3b7d7h
		mov     ebx, ___18768ah
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b7e6h
___3b7d7h:
		mov     ebx, ___18768ah
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b7e6h:
		call    near ___12e78h
		imul    eax, [esp+38h], 280h
		add     eax, ebp
		lea     ecx, [eax+2eh]
		cmp     edi, byte 1
		jne     short ___3b80eh
		mov     ebx, ___1876a2h
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b81dh
___3b80eh:
		mov     ebx, ___1876a2h
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b81dh:
		call    near ___12e78h
		imul    ecx, [esp+30h], 280h
		add     ecx, ebp
		add     ecx, byte 2eh
		cmp     edi, byte 2
		jne     short ___3b845h
		mov     ebx, ___1876bah
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]
		jmp     short ___3b854h
___3b845h:
		mov     ebx, ___1876bah
		mov     edx, ___185ba9h
		mov     eax, [___1a10e0h]
___3b854h:
		call    near ___12e78h
		mov     edx, [esp+24h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, ebp
		mov     ecx, 54h
		lea     edx, [eax+16h]
		mov     ebx, 190h
		mov     eax, [esp+34h]
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		push    8000h
		mov     edx, 19h
		mov     ebx, [___1854ach]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___3b89fh:
		mov     ch, [esp+58h]
		cmp     ch, 1ch
		je      short ___3b8b6h
		cmp     ch, 9ch
		je      short ___3b8b6h
		cmp     ch, 39h
		jne     near ___3b935h
___3b8b6h:
		mov     [___196a94h], edi
		test    edi, edi
		jne     short ___3b8e1h
		push    8000h
		mov     edx, 1
		mov     eax, 5
		push    24000h
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___3b8e1h:
		cmp     dword [___196a94h], byte 1
		jne     short ___3b90bh
		push    8000h
		mov     edx, 2
		mov     eax, 5
		push    24000h
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___3b90bh:
		cmp     dword [___196a94h], byte 2
		jne     short ___3b935h
		push    8000h
		mov     edx, 3
		mov     eax, 5
		push    24000h
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___3b935h:
		cmp     byte [esp+58h], 1
		jne     short ___3b964h
		push    8000h
		mov     eax, [___1854ach]
		mov     ecx, [___24cc54h]
		xor     dh, dh
		xor     ebx, ebx
		mov     [esp+58h], dh
		push    eax
		mov     edx, 19h
		mov     eax, 1
		call    near ___654d4h
___3b964h:
		mov     bl, [esp+58h]
		cmp     bl, 1ch
		je      short ___3b97bh
		cmp     bl, 9ch
		je      short ___3b97bh
		cmp     bl, 1
		jne     near ___3b717h
___3b97bh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		add     eax, ___1a01e0h
		call    near strlwr_
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ch, [eax+___1a01e0h]
		cmp     ch, 60h
		jbe     short ___3b9ceh
		cmp     ch, 7bh
		jae     short ___3b9ceh
		mov     dh, ch
		sub     dh, 20h
		mov     [eax+___1a01e0h], dh
___3b9ceh:
		xor     edx, edx
		mov     [___1a1efch], edx
		jmp     short ___3b9feh
___3b9d8h:
		mov     al, [edx+eax*1+___1a01e0h]
		and     eax, 0ffh
		mov     al, [eax+___185bedh]
		mov     edi, [___1a1efch]
		and     eax, 0ffh
		add     edi, eax
		inc     edx
		mov     [___1a1efch], edi
___3b9feh:
		imul    edi, [___1a1ef8h], byte 6ch
		add     edi, ___1a01e0h
		call 	__STRLEN
		imul    eax, [___1a1ef8h], byte 6ch
		cmp     edx, ecx
		jb      short ___3b9d8h
		mov     edx, [eax+___1a020ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		mov     edx, [___1a0fb8h]
		add     edx, eax
		xor     eax, eax
		mov     al, [edx+2]
		mov     [esp+50h], eax
		fild    word [esp+50h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx+1]
		mov     [esp+54h], eax
		fild    word [esp+54h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [edx]
		mov     [esp+58h], eax
		fild    word [esp+58h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    near ___11378h
		jmp     short ___3bad9h
___3ba76h:
		push    8000h
		mov     edx, 19h
		mov     edi, [___1854ach]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, ___1a01e0h
		shl     eax, 2
		mov     esi, esp
		add     edi, eax
		xor     dl, dl
		call 	__STRCPY
		mov     [esp+54h], dl
___3bad9h:
		cmp     dword [___19bd60h], byte 0
		je      short ___3bb14h
		mov     ecx, 390a3h
		mov     ebx, ___1807cch
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]
		call    near ___12e78h
		mov     ecx, 390d9h
		mov     ebx, ___1807e8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
___3bb14h:
		call    near ___23230h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		xor     eax, eax
		mov     [___1a1ed0h], eax
		mov     al, [esp+54h]
		add     esp, byte 5ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
