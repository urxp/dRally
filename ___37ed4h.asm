cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___1a01e0h
	extern	___1a1ef8h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fcch
	extern	___1a0fd0h
	extern	___1a0fd4h
	extern	___1a0fc8h
	extern	___1a0fdch
	extern	___1a0fach
	extern	___180724h
	extern	___1a0228h
	extern	itoa_watcom106
	extern	___185c7ah
	extern	___251e8h
	extern	___1a10b8h
	extern	___12e78h_cdecl
	extern	strupr_watcom106
	extern	___1a0224h

section .text

__GDECL(___37ed4h)
		push    4ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 30h
		mov     [esp+18h], eax
		xor     edx, edx
		mov     [esp+2ch], edx
		test    eax, eax
		jle     near ___3817ah
		mov     esi, 0df48h
		mov     edi, 0dec2h
		mov     eax, ___1a01e0h
		mov     edx, 0e13eh
		mov     ebp, 0d980h
		mov     [esp+28h], esi
		mov     [esp+20h], edi
		mov     [esp+1ch], eax
		mov     [esp+24h], edx
___37f22h:
		mov     eax, [esp+2ch]
		cmp     eax, [___1a1ef8h]
		je      near ___37fb8h
		mov     ecx, 12h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 1fh
		add     ebx, ebp
		mov     esi, [___1a0fcch]
		add     ebx, byte 1dh
___37f4dh:
		mov     edi, edx
___37f4fh:
		mov     al, [esi]
		or      al, al
		je      short ___37f57h
		mov     [ebx], al
___37f57h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___37f4fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___37f4dh
		mov     ecx, 12h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 65h
		add     ebx, ebp
		mov     esi, [___1a0fd0h]
		add     ebx, byte 3dh
___37f82h:
		mov     edi, edx
___37f84h:
		mov     al, [esi]
		or      al, al
		je      short ___37f8ch
		mov     [ebx], al
___37f8ch:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___37f84h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___37f82h
		mov     ecx, 12h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 35h
		add     eax, ebp
		mov     esi, [___1a0fd4h]
		jmp     near ___38038h
___37fb8h:
		mov     ecx, 12h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 1fh
		add     ebx, ebp
		mov     esi, [___1a0fc8h]
		add     ebx, byte 1dh
___37fd3h:
		mov     edi, edx
___37fd5h:
		mov     al, [esi]
		or      al, al
		je      short ___37fddh
		mov     [ebx], al
___37fddh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___37fd5h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___37fd3h
		mov     ecx, 12h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 65h
		add     eax, ebp
		mov     esi, [___1a0fdch]
		lea     ebx, [eax+3dh]
___38007h:
		mov     edi, edx
___38009h:
		mov     al, [esi]
		or      al, al
		je      short ___38011h
		mov     [ebx], al
___38011h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___38009h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___38007h
		mov     ecx, 12h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 35h
		add     eax, ebp
		mov     esi, [___1a0fach]
___38038h:
		lea     ebx, [eax+0a3h]
___3803eh:
		mov     edi, edx
___38040h:
		mov     al, [esi]
		or      al, al
		je      short ___38048h
		mov     [ebx], al
___38048h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___38040h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___3803eh
		imul    eax, [esp+2ch], byte 6ch
		mov     ebx, 0ah
		mov     edx, esp
		mov     esi, ___180724h
		mov     edi, esp
		mov     [esp+14h], eax
		mov     eax, [eax+___1a0228h]
		add     ebp, 2f80h

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		call 	__STRCAT
		mov     eax, esp
		mov     ecx, [esp+24h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     esi, [esp+1ch]
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		call 	__STRCPY
		mov     eax, esp
		mov     ecx, [esp+20h]
		mov     ebx, esp
		mov     edx, ___185c7ah
		mov     esi, [esp+28h]

	push 	edx
	push 	ecx
	push 	eax
		call    strupr_watcom106
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     eax, [___1a10b8h]
		mov     edi, [esp+20h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		add     esi, 2f80h
		add     edi, 2f80h
		mov     eax, [esp+14h]
		mov     ebx, 0ah
		mov     edx, esp
		mov     ecx, [esp+28h]
		mov     eax, [eax+___1a0224h]
		mov     [esp+20h], edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     eax, esp
		mov     ebx, esp
		mov     edx, ___185c7ah
		call    near ___251e8h
		sub     ecx, eax
		mov     eax, [___1a10b8h]
		mov     [esp+28h], esi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+1ch]
		mov     edx, [esp+24h]
		mov     ebx, [esp+2ch]
		mov     ecx, [esp+18h]
		add     eax, byte 6ch
		add     edx, 2f80h
		inc     ebx
		mov     [esp+1ch], eax
		mov     [esp+24h], edx
		mov     [esp+2ch], ebx
		cmp     ebx, ecx
		jl      near ___37f22h
___3817ah:
		add     esp, byte 30h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn 
