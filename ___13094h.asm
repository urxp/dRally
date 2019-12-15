cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__STRLEN
	extern 	___185c0bh
	extern 	___185c0ch
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___1a10fch
	extern 	___1a110ch
	extern 	___1a1108h
	extern 	___185bedh

section .text

__GDECL(___13094h)
		push    34h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 1ch
		mov     [esp+8], eax
		mov     [esp+18h], edx
		xor     ebx, ebx
		mov     bl, [___185c0bh]
		mov     [esp+14h], ebx
		xor     ebx, ebx
		mov     bl, [___185c0ch]
		mov     [esp], ebx
		mov     ebx, [esp+14h]
		imul    ebx, [esp]
		xor     edx, edx
		mov     ebp, eax
		mov     [esp+0ch], edx
		mov     [esp+10h], edx
		mov     [esp+4], ebx
		jmp     near ___13222h
___130e2h:
		mov     al, [ebp+0]
		cmp     al, 7bh
		jb      short ___130f1h
		jbe     short ___130f7h
		cmp     al, 7dh
		je      short ___13102h
		jmp     short ___1311ch
___130f1h:
		cmp     al, 5bh
		je      short ___1310fh
		jmp     short ___1311ch
___130f7h:
		xor     eax, eax
		mov     [esp+10h], eax
		jmp     near ___13218h
___13102h:
		mov     dword [esp+10h], 1
		jmp     near ___13218h
___1310fh:
		mov     dword [esp+10h], 2
		jmp     near ___13218h
___1311ch:
		cmp     dword [esp+10h], byte 0
		jne     short ___13167h
		mov     ecx, [esp+18h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ebx, ecx
		xor     ecx, ecx
		mov     cl, [ebp+0]
		mov     esi, [esp+4]
		sub     ecx, byte 20h
		imul    ecx, esi
		mov     esi, [___1a10fch]
		mov     edx, [esp+14h]
		add     esi, ecx
		mov     ecx, [esp]
___1314dh:
		mov     edi, edx
___1314fh:
		mov     al, [esi]
		or      al, al
		je      short ___13157h
		mov     [ebx], al
___13157h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___1314fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___1314dh
___13167h:
		cmp     dword [esp+10h], byte 1
		jne     short ___131b2h
		xor     ecx, ecx
		mov     cl, [ebp+0]
		mov     edx, [esp+4]
		sub     ecx, byte 20h
		imul    ecx, edx
		mov     eax, [esp+18h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a110ch]
		add     ebx, eax
		mov     edx, [esp+14h]
		add     esi, ecx
		mov     ecx, [esp]
___13198h:
		mov     edi, edx
___1319ah:
		mov     al, [esi]
		or      al, al
		je      short ___131a2h
		mov     [ebx], al
___131a2h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___1319ah
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___13198h
___131b2h:
		cmp     dword [esp+10h], byte 2
		jne     short ___131fdh
		mov     ecx, [esp+18h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     ebx, ecx
		xor     ecx, ecx
		mov     cl, [ebp+0]
		mov     esi, [esp+4]
		sub     ecx, byte 20h
		imul    ecx, esi
		mov     esi, [___1a1108h]
		mov     edx, [esp+14h]
		add     esi, ecx
		mov     ecx, [esp]
___131e3h:
		mov     edi, edx
___131e5h:
		mov     al, [esi]
		or      al, al
		je      short ___131edh
		mov     [ebx], al
___131edh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___131e5h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___131e3h
___131fdh:
		xor     ebx, ebx
		mov     bl, [ebp+0]
		mov     bl, [ebx+___185bedh]
		mov     edi, [esp+18h]
		and     ebx, 0ffh
		add     edi, ebx
		mov     [esp+18h], edi
___13218h:
		mov     edx, [esp+0ch]
		inc     edx
		inc     ebp
		mov     [esp+0ch], edx
___13222h:
		mov     edi, [esp+8]
		mov     esi, [esp+0ch]
		call 	__STRLEN
		cmp     ecx, esi
		ja      near ___130e2h
		add     esp, byte 1ch
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
