cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e84h
	extern 	___196aa8h
	extern 	___1a1ef8h
	extern 	___1806b0h
	extern 	___1a0210h
	extern 	___1806b8h
	extern 	___1806dch
	extern 	___1806c0h
	extern 	___1806c8h
	extern 	___1806e4h
	extern 	___18b552h
	extern 	___13094h
	extern 	___18b5a2h
	extern 	___18b5f2h
	extern 	___18b642h
	extern 	___18b692h
	extern 	___18b6e2h
	extern 	___18b732h
	extern 	___1a1ff1h
	extern 	___1806e8h
	extern 	___18b782h
	extern 	___1806f8h
	extern 	___18b7d2h
	extern 	___18b822h
	extern 	___180708h
	extern 	___18070ch
	extern 	___18b872h
	extern 	___18b8c2h
	extern 	___18b912h
	extern 	___18b962h
	extern 	___18b9b2h
	extern 	___18ba02h
	extern 	___18ba52h
	extern 	___18baa2h
	extern 	___18baf2h
	extern 	___18bb42h
	extern 	___14c50h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl

section .text

__GDECL(___15e3ch)
		push    6ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4ch
		mov     edx, 21h
		mov     ebp, 83h
		push    byte 1
		mov     ecx, 0e6h
		mov     eax, 21h
		xor     ebx, ebx
		mov     [esp+4ch], edx
		mov     [esp+44h], ebx
		mov     ebx, 1e2h
		mov     edx, ebp
		call    near ___13248h
		mov     ecx, 80h
		mov     edx, 68h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e84h]
		add     ebx, 1a42dh
___15e97h:
		mov     edi, edx
___15e99h:
		mov     al, [esi]
		or      al, al
		je      short ___15ea1h
		mov     [ebx], al
___15ea1h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___15e99h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___15e97h
		mov     ecx, [___196aa8h]
		test    ecx, ecx
		jle     near ___16258h
		cmp     ecx, byte 1
		jne     short ___15eeeh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		lea     edi, [esp+34h]
		shl     eax, 2
		mov     esi, ___1806b0h
		sub     eax, edx
		movsd   
		movsb   
		add     dword [eax*4+___1a0210h], 1770h
___15eeeh:
		cmp     dword [___196aa8h], byte 2
		jne     short ___15f2ah
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     edx, [eax*4+___1a0210h]
		mov     esi, ___1806b8h
		add     edx, 0fa0h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], edx
___15f2ah:
		cmp     dword [___196aa8h], byte 3
		jne     short ___15f66h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     ecx, [eax*4+___1a0210h]
		mov     esi, ___1806dch
		add     ecx, 0bb8h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], ecx
___15f66h:
		cmp     dword [___196aa8h], byte 4
		jne     short ___15f99h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		lea     edi, [esp+34h]
		shl     eax, 2
		mov     esi, ___1806c0h
		sub     eax, edx
		movsd   
		movsb   
		add     dword [eax*4+___1a0210h], 7d0h
___15f99h:
		cmp     dword [___196aa8h], byte 5
		jne     short ___15fd5h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     edx, [eax*4+___1a0210h]
		mov     esi, ___1806c8h
		add     edx, 3e8h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], edx
___15fd5h:
		cmp     dword [___196aa8h], byte 6
		jne     short ___16006h
		mov     eax, [___1806e4h]
		mov     edx, [___1a1ef8h]
		mov     [esp+34h], eax
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		add     dword [eax*4+___1a0210h], 1f4h
___16006h:
		lea     edx, [ebp+25h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+48h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b552h
		call    near ___13094h
		lea     edx, [ebp+35h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b5a2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+45h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b5f2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+55h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b642h
		call    near ___13094h
		lea     edx, [ebp+65h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b692h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+75h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     edi, esp
		lea     edx, [esi+eax*1]
		mov     eax, ___18b6e2h
		add     edx, 80h
		mov     esi, ___18b732h
		call    near ___13094h
		call 	__STRCPY
		mov     esi, ___1a1ff1h
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1806e8h
		mov     edi, esp
		call 	__STRCAT
		lea     edx, [ebp+85h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		mov     esi, ___18b782h
		add     edx, eax
		mov     eax, esp
		add     edx, 80h
		mov     edi, esp
		call    near ___13094h
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1806f8h
		mov     edi, esp
		lea     edx, [ebp+95h]
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     edx, eax
		mov     eax, esp
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+0a5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     eax, edx
		lea     edx, [eax+80h]
		mov     eax, ___18b7d2h
		call    near ___13094h
		lea     edx, [ebp+0b5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___18b822h
		add     edx, 80h
		call    near ___13094h
		jmp     near ___16494h
___16258h:
		cmp     ecx, byte 0ffffffffh
		jne     short ___16270h
		lea     edi, [esp+34h]
		mov     esi, ___1806dch
		movsd   
		movsb   
		mov     dword [esp+44h], 0bb8h
___16270h:
		cmp     dword [___196aa8h], byte 0fffffffeh
		jne     short ___1628dh
		mov     edx, 7d0h
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		mov     [esp+44h], edx
		movsd   
		movsb   
___1628dh:
		cmp     dword [___196aa8h], byte 0fffffffdh
		jne     short ___162aah
		mov     ecx, 3e8h
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+44h], ecx
		movsd   
		movsb   
___162aah:
		cmp     dword [___196aa8h], byte 0fffffffch
		jne     short ___162c5h
		mov     edi, 2eeh
		mov     eax, [___180708h]
		mov     [esp+44h], edi
		mov     [esp+34h], eax
___162c5h:
		cmp     dword [___196aa8h], byte 0fffffffbh
		jne     short ___162e0h
		mov     edx, 1f4h
		mov     eax, [___1806e4h]
		mov     [esp+44h], edx
		mov     [esp+34h], eax
___162e0h:
		cmp     dword [___196aa8h], byte 0fffffffah
		jne     short ___162fbh
		mov     ecx, 0fah
		mov     eax, [___18070ch]
		mov     [esp+44h], ecx
		mov     [esp+34h], eax
___162fbh:
		lea     edx, [ebp+25h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+48h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b872h
		call    near ___13094h
		lea     edx, [ebp+35h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b8c2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+45h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b912h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+55h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b962h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+65h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b9b2h
		call    near ___13094h
		lea     edx, [ebp+75h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18ba02h
		call    near ___13094h
		lea     edx, [ebp+85h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18ba52h
		call    near ___13094h
		lea     edx, [ebp+95h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18baa2h
		call    near ___13094h
		lea     edx, [ebp+0a5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18baf2h
		call    near ___13094h
		lea     edx, [ebp+0b5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18bb42h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     ebx, [esp+44h]
		mov     edx, [eax+___1a0210h]
		cmp     edx, ebx
		jl      short ___16489h
		mov     ecx, edx
		sub     ecx, ebx
		mov     [eax+___1a0210h], ecx
		jmp     short ___16494h
___16489h:
		mov     eax, ebx
		call    near ___14c50h
		mov     [esp+40h], eax
___16494h:
		lea     edx, [ebp+0b9h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, ___180694h
		lea     ecx, [eax+0c0h]
		mov     edx, ___185ba9h
		mov     eax, [___1a10cch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     eax, [esp+40h]
		add     esp, byte 4ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
