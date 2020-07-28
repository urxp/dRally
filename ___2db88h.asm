cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a1ef8h
	extern	___1a0224h
	extern	___1a0a5ch
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e5ch
	extern	___2d054h
	extern	___1a017ch
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___19bd60h
	extern	___13248h
	extern	___193ae0h
	extern	___13094h_cdecl
	extern	___193b08h
	extern	___193b30h
	extern	___193b58h
	extern	___193b80h
	extern	___193ba8h
	extern	___2d184h
	extern	___2d20ch

section .text

__GDECL(___2db88h)
		push    48h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     ecx, [___1a1ef8h]
		xor     edx, edx
		xor     eax, eax
		xor     ebp, ebp
___2dba7h:
		mov     ebx, [eax+___1a0224h]
		cmp     ebp, ebx
		jge     short ___2dbb7h
		cmp     edx, ecx
		je      short ___2dbb7h
		mov     ebp, ebx
___2dbb7h:
		inc     edx
		add     eax, byte 6ch
		cmp     edx, byte 14h
		jl      short ___2dba7h
		cmp     dword [___1a0a5ch], byte 1
		jne     near ___2dc74h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 279c8h
		add     esi, 6c00h
		mov     edx, ecx
		shr     dl, 2
___2dbefh:
		mov     ch, dl
___2dbf1h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2dbf1h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2dbefh
		mov     eax, 3
		mov     ebx, 0ah
		lea     edx, [esp+14h]
		call    near ___2d054h
		mov     eax, [___1a017ch]
		mov     edi, esp

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    itoa_watcom106
	add 	esp, 0ch
	pop 	ecx

		mov     ax, [___180728h]
		lea     esi, [esp+14h]
		mov     [esp], ax
		call 	__STRCAT
		mov     eax, esp
		call    near ___25180h
		lea     edx, [eax+346c8h]
		mov     eax, esp
		call    near ___12f60h
___2dc74h:
		cmp     dword [___1a0a5ch], byte 0
		jne     near ___2dd6bh
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 279c8h
		add     esi, 18c00h
		mov     edx, ecx
		shr     dl, 2
___2dca3h:
		mov     ch, dl
___2dca5h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2dca5h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2dca3h
		cmp     dword [___19bd60h], byte 0
		jne     near ___2dd66h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     ebp, [eax*4+___1a0224h]
		jge     ___2dd66h
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, 136aah
		mov     eax, ___193ae0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		mov     eax, ___193b08h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		mov     eax, ___193b30h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, ___193b58h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___193b80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		mov     eax, ___193ba8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		jmp     short ___2dd6bh
___2dd66h:
		call    near ___2d184h
___2dd6bh:
		cmp     dword [___1a0a5ch], byte 0ffffffffh
		jne     short ___2ddbdh
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e5ch]
		add     ebx, 279c8h
		add     esi, 0fc00h
		mov     edx, ecx
		shr     dl, 2
___2dd96h:
		mov     ch, dl
___2dd98h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2dd98h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2dd96h
		call    near ___2d20ch
___2ddbdh:
		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
