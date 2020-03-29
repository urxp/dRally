cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___1a1f3fh
	extern	___1a0f04h
	extern	__STOSB
	extern	___1a1f67h
	extern	___1a0ef7h
	extern	rand_watcom106
	extern	___196abch
	extern	___1a1f64h
	extern	___196b18h
	extern	___196abeh
	extern	___1a1f65h
	extern	___196b1ch
	extern	___196ac1h
	extern	___1a1f66h
	extern	___196b20h

section .text

__GDECL(___31588h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     edi, [___1a1ef8h]
		lea     eax, [edi-7]
		mov     [esp], eax
		test    eax, eax
		jge     short ___315afh
		xor     ebx, ebx
		mov     [esp], ebx
___315afh:
		cmp     dword [esp], byte 5
		jle     short ___315bch
		mov     dword [esp], 5
___315bch:
		mov     ebx, [esp]
		xor     edx, edx
		xor     eax, eax
___315c3h:
		cmp     ebx, edi
		jne     short ___315c8h
		inc     eax
___315c8h:
		mov     cl, [esp]
		inc     ebx
		inc     edx
		add     cl, al
		inc     eax
		mov     [edx+___1a1f3fh], cl
		cmp     edx, byte 0eh
		jl      short ___315c3h
		mov     ecx, 14h
		mov     eax, ___1a0f04h
		mov     esi, 4
		xor     edx, edx
		mov     [___1a1ef8h], edi
		call    near __STOSB
		mov     dl, 1
		mov     edi, [___1a1ef8h]
		mov     ecx, 3
		mov     eax, ___1a1f67h
		mov     [edi+___1a0f04h], dl
		xor     edx, edx
		xor     ebx, ebx
		call    near __STOSB
		mov     edi, [___1a1ef8h]
___3161eh:
		mov     edx, esi
		lea     eax, [ebx*4+0]
___31627h:
		inc     eax
		xor     cl, cl
		mov     [eax+___1a0ef7h], cl
		cmp     eax, edx
		jne     short ___31627h
		inc     ebx
		add     esi, byte 4
		cmp     ebx, byte 3
		jl      short ___3161eh
		mov     [___1a1ef8h], edi
___31643h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 5
		sar     edx, 1fh
		idiv    ebx
		mov     al, [edx+___196abch]
		mov     [___1a1f64h], al

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     short ___3167bh
		add     byte [___1a1f64h], 9
___3167bh:
		xor     eax, eax
		mov     edx, [___196b18h]
		mov     al, [___1a1f64h]
		cmp     eax, edx
		je      short ___31643h
		mov     [___196b18h], eax
___31691h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 6
		sar     edx, 1fh
		idiv    ebx
		mov     al, [edx+___196abeh]
		mov     [___1a1f65h], al

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     short ___316c9h
		add     byte [___1a1f65h], 9
___316c9h:
		xor     eax, eax
		mov     ebx, [___196b1ch]
		mov     al, [___1a1f65h]
		cmp     eax, ebx
		je      short ___31691h
		cmp     al, [___1a1f64h]
		je      short ___31691h
		mov     [___196b1ch], eax
___316e7h:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 4
		sar     edx, 1fh
		idiv    ebx
		mov     al, [edx+___196ac1h]
		mov     [___1a1f66h], al

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 2
		sar     edx, 1fh
		idiv    ebx
		test    edx, edx
		jne     short ___3171fh
		add     byte [___1a1f66h], 9
___3171fh:
		xor     eax, eax
		mov     ecx, [___196b20h]
		mov     al, [___1a1f66h]
		cmp     eax, ecx
		je      short ___316e7h
		cmp     al, [___1a1f65h]
		je      short ___316e7h
		mov     edi, [___1a1ef8h]
		mov     [___196b20h], eax
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
