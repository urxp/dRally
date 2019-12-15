cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___1a0a50h
	extern	__STOSD
	extern	___19bd60h
	extern	___1a0a5ch
	extern	___1a0224h
	extern 	printf_

section .text

__GDECL(___2ec68h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     esi, [___1a1ef8h]
		mov     ecx, 4
		mov     edx, 1
		mov     eax, ___1a0a50h
		call    near __STOSD
		cmp     dword [___19bd60h], byte 0
		je      short ___2ecb6h
		mov     ecx, 4
		mov     edx, 1
		mov     eax, ___1a0a50h
		xor     ebx, ebx
		call    near __STOSD
		mov     [___1a0a5ch], ebx
___2ecb6h:
		mov     esi, [___1a1ef8h]
		xor     edx, edx
		xor     eax, eax
		xor     ebx, ebx
___2ecc2h:
		mov     ecx, [eax+___1a0224h]
		cmp     ebx, ecx
		jge     short ___2ecd2h
		cmp     edx, esi
		je      short ___2ecd2h
		mov     ebx, ecx
___2ecd2h:
		inc     edx
		add     eax, byte 6ch
		cmp     edx, byte 14h
		jl      short ___2ecc2h
		mov     edi, [___19bd60h]
		test    edi, edi
		jne     short ___2ed04h
		lea     eax, [esi*8+0]
		sub     eax, esi
		shl     eax, 2
		sub     eax, esi
		cmp     ebx, [eax*4+___1a0224h]
		jge     short ___2ed04h
		mov     [___1a0a5ch], edi
		jmp     short ___2ed0eh
___2ed04h:
		mov     dword [___1a0a5ch], 1
___2ed0eh:
		cmp     dword [___19bd60h], byte 0
		je      short ___2ed1fh
		xor     ecx, ecx
		mov     [___1a0a5ch], ecx
___2ed1fh:
		mov     [___1a1ef8h], esi
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
