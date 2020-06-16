cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	___13248h
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a1e80h
	extern 	___196aa4h
	extern 	___1a1ef8h
	extern 	___1806a0h
	extern 	___1a0210h
	extern 	___1806a8h
	extern 	___1806b0h
	extern 	___1806b8h
	extern 	___1806c0h
	extern 	___1806c8h
	extern 	___18af12h
	extern 	___13094h
	extern 	___18af62h
	extern 	___18afb2h
	extern 	___18b002h
	extern 	___18b052h
	extern 	___18b0a2h
	extern 	___18b0f2h
	extern 	___18b142h
	extern 	___1806d0h
	extern 	___18b192h
	extern 	___18b1e2h
	extern 	___1806dch
	extern 	___1806e4h
	extern 	___18b232h
	extern 	___18b282h
	extern 	___18b2d2h
	extern 	___18b322h
	extern 	___18b372h
	extern 	___18b3c2h
	extern 	___18b412h
	extern 	___18b462h
	extern 	___18b4b2h
	extern 	___18b502h
	extern 	___14c50h
	extern 	___180694h
	extern 	___185ba9h
	extern 	___1a10cch
	extern 	___12e78h_cdecl

section .text

__GDECL(___15808h)
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
		mov     esi, [___1a1e80h]
		add     ebx, 1a42dh
___15863h:
		mov     edi, edx
___15865h:
		mov     al, [esi]
		or      al, al
		je      short ___1586dh
		mov     [ebx], al
___1586dh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___15865h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___15863h
		mov     ecx, [___196aa4h]
		test    ecx, ecx
		jle     near ___15bb6h
		cmp     ecx, byte 1
		jne     short ___158bbh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		lea     edi, [esp+34h]
		shl     eax, 2
		mov     esi, ___1806a0h
		sub     eax, edx
		movsd   
		movsw   
		add     dword [eax*4+___1a0210h], 2ee0h
___158bbh:
		cmp     dword [___196aa4h], byte 2
		jne     short ___158f7h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     edx, [eax*4+___1a0210h]
		mov     esi, ___1806a8h
		add     edx, 1f40h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], edx
___158f7h:
		cmp     dword [___196aa4h], byte 3
		jne     short ___15933h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     ecx, [eax*4+___1a0210h]
		mov     esi, ___1806b0h
		add     ecx, 1770h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], ecx
___15933h:
		cmp     dword [___196aa4h], byte 4
		jne     short ___15966h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		lea     edi, [esp+34h]
		shl     eax, 2
		mov     esi, ___1806b8h
		sub     eax, edx
		movsd   
		movsb   
		add     dword [eax*4+___1a0210h], 0fa0h
___15966h:
		cmp     dword [___196aa4h], byte 5
		jne     short ___159a2h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     edx, [eax*4+___1a0210h]
		mov     esi, ___1806c0h
		add     edx, 7d0h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], edx
___159a2h:
		cmp     dword [___196aa4h], byte 6
		jne     short ___159deh
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edi, [esp+34h]
		mov     ecx, [eax*4+___1a0210h]
		mov     esi, ___1806c8h
		add     ecx, 3e8h
		movsd   
		movsb   
		mov     [eax*4+___1a0210h], ecx
___159deh:
		lea     edx, [ebp+25h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+48h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18af12h
		call    near ___13094h
		lea     edx, [ebp+35h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18af62h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+45h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18afb2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+55h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b002h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+65h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b052h
		call    near ___13094h
		lea     edx, [ebp+75h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b0a2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+85h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     edi, esp
		mov     eax, ___18b0f2h
		mov     esi, ___18b142h
		call    near ___13094h
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		call 	__STRCAT
		mov     esi, ___1806d0h
		mov     edi, esp
		lea     edx, [ebp+95h]
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ebx, [esp+48h]
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, esp
		call    near ___13094h
		lea     edx, [ebp+0a5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___18b192h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+0b5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___18b1e2h
		add     edx, 80h
		call    near ___13094h
		jmp     near ___15dffh
___15bb6h:
		cmp     ecx, byte 0ffffffffh
		jne     short ___15bceh
		lea     edi, [esp+34h]
		mov     esi, ___1806b0h
		movsd   
		movsb   
		mov     dword [esp+44h], 1770h
___15bceh:
		cmp     dword [___196aa4h], byte 0fffffffeh
		jne     short ___15bebh
		mov     edx, 0fa0h
		lea     edi, [esp+34h]
		mov     esi, ___1806b8h
		mov     [esp+44h], edx
		movsd   
		movsb   
___15bebh:
		cmp     dword [___196aa4h], byte 0fffffffdh
		jne     short ___15c08h
		mov     ecx, 0bb8h
		lea     edi, [esp+34h]
		mov     esi, ___1806dch
		mov     [esp+44h], ecx
		movsd   
		movsb   
___15c08h:
		cmp     dword [___196aa4h], byte 0fffffffch
		jne     short ___15c24h
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		movsd   
		movsb   
		mov     dword [esp+44h], 7d0h
___15c24h:
		cmp     dword [___196aa4h], byte 0fffffffbh
		jne     short ___15c41h
		mov     edx, 3e8h
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+44h], edx
		movsd   
		movsb   
___15c41h:
		cmp     dword [___196aa4h], byte 0fffffffah
		jne     short ___15c5ch
		mov     ecx, 1f4h
		mov     eax, [___1806e4h]
		mov     [esp+44h], ecx
		mov     [esp+34h], eax
___15c5ch:
		lea     edx, [ebp+25h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___18b232h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+35h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___18b282h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+45h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+48h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___18b2d2h
		add     edx, 80h
		call    near ___13094h
		lea     edx, [ebp+55h]
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+48h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b322h
		call    near ___13094h
		lea     edx, [ebp+65h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b372h
		call    near ___13094h
		lea     edx, [ebp+75h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b3c2h
		call    near ___13094h
		lea     edx, [ebp+85h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b412h
		call    near ___13094h
		lea     edx, [ebp+95h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b462h
		call    near ___13094h
		lea     edx, [ebp+0a5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___18b4b2h
		call    near ___13094h
		lea     edx, [ebp+0b5h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___18b502h
		add     edx, 80h
		call    near ___13094h
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		mov     edi, [esp+44h]
		mov     edx, [eax+___1a0210h]
		cmp     edx, edi
		jl      short ___15df4h
		mov     ebx, edx
		sub     ebx, edi
		mov     [eax+___1a0210h], ebx
		jmp     short ___15dffh
___15df4h:
		mov     eax, edi
		call    near ___14c50h
		mov     [esp+40h], eax
___15dffh:
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
