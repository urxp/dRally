cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a01e0h
	extern	___3f71ch__allocateMemory
	extern	___3f77ch__freeMemory
	extern	___1a1ef8h
	extern	___1a0224h
	extern	___1a0228h
	extern	___19bd60h

section .text

__GDECL(___30c60h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     ebp, eax
		mov     eax, 870h
		mov     ecx, 870h
		mov     esi, ___1a01e0h
		call    near ___3f71ch__allocateMemory
		mov     ebx, eax
		mov     edi, eax
		mov     [esp], eax
		call 	__MOVS
		mov     eax, ebp
		dec     eax
		mov     [esp+8], eax
		mov     ecx, eax
		shl     eax, 3
		sub     eax, ecx
		shl     eax, 2
		xor     edx, edx
		sub     eax, ecx
		mov     [esp+14h], edx
		shl     eax, 2
		mov     edx, ___1a01e0h
		add     ebx, eax
		test    ebp, ebp
		jle     short ___30cf3h
___30cc7h:
		mov     ecx, 6ch
		mov     esi, ebx
		mov     edi, edx
		call 	__MOVS
		mov     ecx, [esp+14h]
		add     edx, byte 6ch
		inc     ecx
		sub     ebx, byte 6ch
		mov     [esp+14h], ecx
		cmp     ebp, ecx
		jg      short ___30cc7h
___30cf3h:
		mov     eax, [esp]
		mov     edx, [esp+8]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ef8h]
		sub     edx, eax
		mov     [___1a1ef8h], edx
		xor     eax, eax
		test    ebp, ebp
		jle     short ___30d47h
		mov     edx, 0ffffff94h
		xor     ecx, ecx
___30d19h:
		mov     esi, [edx+___1a0224h]
		cmp     esi, [ecx+___1a0224h]
		jne     short ___30d33h
		test    eax, eax
		jle     short ___30d33h
		mov     ebx, [edx+___1a0228h]
		jmp     short ___30d36h
___30d33h:
		lea     ebx, [eax+1]
___30d36h:
		mov     [ecx+___1a0228h], ebx
		add     edx, byte 6ch
		inc     eax
		add     ecx, byte 6ch
		cmp     eax, ebp
		jl      short ___30d19h
___30d47h:
		cmp     dword [___19bd60h], byte 0
		je      near ___30dedh
		mov     eax, 870h
		mov     ecx, 870h
		mov     esi, ___1a01e0h
		call    near ___3f71ch__allocateMemory
		mov     ebx, eax
		mov     edi, eax
		mov     [esp+4], eax
		call 	__MOVS
		xor     eax, eax
		mov     [esp+10h], eax
		lea     eax, [ebp-1]
		mov     [esp+0ch], eax
		mov     ecx, eax
		shl     eax, 3
		sub     eax, ecx
		shl     eax, 2
		sub     eax, ecx
		shl     eax, 2
		mov     edx, ___1a01e0h
		add     ebx, eax
		test    ebp, ebp
		jle     short ___30dd3h
___30da7h:
		mov     ecx, 6ch
		mov     esi, ebx
		mov     edi, edx
		call 	__MOVS
		mov     edi, [esp+10h]
		add     edx, byte 6ch
		inc     edi
		sub     ebx, byte 6ch
		mov     [esp+10h], edi
		cmp     ebp, edi
		jg      short ___30da7h
___30dd3h:
		mov     eax, [esp+4]
		mov     edx, [esp+0ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1ef8h]
		sub     edx, eax
		mov     [___1a1ef8h], edx
___30dedh:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
