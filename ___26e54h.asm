cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e70h
	extern	___13248h
	extern	underground___28c1ch
	extern	___185a14h_UseWeapons
	extern	___185a4ch
	extern	___194da0h
	extern	___13094h_cdecl
	extern	___194dc8h
	extern	___194df0h
	extern	___194e18h
	extern	___194e40h
	extern	___194e68h
	extern	___194cb0h
	extern	___194cd8h
	extern	___194d00h
	extern	___194d28h
	extern	___194d50h
	extern	___194d78h
	extern	___1865fch
	extern	___1a1ea0h
	extern	___1a1ee8h
	extern	___259e0h_cdecl

section .text

__GDECL(___26e54h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e70h]
		add     ebx, 27a30h
		mov     edx, ecx
		shr     dl, 2
___26e7eh:
		mov     ch, dl
___26e80h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___26e80h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___26e7eh
		push    byte 1
		mov     ecx, 77h
		mov     ebx, 180h
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h

	push 	edx
	push 	ecx
		call    underground___28c1ch
	pop 	ecx
	pop 	edx

		mov     edx, [___185a14h_UseWeapons]
		mov     [___185a4ch], eax
		test    edx, edx
		je      short ___26f2ah
		test    eax, eax
		je      short ___26f2ah
		mov     edx, 136aah
		mov     eax, ___194da0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		mov     eax, ___194dc8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		mov     eax, ___194df0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, ___194e18h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___194e40h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		mov     eax, ___194e68h
		jmp     short ___26f7fh
___26f2ah:
		mov     edx, 136aah
		mov     eax, ___194cb0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 15eaah
		mov     eax, ___194cd8h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 186aah
		mov     eax, ___194d00h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1aeaah
		mov     eax, ___194d28h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1d6aah
		mov     eax, ___194d50h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, 1feaah
		mov     eax, ___194d78h
___26f7fh:

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		push    ___1865fch
		mov     edx, 10dh
		mov     eax, 1b0h
		mov     ecx, [___1a1ea0h]
		mov     ebx, [___1a1ee8h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___259e0h_cdecl
	add 	esp, 14h
	
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
