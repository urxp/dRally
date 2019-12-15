cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a0fd8h

section .text

__GDECL(___38708h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     edx, 18810h
		mov     ebx, 46c80h
___38721h:
		mov     ecx, 110h
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a0fd8h]
		add     edi, ebx
		add     esi, edx
		add     edi, 162h
		call 	__MOVS
		add     edx, 110h
		add     ebx, 280h
		cmp     edx, 19a20h
		jne     short ___38721h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
