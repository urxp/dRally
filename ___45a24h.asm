cpu 386
%include "macros.inc"

	extern	__CHK
	extern	DISPLAY_SET_PALETTE_COLOR
	extern	___1a4ec0h
	extern	___1a4ec1h
	extern	___1a33c0h
	extern	___1a4ec2h
	extern	___1a33c4h
	extern	___1a33bch

section .text

__GDECL(___45a24h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		xor     edx, edx
		xor     esi, esi
		mov     [esp], edx
		mov     edi, 3f0000h
___45a42h:
		xor     eax, eax
		mov     al, [esp]
		push    eax
		push    byte 0
		push    byte 0
		push    byte 0
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp]
		lea     ecx, [ecx+ecx*2]
		xor     edx, edx
		mov     dl, [ecx+___1a4ec0h]
		mov     ebx, edi
		shl     edx, 10h
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		mov     dl, [ecx+___1a4ec1h]
		mov     ebx, edi
		shl     edx, 10h
		mov     [esi+___1a33c0h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		xor     edx, edx
		mov     dl, [ecx+___1a4ec2h]
		mov     ebx, edi
		shl     edx, 10h
		mov     [esi+___1a33c4h], eax
		xor     eax, eax
		shrd    eax, edx, 10h
		sar     edx, 10h
		idiv    ebx
		mov     ebx, [esp]
		add     esi, byte 0ch
		inc     ebx
		mov     [esi+___1a33bch], eax
		mov     [esp], ebx
		cmp     ebx, 100h
		jl      near ___45a42h
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
