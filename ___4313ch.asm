cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___1831c0h
	extern	___1a54d0h
	extern	___243dd0h
	extern	bpa_read
	extern	___243d28h
	extern	___243d2ch
	extern	___243d60h
	extern	bpk_decode4
	extern	___1831cch
	extern	___243d30h
	extern	___243d04h
	extern	___243d78h
	extern	___1831d8h
	extern	___243cf8h
	extern	___243d10h
	extern	___243d54h

section .text

__GDECL(___4313ch)
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
		mov     esi, ___1831c0h
		mov     edi, esp
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___243dd0h
		call    near bpa_read
		mov     eax, [___243d28h]
		imul    eax, [___243d2ch]
		push    ___1a54d0h
		mov     edx, [___243d60h]
		push    edx
		push    30ah
		push    eax
		mov     esi, ___19bd64h
		lea     edi, [esp+10h]
		call    near bpk_decode4
		call 	__STRCPY
		mov     esi, ___1831cch
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___243dd0h
		call    near bpa_read
		mov     eax, [___243d30h]
		imul    eax, [___243d04h]
		push    ___1a54d0h
		mov     ecx, [___243d78h]
		push    ecx
		push    30ah
		push    eax
		lea     edi, [esp+10h]
		mov     esi, ___19bd64h
		call    near bpk_decode4
		call 	__STRCPY
		mov     esi, ___1831d8h
		mov     edi, esp
		mov     ebx, esp
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     eax, ___243dd0h
		call    near bpa_read
		mov     eax, [___243cf8h]
		imul    eax, [___243d10h]
		push    ___1a54d0h
		mov     edi, [___243d54h]
		push    edi
		push    30ah
		push    eax
		call    near bpk_decode4
		add     esp, byte 10h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
