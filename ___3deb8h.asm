cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCPY
	extern	___1a116ch
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	rand_watcom106
	extern	___1a202fh
	extern	___195494h
	extern	___1a1b62h
	extern	___1a1bf8h
	extern	___1a1f5fh
	extern	___1a1c8eh
	extern	___1a1f60h
	extern	___1a1d24h
	extern	___1a1f61h
	extern	___1a2148h
	extern	___1a1f62h
	extern	__STOSB

section .text

__GDECL(___3deb8h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		mov     edx, ___1a116ch
		add     edx, 96h
		xor     ebp, ebp
		mov     [esp], edx
___3dedbh:
		mov     ecx, ___1a116ch
		mov     ebx, [esp]
		xor     edx, edx
___3dee5h:
		mov     esi, ebx
		mov     edi, ecx
		inc     edx
		call 	__STRCPY
		add     ecx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ebx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___3dee5h
		inc     ebp
		cmp     ebp, byte 6
		jl      short ___3dedbh
		mov     ebx, 13h
___3df2ch:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		cmp     byte [edx+___1a202fh], 1
		je      short ___3df2ch
		mov     byte [edx+___1a202fh], 1
		mov     ebx, edx
		shl     edx, 3
		add     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		shl     edx, 3
		add     edx, ___195494h
		mov     edi, ___1a1b62h
		mov     esi, edx
		mov     bh, 1
		call 	__STRCPY
		mov     edi, ___1a1bf8h
		lea     esi, [edx+46h]
		mov     [___1a1f5fh], bh
		call 	__STRCPY
		mov     edi, ___1a1c8eh
		lea     esi, [edx+8ch]
		mov     [___1a1f60h], bh
		call 	__STRCPY
		mov     edi, ___1a1d24h
		lea     esi, [edx+0d2h]
		mov     [___1a1f61h], bh
		call 	__STRCPY
		mov     ah, [___1a2148h]
		add     ah, bh
		mov     [___1a1f62h], bh
		mov     [___1a2148h], ah
		cmp     ah, 12h
		jbe     short ___3e030h
		mov     ecx, 13h
		mov     eax, ___1a202fh
		xor     edx, edx

	push 	ecx
	push 	edx
	push 	eax
		call    __STOSB
	add 	esp, 0ch

		xor     dh, dh
		mov     [___1a2148h], dh
___3e030h:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
