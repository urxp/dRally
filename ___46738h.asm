cpu 386
%include "macros.inc"

	extern	__CHK
	extern	memset_
	extern	___196e74h
	extern	___196e78h
	extern	___243300h
	extern	___183501h
	extern	___1a51d0h
	extern	___1a51d1h
	extern	___1a51d2h
	extern	___1a42b4h
	extern	___1a42b8h
	extern	___1a42bch
	extern	___1a54d0h
	extern 	VGA13_PRESENTSCREEN
	extern 	VGA13_ACTIVESCREEN

section .text

__GDECL(___46738h__VGA13_PRESENTCLEARSCREEN)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, 0fa00h
		;mov     eax, 0a0000h
	mov 	eax, VGA13_ACTIVESCREEN
		xor     edx, edx
		call    near memset_
	call 	VGA13_PRESENTSCREEN
		pop     edx
		pop     ebx
		retn    
