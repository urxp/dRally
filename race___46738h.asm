cpu 386
%include "macros.inc"

	extern	__CHK
	extern	memset
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
	extern 	__VGA13_PRESENTSCREEN__
	extern 	VGA13_ACTIVESCREEN

section .text

__GDECL(race___46738h__VGA13_PRESENTCLEARSCREEN)
		push    0ch
		call    near __CHK
		push    ebx
		push    edx
		mov     ebx, 0fa00h
		;mov     eax, 0a0000h
	mov 	eax, VGA13_ACTIVESCREEN
		xor     edx, edx
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

	push 	edx
	push 	ecx
	call 	__VGA13_PRESENTSCREEN__
	pop		ecx
	pop 	edx

		pop     edx
		pop     ebx
		retn    
