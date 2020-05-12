cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRLEN
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR

section .text

__GDECL(___12e78h)
		push    30h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     [esp+4], eax
		mov     [esp+14h], edx
		mov     [esp+0ch], ebx
		mov     ebp, ecx
		xor     ebx, ebx
		mov     bl, [edx]
		mov     [esp], ebx
		xor     ebx, ebx
		mov     bl, [edx+1]
		mov     [esp+10h], ebx
		mov     ebx, [esp]
		imul    ebx, [esp+10h]
		xor     edx, edx
		mov     [esp+8], ebx
		mov     ebx, [esp+0ch]
		mov     [esp+18h], edx
		mov     [esp+1ch], ebx
		jmp     near ___12f3dh
___12ec5h:
		mov     ebx, [esp+1ch]
		cmp     byte [ebx], 0fah
		jne     short ___12ed1h
		inc     ebp
		jmp     short ___12f2bh
___12ed1h:
		mov     esi, [esp+1ch]
		xor     ecx, ecx
		mov     cl, [esi]
		mov     esi, [esp+8]
		sub     ecx, byte 20h
		imul    esi, ecx
		mov     edi, [esp+4]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, [esp]
		add     ebx, ebp
		mov     ecx, [esp+10h]
		add     esi, edi
___12ef8h:
		mov     edi, edx
___12efah:
		mov     al, [esi]
		or      al, al
		je      short ___12f02h
		mov     [ebx], al
___12f02h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___12efah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___12ef8h
		mov     ecx, [esp+1ch]
		xor     ebx, ebx
		mov     eax, [esp+14h]
		mov     bl, [ecx]
		add     ebx, eax
		mov     bl, [ebx-1eh]
		and     ebx, 0ffh
		add     ebp, ebx
___12f2bh:
		mov     ebx, [esp+18h]
		mov     edx, [esp+1ch]
		inc     ebx
		inc     edx
		mov     [esp+18h], ebx
		mov     [esp+1ch], edx
___12f3dh:
		mov     edi, [esp+0ch]
		mov     esi, [esp+18h]
		call 	__STRLEN
		cmp     ecx, esi
		ja      near ___12ec5h
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		retn    
