cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a0f90h
	extern	___3f77ch__freeMemory
	extern	___1a0f88h
	extern	___1a0f84h
	extern	___1a0f98h
	extern	___1a0f8ch
	extern	___1a1114h
	extern	___1a0f94h

section .text

__GDECL(___2fc50h)
		push    4
		call    near __CHK
		mov     eax, [___1a0f90h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0f88h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0f84h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0f98h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0f8ch]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a1114h]
		call    near ___3f77ch__freeMemory
		mov     eax, [___1a0f94h]
		call    near ___3f77ch__freeMemory
		retn    
