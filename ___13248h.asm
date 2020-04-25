cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	memset_
	extern 	___1a10d8h
	extern 	___1a10f0h

section .text

__GDECL(___13248h_cdecl)
	push 	ebx

	mov 	eax, [esp+18h]
	push 	eax

	mov 	ecx, [esp+18h]
	mov 	ebx, [esp+14h]
	mov 	edx, [esp+10h]
	mov 	eax, [esp+0ch]

	call 	___13248h
	pop 	ebx
	retn


__GDECL(___13248h)
		push    28h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     ebp, eax
		mov     [esp+10h], edx
		mov     [esp+14h], ebx
		mov     [esp+0ch], ecx
		lea     eax, [ecx-8]
		lea     edi, [edx*4+0]
		add     edi, edx
		mov     edx, eax
		shl     eax, 2
		lea     esi, [ebx-6]
		add     eax, edx
		shl     edi, 7
		shl     eax, 7
		lea     ebx, [edi+500h]
		add     eax, 500h
		add     edi, eax
		mov     ecx, ebx
		cmp     ebx, edi
		jge     short ___132b7h
___13295h:
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, ecx
		mov     edx, 0c4h
		add     eax, ebp
		mov     ebx, esi
		add     eax, byte 2
		add     ecx, 280h
		call    near memset_
		cmp     ecx, edi
		jl      short ___13295h
___132b7h:
		mov     ebx, [esp+10h]
		add     ebx, [esp+0ch]
		mov     edx, [esp+10h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx-14h]
		mov     [esp+4], eax
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     ebx, [esp+28h]
		mov     [esp+8], eax
		test    ebx, ebx
		jne     near ___133ceh
		mov     esi, [esp+4]
		mov     ecx, 14h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 20h
		add     ebx, esi
		mov     esi, [___1a10d8h]
		add     ebx, ebp
___13310h:
		mov     edi, edx
___13312h:
		mov     al, [esi]
		or      al, al
		je      short ___1331ah
		mov     [ebx], al
___1331ah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13312h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13310h
		mov     edi, [esp+4]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     eax, edi
		mov     ecx, 14h
		lea     ebx, [eax+ebp*1]
		mov     edx, 20h
		mov     eax, [esp+14h]
		mov     esi, [___1a10d8h]
		add     ebx, eax
		add     esi, 280h
		sub     ebx, byte 20h
___13357h:
		mov     edi, edx
___13359h:
		mov     al, [esi]
		or      al, al
		je      short ___13361h
		mov     [ebx], al
___13361h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13359h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13357h
		mov     edx, [esp+8]
		mov     ecx, 14h
		mov     esi, [___1a10d8h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 500h
		add     eax, edx
		mov     edx, 20h
		lea     ebx, [eax+ebp*1]
___13395h:
		mov     edi, edx
___13397h:
		mov     al, [esi]
		or      al, al
		je      short ___1339fh
		mov     [ebx], al
___1339fh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13397h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13395h
		mov     ebx, [esp+8]
		mov     ecx, [esp+14h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 20h
		add     eax, ebx
		mov     esi, [___1a10d8h]
		jmp     near ___134a5h
___133ceh:
		mov     ecx, [esp+4]
		mov     edx, 20h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10f0h]
		add     eax, ecx
		mov     ecx, 14h
		lea     ebx, [eax+ebp*1]
___133ech:
		mov     edi, edx
___133eeh:
		mov     al, [esi]
		or      al, al
		je      short ___133f6h
		mov     [ebx], al
___133f6h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___133eeh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___133ech
		mov     esi, [esp+4]
		mov     edi, [esp+14h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 14h
		add     eax, esi
		mov     edx, 20h
		lea     ebx, [eax+ebp*1]
		mov     esi, [___1a10f0h]
		add     ebx, edi
		add     esi, 280h
		sub     ebx, byte 20h
___13433h:
		mov     edi, edx
___13435h:
		mov     al, [esi]
		or      al, al
		je      short ___1343dh
		mov     [ebx], al
___1343dh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13435h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13433h
		mov     edx, [esp+8]
		mov     ecx, 14h
		mov     esi, [___1a10f0h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 500h
		add     eax, edx
		mov     edx, 20h
		lea     ebx, [eax+ebp*1]
___13471h:
		mov     edi, edx
___13473h:
		mov     al, [esi]
		or      al, al
		je      short ___1347bh
		mov     [ebx], al
___1347bh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___13473h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13471h
		mov     ebx, [esp+8]
		mov     ecx, [esp+14h]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 20h
		add     eax, ebx
		mov     esi, [___1a10f0h]
___134a5h:
		add     eax, ebp
		add     esi, 780h
		add     eax, ecx
		mov     ecx, 14h
		lea     ebx, [eax-20h]
___134b7h:
		mov     edi, edx
___134b9h:
		mov     al, [esi]
		or      al, al
		je      short ___134c1h
		mov     [ebx], al
___134c1h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___134b9h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___134b7h
		cmp     dword [esp+28h], byte 0
		jne     short ___134dfh
		mov     eax, 4
		jmp     short ___134e4h
___134dfh:
		mov     eax, 7
___134e4h:
		mov     ecx, [esp+10h]
		inc     ecx
		mov     esi, [esp+14h]
		lea     edi, [ecx*4+0]
		xor     edx, edx
		add     edi, ecx
		sub     esi, byte 40h
		shl     edi, 7
		test    esi, esi
		jle     short ___13515h
___13502h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ecx, edi
		inc     edx
		add     ecx, ebp
		mov     [ecx+edx*1+1fh], al
		cmp     edx, esi
		jl      short ___13502h
___13515h:
		mov     ebx, [esp+10h]
		add     ebx, [esp+0ch]
		sub     ebx, byte 7
		mov     esi, [esp+14h]
		lea     edi, [ebx*4+0]
		xor     edx, edx
		add     edi, ebx
		sub     esi, byte 40h
		shl     edi, 7
		test    esi, esi
		jle     short ___1354ch
___13539h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ecx, edi
		inc     edx
		add     ecx, ebp
		mov     [ecx+edx*1+1fh], al
		cmp     edx, esi
		jl      short ___13539h
___1354ch:
		mov     ecx, [esp+0ch]
		sub     ecx, byte 28h
		mov     ebx, [esp+10h]
		mov     [esp], ecx
		lea     esi, [ebx*4+0]
		mov     edi, [esp]
		shl     ecx, 2
		add     esi, ebx
		add     ecx, edi
		shl     esi, 7
		shl     ecx, 7
		lea     ebx, [esi+3200h]
		add     ecx, 3200h
		add     esi, ecx
		mov     edx, ebx
		cmp     ebx, esi
		jge     short ___1359bh
___13585h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ecx, edx
		add     edx, 280h
		mov     [ecx+ebp*1+1], al
		cmp     edx, esi
		jl      short ___13585h
___1359bh:
		mov     ecx, [esp+0ch]
		mov     ebx, [esp+10h]
		sub     ecx, byte 28h
		lea     esi, [ebx*4+0]
		mov     [esp], ecx
		add     esi, ebx
		mov     ebx, [esp]
		shl     ecx, 2
		add     ecx, ebx
		shl     esi, 7
		shl     ecx, 7
		lea     edi, [esi+3200h]
		add     ecx, 3200h
		add     esi, ecx
		mov     edx, edi
		cmp     edi, esi
		jge     short ___135f1h
		mov     edi, [esp+14h]
___135d8h:
		mov     ecx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ecx, edx
		add     ecx, ebp
		add     ecx, edi
		add     edx, 280h
		mov     [ecx-5], al
		cmp     edx, esi
		jl      short ___135d8h
___135f1h:
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		ret     4
