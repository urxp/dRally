cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	__STRLEN
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10c0h
	extern	___18d492h
	extern	___1f094h
	extern	___185ba9h
	extern	___1a10cch
	extern	___12e78h_cdecl
	extern	___19f750h
	extern	___18e298h
	extern	___185c7ah
	extern	strupr_watcom106
	extern	___1a10b8h
	extern	___19f75ch
	extern	itoa_watcom106
	extern	___19f760h
	extern	___19f764h
	extern	___181c70h
	extern	___180724h

section .text

__GDECL(___21fd4h_cdecl)
	mov 	eax, [esp+4]
	call 	___21fd4h
	retn

__GDECL(___21fd4h)
		push    88h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 6ch
		mov     [esp+5ch], eax
		mov     ebp, 14c80h
		mov     ebx, 17dh
___21ff5h:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, ebp
		lea     esi, [eax+0e1h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ecx, ebx
		lea     edi, [eax+0e1h]
		add     ebp, 280h
		call 	__MOVS
		cmp     ebp, 19500h
		jne     short ___21ff5h
		mov     ebp, 20300h
		mov     edx, 170h
___22039h:
		mov     eax, [___1a1138h__VESA101h_DefaultScreenBufferB]
		add     eax, ebp
		lea     esi, [eax+0e0h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ebp
		mov     ecx, edx
		lea     edi, [eax+0e0h]
		add     ebp, 280h
		call 	__MOVS
		cmp     ebp, 34800h
		jne     short ___22039h
		mov     ecx, 44h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10c0h]
		add     ebx, 14a00h
___2208fh:
		mov     edi, edx
___22091h:
		mov     al, [esi]
		or      al, al
		je      short ___22099h
		mov     [ebx], al
___22099h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___22091h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2208fh
		mov     edx, [esp+5ch]
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		lea     edi, [esp+14h]
		add     esi, eax
		mov     ecx, 1559dh
		call 	__STRCPY
		lea     eax, [esp+14h]
		lea     ebx, [esp+14h]
		call    near ___1f094h
		sar     eax, 1
		mov     edx, ___185ba9h
		sub     ecx, eax
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     edx, [esp+5ch]
		mov     esi, 20a02h
		lea     eax, [edx*4+0]
		mov     [esp+64h], esi
		sub     eax, edx
		mov     ebx, 20968h
		shl     eax, 3
		mov     ecx, 208e4h
		lea     edx, [eax+870h]
		mov     [esp+58h], ebx
		mov     ebp, edx
		add     edx, ___19f750h
		mov     [esp+50h], ecx
		mov     [esp+54h], edx
		mov     edx, ___18e298h
		sub     eax, 1b0h
		add     edx, 2260h
		mov     [esp+68h], eax
		mov     [esp+60h], edx
___22153h:
		mov     esi, [esp+60h]
		lea     edi, [esp+14h]
		mov     ecx, [esp+50h]
		lea     ebx, [esp+14h]
		mov     edx, ___185c7ah
		call 	__STRCPY
		lea     eax, [esp+14h]
		mov     esi, [esp+54h]

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a10b8h]
		lea     edi, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		call 	__STRCPY
		lea     eax, [esp+14h]
		mov     ecx, [esp+58h]
		lea     ebx, [esp+14h]
		mov     edx, ___185c7ah

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a10b8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ebx, 0ah
		mov     edx, esp
		mov     eax, [ebp+___19f75ch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+3ch]
		mov     eax, [ebp+___19f760h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ebx, 0ah
		lea     edx, [esp+28h]
		mov     eax, [ebp+___19f764h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___22234h
		mov     al, [esp]
		xor     dl, dl
		mov     [esp+1], al
		mov     ah, 30h
		mov     [esp+2], dl
		mov     [esp], ah
___22234h:
		lea     edi, [esp+3ch]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___2225bh
		mov     dh, 30h
		mov     al, [esp+3ch]
		xor     bl, bl
		mov     [esp+3ch], dh
		mov     [esp+3eh], bl
		mov     [esp+3dh], al
___2225bh:
		lea     edi, [esp+28h]
		call 	__STRLEN
		cmp     ecx, byte 1
		jne     short ___22282h
		mov     bh, 30h
		mov     al, [esp+28h]
		xor     cl, cl
		mov     [esp+28h], bh
		mov     [esp+2ah], cl
		mov     [esp+29h], al
___22282h:
		mov     esi, esp
		lea     edi, [esp+14h]
		call 	__STRCPY
		mov     esi, ___181c70h
		lea     edi, [esp+14h]
		call 	__STRCAT
		lea     esi, [esp+3ch]
		lea     edi, [esp+14h]
		lea     ebx, [esp+14h]
		call 	__STRCAT
		mov     esi, ___180724h
		lea     edi, [esp+14h]
		mov     edx, ___185c7ah
		call 	__STRCAT
		lea     esi, [esp+28h]
		lea     edi, [esp+14h]
		sub     ebp, 1b0h
		call 	__STRCAT
		mov     ecx, [esp+64h]
		mov     edi, [esp+58h]
		mov     eax, [___1a10b8h]
		mov     esi, [esp+68h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+54h]
		mov     edx, [esp+50h]
		mov     ebx, [esp+60h]
		add     edi, 3700h
		mov     ecx, [esp+64h]
		mov     [esp+58h], edi
		sub     eax, 1b0h
		add     edx, 3700h
		sub     ebx, 6e0h
		add     ecx, 3700h
		mov     [esp+54h], eax
		mov     [esp+50h], edx
		mov     [esp+60h], ebx
		mov     [esp+64h], ecx
		cmp     ebp, esi
		jne     near ___22153h
		add     esp, byte 6ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
