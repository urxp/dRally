cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___183254h
	extern	___1a54d0h
	extern	___243dd0h
	extern	bpa_read
	extern	___243c5ch
	extern	bpk_decode4
	extern	___2438c4h
	extern	___1de920h
	extern	___1ded20h
	extern	___1df120h
	extern	___1e8448h
	extern	___1e8048h
	extern	___1e7c48h

section .text

__GDECL(___43984h)
		push    38h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 10h
		mov     esi, ___19bd64h
		mov     edi, esp
		mov     ebx, esp
		call 	__STRCPY
		mov     esi, ___183254h
		mov     edi, esp
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___243dd0h
		call    near bpa_read
		push    ___1a54d0h
		push    ___243c5ch
		push    byte 0
		push    byte 4
		call    near bpk_decode4
		push    ___1a54d0h
		push    ___2438c4h
		push    byte 4
		push    byte 4
		call    near bpk_decode4
		push    ___1a54d0h
		push    ___1de920h
		mov     eax, [___243c5ch]
		push    byte 8
		shl     eax, 2
		push    eax
		call    near bpk_decode4
		mov     eax, [___243c5ch]
		push    ___1a54d0h
		shl     eax, 2
		push    ___1ded20h
		lea     ebx, [eax+8]
		push    ebx
		push    eax
		call    near bpk_decode4
		mov     eax, [___243c5ch]
		push    ___1a54d0h
		shl     eax, 3
		push    ___1df120h
		add     eax, byte 8
		push    eax
		mov     eax, [___243c5ch]
		shl     eax, 2
		push    eax
		call    near bpk_decode4
		mov     edi, [___243c5ch]
		lea     eax, [edi*4+0]
		sub     eax, edi
		push    ___1a54d0h
		shl     eax, 2
		push    ___1e8448h
		add     eax, byte 8
		push    eax
		mov     eax, [___2438c4h]
		shl     eax, 2
		push    eax
		call    near bpk_decode4
		mov     edi, [___243c5ch]
		lea     ebx, [edi*4+0]
		push    ___1a54d0h
		sub     ebx, edi
		mov     eax, [___2438c4h]
		shl     ebx, 2
		shl     eax, 2
		add     ebx, byte 8
		push    ___1e8048h
		add     ebx, eax
		push    ebx
		push    eax
		call    near bpk_decode4
		mov     edi, [___243c5ch]
		lea     eax, [edi*4+0]
		push    ___1a54d0h
		sub     eax, edi
		mov     ebx, [___2438c4h]
		shl     eax, 2
		shl     ebx, 3
		add     eax, byte 8
		push    ___1e7c48h
		add     eax, ebx
		push    eax
		mov     eax, [___2438c4h]
		shl     eax, 2
		push    eax
		call    near bpk_decode4
		add     esp, byte 10h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
