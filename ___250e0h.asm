cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185bedh

section .text

__GDECL(___250e0h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     esi, eax
		mov     edx, eax
		xor     ebx, ebx
		xor     ebp, ebp
		jmp     short ___2510eh
___250fah:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185bedh]
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     ebp, ecx
___2510eh:
		mov     edi, esi
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___250fah
		mov     edx, 60h
		sub     edx, ebp
		mov     eax, edx
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
