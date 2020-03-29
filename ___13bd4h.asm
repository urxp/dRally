cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset_
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE

section .text


__GDECL(___13bd4h_cdecl)
	mov 	edx, [esp+8]
	mov 	eax, [esp+4]
	call	___13bd4h
	retn

__GDECL(___13bd4h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		mov     ebp, eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		xor     ecx, ecx
		add     ebp, eax
		mov     esi, 14h
___13bfah:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, ecx
		add     ecx, 280h
		call    near memset_
		cmp     ecx, 3200h
		jne     short ___13bfah
		mov     ecx, [___1a1e68h]
		lea     eax, [ecx*4+0]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		sub     eax, ecx
		mov     esi, [___1a10f4h]
		shl     eax, 3
		add     ebx, ebp
		add     eax, ecx
		mov     ecx, 14h
		shl     eax, 4
		mov     edx, ecx
		add     esi, eax
___13c4bh:
		mov     edi, edx
___13c4dh:
		mov     al, [esi]
		or      al, al
		je      short ___13c55h
		mov     [ebx], al
___13c55h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13c4dh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13c4bh
		mov     ecx, 14h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, ebp
		mov     ebx, ecx
		add     edx, ebp

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edx, [___1a1e68h]
		inc     edx
		mov     [___1a1e68h], edx
		cmp     edx, byte 31h
		jle     short ___13c95h
		xor     ecx, ecx
		mov     [___1a1e68h], ecx
___13c95h:
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
