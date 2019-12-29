cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2b318h
	extern	___58c60h
	extern	dRally_Audio_setMasterVolume
	extern	___19eb50h
	extern	___19eb54h
	extern	___19eb58h
	extern	DISPLAY_SET_PALETTE_COLOR

section .text

__GDECL(___3d79ch)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 8
		call    near ___2b318h
		mov     edx, 0ffdch
		mov     ebp, 640000h
		mov     [esp], edx
___3d7c1h:
		call    near ___58c60h
		mov     eax, [esp]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Audio_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     esi, ebp
		xor     ecx, ecx
		xor     edi, edi
		mov     [esp+4], ecx
___3d7d8h:
		xor     eax, eax
		mov     al, [esp+4]
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb50h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb54h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		mov     edx, esi
		mov     eax, [edi+___19eb58h]
		imul    edx
		add     eax, 8000h
		adc     edx, byte 0
		shrd    eax, edx, 10h
		add     eax, 8000h
		sar     eax, 10h
		and     eax, 0ffh
		push    eax
		call    near DISPLAY_SET_PALETTE_COLOR
		mov     eax, [esp+4]
		inc     eax
		add     edi, byte 0ch
		mov     [esp+4], eax
		cmp     eax, dword 100h
		jl      near ___3d7d8h
		mov     ebx, [esp]
		sub     ebx, 0a3ch
		sub     ebp, 40000h
		mov     [esp], ebx
		cmp     ebp, 0fffc0000h
		jne     near ___3d7c1h
		add     esp, byte 8
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
