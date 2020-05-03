cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a0224h
	extern	___1a1ef8h
	extern	___1a01e0h
	extern	___1a0f18h
	extern	___19bd60h
	extern	___1a1168h
	extern	___1de7d0h

section .text

__GDECL(___30a84h_cdecl)
	mov 	edx, [esp+8]
	mov 	eax, [esp+4]
	call 	___30a84h
	retn

__GDECL(___30a84h)
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     [esp+4], eax
		mov     [esp+8], edx
___30a9eh:
		mov     eax, [esp+8]
		mov     ebx, [esp+4]
		lea     edx, [ebx+eax*1]
		mov     [esp+0ch], eax
		mov     eax, edx
		sar     edx, 1fh
		sub     eax, edx
		sar     eax, 1
		imul    eax, eax, byte 6ch
		mov     edx, [eax+___1a0224h]
___30abfh:
		imul    eax, ebx, byte 6ch
		cmp     edx, [eax+___1a0224h]
		jle     short ___30acdh
		inc     ebx
		jmp     short ___30abfh
___30acdh:
		imul    ecx, [esp+0ch], byte 6ch
___30ad2h:
		cmp     edx, [ecx+___1a0224h]
		jge     short ___30ae8h
		mov     eax, [esp+0ch]
		dec     eax
		sub     ecx, byte 6ch
		mov     [esp+0ch], eax
		jmp     short ___30ad2h
___30ae8h:
		mov     eax, [esp+0ch]
		cmp     ebx, eax
		jg      near ___30c2ah
		mov     ecx, [___1a1ef8h]
		cmp     ebx, ecx
		jne     short ___30b05h
		mov     [___1a1ef8h], eax
		jmp     short ___30b0fh
___30b05h:
		cmp     ecx, eax
		jne     short ___30b0fh
		mov     [___1a1ef8h], ebx
___30b0fh:
		imul    ebp, ebx, byte 6ch
		mov     ecx, 6ch
		add     ebp, ___1a01e0h
		mov     edi, ___1a0f18h
		mov     esi, ebp
		call 	__MOVS
		imul    eax, [esp+0ch], byte 6ch
		mov     ecx, ___1a01e0h
		add     ecx, eax
		mov     edi, ebp
		mov     [esp], ecx
		mov     ecx, 6ch
		mov     esi, [esp]
		call 	__MOVS
		mov     ecx, 6ch
		mov     esi, ___1a0f18h
		mov     edi, [esp]
		call 	__MOVS
		cmp     dword [___19bd60h], byte 0
		je      near ___30c20h
		mov     esi, [esp+0ch]
		xor     eax, eax
___30b8dh:
		xor     ecx, ecx
		mov     cl, [eax+___1a1168h]
		cmp     ecx, ebx
		jne     short ___30ba5h
		mov     cl, [esp+0ch]
		mov     [eax+___1a1168h], cl
		jmp     short ___30bafh
___30ba5h:
		cmp     ecx, esi
		jne     short ___30bafh
		mov     [eax+___1a1168h], bl
___30bafh:
		inc     eax
		cmp     eax, byte 4
		jl      short ___30b8dh
		imul    ebp, ebx, byte 54h
		mov     ecx, 54h
		add     ebp, ___1de7d0h
		mov     edi, ___1a0f18h
		mov     esi, ebp
		call 	__MOVS
		imul    eax, [esp+0ch], byte 54h
		mov     ecx, ___1de7d0h
		add     ecx, eax
		mov     edi, ebp
		mov     [esp], ecx
		mov     ecx, 54h
		mov     esi, [esp]
		call 	__MOVS
		mov     ecx, 54h
		mov     esi, ___1a0f18h
		mov     edi, [esp]
		call 	__MOVS
___30c20h:
		mov     ebp, [esp+0ch]
		dec     ebp
		inc     ebx
		mov     [esp+0ch], ebp
___30c2ah:
		cmp     ebx, [esp+0ch]
		jl      near ___30abfh
		mov     eax, [esp+4]
		mov     edx, [esp+0ch]
		cmp     eax, edx
		jge     short ___30c45h
		call    near ___30a84h
___30c45h:
		cmp     ebx, [esp+8]
		jge     short ___30c54h
		mov     [esp+4], ebx
		jmp     near ___30a9eh
___30c54h:
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		pop     ebx
		retn    
