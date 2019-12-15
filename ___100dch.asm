cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___5a101h
	extern 	VGA3_SETMODE
	extern 	___1800c4h
	extern 	printf_
	extern 	exit_

section .text

__GDECL(___100dch)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		call    near ___5a101h
		call    near VGA3_SETMODE
		push    ___1800c4h
		call    near printf_
		add     esp, byte 4
		mov     eax, 70h
		call    near exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn   
