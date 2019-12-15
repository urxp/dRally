cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243ce8h
	extern	___243cf4h
	extern	___1e6fdah
	extern	___1e6fd9h
	extern	___243c60h

section .text

__GDECL(___560d8h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, byte 4
		mov     esi, [___243ce8h]
		mov     edi, [___243cf4h]
		xor     ebx, ebx
		test    edi, edi
		jle     short ___56152h
		xor     eax, eax
		imul    edx, esi, 35eh
___56104h:
		cmp     ebx, esi
		je      short ___56148h
		cmp     dword [eax+___1e6fdah], byte 0
		jne     short ___56148h
		cmp     dword [edx+___1e6fdah], byte 0
		jne     short ___56148h
		mov     cl, [edx+___1e6fd9h]
		cmp     cl, [eax+___1e6fd9h]
		jae     short ___56148h
		xor     ecx, ecx
		mov     cl, [eax+___1e6fd9h]
		mov     [esp], ecx
		mov     cl, [edx+___1e6fd9h]
		mov     [eax+___1e6fd9h], cl
		mov     cl, [esp]
		mov     [edx+___1e6fd9h], cl
___56148h:
		inc     ebx
		add     eax, 35eh
		cmp     ebx, edi
		jl      short ___56104h
___56152h:
		mov     [___243cf4h], edi
		mov     [___243ce8h], esi
		mov     [___243c60h], ebx
		add     esp, byte 4
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
