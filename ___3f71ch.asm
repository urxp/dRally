cpu 386
%include "macros.inc"

	extern	__CHK
	extern	dRally_Memory_alloc
	extern	dRally_System_clean
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

	push 	ecx
	push 	edx
	push 	eax
		call    near dRally_Memory_alloc
	add 	esp, 8
	pop 	ecx

		mov     esi, eax
		test    eax, eax
		jne     short ___3f774h

	push 	eax
	push 	ecx
	push 	edx
		call    dRally_System_clean
	pop 	edx
	pop 	ecx
	pop 	eax
	
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
