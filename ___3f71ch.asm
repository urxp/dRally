cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___5ed38h
	extern	___5ec04h
	extern	VGA3_SETMODE
	extern	___182df4h
	extern	printf_
	extern	___182e20h
	extern	___19bd60h
	extern	___623d4h
	extern	exit_

section .text

__GDECL(___3f71ch__allocateMemory)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		xor     edx, edx
		call    near ___5ed38h
		mov     esi, eax
		test    eax, eax
		jne     short ___3f774h
		call    near ___5ec04h
		call    near VGA3_SETMODE
		push    ___182df4h
		call    near printf_
		add     esp, byte 4
		push    ___182e20h
		call    near printf_
		mov     edx, [___19bd60h]
		add     esp, byte 4
		test    edx, edx
		je      short ___3f76ah
		call    near ___623d4h
___3f76ah:
		mov     eax, 70h
		call    near exit_
___3f774h:
		mov     eax, esi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
