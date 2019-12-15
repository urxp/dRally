cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185b8bh

section .text

__GDECL(___252e0h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		mov     edx, eax
		xor     ebx, ebx
		xor     esi, esi
		jmp     short ___2530eh
___252fah:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185b8bh]
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     esi, ecx
___2530eh:
		mov     edi, ebp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___252fah
		mov     edx, esi
		mov     eax, esi
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
