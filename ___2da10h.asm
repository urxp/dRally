cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a0a58h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e5ch
	extern	___2d054h
	extern	___1a0178h_PriceRocketFuel
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h_cdecl
	extern	___12f60h_cdecl
	extern	___2d184h
	extern	___2d20ch

section .text

__GDECL(___2da10h)
		push    40h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 28h
		cmp     dword [___1a0a58h], byte 1
		jne     near ___2dad9h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27960h
		add     esi, 4800h
		mov     edx, ecx
		shr     dl, 2
___2da51h:
		mov     ch, dl
___2da53h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2da53h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2da51h
		mov     eax, 2
		mov     ebx, 0ah
		mov     edx, esp
		call    near ___2d054h
		mov     eax, [___1a0178h_PriceRocketFuel]
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

	push 	edx
	push 	ecx
	push 	eax
		call    ___25180h_cdecl
	add 	esp, 4
	pop 	ecx
	pop 	edx

		lea     edx, [eax+34660h]
		lea     eax, [esp+14h]

	push 	ecx
	push 	edx
	push 	eax
		call    ___12f60h_cdecl
	add 	esp, 8
	pop 	ecx

___2dad9h:
		cmp     dword [___1a0a58h], byte 0
		jne     short ___2db2bh
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27960h
		add     esi, 16800h
		mov     edx, ecx
		shr     dl, 2
___2db04h:
		mov     ch, dl
___2db06h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2db06h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2db04h
		call    near ___2d184h
___2db2bh:
		cmp     dword [___1a0a58h], byte 0ffffffffh
		jne     short ___2db7dh
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 27960h
		add     esi, 0d800h
		mov     edx, ecx
		shr     dl, 2
___2db56h:
		mov     ch, dl
___2db58h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2db58h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2db56h
		call    near ___2d20ch
___2db7dh:
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
