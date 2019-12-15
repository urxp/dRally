cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ef8h
	extern	___185a14h
	extern	___1a01fch
	extern	___18e974h

section .text

__GDECL(___2b81ch)
		push    8
		call    near __CHK
		push    edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [___185a14h]
		shl     eax, 2
		test    edx, edx
		je      short ___2b872h
		mov     edx, [eax+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		mov     edx, eax
		shl     edx, 5
		mov     eax, [edx+___18e974h]
		mov     edx, eax
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		pop     edx
		retn    
___2b872h:
		mov     edx, [eax+___1a01fch]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 5
		mov     eax, [eax+___18e974h]
		pop     edx
		retn    
