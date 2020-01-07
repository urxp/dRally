cpu 386
%include "macros.inc"

	extern	__CHK
	extern	CONFIG_WRITE
	extern	___12200h
	extern	___12a54h
	extern	___24ec0h
	extern	___2fc50h
	extern	___64a28h_cdecl
	extern	dRally_System_clean
	extern	___5a101h
	extern	___19bd60h
	extern	___623d4h
	extern	VGA3_SETMODE
	extern	___1826f4h
	extern	printf_
	extern	exit_

section .text

__GDECL(___3aaf8h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		call    near CONFIG_WRITE
		call    near ___12200h
		call    near ___12a54h
		call    near ___24ec0h
		call    near ___2fc50h
	push 	eax
	push 	ecx
	push 	edx
		call    near ___64a28h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax

	push 	eax
	push 	ecx
	push 	edx
		call    dRally_System_clean
	pop 	edx
	pop 	ecx
	pop 	eax
	
		call    near ___5a101h
		cmp     dword [___19bd60h], byte 0
		je      short ___3ab3bh
		call    near ___623d4h
___3ab3bh:
		call    near VGA3_SETMODE
		push    ___1826f4h
		call    near printf_
		add     esp, byte 4
		mov     eax, 70h
		call    near exit_
		pop     edx
		pop     ecx
		pop     ebx
		retn    
