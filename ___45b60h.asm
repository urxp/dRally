cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196e70h
	extern	___1a33c0h
	extern	___1a4ec0h
	extern	___1a4ec1h
	extern	___1a33c4h
	extern	___1a4ec2h
	extern	___1a33c8h
	extern	DISPLAY_SET_PALETTE_COLOR

section .text

__GDECL(___45b60h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		sub     esp, byte 8
		mov     ebx, [___196e70h]
		xor     edx, edx
		xor     esi, esi
		inc     ebx
		mov     [esp+4], edx
		mov     [___196e70h], ebx
___45b86h:
		mov     ebx, [esp+4]
		mov     edx, [___196e70h]
		lea     ebx, [ebx+ebx*2]
		xor     ecx, ecx
		mov     eax, [esi+___1a33c0h]
		mov     cl, [ebx+___1a4ec0h]
		shl     edx, 10h
		shl     ecx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		sub     ecx, eax
		mov     edx, [___196e70h]
		lea     eax, [ecx+8000h]
		shl     edx, 10h
		sar     eax, 10h
		xor     ecx, ecx
		mov     [esp], eax
		mov     cl, [ebx+___1a4ec1h]
		mov     eax, [esi+___1a33c4h]
		shl     ecx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		sub     ecx, eax
		add     ecx, 8000h
		mov     bl, [ebx+___1a4ec2h]
		sar     ecx, 10h
		mov     edx, [___196e70h]
		and     ebx, 0ffh
		mov     eax, [esi+___1a33c8h]
		shl     edx, 10h
		shl     ebx, 10h
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		sub     ebx, eax
		xor     eax, eax
		mov     al, [esp+4]
		push    eax
		xor     eax, eax
		mov     al, [esp+4]
		push    eax
		xor     eax, eax
		add     ebx, 8000h
		mov     al, cl
		sar     ebx, 10h
		push    eax
		xor     eax, eax
		mov     al, bl
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     ecx, [esp+4]
		inc     ecx
		add     esi, byte 0ch
		mov     [esp+4], ecx
		cmp     ecx, 100h
		jl      near ___45b86h
		add     esp, byte 8
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
