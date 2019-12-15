cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185c6fh
	extern	___185c40h

section .text

__GDECL(___25180h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     ebx, eax
		xor     esi, esi
		xor     edx, edx
		jmp     short ___251bfh
___2519ah:
		mov     ah, [ebx]
		cmp     ah, 24h
		jne     short ___251abh
		xor     ecx, ecx
		mov     cl, [___185c6fh]
		jmp     short ___251bbh
___251abh:
		xor     ecx, ecx
		mov     cl, ah
		mov     cl, [ecx+___185c40h]
		and     ecx, 0ffh
___251bbh:
		add     edx, ecx
		inc     esi
		inc     ebx
___251bfh:
		mov     edi, ebp
		call 	__STRLEN
		cmp     esi, ecx
		jb      short ___2519ah
		mov     eax, 60h
		sub     eax, edx
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
