cpu 386
%include "macros.inc"

	extern	___68d94h
	extern	___68e14h
	extern	___68e94h
	extern	___68d70h

section .text

__GDECL(___691b8h)
		pushad  
		xor     eax, eax
		xor     edi, edi
___691bdh:
		mov     [edi*4+___68d94h], eax
		mov     [edi*4+___68e14h], eax
		mov     [edi+___68e94h], al
		inc     edi
		cmp     edi, byte 20h
		jb      short ___691bdh
		mov     [___68d70h], eax
		popad   
		retn    
