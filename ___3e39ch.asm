cpu 386
%include "macros.inc"

	extern	__CHK
	extern	open_
	extern	filelength_
	extern	close_

section .text

__GDECL(GET_FILE_SIZE)
		push    14h
		call    near __CHK
		push    ebx
		push    edx
		push    200h
		push    eax
		call    near open_
		add     esp, byte 8
		mov     edx, eax
		call    near filelength_
		mov     ebx, eax
		mov     eax, edx
		call    near close_
		mov     eax, ebx
		pop     edx
		pop     ebx
		retn    
