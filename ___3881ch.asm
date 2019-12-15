cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1114h

section .text

__GDECL(___3881ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ebx, 0fa00h
		xor     edx, edx
___38832h:
		mov     ecx, 168h
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1114h]
		add     edi, ebx
		add     esi, edx
		add     edi, 108h
		call 	__MOVS
		add     edx, 168h
		add     ebx, 280h
		cmp     edx, 1c20h
		jne     short ___38832h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
