cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___112d4h__VGA_GETTYPE
	extern 	___12bd4h__VESA101_SETBANK

section .text
		
__GDECL(___12c38h__VESA101_CHECKBANKS)

        xor     eax, eax
		retn
