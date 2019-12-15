cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___19bd64h
	extern	___243dd0h
	extern	___182fb0h
	extern	___42f04h
	extern	___4313ch
	extern	___432d8h
	extern	___43b14h
	extern	___43984h
	extern	___43488h
	extern	___43744h
	extern	___43884h
	extern	___43db0h
	extern	___43de8h
	extern	___43e20h
	extern	___42be4h

section .text

__GDECL(___42824h)
		push    10h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		mov     esi, ___19bd64h
		mov     edi, ___243dd0h
		call 	__STRCPY
		mov     esi, ___182fb0h
		call 	__STRCAT
		call    near ___42f04h
		call    near ___4313ch
		call    near ___432d8h
		call    near ___43b14h
		call    near ___43984h
		call    near ___43488h
		call    near ___43744h
		call    near ___43884h
		call    near ___43db0h
		call    near ___43de8h
		call    near ___43e20h
		call    near ___42be4h
		pop     edi
		pop     esi
		pop     ecx
		retn    
