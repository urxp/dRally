cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1eb0h

section .text

__GDECL(___27d24h_cdecl)
	push 	ebx
	mov 	ecx, [esp+14h]
	mov 	ebx, [esp+10h]
	mov 	edx, [esp+0ch]
	mov 	eax, [esp+8]
	call 	___27d24h
	pop 	ebx
	retn

__GDECL(___27d24h)
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
		mov     ecx, 0ch
		mov     edx, [esp]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1eb0h]
		add     eax, edx
		mov     edx, 18h
		lea     ebx, [eax+ebp*1]
___27d6eh:
		mov     edi, edx
___27d70h:
		mov     al, [esi]
		or      al, al
		je      short ___27d78h
		mov     [ebx], al
___27d78h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___27d70h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27d6eh
		mov     ebx, [esp]
		mov     ecx, 0ch
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 18h
		add     eax, ebx
		mov     ebx, [esp+0ch]
		add     eax, ebp
		mov     esi, [___1a1eb0h]
		add     ebx, eax
		add     esi, 240h
		sub     ebx, byte 18h
___27db3h:
		mov     edi, edx
___27db5h:
		mov     al, [esi]
		or      al, al
		je      short ___27dbdh
		mov     [ebx], al
___27dbdh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___27db5h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27db3h
		mov     eax, [esp+8]
		add     eax, [esp+4]
		lea     edx, [eax-0ch]
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		mov     [esp], eax
		mov     ecx, 0ch
		mov     esi, [esp]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edx, 18h
		add     eax, esi
		mov     esi, [___1a1eb0h]
		lea     ebx, [eax+ebp*1]
		add     esi, 5a0h
___27e0ah:
		mov     edi, edx
___27e0ch:
		mov     al, [esi]
		or      al, al
		je      short ___27e14h
		mov     [ebx], al
___27e14h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___27e0ch
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27e0ah
		mov     edi, [esp]
		mov     ebx, [esp+0ch]
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 0ch
		add     eax, edi
		mov     edx, 18h
		add     eax, ebp
		mov     esi, [___1a1eb0h]
		add     ebx, eax
		add     esi, 7e0h
		sub     ebx, byte 18h
___27e4fh:
		mov     edi, edx
___27e51h:
		mov     al, [esi]
		or      al, al
		je      short ___27e59h
		mov     [ebx], al
___27e59h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___27e51h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___27e4fh
		mov     edx, [esp+8]
		add     edx, byte 2
		mov     ebx, [esp+0ch]
		lea     esi, [edx*4+0]
		xor     eax, eax
		add     esi, edx
		sub     ebx, byte 30h
		shl     esi, 7
		test    ebx, ebx
		jle     short ___27e9dh
___27e89h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, esi
		inc     eax
		add     edx, ebp
		mov     byte [edx+eax*1+17h], 16h
		cmp     eax, ebx
		jl      short ___27e89h
___27e9dh:
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
		jle     short ___27ed5h
___27ec1h:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, esi
		inc     eax
		add     edx, ebp
		mov     byte [edx+eax*1+17h], 16h
		cmp     eax, ebx
		jl      short ___27ec1h
___27ed5h:
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
		jge     short ___27f22h
___27f0ch:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, eax
		add     eax, 280h
		mov     byte [edx+ebp*1+2], 16h
		cmp     eax, ebx
		jl      short ___27f0ch
___27f22h:
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
		jge     short ___27f77h
		mov     ecx, [esp+0ch]
___27f5eh:
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     edx, eax
		add     edx, ebp
		add     edx, ecx
		add     eax, 280h
		mov     byte [edx-3], 16h
		cmp     eax, ebx
		jl      short ___27f5eh
___27f77h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		retn    
