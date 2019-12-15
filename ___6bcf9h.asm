cpu 386
%include "macros.inc"

	extern	___68b30h
	extern	___68e94h
	extern	___68d94h

section .text

__GDECL(___6bcf9h)
		push    ebx
		mov     ebx, [eax*4+___68b30h]
		or      ebx, ebx
		jne     short ___6bd09h
		xor     eax, eax
		jmp     short ___6bd2ch
___6bd09h:
		cmp     byte [eax+___68e94h], 0
		je      short ___6bd23h
		mov     eax, [eax*4+___68d94h]
		sub     eax, [ebx+0ch]
		neg     eax
		add     eax, [ebx+0ch]
		jmp     short ___6bd2ch
___6bd23h:
		mov     eax, [eax*4+___68d94h]
		sub     eax, [ebx]
___6bd2ch:
		pop     ebx
		retn    
