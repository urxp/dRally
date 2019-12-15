cpu 386
%include "macros.inc"

	extern	__CHK
	extern	VGA3_SETMODE
	extern	___183030h
	extern	printf_
	extern	___183048h
	extern	___5a101h
	extern	exit_

section .text

__GDECL(___42944h)
		push    1ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     esi, eax
		call    near VGA3_SETMODE
		push    esi
		push    ___183030h
		call    near printf_
		add     esp, byte 8
		push    ___183048h
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		mov     eax, 70h
		call    near exit_
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
