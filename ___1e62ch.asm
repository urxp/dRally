cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1866b8h
	extern	___180cc0h
	extern	___1866b8h
	extern	___180cd8h
	extern	___196a84h
	extern	___1866b8h
	extern	___181048h
	extern	___196a7ch
	extern	___185b58h
	extern	___1866b8h
	extern	___18105ch
	extern	___1866b8h
	extern	___181068h
	extern	___185a5ch
	extern	___61278h
	extern	___623d4h
	extern	___1a116ch
	extern	___185a58h
	extern	___1a1f4eh
	extern	___1a1f4dh
	extern	___180864h
	extern	___1a1ef8h
	extern	___1a1dbah
	extern	___1a01e0h
	extern	___180ca4h
	extern	___1a1f63h
	extern	___180130h
	extern	___196a78h
	extern	___13710h
	extern	___19bd60h
	extern	CONNECTION_TYPE
	extern	___135fch
	extern	___23230h
	extern	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___1e62ch_cdecl)
	mov 	eax, [esp+4]
	call 	___1e62ch
	retn

__GDECL(___1e62ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, eax
		mov     edi, ___1866b8h+384h
		mov     esi, ___180cc0h
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     edi, ___1866b8h+3b6h
		mov     esi, ___180cd8h
		mov     ebx, 1
		mov     ah, 1
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___196a84h], ebx
		mov     edi, ___1866b8h+41ah
		mov     esi, ___181048h
		mov     [___196a7ch], ebx
		mov     [___185b58h], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___185b58h+14h], ah
		mov     edi, ___1866b8h+44ch
		mov     esi, ___18105ch
		mov     [___185b58h+15h], ah
		mov     [___185b58h+16h], ah
		movsd   
		movsd   
		movsw   
		movsb   
		mov     [___185b58h+17h], ah
		mov     edi, ___1866b8h+47eh
		mov     esi, ___181068h
		mov     [___185b58h+18h], ah
		xor     bl, bl
		movsd   
		movsd   
		movsd   
		movsb   
		mov     [___185b58h+12h], bl
		mov     esi, 2
		mov     [___185b58h+13h], bl
		mov     [___185a5ch+50h], esi
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___61278h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___623d4h
	pop 	eax
	pop 	ecx
	pop 	edx

		cmp     edx, byte 1
		jne     near ___1e813h
		mov     ebx, ___1a116ch
		xor     edi, edi
		xor     edx, edx
		lea     ecx, [ebx+96h]
		mov     [___185a58h], edi
___1e704h:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1e704h
		mov     edx, [___180864h]
		mov     ebx, [___1a1ef8h]
		mov     [___1a1dbah], edx
		lea     edx, [ebx*8+0]
		sub     edx, ebx
		shl     edx, 2
		sub     edx, ebx
		mov     esi, ___1a01e0h
		shl     edx, 2
		mov     edi, ___1a1dbah
		add     esi, edx
		call 	__STRCAT
		mov     esi, ___180ca4h
		xor     bh, bh
		call 	__STRCAT
		mov     [___1a1f63h], bh
		mov     ebx, ___1a116ch
		xor     edx, edx
		lea     ecx, [ebx+96h]
___1e7cdh:
		mov     esi, ecx
		mov     edi, ebx
		inc     edx
		call 	__STRCPY
		add     ebx, 96h
		mov     al, [edx+___1a1f4eh]
		add     ecx, 96h
		mov     [edx+___1a1f4dh], al
		cmp     edx, byte 15h
		jl      short ___1e7cdh
		mov     al, [___180130h]
		mov     [___1a1dbah], al
___1e813h:
		cmp     dword [___196a78h], byte 0
		je      short ___1e85fh
		mov     edx, 1
		mov     eax, 2
		mov     ecx, 6dh
		mov     ebx, 27fh

	push 	ecx
	push 	edx
	push 	eax
		call    ___13710h
	add 	esp, 8
	pop 	ecx
	
		xor     eax, eax
		mov     edx, 173h
		mov     [___196a84h], eax
		mov     [___196a7ch], eax
		mov     [___19bd60h], eax
		mov     [CONNECTION_TYPE], eax

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___135fch
	add 	esp, 10h

	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___1e85fh:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
