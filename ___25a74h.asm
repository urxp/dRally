cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e6ch
	extern	___1a1ee4h
	extern	___1a1ea8h
	extern	___185cbch
	extern	___1a1ed0h
	extern	___1a01b8h
	extern	___259e0h
	extern	___18e2a4h
	extern	itoa_watcom106
	extern	___180728h
	extern	___25180h
	extern	___12f60h
	extern	___13248h
	extern	___185a14h
	extern	___18e298h
	extern	___13094h_cdecl
	extern	___1a1e78h

section .text

__GDECL(___25a74h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 28h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e6ch]
		add     ebx, 13890h
		mov     edx, ecx
		shr     dl, 2
___25aa2h:
		mov     ch, dl
___25aa4h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25aa4h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25aa2h
		mov     ecx, 10h
		mov     edx, [___1a1ee4h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		lea     eax, [edx*4+0]
		mov     esi, [___1a1ea8h]
		sub     eax, edx
		add     ebx, 13890h
		shl     eax, 9
		mov     edx, 60h
		add     esi, eax
		shr     dl, 2
___25af7h:
		mov     ch, dl
___25af9h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___25af9h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___25af7h
		mov     eax, [___1a1ee4h]
		mov     edx, 8dh
		shl     eax, 8
		mov     ecx, [___1a1ee4h]
		add     eax, ___185cbch
		mov     ebx, [___1a1ed0h]
		push    eax
		mov     ecx, [ecx*4+___1a01b8h]
		mov     eax, 10h
		call    near ___259e0h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     ebx, 0ah
		shl     eax, 5
		lea     edx, [esp+14h]
		mov     eax, [eax+___18e2a4h]
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
		lea     edx, [eax+20590h]
		mov     ebx, 180h
		mov     eax, esp
		mov     ecx, 77h
		call    near ___12f60h
		push    byte 1
		mov     edx, 72h
		mov     eax, 90h
		call    near ___13248h
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		mov     edx, [___185a14h]
		add     eax, ___18e298h
		test    edx, edx
		je      near ___25ce5h
		mov     edx, 136aah
		add     eax, 100h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 15eaah
		add     eax, 128h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 186aah
		add     eax, 150h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1aeaah
		add     eax, 178h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1d6aah
		add     eax, 1a0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1feaah
		add     eax, 1c8h
		jmp     near ___25dc0h
___25ce5h:
		mov     edx, 136aah
		add     eax, byte 10h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 15eaah
		add     eax, byte 38h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 186aah
		add     eax, byte 60h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1aeaah
		add     eax, 88h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1d6aah
		add     eax, 0b0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [___1a1ee4h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		add     eax, ___18e298h
		mov     edx, 1feaah
		add     eax, 0d8h
___25dc0h:

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 16080h
___25de1h:
		mov     edi, edx
___25de3h:
		mov     al, [esi]
		or      al, al
		je      short ___25debh
		mov     [ebx], al
___25debh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___25de3h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___25de1h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 160f0h
		add     esi, 400h
___25e1dh:
		mov     edi, edx
___25e1fh:
		mov     al, [esi]
		or      al, al
		je      short ___25e27h
		mov     [ebx], al
___25e27h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___25e1fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___25e1dh
		add     esp, byte 28h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
