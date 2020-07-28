cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a0a50h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e5ch
	extern	___2d054h
	extern	___1a0170h
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___2d184h
	extern	___2d20ch

section .text

__GDECL(___2d728h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 28h
		cmp     dword [___1a0a50h], byte 1
		jne     near ___2d7e8h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27890h
		mov     edx, ecx
		shr     dl, 2
___2d763h:
		mov     ch, dl
___2d765h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d765h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d763h
		mov     ebx, 0ah
		xor     eax, eax
		mov     edx, esp
		call    near ___2d054h
		mov     eax, [___1a0170h]
		lea     edi, [esp+14h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ax, [___180728h]
		mov     esi, esp
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]
		call    near ___25180h
		lea     edx, [eax+34590h]
		lea     eax, [esp+14h]
		call    near ___12f60h
___2d7e8h:
		cmp     dword [___1a0a50h], byte 0
		jne     short ___2d83ah
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27890h
		add     esi, 12000h
		mov     edx, ecx
		shr     dl, 2
___2d813h:
		mov     ch, dl
___2d815h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d815h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d813h
		call    near ___2d184h
___2d83ah:
		cmp     dword [___1a0a50h], byte 0ffffffffh
		jne     short ___2d88ch
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27890h
		add     esi, 9000h
		mov     edx, ecx
		shr     dl, 2
___2d865h:
		mov     ch, dl
___2d867h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d867h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d865h
		call    near ___2d20ch
___2d88ch:
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
