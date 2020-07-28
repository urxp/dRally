cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___185a68h
	extern 	___185a74h
	extern 	___185a64h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___185a60h
	extern 	memset
	extern 	___1a1e68h
	extern 	___1a10f4h
	extern 	___1398ch__VESA101_PRESENTRECTANGLE

section .text

__GDECL(___13a98h_cdecl)
	mov 	eax, [esp+4]
	call 	___13a98h
	retn

__GDECL(___13a98h)
		push    20h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		lea     ebp, [eax*8+0]
		sub     ebp, eax
		shl     ebp, 2
		mov     edx, [ebp+___185a68h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		imul    eax, [ebp+___185a74h]
		add     eax, 1b89h
		xor     ecx, ecx
		mov     [esp], eax
		mov     esi, 14h
___13adfh:
		mov     eax, [ebp+___185a64h]
		add     eax, ecx
		imul    eax, eax, 280h
		mov     edx, [esp]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ebx, [ebp+___185a60h]
		add     eax, edx
		mov     edx, 0c4h
		add     eax, ebx
		mov     ebx, esi
		inc     ecx
		
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    memset
	add 	esp, 0ch
	pop 	ecx

		cmp     ecx, byte 14h
		jl      short ___13adfh
		mov     edx, [ebp+___185a64h]
		lea     eax, [edx*4+0]
		add     edx, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     edx, 7
		mov     ecx, [ebp+___185a60h]
		add     eax, edx
		mov     ebx, [esp]
		add     eax, ecx
		mov     edx, [___1a1e68h]
		add     ebx, eax
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 3
		mov     esi, [___1a10f4h]
		add     eax, edx
		mov     ecx, 14h
		shl     eax, 4
		mov     edx, ecx
		add     esi, eax
___13b5fh:
		mov     edi, edx
___13b61h:
		mov     al, [esi]
		or      al, al
		je      short ___13b69h
		mov     [ebx], al
___13b69h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13b61h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13b5fh
		mov     edx, [ebp+___185a64h]
		mov     edi, [esp]
		lea     eax, [edx*4+0]
		mov     ecx, 14h
		add     eax, edx
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     eax, 7
		mov     esi, [ebp+___185a60h]
		add     edx, eax
		mov     ebx, ecx
		add     edx, esi
		add     eax, esi
		add     edx, edi
		add     eax, edi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     esi, [___1a1e68h]
		inc     esi
		mov     [___1a1e68h], esi
		cmp     esi, byte 31h
		jle     short ___13bcah
		xor     ebp, ebp
		mov     [___1a1e68h], ebp
___13bcah:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
