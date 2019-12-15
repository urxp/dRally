cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185bedh

section .text

__GDECL(___25138h)
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
		jmp     short ___25166h
___25152h:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185bedh]
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     esi, ecx
___25166h:
		mov     edi, ebp
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___25152h
		mov     eax, esi
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
