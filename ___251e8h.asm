cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185c5ch

section .text

__GDECL(___251e8h)
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
		jmp     short ___25216h
___25202h:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185c5ch]
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     esi, ecx
___25216h:
		mov     edi, ebp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___25202h
		mov     eax, esi
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
