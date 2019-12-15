cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243ca4h
	extern	___196de4h
	extern	___654d4h
	extern	___243334h
	extern	___243320h
	extern	___243d80h
	extern	___243d6ch
	extern	___196de0h
	extern	___19bd60h
	extern	___44130h
	extern	___4495ch
	extern	___24387ch
	extern	___243878h
	extern	___243330h
	extern	___243894h
	extern	___243874h
	extern	___243898h
	extern	___243ce8h
	extern	___1e6f74h
	extern	___1e6f70h
	extern	___24e4d0h
	extern	___44194h

section .text

__GDECL(___42218h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edx, [___243ca4h]
		cmp     edx, byte 0ah
		jle     near ___422deh
		cmp     edx, 82h
		jg      near ___422deh
		cmp     dword [___196de4h], byte 0
		jne     short ___42277h
		push    8000h
		mov     ecx, 10000h
		mov     edx, 3
		mov     eax, 2
		push    50000h
		xor     ebx, ebx
		mov     esi, 1
		call    near ___654d4h
		mov     [___196de4h], esi
___42277h:
		mov     edi, [___243334h]
		mov     eax, [___243320h]
		sub     eax, edi
		test    eax, eax
		jle     short ___4228fh
		mov     [___243320h], eax
		jmp     short ___42297h
___4228fh:
		xor     ebp, ebp
		mov     [___243320h], ebp
___42297h:
		mov     ecx, 3ch
		mov     edx, 50h
		mov     eax, [___243d80h]
		mov     ebx, [___243320h]
		add     eax, 150h
		mov     esi, [___243d6ch]
		add     ebx, eax
		shr     dl, 2
___422bch:
		mov     ch, dl
___422beh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___422beh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___422bch
___422deh:
		cmp     dword [___243ca4h], 0beh
		jle     near ___42402h
		mov     edx, [___196de0h]
		cmp     edx, byte 1
		jne     near ___42379h
		cmp     dword [___19bd60h], byte 0
		je      short ___42318h
		mov     eax, edx
		call    near ___44130h
		call    near ___4495ch
		mov     [___24387ch], edx
___42318h:
		xor     esi, esi
		mov     [___243878h], esi
		mov     eax, [___243878h]
		mov     [___243330h], eax
		mov     [___243894h], eax
		mov     eax, [___243894h]
		mov     [___243874h], eax
		mov     eax, [___243874h]
		mov     [___243898h], eax
		imul    eax, [___243ce8h], 35eh
		push    8000h
		push    28000h
		mov     ecx, 10000h
		mov     edx, 2ch
		mov     [eax+___1e6f74h], esi
		mov     ebx, esi
		mov     [eax+___1e6f70h], esi
		mov     eax, 5
		call    near ___654d4h
___42379h:
		mov     edx, [___243334h]
		mov     eax, [___243320h]
		add     eax, edx
		cmp     eax, byte 50h
		jg      short ___4239eh
		mov     ecx, [___243320h]
		lea     eax, [edx+edx*1]
		add     ecx, eax
		mov     [___243320h], ecx
		jmp     short ___423a8h
___4239eh:
		mov     dword [___243320h], 50h
___423a8h:
		mov     ebx, [___243d80h]
		mov     esi, [___243320h]
		add     ebx, 150h
		mov     ecx, 3ch
		add     ebx, esi
		mov     esi, [___243d6ch]
		mov     edx, 50h
		add     esi, 2580h
		mov     edi, 2
		shr     dl, 2
___423dah:
		mov     ch, dl
___423dch:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___423dch
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___423dah
		mov     [___196de0h], edi
___42402h:
		mov     ebp, [___243ca4h]
		cmp     ebp, 82h
		jle     near ___424beh
		cmp     ebp, 0beh
		jg      near ___424beh
		cmp     dword [___196de0h], byte 0
		jne     short ___4246ch
		cmp     dword [___19bd60h], byte 0
		je      short ___4244ch
		cmp     dword [___24e4d0h], byte 2
		jne     short ___42442h
		call    near ___44194h
		jmp     short ___4244ch
___42442h:
		mov     eax, 2
		call    near ___44130h
___4244ch:
		push    8000h
		mov     ecx, 10000h
		mov     edx, 2ch
		push    20000h
		mov     eax, 5
		xor     ebx, ebx
		call    near ___654d4h
___4246ch:
		mov     esi, 1
		mov     ecx, 3ch
		mov     edx, 50h
		mov     ebx, [___243d80h]
		mov     [___196de0h], esi
		mov     esi, [___243d6ch]
		add     ebx, 150h
		add     esi, 12c0h
		shr     dl, 2
___4249ch:
		mov     ch, dl
___4249eh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___4249eh
		add     ebx, 200h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___4249ch
___424beh:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
