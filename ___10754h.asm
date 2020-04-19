cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___19bd60h
	extern 	CONNECTION_TYPE
	extern 	___199f9ch
	extern 	___63b20h

section .text

__GDECL(___10754h)
		push    8
		call    near __CHK
		push    edx
		cmp     dword [___19bd60h], byte 0
		je      short ___10781h
		cmp     dword [CONNECTION_TYPE], byte 2
		jne     short ___10781h
		mov     eax, 1
		mov     edx, [___199f9ch]

	push 	ecx
	push 	edx
	push 	eax
		call    ___63b20h
	add 	esp, 8
	pop  	ecx

___10781h:
		pop     edx
		retn    
