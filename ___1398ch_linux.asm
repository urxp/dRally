cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___12bd4h__VESA101_SETBANK
	extern 	VESA101_ACTIVESCREEN
	extern 	VESA101_PRESENTSCREEN

section .text

;; ___1398ch__VESA101_PRESENTRECTANGLE(offset, src, w, h)
__GDECL(___1398ch__VESA101_PRESENTRECTANGLE)
		push    20h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, eax
		mov     [esp+0ch], edx
		mov     [esp], ecx
		sar     eax, 10h
		xor     edx, edx
		mov     esi, eax
		call    near ___12bd4h__VESA101_SETBANK
		mov     [esp+8], edx
		test    ecx, ecx
		jle     near ___13a91h
		mov     eax, 280h
		sub     eax, ebx
		mov     [esp+4], eax
___139c8h:
		mov     ecx, 10000h
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ecx
		add     edx, ebx
		cmp     edx, 0ffffh
		jge     short ___13a2bh
		mov     eax, ebp
		sar     eax, 10h
		cmp     esi, eax
		je      short ___139eeh
		call    near ___12bd4h__VESA101_SETBANK
___139eeh:
		mov     ecx, 10000h
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    ecx
		mov     esi, [esp+0ch]
		lea     edi, [ebp+VESA101_ACTIVESCREEN]
		mov     ecx, ebx
		call 	__MOVS
		mov     esi, ebp
		mov     eax, [esp+0ch]
		sar     esi, 10h
		add     eax, ebx
		add     ebp, ebx
		mov     [esp+0ch], eax
		jmp     short ___13a6dh
___13a2bh:
		xor     ecx, ecx
		test    ebx, ebx
		jle     short ___13a6dh
___13a31h:
		mov     eax, ebp
		sar     eax, 10h
		cmp     esi, eax
		je      short ___13a3fh
		call    near ___12bd4h__VESA101_SETBANK
___13a3fh:
		mov     esi, 10000h
		mov     edx, ebp
		mov     eax, ebp
		sar     edx, 1fh
		idiv    esi
		mov     eax, [esp+0ch]
		inc     ecx
		mov     al, [eax]
		mov     esi, ebp
		mov     [ebp+VESA101_ACTIVESCREEN], al
		mov     edx, [esp+0ch]
		sar     esi, 10h
		inc     edx
		inc     ebp
		mov     [esp+0ch], edx
		cmp     ecx, ebx
		jl      short ___13a31h
___13a6dh:
		mov     edi, [esp+4]
		mov     ecx, [esp+8]
		mov     edx, [esp+0ch]
		inc     ecx
		add     ebp, edi
		add     edx, edi
		mov     edi, [esp]
		mov     [esp+0ch], edx
		mov     [esp+8], ecx
		cmp     ecx, edi
		jl      near ___139c8h
___13a91h:
		call 	VESA101_PRESENTSCREEN
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn    
