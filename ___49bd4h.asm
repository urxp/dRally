cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___243dd0h
	extern	___182fb0h
	extern	___243d90h
	extern	___183f50h
	extern	___1a54d0h
	extern	___243d28h
	extern	bpa_read
	extern	___243d2ch
	extern	___243cech
	extern	___1e6f84h
	extern	___1e6f88h
	extern	___1e6edch
	extern	___1e72e2h
	extern	___1e72e6h
	extern	___1e723ah
	extern	___1e7640h
	extern	___1f2488h
	extern	___1e7644h
	extern	___1e7598h
	extern	___1e799eh
	extern	___1e79a2h
	extern	___1e78f6h
	extern	___1df70ch
	extern	___1df718h
	extern	___1df714h
	extern	___1df71ch
	extern	___1df720h
	extern	___243d30h
	extern	___243d04h
	extern	___243cf8h
	extern	___243d10h

section .text

__GDECL(___49bd4h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     esi, ___19bd64h
		mov     edi, ___243dd0h
		call 	__STRCPY
		mov     esi, ___182fb0h
		call 	__STRCAT
		mov     esi, ___19bd64h
		mov     edi, ___243d90h
		call 	__STRCPY
		mov     esi, ___183f50h
		mov     edx, ___1a54d0h
		call 	__STRCAT
		mov     ebx, edi
		mov     eax, ___243dd0h
		mov     ecx, 4
		mov     esi, ___1a54d0h
		mov     edi, ___243d28h
		call    near bpa_read
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, ___243d2ch
		add     esi, byte 4
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, ___243cech
		add     esi, byte 8
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 0ch
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 10h
		fstp    dword [___1e6f84h]
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 14h
		fstp    dword [___1e6f88h]
		call 	__MOVS
		mov     eax, [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 18h
		mov     [___1e6edch], eax
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 1ch
		fstp    dword [___1e72e2h]
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 20h
		fstp    dword [___1e72e6h]
		call 	__MOVS
		mov     eax, [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 24h
		mov     [___1e723ah], eax
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 28h
		fstp    dword [___1e7640h]
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		mov     edx, 3ch
		mov     ebp, ___1f2488h
		fstp    dword [___1e7644h]
		add     esi, byte 2ch
		xor     ebx, ebx
		call 	__MOVS
		mov     eax, [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 30h
		mov     [___1e7598h], eax
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 34h
		fstp    dword [___1e799eh]
		call 	__MOVS
		fild    dword [esp]
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, esp
		add     esi, byte 38h
		fstp    dword [___1e79a2h]
		call 	__MOVS
		mov     eax, [esp]
		add     ebp, byte 4
		mov     [___1e78f6h], eax
___49edch:
		imul    edi, ebx, 120h
		mov     esi, ___1a54d0h
		mov     ecx, 4
		add     esi, edx
		add     edi, ___1f2488h
		add     edx, byte 4
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, ebp
		add     esi, edx
		inc     ebx
		call 	__MOVS
		add     ebp, 120h
		add     edx, byte 4
		cmp     ebx, byte 10h
		jl      short ___49edch
		xor     eax, eax
___49f36h:
		add     eax, byte 20h
		xor     ebx, ebx
		mov     [eax+___1df70ch], ebx
		mov     [eax+___1df718h], ebx
		mov     [eax+___1df714h], ebx
		mov     [eax+___1df71ch], ebx
		cmp     eax, dword 280h
		jne     short ___49f36h
		mov     eax, ___1df720h
		mov     ebp, ___1df720h
		mov     [esp+8], ebx
		mov     ebx, ___1df720h
		add     eax, byte 10h
		add     ebp, byte 4
		mov     [esp+4], eax
		add     ebx, byte 8
___49f7ah:
		mov     esi, ___1a54d0h
		mov     edi, [esp+8]
		mov     ecx, 4
		shl     edi, 5
		add     esi, edx
		add     edi, ___1df720h
		call 	__MOVS
		add     edx, byte 4
		mov     esi, ___1a54d0h
		mov     ecx, 4
		mov     edi, ebp
		add     esi, edx
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		add     edx, byte 4
		mov     edi, ebx
		add     esi, edx
		call 	__MOVS
		mov     esi, ___1a54d0h
		mov     ecx, 4
		add     edx, byte 4
		mov     edi, [esp+4]
		add     esi, edx
		add     ebp, byte 20h
		call 	__MOVS
		lea     esi, [edi+20h]
		add     ebx, byte 20h
		mov     edi, [esp+8]
		add     edx, byte 4
		inc     edi
		mov     [esp+4], esi
		mov     [esp+8], edi
		cmp     edi, byte 14h
		jl      near ___49f7ah
		mov     eax, [___243d28h]
		sar     eax, 2
		mov     [___243d30h], eax
		mov     eax, [___243d2ch]
		sar     eax, 2
		mov     [___243d04h], eax
		mov     eax, [___243d30h]
		mov     [___243cf8h], eax
		mov     eax, [___243d04h]
		mov     [___243d10h], eax
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
