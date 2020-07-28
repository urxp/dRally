cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fbch
	extern	___1a0fd8h
	extern	___19bd60h
	extern	___1a1ef8h
	extern	___182564h
	extern	___1a0230h
	extern	itoa_watcom106
	extern	___182574h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___182580h
	extern	___182594h
	extern	___180724h
	extern	___1a0228h
	extern	___1825a8h
	extern	___1825b4h
	extern	___1825b8h
	extern	___1a022ch
	extern	___1825c4h
	extern	___1825d0h
	extern	___196ab8h
	extern	___1825d4h
	extern	___1a0238h
	extern	___1825e4h
	extern	___1825e8h
	extern	___1a0210h
	extern	___196ae8h
	extern	___1a1028h
	extern	___1a1f64h
	extern	___18d492h
	extern	___196ad4h
	extern	___1a2010h
	extern	___1825f4h
	extern	___182600h
	extern	___182610h
	extern	___18261ch
	extern	___181f50h
	extern	___196adch
	extern	___182628h
	extern	___182638h
	extern	___182640h
	extern	___196aech
	extern	___18264ch
	extern	___196af0h
	extern	___18265ch
	extern	___182670h
	extern	___1a1134h
	extern	___1a10a0h
	extern	___1a10a8h
	extern	___1a1090h
	extern	___181c70h
	extern	___182680h
	extern	___1a01fch
	extern	___19f75ch
	extern	___19f760h
	extern	___19f764h
	extern	___1a1034h
	extern	___1a108ch
	extern	___1a0ff4h
	extern	___1a01e0h
	extern	___19f750h
	extern	strupr_watcom106
	extern	___18268ch
	extern	___182698h

section .text

__GDECL(___36adch)
		push    0c0h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, 0a4h
		mov     ecx, 4b000h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 36h
		call 	__MOVS
		mov     ecx, 182h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fbch]
		add     ebx, 0d32ch
___36b2fh:
		mov     edi, edx
___36b31h:
		mov     al, [esi]
		or      al, al
		je      short ___36b39h
		mov     [ebx], al
___36b39h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___36b31h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___36b2fh
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     ebx, 0d362h
___36b65h:
		mov     edi, edx
___36b67h:
		mov     al, [esi]
		or      al, al
		je      short ___36b6fh
		mov     [ebx], al
___36b6fh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___36b67h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___36b65h
		mov     edx, [___19bd60h]
		mov     ebp, 20eh
		test    edx, edx
		je      near ___36c64h
		mov     ecx, 182h
		mov     edx, 110h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     ebx, 0d20ah
___36baeh:
		mov     edi, edx
___36bb0h:
		mov     al, [esi]
		or      al, al
		je      short ___36bb8h
		mov     [ebx], al
___36bb8h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___36bb0h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___36baeh
		mov     edx, [___1a1ef8h]
		mov     edi, esp
		lea     eax, [edx*8+0]
		mov     ebx, 0ah
		sub     eax, edx
		mov     esi, ___182564h
		shl     eax, 2
		movsd   
		movsd   
		movsd   
		movsw   
		sub     eax, edx
		lea     esi, [esp+64h]
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a0230h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     esi, ___182574h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     ecx, 46a2eh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___36c64h:
		cmp     dword [___19bd60h], byte 0
		je      short ___36c86h
		mov     ecx, 0d738h
		mov     ebx, ___182580h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___36c86h:
		mov     ecx, 0d8a0h
		mov     ebx, ___182594h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     esi, ___180724h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a0228h]
		lea     edi, [esp+64h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     edi, esp
		mov     ecx, 120e8h
		mov     esi, ___1825a8h
		mov     ebx, esp
		mov     edx, ___185c0bh
		movsd   
		movsd   
		movsb   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+11f80h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, ___1825b8h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a022ch]
		mov     ecx, 15a68h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		movsd   
		movsd   
		movsw   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+15900h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, ___1825c4h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a0230h]
		mov     ecx, 193e8h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		movsd   
		movsd   
		movsd   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		lea     esi, [esp+64h]
		mov     edi, esp
		call 	__STRCAT
		cmp     dword [___19bd60h], byte 0
		je      short ___36ed7h
		mov     esi, ___1825d0h
		mov     edi, esp
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+64h]
		mov     eax, [___196ab8h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
___36ed7h:
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+19280h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, ___1825d4h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a0238h]
		mov     ecx, 1cd68h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		movsd   
		movsd   
		movsd   
		movsb   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [___1825e4h]
		mov     edx, ___185c0bh
		mov     [esp], eax
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+1cc00h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		mov     edi, esp
		shl     eax, 2
		mov     esi, ___1825e8h
		sub     eax, edx
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [eax*4+___1a0210h]
		mov     ecx, 206e8h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		movsd   
		movsd   
		movsd   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [___1825e4h]
		mov     edx, ___185c0bh
		mov     [esp], eax
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+20580h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		cmp     dword [___196ae8h], byte 0
		jle     near ___37ebch
		mov     eax, [___1a1028h]
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		mov     edi, esp
		add     esi, eax
		call 	__STRCPY
		cmp     dword [___19bd60h], byte 0
		je      short ___37098h
		mov     edx, [___196ad4h]
		mov     dl, [edx+___1a2010h]
		and     edx, 0ffh
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		mov     edi, esp
		add     esi, eax
		call 	__STRCPY
___37098h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___370d3h
		cmp     dword [___1a1028h], byte 0
		jne     short ___370d3h
		mov     esi, ___1825f4h
		mov     edi, esp
		call 	__STRCAT
___370d3h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___3710eh
		cmp     dword [___1a1028h], byte 1
		jne     short ___3710eh
		mov     esi, ___182600h
		mov     edi, esp
		call 	__STRCAT
___3710eh:
		cmp     dword [___19bd60h], byte 0
		jne     short ___37149h
		cmp     dword [___1a1028h], byte 2
		jne     short ___37149h
		mov     esi, ___182610h
		mov     edi, esp
		call 	__STRCAT
___37149h:
		cmp     dword [___19bd60h], byte 0
		jne     short ___37167h
		cmp     dword [___1a1028h], byte 3
		jne     short ___37167h
		mov     edi, esp
		mov     esi, ___18261ch
		movsd   
		movsd   
		movsw   
		movsb   
___37167h:
		cmp     dword [___19bd60h], byte 0
		je      near ___37201h
		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     esi, ___181f50h
		mov     eax, [___196adch]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		lea     esi, [esp+64h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___182628h
		mov     edi, esp
		call 	__STRCAT
___37201h:
		mov     ecx, 26ae8h
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		mov     esi, ___180724h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [___196ae8h]
		lea     edi, [esp+64h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     edi, esp
		mov     ecx, 2a468h
		mov     esi, ___182638h
		mov     ebx, esp
		mov     edx, ___185c0bh
		movsd   
		movsd   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     edi, esp
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+2a300h]
		mov     esi, ___182640h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [___196aech]
		mov     ecx, 2dde8h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		movsd   
		movsd   
		movsd   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [___1825e4h]
		mov     edx, ___185c0bh
		mov     [esp], eax
		call 	__STRCAT
		mov     edi, esp
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+2dc80h]
		mov     esi, ___18264ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [___196af0h]
		mov     ecx, 31768h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		movsd   
		movsd   
		movsd   
		movsb   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [___1825e4h]
		mov     edx, ___185c0bh
		mov     [esp], eax
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+31600h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		mov     eax, [___196aech]
		mov     ecx, [___196af0h]
		lea     edx, [esp+64h]
		add     eax, ecx
		mov     esi, ___18265ch

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ecx, 350e8h
		mov     ebx, esp
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		lea     esi, [esp+64h]
		mov     edi, esp
		mov     ebx, esp
		mov     eax, [___1825e4h]
		mov     edx, ___185c0bh
		mov     [esp], eax
		call 	__STRCAT
		mov     edi, esp
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+34f80h]
		mov     esi, ___182670h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+64h]
		mov     eax, [___1a1134h]
		mov     ecx, 38a68h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, esp
		mov     edx, ___185c0bh
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+38900h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		lea     edx, [esp+78h]
		mov     eax, [___1a10a0h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [___1a10a8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+8ch]
		mov     eax, [___1a1090h]
		lea     edi, [esp+78h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37519h
		mov     al, [esp+78h]
		xor     dl, dl
		mov     [esp+79h], al
		mov     ah, 30h
		mov     [esp+7ah], dl
		mov     [esp+78h], ah
___37519h:
		lea     edi, [esp+50h]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37540h
		mov     dh, 30h
		mov     al, [esp+50h]
		xor     bl, bl
		mov     [esp+50h], dh
		mov     [esp+52h], bl
		mov     [esp+51h], al
___37540h:
		lea     edi, [esp+8ch]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37576h
		mov     bh, 30h
		mov     al, [esp+8ch]
		xor     cl, cl
		mov     [esp+8ch], bh
		mov     [esp+8eh], cl
		mov     [esp+8dh], al
___37576h:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		call 	__STRCPY
		mov     esi, ___181c70h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		call 	__STRCAT
		mov     esi, ___180724h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		call 	__STRCAT
		mov     edi, esp
		mov     esi, ___182680h
		mov     edx, ___185c0bh
		mov     ecx, 3c3e8h
		movsd   
		movsd   
		movsw   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+3c280h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     edi, [edx*8+0]
		sub     edi, edx
		shl     edi, 2
		sub     edi, edx
		shl     edi, 2
		mov     edx, [edi+___1a01fch]
		lea     ecx, [edx*8+0]
		sub     ecx, edx
		shl     ecx, 2
		sub     ecx, edx
		mov     edx, [___1a1028h]
		shl     ecx, 4
		mov     dl, [edx+___1a1f64h]
		and     edx, 0ffh
		lea     esi, [edx*4+0]
		sub     esi, edx
		shl     esi, 3
		imul    eax, [ecx+esi*1+___19f75ch], 1770h
		mov     ebx, [ecx+esi*1+___19f760h]
		mov     [esp+0a0h], eax
		lea     eax, [ebx*4+0]
		sub     eax, ebx
		shl     eax, 3
		add     eax, ebx
		mov     ebx, [esp+0a0h]
		shl     eax, 2
		add     eax, ebx
		mov     ebx, [ecx+esi*1+___19f764h]
		mov     edx, [___1a1034h]
		add     ebx, eax
		imul    eax, edx, 1770h
		mov     edx, [___1a108ch]
		mov     [esp+0a0h], eax
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, edx
		mov     edx, [esp+0a0h]
		shl     eax, 2
		add     eax, edx
		mov     edx, [___1a0ff4h]
		add     eax, edx
		cmp     eax, ebx
		jge     near ___3787ch
		mov     ebx, [___1a108ch]
		mov     eax, [___1a1034h]
		add     eax, ebx
		add     eax, edx
		je      near ___3787ch
		mov     eax, ___1a01e0h
		add     ecx, ___19f750h
		add     eax, edi
		lea     edi, [ecx+esi*1]
		mov     esi, eax
		call 	__STRCPY
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		mov     ebx, ___19f750h
		sub     eax, edx
		mov     edx, [___1a1028h]
		shl     eax, 4
		mov     dl, [edx+___1a1f64h]
		add     ebx, eax
		and     edx, 0ffh
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, ebx

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [___1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		mov     edx, [___1a1034h]
		mov     [ebx+eax*8+___19f75ch], edx
		mov     edx, [___1a108ch]
		mov     [ebx+eax*8+___19f760h], edx
		mov     edx, [___1a0ff4h]
		mov     [ebx+eax*8+___19f764h], edx
___3787ch:
		mov     edx, [___1a1ef8h]
		lea     esi, [edx*8+0]
		sub     esi, edx
		shl     esi, 2
		sub     esi, edx
		shl     esi, 2
		mov     edx, [esi+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		sub     ebx, edx
		mov     edx, [___1a1028h]
		shl     ebx, 4
		mov     dl, [edx+___1a1f64h]
		and     edx, 0ffh
		lea     edi, [edx*4+0]
		sub     edi, edx
		shl     edi, 3
		mov     eax, [edi+ebx*1+___19f75ch]
		mov     ecx, [edi+ebx*1+___19f760h]
		mov     edx, [edi+ebx*1+___19f764h]
		add     eax, ecx
		add     eax, edx
		jne     near ___379feh
		imul    ecx, [___1a1034h], 1770h
		mov     edx, [___1a108ch]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, edx
		shl     eax, 2
		mov     edx, [___1a0ff4h]
		add     eax, ecx
		add     eax, edx
		test    eax, eax
		jle     near ___379feh
		add     ebx, ___19f750h
		add     esi, ___1a01e0h
		add     edi, ebx
		call 	__STRCPY
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     ebx, ___19f750h
		shl     eax, 4
		add     ebx, eax
		mov     eax, [___1a1028h]
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		add     eax, ebx

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [___1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		mov     edx, [___1a1034h]
		mov     [ebx+eax*8+___19f75ch], edx
		mov     edx, [___1a108ch]
		mov     [ebx+eax*8+___19f760h], edx
		mov     edx, [___1a0ff4h]
		mov     [ebx+eax*8+___19f764h], edx
___379feh:
		mov     ebx, 0ah
		lea     edx, [esp+78h]
		mov     eax, [___1a1034h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+50h]
		mov     eax, [___1a108ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+8ch]
		mov     eax, [___1a0ff4h]
		lea     edi, [esp+78h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37a61h
		mov     al, [esp+78h]
		mov     ch, 30h
		mov     [esp+79h], al
		xor     al, al
		mov     [esp+78h], ch
		mov     [esp+7ah], al
___37a61h:
		lea     edi, [esp+50h]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37a88h
		mov     al, [esp+50h]
		xor     dl, dl
		mov     [esp+51h], al
		mov     ah, 30h
		mov     [esp+52h], dl
		mov     [esp+50h], ah
___37a88h:
		lea     edi, [esp+8ch]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37abeh
		mov     dh, 30h
		mov     al, [esp+8ch]
		xor     bl, bl
		mov     [esp+8ch], dh
		mov     [esp+8eh], bl
		mov     [esp+8dh], al
___37abeh:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		call 	__STRCPY
		mov     esi, ___181c70h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		call 	__STRCAT
		mov     esi, ___180724h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		call 	__STRCAT
		mov     edi, esp
		mov     esi, ___18268ch
		mov     edx, ___185c0bh
		mov     ecx, 3fd68h
		movsd   
		movsd   
		movsb   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+3fc00h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [___1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+78h]
		mov     eax, [ebx+eax*8+___19f75ch]
		mov     ebx, 0ah

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [___1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+50h]
		mov     eax, [ebx+eax*8+___19f760h]
		mov     ebx, 0ah

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		lea     ebx, [edx*8+0]
		sub     ebx, edx
		shl     ebx, 2
		mov     eax, [___1a1028h]
		sub     ebx, edx
		xor     edx, edx
		mov     dl, [eax+___1a1f64h]
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     ebx, 4
		lea     edx, [esp+8ch]
		mov     eax, [ebx+eax*8+___19f764h]
		mov     ebx, 0ah
		lea     edi, [esp+78h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37d25h
		mov     bh, 30h
		mov     al, [esp+78h]
		xor     cl, cl
		mov     [esp+78h], bh
		mov     [esp+7ah], cl
		mov     [esp+79h], al
___37d25h:
		lea     edi, [esp+50h]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37d4ch
		mov     al, [esp+50h]
		mov     ch, 30h
		mov     [esp+51h], al
		xor     al, al
		mov     [esp+50h], ch
		mov     [esp+52h], al
___37d4ch:
		lea     edi, [esp+8ch]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___37d82h
		mov     al, [esp+8ch]
		xor     dl, dl
		mov     [esp+8dh], al
		mov     ah, 30h
		mov     [esp+8eh], dl
		mov     [esp+8ch], ah
___37d82h:
		lea     esi, [esp+78h]
		lea     edi, [esp+64h]
		call 	__STRCPY
		mov     esi, ___181c70h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+50h]
		lea     edi, [esp+64h]
		call 	__STRCAT
		mov     esi, ___180724h
		lea     edi, [esp+64h]
		call 	__STRCAT
		lea     esi, [esp+8ch]
		lea     edi, [esp+64h]
		mov     ebx, esp
		call 	__STRCAT
		mov     edi, esp
		mov     esi, ___182698h
		mov     edx, ___185c0bh
		mov     ecx, 436e8h
		movsd   
		movsd   
		movsd   
		movsw   
		mov     eax, [___1a1108h]
		mov     edi, esp
		mov     esi, ___1825b4h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		movsw   
		movsb   
		mov     ebx, esp
		lea     esi, [esp+64h]
		mov     edi, esp
		mov     edx, ___185c0bh
		call 	__STRCAT
		mov     eax, [___1a1108h]
		lea     ecx, [ebp+43580h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

___37ebch:
		xor     ebx, ebx
		mov     [___196ae8h], ebx
		add     esp, 0a4h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
