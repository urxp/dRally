cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___183340h
	extern	___1a54d0h
	extern	___1831f4h
	extern	bpa_read
	extern	___243d50h
	extern	bpk_decode2

section .text

__GDECL(___43db0h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ebx, ___183340h
		mov     edx, ___1a54d0h
		mov     eax, ___1831f4h
		call    near bpa_read
		push    ___1a54d0h
		mov     edx, [___243d50h]
		push    edx
		call    near bpk_decode2
		pop     edx
		pop     ecx
		pop     ebx
		retn    
