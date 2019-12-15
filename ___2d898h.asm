cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a0a54h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e5ch
	extern	___2d054h
	extern	___1a0174h
	extern	itoa_
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___2d184h
	extern	___2d20ch

section .text

__GDECL(___2d898h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 28h
		cmp     dword [___1a0a54h], byte 1
		jne     near ___2d961h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 278f8h
		add     esi, 2400h
		mov     edx, ecx
		shr     dl, 2
___2d8d9h:
		mov     ch, dl
___2d8dbh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d8dbh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d8d9h
		mov     eax, 1
		mov     ebx, 0ah
		mov     edx, esp
		call    near ___2d054h
		mov     eax, [___1a0174h]
		lea     edi, [esp+14h]
		call    near itoa_
		mov     ax, [___180728h]
		mov     esi, esp
		mov     [esp+14h], ax
		call 	__STRCAT
		lea     eax, [esp+14h]
		call    near ___25180h
		lea     edx, [eax+345f8h]
		lea     eax, [esp+14h]
		call    near ___12f60h
___2d961h:
		cmp     dword [___1a0a54h], byte 0
		jne     short ___2d9b3h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 278f8h
		add     esi, 14400h
		mov     edx, ecx
		shr     dl, 2
___2d98ch:
		mov     ch, dl
___2d98eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d98eh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d98ch
		call    near ___2d184h
___2d9b3h:
		cmp     dword [___1a0a54h], byte 0ffffffffh
		jne     short ___2da05h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 278f8h
		add     esi, 0b400h
		mov     edx, ecx
		shr     dl, 2
___2d9deh:
		mov     ch, dl
___2d9e0h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2d9e0h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2d9deh
		call    near ___2d20ch
___2da05h:
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
