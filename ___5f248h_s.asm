cpu 386
%include "macros.inc"

	extern	___5ed38h
	extern	___24cc7ch
	extern	___24cc84h
	extern	___24cc80h

section .text

__GDECL(___5f248h)
		push    ebx
		mov     ebx, eax
		and     edx, 0ffh
		call    near ___5ed38h
		mov     [___24cc7ch], eax
		mov     [___24cc84h], eax
		lea     edx, [eax+ebx*1]
		mov     [___24cc80h], edx
		pop     ebx
		retn    
