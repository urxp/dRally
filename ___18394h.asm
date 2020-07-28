cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern 	___185ba9h
	extern 	___1a10e0h
	extern 	___12e78h_cdecl
	extern 	___185b8bh
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1398ch__VESA101_PRESENTRECTANGLE
	extern 	___17384h
	extern 	___59720h
	extern 	___19bd60h
	extern 	___23758h
	extern 	memset

section .text

__GDECL(___18394h)
		push    84h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 6ch
		mov     [esp+38h], eax
		mov     [esp+64h], edx
		mov     [esp+60h], ebx
		mov     [esp+40h], ecx
		mov     edx, 3fh
		mov     ebx, 70h
		mov     esi, [esp+38h]
		mov     edi, esp
		mov     ecx, [esp+64h]
		xor     ah, ah
		mov     [esp+34h], edx
		mov     [esp+69h], ah
		mov     edx, [esp+60h]
		call 	__STRCPY
		lea     eax, [edx*4+0]
		mov     [esp+50h], ebx
		add     eax, edx
		mov     ebx, esp
		shl     eax, 7
		mov     edx, ___185ba9h
		add     ecx, eax
		mov     eax, [___1a10e0h]
		xor     ebp, ebp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     ebx, ebx
		jmp     short ___1842ch
___18419h:
		xor     eax, eax
		mov     al, [esp+ebx*1]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		inc     ebx
		add     ebp, eax
___1842ch:
		mov     edi, esp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___18419h
		mov     edx, [esp+60h]
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edi, 7
		mov     ecx, [esp+64h]
		add     edx, edi
		mov     ebx, ebp
		add     edx, ecx
		lea     esi, [ecx+edi*1]
		mov     [esp+3ch], edi
		mov     ecx, 20h
		mov     eax, esi
		mov     [esp+44h], edi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     [esp+4ch], esi
		xor     eax, eax
		mov     [esp+48h], esi
		mov     [esp+58h], eax
___18481h:
		mov     edx, [esp+50h]
		mov     ebx, [esp+34h]
		push    edx
		mov     eax, [esp+68h]
		xor     ecx, ecx
		push    ebx
		mov     edx, [esp+68h]
		mov     ebx, ebp
		call    near ___17384h
		call    near ___59720h
		mov     [esp+54h], eax
		and     eax, 0ffh
		cmp     eax, byte 1ch
		jb      short ___184c8h
		jbe     short ___18517h
		cmp     eax, byte 3bh
		jb      near ___1861ah
		jbe     short ___184ddh
		cmp     eax, dword 9ch
		je      short ___18517h
		jmp     near ___1861ah
___184c8h:
		cmp     eax, byte 1
		jb      near ___1861ah
		jbe     short ___18502h
		cmp     eax, byte 0eh
		je      short ___18538h
		jmp     near ___1861ah
___184ddh:
		cmp     dword [esp+84h], byte 0
		je      near ___1861ah
		cmp     dword [___19bd60h], byte 0
		je      near ___1861ah
		call    near ___23758h
		jmp     near ___1861ah
___18502h:
		cmp     dword [esp+88h], byte 0
		je      near ___1861ah
		xor     eax, eax
		jmp     near ___1876bh
___18517h:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___1861ah
		mov     dword [esp+58h], 0ffffffffh
		jmp     near ___1861ah
___18538h:
		mov     edi, esp
		call 	__STRLEN
		test    ecx, ecx
		jbe     near ___1861ah
		mov     edi, esp
		call 	__STRLEN
		xor     eax, eax
		mov     al, [esp+ecx*1-1]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		mov     edx, [esp+60h]
		sub     ebp, eax
		imul    eax, edx, 280h
		mov     esi, eax
		add     eax, 5000h
		mov     [esp+5ch], eax
___18580h:
		mov     edi, esp
		xor     ebx, ebx
		call 	__STRLEN
		mov     bl, [esp+ecx*1-1]
		mov     bl, [ebx+___185b8bh]
		mov     ecx, [esp+64h]
		mov     edx, 0c4h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [esp+5ch]
		add     eax, esi
		and     ebx, 0ffh
		add     eax, ecx
		add     ebx, byte 14h
		add     eax, ebp
		add     esi, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     esi, edi
		jne     short ___18580h
		mov     edi, esp
		call 	__STRLEN
		xor     eax, eax
		mov     al, [esp+ecx*1-1]
		xor     ebx, ebx
		mov     edx, [esp+44h]
		mov     bl, [eax+___185b8bh]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 20h
		add     eax, edx
		mov     edx, [esp+64h]
		add     ebx, byte 14h
		add     edx, eax
		mov     eax, [esp+48h]
		add     edx, ebp
		add     eax, ebp
		mov     edi, esp

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		xor     dl, dl
		call 	__STRLEN
		mov     [esp+ecx*1-1], dl
___1861ah:
		mov     edx, [esp+54h]
		mov     eax, [esp+40h]
		sar     edx, 8
		cmp     byte [edx+eax*1], 1
		jne     near ___1872dh
		mov     edi, esp
		mov     ebx, [esp+7ch]
		call 	__STRLEN
		cmp     ecx, ebx
		jae     near ___1872dh
		cmp     ebp, [esp+80h]
		jge     near ___1872dh
		mov     [esp+68h], dl
		cmp     dl, 40h
		jbe     short ___1866bh
		cmp     dl, 5bh
		jae     short ___1866bh
		mov     ch, dl
		add     ch, 20h
		mov     [esp+68h], ch
___1866bh:
		lea     esi, [esp+68h]
		mov     edi, esp
		call 	__STRCAT
		imul    esi, [esp+60h], 280h
		mov     edi, 0c4h
		mov     ecx, esi
		add     esi, 5000h
___186a8h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp+64h]
		add     eax, ecx
		mov     ebx, 20h
		add     eax, edx
		mov     edx, edi
		add     eax, ebp
		add     ecx, 280h
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, esi
		jne     short ___186a8h
		mov     esi, [esp+4ch]
		lea     ebx, [esp+68h]
		mov     edx, ___185ba9h
		add     esi, ebp
		mov     eax, [___1a10e0h]
		mov     ecx, esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		xor     ebx, ebx
		mov     bl, [esp+68h]
		mov     bl, [ebx+___185b8bh]
		mov     ecx, [esp+3ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [esp+64h]
		add     eax, ecx
		add     eax, edi
		and     ebx, 0ffh
		lea     edx, [eax+ebp*1]
		mov     ecx, 20h
		mov     eax, esi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		xor     eax, eax
		mov     al, [esp+68h]
		mov     al, [eax+___185b8bh]
		and     eax, 0ffh
		add     ebp, eax
___1872dh:
		cmp     dword [esp+58h], byte 0
		je      near ___18481h
		mov     eax, [esp+54h]
		and     eax, 0ffh
		cmp     eax, byte 1
		je      short ___18766h
		mov     esi, esp
		mov     edi, [esp+38h]
		call 	__STRCPY
___18766h:
		mov     eax, 1
___1876bh:
		add     esp, byte 6ch
		pop     ebp
		pop     edi
		pop     esi
		ret     10h
