cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___5994ch
	extern	___243ddeh
	extern	___243dddh
	extern	___243de9h
	extern	___243dech
	extern	___243deah
	extern	___243debh
	extern	___243ce8h
	extern	___1e721eh
	extern	___243de8h
	extern	___1de5a0h
	extern	___199f54h
	extern	___196dbch
	extern	___196dc0h
	extern	___196dc4h
	extern	___1de598h
	extern	___1de5b0h
	extern	___1de5b4h

section .text

__GDECL(___56594h)
		push    0ch
		call    near __CHK
		push    ecx
		push    edx

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     dh, al
		test    al, al
		je      near ___566e8h
		xor     eax, eax
___565b1h:
		inc     eax
		mov     dl, [eax+___243ddeh]
		mov     [eax+___243dddh], dl
		cmp     eax, byte 0eh
		jl      short ___565b1h
		mov     ah, [___243de9h]
		mov     [___243dech], dh
		cmp     ah, 20h
		jne     short ___565ffh
		cmp     byte [___243deah], 13h
		jne     short ___565ffh
		cmp     byte [___243debh], 16h
		jne     short ___565ffh
		cmp     dh, 22h
		jne     short ___565ffh
		imul    eax, [___243ce8h], 35eh
		mov     dword [eax+___1e721eh], 0f423fh
___565ffh:
		cmp     byte [___243de8h], 20h
		jne     short ___5664bh
		cmp     byte [___243de9h], 13h
		jne     short ___5664bh
		cmp     byte [___243deah], 17h
		jne     short ___5664bh
		cmp     byte [___243debh], 31h
		jne     short ___5664bh
		cmp     byte [___243dech], 25h
		jne     short ___5664bh
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+___1de5a0h], 1
___5664bh:
		cmp     byte [___243de9h], 20h
		jne     short ___5666fh
		cmp     byte [___243deah], 13h
		jne     short ___5666fh
		cmp     byte [___243debh], 16h
		jne     short ___5666fh
		cmp     byte [___243dech], 30h
		je      short ___56678h
___5666fh:
		cmp     dword [___199f54h], byte 0
		je      short ___56682h
___56678h:
		mov     dword [___196dbch], 1
___56682h:
		mov     cl, [___243de8h]
		cmp     cl, 20h
		jne     short ___566bah
		cmp     byte [___243de9h], 13h
		jne     short ___566bah
		cmp     byte [___243deah], 12h
		jne     short ___566bah
		cmp     byte [___243debh], 1eh
		jne     short ___566bah
		cmp     cl, [___243dech]
		jne     short ___566bah
		mov     dword [___196dc0h], 1
___566bah:
		cmp     byte [___243de9h], 20h
		jne     short ___566e8h
		cmp     byte [___243deah], 13h
		jne     short ___566e8h
		cmp     byte [___243debh], 1eh
		jne     short ___566e8h
		cmp     byte [___243dech], 22h
		jne     short ___566e8h
		mov     dword [___196dc4h], 1
___566e8h:
		cmp     dword [___196dbch], byte 0
		je      short ___56710h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+___1de598h], 19000h
___56710h:
		cmp     dword [___196dc0h], byte 0
		je      short ___56738h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+___1de5b0h], 19000h
___56738h:
		cmp     dword [___196dc4h], byte 0
		je      short ___56760h
		mov     edx, [___243ce8h]
		lea     eax, [edx*8+0]
		add     eax, edx
		shl     eax, 2
		add     eax, edx
		mov     dword [eax*4+___1de5b4h], 19000h
___56760h:
		pop     edx
		pop     ecx
		retn    
