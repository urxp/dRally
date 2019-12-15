cpu 386
%include "macros.inc"

	extern	__CHK
	extern	DPMI_GET_FREE_MEMORY_INFORMATION
	extern	___182940h
	extern	printf_
	extern	___182944h
	extern	___182990h
	extern	___1829e0h
	extern	___5a101h
	extern	___5ec04h
	extern	exit_

section .text

__GDECL(___3e164h)
		push    8
		call    near __CHK
		call    near DPMI_GET_FREE_MEMORY_INFORMATION
		cmp     eax, dword 57b0cch
		jge     short ___3e1c2h
		push    ___182940h
		call    near printf_
		add     esp, byte 4
		push    ___182944h
		call    near printf_
		add     esp, byte 4
		push    ___182990h
		call    near printf_
		add     esp, byte 4
		push    ___1829e0h
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		call    near ___5ec04h
		mov     eax, 70h
		call    near exit_
___3e1c2h:
		retn    
