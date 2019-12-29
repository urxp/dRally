cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___19dd70h
	extern 	__STOSB
	extern 	___19dd90h
	extern 	___19dd8eh
	extern 	___19dda0h
	extern 	___19dd91h
	extern 	___19dd82h
	extern 	___19dd9eh
	extern 	___19dd92h
	extern 	___19dd93h
	extern 	___19dd96h
	extern 	___19dd87h
	extern 	___19dd94h
	extern 	___19dda1h
	extern 	___19dda2h
	extern 	___19dd95h
	extern 	___19dd88h
	extern 	___19dd89h
	extern 	___19dd84h
	extern 	___19dd80h
	extern 	___19dd83h
	extern 	___19dd9fh
	extern 	___19dd86h
	extern 	___19dd8fh
	extern 	___19dd81h
	extern 	___19dd9dh
	extern 	___19dd73h
	extern 	___19dd85h
	extern 	___19dd9ch
	extern 	___19dd75h
	extern 	___19dd74h
	extern 	___19dd72h
	extern 	___19dd76h
	extern 	___19dd77h
	extern 	___19dd7bh
	extern 	___19dd78h
	extern 	___19dd79h
	extern 	___19dd7dh
	extern 	___19dd7ch
	extern 	___19dd7ah
	extern 	___19dda3h
	extern 	___19dda4h
	extern 	___19dda9h
	extern 	___19dda5h
	extern 	___185ba9h
	extern 	___1a10e0h
	extern 	___12e78h
	extern 	___185b8bh
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1398ch__VESA101_PRESENTRECTANGLE
	extern 	___17384h

	extern 	___5994ch
	extern 	___19bd60h
	extern 	___23758h
	extern 	___1854ach
	extern 	___24cc54h
	extern 	dRally_Audio_playSoundEffect
	extern 	___19de70h
	extern 	___1a1104h
	extern 	___1a1ef8h
	extern 	___1a0220h
	extern 	___1a0fb8h
	extern 	___11378h
	extern 	memset_
	extern 	___1a1e88h
	extern 	___1a1eb4h
	extern 	___1a020ch

section .text

__GDECL(___17510h)
		push    0b8h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, 9ch
		mov     [esp+40h], eax
		mov     [esp+3ch], edx
		mov     [esp+8ch], ebx
		mov     [esp+4ch], ecx
		mov     edx, 3fh
		mov     ebx, 70h
		mov     ecx, 100h
		mov     eax, ___19dd70h
		mov     esi, [esp+40h]
		mov     edi, esp
		mov     [esp+90h], edx
		mov     [esp+38h], ebx
		xor     edx, edx
		mov     bl, 44h
		call    near __STOSB
		mov     ah, 41h
		mov     dl, 42h
		mov     cl, 46h
		mov     [___19dd90h], bl
		mov     bh, 45h
		mov     [___19dd8eh], ah
		mov     [___19dda0h], dl
		mov     [___19dd91h], cl
		mov     dh, 43h
		mov     ch, 47h
		mov     al, 48h
		mov     [___19dd82h], bh
		mov     bl, 4ch
		mov     [___19dd9eh], dh
		mov     [___19dd92h], ch
		mov     [___19dd93h], al
		mov     ah, 49h
		mov     dl, 4ah
		mov     cl, 4eh
		mov     [___19dd96h], bl
		mov     bh, 4dh
		mov     [___19dd87h], ah
		mov     [___19dd94h], dl
		mov     [___19dda1h], cl
		mov     dh, 4bh
		mov     ch, 4fh
		mov     al, 50h
		mov     [___19dda2h], bh
		mov     bl, 54h
		mov     [___19dd95h], dh
		mov     [___19dd88h], ch
		mov     [___19dd89h], al
		mov     ah, 51h
		mov     dl, 52h
		mov     cl, 56h
		mov     [___19dd84h], bl
		mov     bh, 55h
		mov     [___19dd80h], ah
		mov     [___19dd83h], dl
		mov     [___19dd9fh], cl
		mov     dh, 53h
		mov     ch, 57h
		mov     al, 58h
		mov     [___19dd86h], bh
		mov     bl, 32h
		mov     [___19dd8fh], dh
		mov     [___19dd81h], ch
		mov     [___19dd9dh], al
		mov     ah, 59h
		mov     dl, 5ah
		mov     cl, 34h
		mov     [___19dd73h], bl
		mov     bh, 33h
		mov     [___19dd85h], ah
		mov     [___19dd9ch], dl
		mov     [___19dd75h], cl
		mov     dh, 31h
		mov     ch, 35h
		mov     al, 36h
		mov     [___19dd74h], bh
		mov     bl, 30h
		mov     [___19dd72h], dh
		mov     [___19dd76h], ch
		mov     [___19dd77h], al
		mov     ah, 37h
		mov     dl, 38h
		mov     cl, 3dh
		mov     [___19dd7bh], bl
		mov     bh, 2dh
		mov     [___19dd78h], ah
		mov     [___19dd79h], dl
		mov     [___19dd7dh], cl
		mov     dh, 39h
		mov     ch, 2ch
		mov     al, 2eh
		mov     [___19dd7ch], bh
		mov     [___19dd7ah], dh
		mov     [___19dda3h], ch
		mov     [___19dda4h], al
		mov     dl, 20h
		mov     ah, 2fh
		mov     [___19dda9h], dl
		xor     dh, dh
		mov     [___19dda5h], ah
		mov     [esp+95h], dh
		mov     edx, [esp+8ch]
		call 	__STRCPY
		lea     eax, [edx*4+0]
		mov     ebx, esp
		add     eax, edx
		mov     ecx, [esp+3ch]
		shl     eax, 7
		mov     edx, ___185ba9h
		add     ecx, eax
		mov     eax, [___1a10e0h]
		xor     ebp, ebp
		call    near ___12e78h
		xor     ebx, ebx
		jmp     short ___17713h
___17700h:
		xor     eax, eax
		mov     al, [esp+ebx*1]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		inc     ebx
		add     ebp, eax
___17713h:
		mov     edi, esp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___17700h
		mov     edx, [esp+8ch]
		mov     esi, [esp+3ch]
		mov     ecx, 20h
		lea     edi, [edx*4+0]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edi, edx
		mov     ebx, ebp
		shl     edi, 7
		mov     edx, [esp+3ch]
		add     eax, edi
		add     esi, edi
		add     edx, eax
		mov     eax, esi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		mov     dword [esp+80h], 80h
		mov     edx, [esp+38h]
		add     edx, byte 3ch
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, [esp+90h]
		mov     [esp+74h], eax
		add     eax, ebx
		mov     edx, [esp+38h]
		add     eax, byte 19h
		add     edx, 8fh
		mov     [esp+68h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+38h]
		shl     eax, 7
		add     edx, 92h
		mov     [esp+64h], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     [esp+78h], eax
		add     eax, ebx
		mov     edx, [esp+38h]
		add     eax, byte 19h
		add     edx, byte 4fh
		mov     [esp+5ch], eax
		lea     eax, [edx*4+0]
		mov     [esp+44h], edi
		add     eax, edx
		mov     [esp+54h], edi
		shl     eax, 7
		mov     [esp+48h], esi
		mov     [esp+70h], eax
		add     eax, ebx
		mov     [esp+50h], esi
		add     eax, byte 1bh
		xor     ecx, ecx
		mov     [esp+60h], eax
		mov     eax, [esp+38h]
		mov     [esp+58h], ecx
		add     eax, 8bh
		mov     [esp+7ch], ecx
		mov     [esp+6ch], eax
___1780dh:
		mov     edi, [esp+38h]
		mov     eax, [esp+90h]
		push    edi
		mov     ecx, [esp+0c0h]
		mov     edx, [esp+90h]
		push    eax
		mov     ebx, ebp
		mov     eax, [esp+44h]
		call    near ___17384h
		call    near ___5994ch
		and     eax, 0ffh
		mov     [esp+88h], eax
		cmp     eax, byte 4dh
		jb      short ___178a8h
		jbe     near ___17f05h
		cmp     eax, dword 0c8h
		jb      short ___17889h
		jbe     near ___17914h
		cmp     eax, dword 0cdh
		jb      short ___17879h
		jbe     near ___17f05h
		cmp     eax, dword 0d0h
		je      near ___17b39h
		jmp     near ___18213h
___17879h:
		cmp     eax, dword 0cbh
		je      near ___17d5fh
		jmp     near ___18213h
___17889h:
		cmp     eax, byte 50h
		jb      near ___18213h
		jbe     near ___17b39h
		cmp     eax, dword 9ch
		je      near ___180ceh
		jmp     near ___18213h
___178a8h:
		cmp     eax, byte 1ch
		jb      short ___178d2h
		jbe     near ___180ceh
		cmp     eax, byte 48h
		jb      short ___178c8h
		jbe     short ___17914h
		cmp     eax, byte 4bh
		je      near ___17d5fh
		jmp     near ___18213h
___178c8h:
		cmp     eax, byte 3bh
		je      short ___178efh
		jmp     near ___18213h
___178d2h:
		cmp     eax, byte 1
		jb      near ___18213h
		jbe     near ___180b2h
		cmp     eax, byte 0eh
		je      near ___18128h
		jmp     near ___18213h
___178efh:
		cmp     dword [esp+0b4h], byte 0
		je      near ___1834dh
		cmp     dword [___19bd60h], byte 0
		je      near ___1834dh
		call    near ___23758h
		jmp     near ___1834dh
___17914h:
		cmp     dword [esp+0bch], byte 0
		je      near ___1834dh
		push    8000h
		mov     edx, 19h
		mov     edi, [___1854ach]
		mov     eax, 1
		push    edi
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     eax, [esp+7ch]
		test    eax, eax
		jle     short ___17956h
		lea     ebx, [eax-1]
		mov     [esp+7ch], ebx
		jmp     short ___1795eh
___17956h:
		mov     dword [esp+7ch], 13h
___1795eh:
		mov     ecx, [esp+70h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [esp+90h]
		add     eax, ecx
		mov     ecx, 40h
		add     eax, esi
		mov     esi, [esp+7ch]
		lea     ebx, [eax+1bh]
		mov     edx, ecx
		mov     esi, [esi*4+___19de70h]
		mov     edi, [esp+70h]
		shr     dl, 2
___1798eh:
		mov     ch, dl
___17990h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17990h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___1798eh
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+90h]
		add     eax, edi
		add     eax, edx
		mov     ecx, 40h
		lea     edx, [eax+1bh]
		mov     ebx, ecx
		mov     eax, [esp+60h]
		xor     esi, esi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
___179d5h:
		mov     edx, [esp+38h]
		mov     ebx, [esp+90h]
		mov     ecx, [esp+0bch]
		push    edx
		mov     eax, [esp+40h]
		mov     edx, [esp+90h]
		push    ebx
		mov     ebx, ebp
		inc     esi
		call    near ___17384h
		cmp     esi, byte 5
		jl      short ___179d5h
		mov     ecx, [esp+74h]
		mov     esi, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 44h
		add     eax, ecx
		mov     ecx, 10h
		add     eax, esi
		mov     esi, [___1a1104h]
		lea     ebx, [eax+19h]
		add     esi, 880h
		mov     edi, [esp+74h]
		shr     dl, 2
___17a35h:
		mov     ch, dl
___17a37h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17a37h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___17a35h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+90h]
		add     eax, edi
		add     eax, edx
		mov     ecx, 10h
		lea     edx, [eax+19h]
		mov     ebx, 44h
		mov     eax, [esp+68h]
		xor     esi, esi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
___17a7fh:
		mov     ebx, [esp+38h]
		mov     ecx, [esp+90h]
		push    ebx
		mov     edx, [esp+90h]
		mov     eax, [esp+40h]
		push    ecx
		mov     ebx, ebp
		mov     ecx, [esp+0c4h]
		inc     esi
		call    near ___17384h
		cmp     esi, byte 5
		jl      short ___17a7fh
		mov     esi, [esp+74h]
		mov     edi, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 10h
		add     eax, esi
		mov     edx, 44h
		add     eax, edi
		mov     esi, [___1a1104h]
		lea     ebx, [eax+19h]
		shr     dl, 2
___17ad5h:
		mov     ch, dl
___17ad7h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17ad7h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___17ad5h
		mov     edx, [esp+74h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, edi
		mov     ecx, 10h
		lea     edx, [eax+19h]
		mov     ebx, 44h
		mov     eax, [esp+68h]
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		imul    eax, [___1a1ef8h], byte 6ch
		xor     esi, esi
		mov     edx, [esp+7ch]
		mov     [esp+88h], esi
		mov     [eax+___1a0220h], edx
		jmp     near ___1834dh
___17b39h:
		cmp     dword [esp+0bch], byte 0
		je      near ___1834dh
		push    8000h
		mov     eax, 1
		mov     edx, [___1854ach]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 19h
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_playSoundEffect
	add 	esp, 18h
		mov     ebx, [esp+7ch]
		cmp     ebx, byte 13h
		jge     short ___17b7ch
		lea     esi, [ebx+1]
		mov     [esp+7ch], esi
		jmp     short ___17b82h
___17b7ch:
		xor     ecx, ecx
		mov     [esp+7ch], ecx
___17b82h:
		mov     edi, [esp+70h]
		mov     edx, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [esp+7ch]
		add     eax, edi
		mov     ecx, 40h
		add     eax, edx
		mov     esi, [esi*4+___19de70h]
		lea     ebx, [eax+1bh]
		mov     edx, ecx
		shr     dl, 2
___17baeh:
		mov     ch, dl
___17bb0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17bb0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___17baeh
		mov     edx, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 40h
		add     eax, edi
		mov     ebx, ecx
		add     edx, eax
		mov     eax, [esp+60h]
		add     edx, byte 1bh
		xor     edi, edi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
___17bf5h:
		mov     edx, [esp+38h]
		mov     ebx, [esp+90h]
		mov     ecx, [esp+0bch]
		push    edx
		mov     eax, [esp+40h]
		mov     edx, [esp+90h]
		push    ebx
		mov     ebx, ebp
		inc     edi
		call    near ___17384h
		cmp     edi, byte 5
		jl      short ___17bf5h
		mov     ecx, [esp+78h]
		mov     esi, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 44h
		add     eax, ecx
		mov     ecx, 10h
		add     eax, esi
		mov     esi, [___1a1104h]
		lea     ebx, [eax+19h]
		add     esi, 0cc0h
		mov     edi, [esp+78h]
		shr     dl, 2
___17c55h:
		mov     ch, dl
___17c57h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17c57h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___17c55h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+90h]
		add     eax, edi
		add     eax, edx
		mov     ecx, 10h
		lea     edx, [eax+19h]
		mov     ebx, 44h
		mov     eax, [esp+5ch]
		xor     esi, esi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
___17c9fh:
		mov     ebx, [esp+38h]
		mov     ecx, [esp+90h]
		push    ebx
		mov     edx, [esp+90h]
		mov     eax, [esp+40h]
		push    ecx
		mov     ebx, ebp
		mov     ecx, [esp+0c4h]
		inc     esi
		call    near ___17384h
		cmp     esi, byte 5
		jl      short ___17c9fh
		mov     esi, [esp+78h]
		mov     edi, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 10h
		add     eax, esi
		mov     edx, 44h
		add     eax, edi
		mov     esi, [___1a1104h]
		lea     ebx, [eax+19h]
		add     esi, 440h
		shr     dl, 2
___17cfbh:
		mov     ch, dl
___17cfdh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___17cfdh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___17cfbh
		mov     edx, [esp+78h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edx
		add     eax, edi
		mov     ecx, 10h
		lea     edx, [eax+19h]
		mov     ebx, 44h
		mov     eax, [esp+5ch]
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		imul    eax, [___1a1ef8h], byte 6ch
		xor     esi, esi
		mov     edx, [esp+7ch]
		mov     [esp+88h], esi
		mov     [eax+___1a0220h], edx
		jmp     near ___1834dh
___17d5fh:
		cmp     dword [esp+0bch], byte 0
		je      near ___1834dh
		mov     edx, [esp+80h]
		test    edx, edx
		jle     short ___17d82h
		lea     ebx, [edx-2]
		mov     [esp+80h], ebx
___17d82h:
		mov     ebx, [esp+80h]
		mov     eax, [___1a0fb8h]
		lea     ebx, [ebx+ebx*2]
		add     ebx, eax
		xor     eax, eax
		mov     al, [ebx+2]
		mov     [esp+98h], eax
		fild    word [esp+98h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [ebx+1]
		mov     [esp+9ch], eax
		fild    word [esp+9ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [ebx]
		mov     [esp+0a0h], eax
		fild    word [esp+0a0h]
		sub     esp, byte 4
		imul    esi, [esp+78h], 280h
		fstp    dword [esp]
		mov     edi, 0c4h
		call    near ___11378h
		mov     ecx, esi
		add     esi, 3c00h
___17df7h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+90h]
		add     eax, ecx
		add     eax, edx
		mov     ebx, 126h
		add     eax, byte 65h
		mov     edx, edi
		add     ecx, 280h
		call    near memset_
		cmp     ecx, esi
		jne     short ___17df7h
		mov     ebx, [esp+64h]
		mov     ecx, [esp+90h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 126h
		add     eax, ebx
		mov     esi, [___1a1e88h]
		add     eax, ecx
		mov     ecx, 10h
		lea     ebx, [eax+6bh]
___17e47h:
		mov     edi, edx
___17e49h:
		mov     al, [esi]
		or      al, al
		je      short ___17e51h
		mov     [ebx], al
___17e51h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___17e49h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___17e47h
		mov     esi, [esp+6ch]
		imul    eax, esi, 280h
		mov     [esp+34h], eax
		mov     edx, [esp+90h]
		mov     edi, [esp+34h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, [esp+80h]
		add     eax, edi
		mov     ecx, 18h
		add     eax, edx
		mov     esi, [___1a1eb4h]
		add     eax, byte 79h
		mov     edx, 0ah
		add     ebx, eax
___17e9fh:
		mov     edi, edx
___17ea1h:
		mov     al, [esi]
		or      al, al
		je      short ___17ea9h
		mov     [ebx], al
___17ea9h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___17ea1h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___17e9fh
		mov     ebx, [esp+34h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, [esp+90h]
		add     eax, ebx
		add     eax, ecx
		mov     edx, [esp+80h]
		add     eax, byte 77h
		mov     edi, [esp+80h]
		add     edx, eax
		lea     eax, [ebx+ecx*1]
		mov     ecx, 18h
		add     eax, byte 77h
		mov     ebx, 0eh
		add     eax, edi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		xor     eax, eax
		mov     [esp+88h], eax
		jmp     near ___1834dh
___17f05h:
		cmp     dword [esp+0bch], byte 0
		je      near ___1834dh
		mov     esi, [esp+80h]
		cmp     esi, 0fdh
		jge     short ___17f2ch
		lea     edi, [esi+2]
		mov     [esp+80h], edi
___17f2ch:
		mov     ebx, [esp+80h]
		mov     eax, [___1a0fb8h]
		lea     ebx, [ebx+ebx*2]
		add     ebx, eax
		xor     eax, eax
		mov     al, [ebx+2]
		mov     [esp+98h], eax
		fild    word [esp+98h]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [ebx+1]
		mov     [esp+9ch], eax
		fild    word [esp+9ch]
		sub     esp, byte 4
		xor     eax, eax
		fstp    dword [esp]
		mov     al, [ebx]
		mov     [esp+0a0h], eax
		fild    word [esp+0a0h]
		sub     esp, byte 4
		fstp    dword [esp]
		call    near ___11378h
		imul    esi, [esp+6ch], 280h
		mov     edi, 0c4h
		mov     ecx, esi
		add     esi, 3c00h
___17fa1h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+90h]
		add     eax, ecx
		add     eax, edx
		mov     ebx, 126h
		add     eax, byte 65h
		mov     edx, edi
		add     ecx, 280h
		call    near memset_
		cmp     ecx, esi
		jne     short ___17fa1h
		mov     ebx, [esp+64h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 10h
		add     eax, ebx
		mov     ebx, [esp+90h]
		mov     edx, 126h
		add     ebx, eax
		mov     esi, [___1a1e88h]
		add     ebx, byte 6bh
___17ff1h:
		mov     edi, edx
___17ff3h:
		mov     al, [esi]
		or      al, al
		je      short ___17ffbh
		mov     [ebx], al
___17ffbh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___17ff3h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___17ff1h
		mov     ecx, [esp+6ch]
		imul    eax, ecx, 280h
		mov     [esp+34h], eax
		mov     edi, [esp+90h]
		mov     esi, [esp+34h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, [esp+80h]
		add     eax, esi
		mov     edx, 0ah
		add     eax, edi
		mov     ecx, 18h
		add     eax, byte 79h
		mov     esi, [___1a1eb4h]
		add     ebx, eax
___18049h:
		mov     edi, edx
___1804bh:
		mov     al, [esi]
		or      al, al
		je      short ___18053h
		mov     [ebx], al
___18053h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___1804bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___18049h
		mov     edx, [esp+34h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, [esp+90h]
		add     eax, edx
		add     eax, ebx
		mov     edx, [esp+80h]
		add     eax, byte 77h
		mov     esi, [esp+80h]
		add     edx, eax
		mov     eax, [esp+34h]
		mov     ecx, 18h
		add     eax, ebx
		xor     edi, edi
		add     eax, byte 77h
		mov     ebx, 0eh
		add     eax, esi
		mov     [esp+88h], edi
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		jmp     near ___1834dh
___180b2h:
		cmp     dword [esp+0b8h], byte 0
		je      near ___1834dh
		xor     eax, eax
		add     esp, 9ch
		pop     ebp
		pop     edi
		pop     esi
		ret     14h
___180ceh:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     short ___180e6h
		mov     dword [esp+58h], 0ffffffffh
___180e6h:
		cmp     dword [esp+0bch], byte 0
		je      short ___18101h
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [esp+7ch]
		mov     [eax+___1a0220h], edx
___18101h:
		cmp     dword [esp+0bch], byte 0
		je      near ___1834dh
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edx, [esp+80h]
		mov     [eax+___1a020ch], edx
		jmp     near ___1834dh
___18128h:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___1834dh
		mov     edi, esp
		call 	__STRLEN
		xor     eax, eax
		mov     al, [esp+ecx*1-1]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		mov     edx, [esp+8ch]
		sub     ebp, eax
		imul    eax, edx, 280h
		mov     esi, eax
		add     eax, 5000h
		mov     [esp+84h], eax
___18176h:
		mov     edi, esp
		call 	__STRLEN
		xor     eax, eax
		mov     al, [esp+ecx*1-1]
		xor     ebx, ebx
		mov     bl, [eax+___185b8bh]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [esp+3ch]
		add     eax, esi
		mov     edx, 0c4h
		add     eax, edi
		add     ebx, byte 14h
		add     eax, ebp
		add     esi, 280h
		call    near memset_
		cmp     esi, [esp+84h]
		jne     short ___18176h
		mov     edi, esp
		mov     esi, [esp+3ch]
		call 	__STRLEN
		xor     eax, eax
		xor     ebx, ebx
		mov     al, [esp+ecx*1-1]
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, [esp+54h]
		mov     bl, [eax+___185b8bh]
		mov     eax, [esp+50h]
		add     ebx, byte 14h
		add     edx, ecx
		mov     ecx, 20h
		add     edx, esi
		add     eax, ebp
		add     edx, ebp
		mov     edi, esp
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		call 	__STRLEN
		xor     al, al
		mov     [esp+ecx*1-1], al
		jmp     near ___1834dh
___18213h:
		mov     edx, [esp+88h]
		xor     eax, eax
		mov     ecx, [esp+4ch]
		mov     al, [edx+___19dd70h]
		add     eax, ecx
		cmp     byte [eax], 1
		jne     near ___1834dh
		mov     edi, esp
		mov     esi, [esp+0ach]
		call 	__STRLEN
		cmp     ecx, esi
		jae     near ___1834dh
		cmp     ebp, [esp+0b0h]
		jge     near ___1834dh
		mov     al, [edx+___19dd70h]
		mov     [esp+94h], al
		cmp     al, 40h
		jbe     short ___1827ah
		cmp     al, 5bh
		jae     short ___1827ah
		mov     ch, al
		add     ch, 20h
		mov     [esp+94h], ch
___1827ah:
		lea     esi, [esp+94h]
		mov     edi, esp
		call 	__STRCAT
		mov     eax, [esp+8ch]
		imul    esi, eax, 280h
		mov     ecx, esi
		add     esi, 5000h
		mov     edi, 20h
___182bfh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+3ch]
		add     eax, ecx
		mov     ebx, edi
		add     eax, edx
		mov     edx, 0c4h
		add     eax, ebp
		add     ecx, 280h
		call    near memset_
		cmp     ecx, esi
		jne     short ___182bfh
		mov     esi, [esp+48h]
		lea     ebx, [esp+94h]
		mov     edx, ___185ba9h
		add     esi, ebp
		mov     eax, [___1a10e0h]
		mov     ecx, esi
		call    near ___12e78h
		xor     ebx, ebx
		mov     bl, [esp+94h]
		mov     bl, [ebx+___185b8bh]
		mov     ecx, [esp+44h]
		mov     edi, [esp+3ch]
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		and     ebx, 0ffh
		add     edx, ecx
		mov     eax, esi
		add     edx, edi
		mov     ecx, 20h
		add     edx, ebp
		call    near ___1398ch__VESA101_PRESENTRECTANGLE
		xor     eax, eax
		mov     al, [esp+94h]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		add     ebp, eax
___1834dh:
		cmp     dword [esp+58h], byte 0
		je      near ___1780dh
		cmp     dword [esp+88h], byte 1
		je      short ___18382h
		mov     esi, esp
		mov     edi, [esp+40h]
		call 	__STRCPY
___18382h:
		mov     eax, 1
		add     esp, 9ch
		pop     ebp
		pop     edi
		pop     esi
		ret     14h
