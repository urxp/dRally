cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRLEN
	extern	___180134h
	extern	___182bbch
	extern	fopen_
	extern	___1a0d60h
	extern	___182bc8h
	extern	fscanf_
	extern	___1a0d5fh
	extern	___182bcch
	extern	___182bd0h
	extern	printf_
	extern	___5a101h
	extern	___5ec04h_freeMemPool
	extern	exit_

section .text

__GDECL(___3e3cch)
		push    20h
		call    near __CHK
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, ___180134h
		mov     eax, ___182bbch
		call    near fopen_
		test    eax, eax
		je      short ___3e449h
		push    ___1a0d60h
		push    ___182bc8h
		push    eax
		call    near fscanf_
		add     esp, byte 0ch
		mov     edi, ___1a0d60h
		call 	__STRLEN
		cmp     byte [ecx+___1a0d5fh], 5ch
		je      short ___3e46ah
		mov     esi, ___182bcch
		mov     edi, ___1a0d60h
		call 	__STRCAT
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		retn    
___3e449h:
		push    ___182bd0h
		call    near printf_
		add     esp, byte 4
		call    near ___5a101h
		call    near ___5ec04h_freeMemPool
		mov     eax, 70h
		call    near exit_
___3e46ah:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		retn    
