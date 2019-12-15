cpu 386
%include "macros.inc"

	extern	__CHK
 	extern 	DISPLAY_WAIT_IF_DISABLED
 	extern 	DISPLAY_WAIT_IF_ENABLED

section .text

__GDECL(___44a4ch)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     ecx, eax
		xor     ebx, ebx
		test    eax, eax
		jle     short ___44a74h
___44a61h:
		inc     ebx
 		call 	DISPLAY_WAIT_IF_DISABLED
 		call 	DISPLAY_WAIT_IF_ENABLED
		cmp     ebx, ecx
		jl      short ___44a61h
___44a74h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
