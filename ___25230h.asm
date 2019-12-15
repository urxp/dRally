cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRLEN
	extern	___185c5ch
	
section .text

__GDECL(___25230h)
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
		jmp     short ___2525eh
___2524ah:
		xor     ecx, ecx
		mov     cl, [edx]
		mov     cl, [ecx+___185c5ch]
		and     ecx, 0ffh
		inc     edx
		inc     ebx
		add     ebp, ecx
___2525eh:
		mov     edi, esi
		call 	__STRLEN
		cmp     ebx, ecx
		jb      short ___2524ah
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
