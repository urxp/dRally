cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___3f71ch__allocateMemory
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1100h__VESA101h_DefaultScreenBuffer

section .text

__GDECL(___117d4h)
		push    4
		call    near __CHK
		mov     eax, 4b000h
		call    near ___3f71ch__allocateMemory
		mov     [___1a112ch__VESA101_ACTIVESCREEN_PTR], eax
		mov     [___1a1100h__VESA101h_DefaultScreenBuffer], eax
		retn    
