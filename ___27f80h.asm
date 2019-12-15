cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1eb0h

section .text

__GDECL(___27f80h)
		push    20h
		call    near __CHK
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     ebp, eax
		mov     [esp+8], edx
		mov     [esp+0ch], ebx
		mov     [esp+4], ecx
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     [esp], eax
		mov     ecx, 18h
		mov     edx, [esp]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1eb0h]
		add     eax, edx
		mov     edx, ecx
		lea     ebx, [eax+ebp*1]
___27fc7h:
		mov     edi, edx
___27fc9h:
		mov     al, [esi]
		or      al, al
		je      short ___27fd1h
		mov     [ebx], al
___27fd1h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___27fc9h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27fc7h
		mov     ebx, [esp]
		mov     ecx, 18h
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1eb0h]
		add     eax, ebx
		mov     ebx, [esp+0ch]
		add     eax, ebp
		add     esi, 240h
		add     ebx, eax
		mov     edx, ecx
		sub     ebx, byte 18h
___28009h:
		mov     edi, edx
___2800bh:
		mov     al, [esi]
		or      al, al
		je      short ___28013h
		mov     [ebx], al
___28013h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2800bh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___28009h
		mov     eax, [esp+8]
		add     eax, [esp+4]
		lea     edx, [eax-18h]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     [esp], eax
		mov     ecx, 18h
		mov     esi, [esp]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, ecx
		add     eax, esi
		mov     esi, [___1a1eb0h]
		lea     ebx, [eax+ebp*1]
		add     esi, 480h
___2805dh:
		mov     edi, edx
___2805fh:
		mov     al, [esi]
		or      al, al
		je      short ___28067h
		mov     [ebx], al
___28067h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2805fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2805dh
		mov     edi, [esp]
		mov     ebx, [esp+0ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 18h
		add     eax, edi
		mov     esi, [___1a1eb0h]
		add     eax, ebp
		add     esi, 6c0h
		add     ebx, eax
		mov     edx, ecx
		sub     ebx, byte 18h
___2809fh:
		mov     edi, edx
___280a1h:
		mov     al, [esi]
		or      al, al
		je      short ___280a9h
		mov     [ebx], al
___280a9h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___280a1h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2809fh
		mov     edx, [esp+8]
		add     edx, byte 2
		mov     ebx, [esp+0ch]
		lea     esi, [edx*4+0]
		xor     eax, eax
		add     esi, edx
		sub     ebx, byte 30h
		shl     esi, 7
		test    ebx, ebx
		jle     short ___280edh
___280d9h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, esi
		inc     eax
		add     edx, ebp
		mov     byte [edx+eax*1+17h], 16h
		cmp     eax, ebx
		jl      short ___280d9h
___280edh:
		mov     edx, [esp+8]
		add     edx, [esp+4]
		sub     edx, byte 3
		xor     eax, eax
		lea     esi, [edx*4+0]
		mov     ebx, [esp+0ch]
		add     esi, edx
		sub     ebx, byte 30h
		shl     esi, 7
		test    ebx, ebx
		jle     short ___28125h
___28111h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, esi
		inc     eax
		add     edx, ebp
		mov     byte [edx+eax*1+17h], 16h
		cmp     eax, ebx
		jl      short ___28111h
___28125h:
		mov     edx, [esp+8]
		mov     esi, [esp+4]
		lea     ebx, [edx*4+0]
		sub     esi, byte 30h
		add     ebx, edx
		lea     edx, [esi*4+0]
		add     edx, esi
		shl     ebx, 7
		shl     edx, 7
		lea     ecx, [ebx+3c00h]
		add     edx, 3c00h
		add     ebx, edx
		mov     eax, ecx
		cmp     ecx, ebx
		jge     short ___28172h
___2815ch:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, eax
		add     eax, 280h
		mov     byte [edx+ebp*1+2], 16h
		cmp     eax, ebx
		jl      short ___2815ch
___28172h:
		mov     edx, [esp+8]
		mov     ebx, [esp+4]
		lea     esi, [edx*4+0]
		sub     ebx, byte 30h
		add     esi, edx
		lea     edx, [ebx*4+0]
		add     edx, ebx
		shl     esi, 7
		shl     edx, 7
		lea     ecx, [esi+3c00h]
		add     edx, 3c00h
		lea     ebx, [esi+edx*1]
		mov     eax, ecx
		cmp     ecx, ebx
		jge     short ___281c7h
		mov     ecx, [esp+0ch]
___281aeh:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, eax
		add     edx, ebp
		add     edx, ecx
		add     eax, 280h
		mov     byte [edx-3], 16h
		cmp     eax, ebx
		jl      short ___281aeh
___281c7h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn    
