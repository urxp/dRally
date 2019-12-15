cpu 386
%include "macros.inc"
	
	extern 	__CHK
	extern 	__STRLEN
	extern 	___185c6dh
	extern 	___185c6eh
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a10b0h
	extern 	___185c6fh
	extern 	___185c40h

section .text

__GDECL(___12f60h)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 18h
		mov     [esp+4], eax
		mov     ebp, edx
		xor     ebx, ebx
		mov     bl, [___185c6dh]
		mov     [esp+0ch], ebx
		xor     ebx, ebx
		mov     bl, [___185c6eh]
		mov     [esp+8], ebx
		mov     ebx, [esp+0ch]
		imul    ebx, [esp+8]
		xor     edx, edx
		mov     [esp+14h], eax
		mov     [esp+10h], edx
		mov     [esp], ebx
		jmp     near ___1306fh
___12fabh:
		mov     ebx, [esp+14h]
		cmp     byte [ebx], 24h
		jne     short ___12ff9h
		mov     ecx, [esp+8]
		mov     edx, [esp+0ch]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10b0h]
		add     ebx, ebp
		shr     dl, 2
___12fcdh:
		mov     ch, dl
___12fcfh:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___12fcfh
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___12fcdh
		xor     ebx, ebx
		mov     bl, [___185c6fh]
		jmp     short ___1305bh
___12ff9h:
		mov     esi, [esp+14h]
		xor     ecx, ecx
		mov     cl, [esi]
		mov     edi, [esp]
		sub     ecx, byte 2fh
		imul    ecx, edi
		mov     edx, [esp+0ch]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a10b0h]
		add     ebx, ebp
		add     esi, ecx
		mov     ecx, [esp+8]
		shr     dl, 2
___13025h:
		mov     ch, dl
___13027h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___13027h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___13025h
		mov     ecx, [esp+14h]
		xor     ebx, ebx
		mov     bl, [ecx]
		mov     bl, [ebx+___185c40h]
		and     ebx, 0ffh
___1305bh:
		add     ebp, ebx
		mov     edx, [esp+10h]
		mov     eax, [esp+14h]
		inc     edx
		inc     eax
		mov     [esp+10h], edx
		mov     [esp+14h], eax
___1306fh:
		mov     edi, [esp+4]
		mov     esi, [esp+10h]
		call 	__STRLEN
		cmp     ecx, esi
		ja      near ___12fabh
		add     esp, byte 18h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
