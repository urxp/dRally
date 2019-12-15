cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243880h
	extern	___243cf4h
	extern	___243c60h
	extern	___24e4d0h
	extern	___24331ch
	extern	___243ce8h
	extern	___1e6eech
	extern	___243d08h
	extern	___196e60h
	extern	___243d0ch
	extern	___196e64h
	extern	___243874h
	extern	___243cd8h
	extern	___243318h
	extern	___61518h
	extern	___24cee0h
	extern	___243894h
	extern	___1a51c0h
	extern	GET_FRAME_COUNTER
	extern	___446ach
	extern	___1e6ef0h
	extern	___44a4ch
	extern	___44730h

section .text

__GDECL(___44a78h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     edx, edx
		mov     [___243880h], edx
		mov     ecx, [___243cf4h]
		mov     [___243c60h], edx
		test    ecx, ecx
		jle     near ___45089h
		mov     edi, 0fffh
___44aa9h:
		mov     eax, [___243c60h]
		mov     ebx, [___24e4d0h]
		mov     [___24331ch], eax
		cmp     ebx, byte 1
		je      short ___44ac8h
		cmp     ebx, byte 3
		je      short ___44ac8h
		cmp     ebx, byte 4
		jne     short ___44ad0h
___44ac8h:
		xor     ebp, ebp
		mov     [___24331ch], ebp
___44ad0h:
		mov     edx, [___243ce8h]
		mov     eax, [___243c60h]
		cmp     eax, edx
		je      near ___4506eh
		imul    edx, eax, 35eh
		mov     eax, edx
		add     edx, byte 40h
___44aeeh:
		add     eax, byte 4
		xor     ebx, ebx
		mov     [eax+___1e6eech], ebx
		cmp     eax, edx
		jne     short ___44aeeh
		mov     ebp, 10h
		mov     [___243d08h], ebx
		mov     [___196e60h], ebx
		xor     eax, edx
		mov     [___243d0ch], ebp
		mov     [___196e64h], eax
		cmp     dword [___243874h], byte 0
		jle     near ___44de4h
___44b28h:
		cmp     dword [___243d08h], byte 10h
		jge     near ___44de4h
		cmp     dword [___243cd8h], byte 0
		jne     near ___44de4h
		mov     ebp, [___243d0ch]
		test    ebp, ebp
		jle     near ___44de4h
		cmp     dword [___243318h], byte 0
		jne     near ___44de4h
		lea     edx, [ebp-1]
		mov     [___243d0ch], edx
		call    near ___61518h
		mov     ebx, [___24331ch]
		shl     ebx, 2
		mov     eax, [ebx+___24cee0h]
		mov     dx, [eax+2]
		cmp     dx, [eax]
		je      near ___44dc9h
		mov     ecx, [___243c60h]
		mov     edx, [___243894h]
		mov     [ecx*4+___1a51c0h], edx
		mov     dx, [eax+2]
		and     edx, edi
		and     edx, 0ffffh
		add     edx, eax
		mov     cl, [edx+4]
		cmp     cl, 7fh
		jbe     near ___44d7dh
		cmp     cl, 0feh
		jne     near ___44c34h
		call    near GET_FRAME_COUNTER
		lea     ebp, [eax+2]
		xor     ecx, ecx
___44bc7h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		xor     edx, edx
		mov     dx, [eax+2]
		add     edx, byte 12h
		and     edx, edi
		cmp     byte [edx+eax*1+4], 0ffh
		je      short ___44c2ah
		test    ecx, ecx
		jne     short ___44c2ah
		call    near ___61518h
		call    near GET_FRAME_COUNTER
		cmp     eax, ebp
		jbe     short ___44bc7h
		mov     edx, [___24331ch]
		mov     eax, [edx*4+___24cee0h]
		mov     bx, [eax+2]
		mov     esi, ebx
		mov     ecx, 1
		and     esi, edi
		inc     ebx
		mov     [eax+2], bx
		and     esi, 0ffffh
		mov     eax, [edx*4+___24cee0h]
		mov     byte [esi+eax*1+4], 0
		jmp     short ___44bc7h
___44c2ah:
		cmp     ecx, byte 1
		je      short ___44c34h
		call    near ___446ach
___44c34h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		mov     dx, [eax+2]
		and     edx, edi
		and     edx, 0ffffh
		add     eax, edx
		mov     bh, [eax+4]
		cmp     bh, 0d3h
		je      short ___44c5fh
		cmp     bh, 0c5h
		jne     near ___44ce2h
___44c5fh:
		call    near GET_FRAME_COUNTER
		lea     ebp, [eax+2]
		xor     ecx, ecx
___44c69h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		xor     edx, edx
		mov     dx, [eax+2]
		add     edx, byte 7
		and     edx, edi
		cmp     byte [edx+eax*1+4], 0ffh
		je      short ___44ccch
		test    ecx, ecx
		jne     short ___44ccch
		call    near ___61518h
		call    near GET_FRAME_COUNTER
		cmp     eax, ebp
		jbe     short ___44c69h
		mov     edx, [___24331ch]
		mov     eax, [edx*4+___24cee0h]
		mov     bx, [eax+2]
		mov     esi, ebx
		mov     ecx, 1
		and     esi, edi
		inc     ebx
		mov     [eax+2], bx
		and     esi, 0ffffh
		mov     eax, [edx*4+___24cee0h]
		mov     byte [esi+eax*1+4], 0
		jmp     short ___44c69h
___44ccch:
		cmp     ecx, byte 1
		je      short ___44ce2h
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		add     word [eax+2], byte 8
___44ce2h:
		mov     edx, [___24331ch]
		shl     edx, 2
		mov     eax, [edx+___24cee0h]
		mov     bx, [eax+2]
		and     ebx, edi
		and     ebx, 0ffffh
		cmp     byte [ebx+eax*1+4], 0fdh
		jne     short ___44d2ch
		mov     dword [___243cd8h], 1
		mov     bx, [eax+2]
		mov     ecx, ebx
		and     ecx, edi
		inc     ebx
		mov     [eax+2], bx
		and     ecx, 0ffffh
		mov     eax, [edx+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
___44d2ch:
		mov     edx, [___24331ch]
		shl     edx, 2
		mov     eax, [edx+___24cee0h]
		mov     bx, [eax+2]
		and     ebx, edi
		and     ebx, 0ffffh
		cmp     byte [ebx+eax*1+4], 0fch
		jne     near ___44dd3h
		mov     ecx, 1
		mov     bx, [eax+2]
		mov     [___243318h], ecx
		mov     ecx, ebx
		and     ecx, edi
		inc     ebx
		mov     [eax+2], bx
		and     ecx, 0ffffh
		mov     eax, [edx+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
		jmp     short ___44dd3h
___44d7dh:
		mov     ebp, [___243c60h]
		movzx   esi, cl
		imul    ecx, ebp, 35eh
		mov     edx, [___243d08h]
		mov     [ecx+edx*4+___1e6ef0h], esi
		mov     dx, [eax+2]
		mov     ecx, edx
		and     ecx, edi
		inc     edx
		mov     [eax+2], dx
		and     ecx, 0ffffh
		mov     eax, [ebx+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
		mov     eax, [___243d08h]
		mov     [___196e64h], eax
		inc     eax
		mov     [___243d08h], eax
		jmp     short ___44dd3h
___44dc9h:
		mov     eax, 4
		call    near ___44a4ch
___44dd3h:
		mov     eax, [___243d08h]
		cmp     eax, [___243874h]
		jl      near ___44b28h
___44de4h:
		mov     ebx, [___24331ch]
		shl     ebx, 2
		mov     eax, [ebx+___24cee0h]
		mov     dx, [eax+2]
		cmp     dx, [eax]
		je      near ___45056h
		and     edx, edi
		and     edx, 0ffffh
		add     edx, eax
		mov     cl, [edx+4]
		cmp     cl, 7fh
		jbe     near ___44f9eh
		cmp     cl, 0feh
		jne     near ___44e9fh
		call    near GET_FRAME_COUNTER
		lea     ebp, [eax+2]
		xor     ecx, ecx
___44e29h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		xor     edx, edx
		mov     dx, [eax+2]
		add     edx, byte 12h
		and     edx, edi
		cmp     byte [edx+eax*1+4], 0ffh
		je      short ___44e8ch
		test    ecx, ecx
		jne     short ___44e8ch
		call    near ___61518h
		call    near GET_FRAME_COUNTER
		cmp     eax, ebp
		jbe     short ___44e29h
		mov     edx, [___24331ch]
		mov     eax, [edx*4+___24cee0h]
		mov     bx, [eax+2]
		mov     esi, ebx
		mov     ecx, 1
		and     esi, edi
		inc     ebx
		mov     [eax+2], bx
		and     esi, 0ffffh
		mov     eax, [edx*4+___24cee0h]
		mov     byte [esi+eax*1+4], 0
		jmp     short ___44e29h
___44e8ch:
		cmp     ecx, byte 1
		je      near ___44de4h
		call    near ___446ach
		jmp     near ___44de4h
___44e9fh:
		cmp     cl, 0d3h
		je      short ___44eadh
		cmp     cl, 0c5h
		jne     near ___44f39h
___44eadh:
		call    near GET_FRAME_COUNTER
		lea     ebp, [eax+2]
		xor     ecx, ecx
___44eb7h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		xor     edx, edx
		mov     dx, [eax+2]
		add     edx, byte 7
		and     edx, edi
		cmp     byte [edx+eax*1+4], 0ffh
		je      short ___44f1ah
		test    ecx, ecx
		jne     short ___44f1ah
		call    near ___61518h
		call    near GET_FRAME_COUNTER
		cmp     eax, ebp
		jbe     short ___44eb7h
		mov     edx, [___24331ch]
		mov     eax, [edx*4+___24cee0h]
		mov     bx, [eax+2]
		mov     esi, ebx
		mov     ecx, 1
		and     esi, edi
		inc     ebx
		mov     [eax+2], bx
		and     esi, 0ffffh
		mov     eax, [edx*4+___24cee0h]
		mov     byte [esi+eax*1+4], 0
		jmp     short ___44eb7h
___44f1ah:
		cmp     ecx, byte 1
		je      near ___44de4h
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		add     word [eax+2], byte 8
		jmp     near ___44de4h
___44f39h:
		cmp     cl, 0fdh
		jne     short ___44f6ch
		mov     ecx, 1
		mov     dx, [eax+2]
		mov     [___243cd8h], ecx
		mov     ecx, edx
		and     ecx, edi
		inc     edx
		mov     [eax+2], dx
		and     ecx, 0ffffh
		mov     eax, [ebx+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
		jmp     near ___44de4h
___44f6ch:
		cmp     cl, 0fch
		jne     short ___44f7bh
		mov     dword [___243318h], 1
___44f7bh:
		mov     dx, [eax+2]
		mov     ecx, edx
		and     ecx, edi
		inc     edx
		mov     [eax+2], dx
		and     ecx, 0ffffh
		mov     eax, [ebx+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
		jmp     near ___44de4h
___44f9eh:
		test    cl, 10h
		je      short ___44fbah
		imul    edx, [___243c60h], 35eh
		mov     eax, [___196e64h]
		or      byte [edx+eax*4+___1e6ef0h], 10h
___44fbah:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		mov     dx, [eax+2]
		and     edx, edi
		and     edx, 0ffffh
		test    byte [edx+eax*1+4], 20h
		je      short ___44ff0h
		imul    edx, [___243c60h], 35eh
		mov     eax, [___196e64h]
		or      byte [edx+eax*4+___1e6ef0h], 20h
___44ff0h:
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		mov     dx, [eax+2]
		and     edx, edi
		and     edx, 0ffffh
		test    byte [edx+eax*1+4], 40h
		je      short ___45026h
		imul    edx, [___243c60h], 35eh
		mov     eax, [___196e64h]
		or      byte [edx+eax*4+___1e6ef0h], 40h
___45026h:
		mov     eax, [___24331ch]
		mov     edx, [eax*4+___24cee0h]
		mov     bx, [edx+2]
		mov     ecx, ebx
		and     ecx, edi
		inc     ebx
		mov     [edx+2], bx
		and     ecx, 0ffffh
		mov     eax, [eax*4+___24cee0h]
		mov     byte [ecx+eax*1+4], 0
		jmp     near ___44de4h
___45056h:
		call    near ___44730h
		mov     eax, [___24331ch]
		mov     eax, [eax*4+___24cee0h]
		mov     dx, [eax]
		mov     [eax+2], dx
___4506eh:
		mov     esi, [___243c60h]
		inc     esi
		mov     ebp, [___243cf4h]
		mov     [___243c60h], esi
		cmp     esi, ebp
		jl      near ___44aa9h
___45089h:
		xor     eax, eax
		mov     edx, [___243cf4h]
		mov     [___243c60h], eax
		test    edx, edx
		jle     short ___450e0h
		mov     edi, [___243ce8h]
		mov     esi, [___243cf4h]
___450a6h:
		cmp     edi, [___243c60h]
		je      short ___450cch
		mov     edx, [eax+___1a51c0h]
		add     edx, 2bch
		cmp     edx, [___243894h]
		jge     short ___450cch
		mov     dword [___243318h], 1
___450cch:
		mov     ecx, [___243c60h]
		inc     ecx
		add     eax, byte 4
		mov     [___243c60h], ecx
		cmp     ecx, esi
		jl      short ___450a6h
___450e0h:
		mov     dword [___243880h], 1
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
