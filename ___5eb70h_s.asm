cpu 386
%include "macros.inc"

	extern	___60030h
	extern	memset_
	extern	___24ccb0h
	extern	___5f2e4h

section .text

__GDECL(___5eb70h)
		push    ebx
		push    edx
		call    near ___60030h
		mov     edx, 10000h
		mov     eax, ___24ccb0h
		xor     ebx, ebx
		call    near ___5f2e4h
		mov     ebx, 10000h
		mov     eax, [___24ccb0h]
		xor     edx, edx
		call    near memset_
		pop     edx
		pop     ebx
		retn    
