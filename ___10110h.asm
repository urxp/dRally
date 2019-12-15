cpu 386
%include "macros.inc"

	extern 	VGA3_SETMODE
	extern 	VGA3_SET_CURSORSHAPE
	extern 	VGA3_SET_CURSORPOSITION

section .text

__GDECL(___10110h)
		call 	VGA3_SETMODE
		mov 	eax, 708h
		call 	VGA3_SET_CURSORSHAPE
		mov 	eax, 1700h
		call 	VGA3_SET_CURSORPOSITION
		retn    
