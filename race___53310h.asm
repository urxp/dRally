cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243c88h
	extern	___1f44ech
	extern	___1f44f0h
	extern	___1f4754h
	extern	___1f3b00h
	extern	___243c98h
	extern	___53378h

section .text

__GDECL(race___53310h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     esi, [___243c88h]
		xor     ebx, ebx
		test    esi, esi
		jle     short ___53356h
		xor     eax, eax
___5332ch:
		mov     ecx, [eax+___1f44ech]
		imul    ecx, ecx
		mov     edx, [eax+___1f44f0h]
		imul    edx, edx
		mov     [eax+___1f4754h], ebx
		add     eax, 0c50h
		add     edx, ecx
		inc     ebx
		mov     [eax+___1f3b00h], edx
		cmp     ebx, esi
		jl      short ___5332ch
___53356h:
		lea     edx, [esi-1]
		mov     [___243c98h], ebx
		xor     eax, eax
		mov     [___243c88h], esi
		call    near ___53378h
		mov     ebx, [___243c98h]
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
