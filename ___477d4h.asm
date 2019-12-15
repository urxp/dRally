cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___243d4ch
	extern	___243d70h

section .text

__GDECL(___477d4h)
		push    10h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		mov     ecx, 3c90h
		mov     esi, [___243d4ch]
		mov     edi, [___243d70h]
		call 	__MOVS
		pop     edi
		pop     esi
		pop     ecx
		retn    
