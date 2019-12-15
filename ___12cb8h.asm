cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___12bd4h__VESA101_SETBANK
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR

section .text

__GDECL(___12cb8h__VESA101_PRESENTSCREEN)
		push    10h
		call    __CHK
		push    ecx
		push    esi
		push    edi
		mov     ecx, 4000h
		xor     eax, eax
		mov     edi, 0a0000h
		call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		rep movsd   
		mov     eax, 1
		mov     ecx, 4000h
		call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 10000h
		rep movsd   
		mov     eax, 2
		mov     ecx, 4000h
		call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 20000h
		rep movsd   
		mov     eax, 3
		mov     ecx, 4000h
		call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 30000h
		rep movsd   
		mov     eax, 4
		mov     ecx, 2c00h
		call    ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 40000h
		rep movsd   
		pop     edi
		pop     esi
		pop     ecx
		retn    
__GDECL(___12d6ch__VESA101_PRESENTBOTTOMSCREEN)
		push    10h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		mov     eax, 3
		mov     ecx, 4000h
		call    near ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 30000h
		rep movsd   
		mov     eax, 4
		mov     ecx, 2c00h
		call    near ___12bd4h__VESA101_SETBANK
		mov     esi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, 0a0000h
		add     esi, 40000h
		rep movsd   
		pop     edi
		pop     esi
		pop     ecx
		retn   
