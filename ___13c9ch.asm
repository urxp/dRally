cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset_
	extern 	___12cb8h__VESA101_PRESENTSCREEN

section .text

__GDECL(___13c9ch)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		mov     esi, eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		xor     ecx, ecx
		add     esi, eax
___13cbbh:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, 14h
		add     eax, esi
		mov     edx, 0c4h
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3200h
		jne     short ___13cbbh
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     esi
		pop     ecx
		pop     ebx
		retn    
