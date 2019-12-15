cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___19bd60h
	extern	___1a1e54h
	extern	___1a1e64h
	extern	___25330h
	extern	___1a1e58h
	extern	___1a1e70h
	extern	___2d728h
	extern	___2d898h
	extern	___2da10h
	extern	___2db88h
	extern	___2ddc8h

section .text

__GDECL(___2ed2ch)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		mov     ecx, 2a580h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0e600h
		add     edi, 0e600h
		call 	__MOVS
		cmp     dword [___19bd60h], byte 0
		jne     short ___2ed89h
		mov     ecx, 10h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e54h]
		jmp     short ___2ed9fh
___2ed89h:
		mov     ecx, 10h
		mov     edx, 280h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e64h]
___2ed9fh:
		add     ebx, 0e600h
___2eda5h:
		mov     edi, edx
___2eda7h:
		mov     al, [esi]
		or      al, al
		je      short ___2edafh
		mov     [ebx], al
___2edafh:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2eda7h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2eda5h
		call    near ___25330h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e58h]
		add     ebx, 13890h
		mov     edx, ecx
		shr     dl, 2
___2ede0h:
		mov     ch, dl
___2ede2h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2ede2h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2ede0h
		mov     ecx, 60h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e70h]
		add     ebx, 27a30h
		mov     edx, ecx
		shr     dl, 2
___2ee1eh:
		mov     ch, dl
___2ee20h:
		mov     eax, [esi]
		mov     [ebx], eax
		add     ebx, byte 4
		add     esi, byte 4
		dec     ch
		jne     short ___2ee20h
		add     ebx, 280h
		shl     dl, 2
		sub     ebx, edx
		shr     dl, 2
		dec     cl
		jne     short ___2ee1eh
		call    near ___2d728h
		call    near ___2d898h
		call    near ___2da10h
		call    near ___2db88h
		call    near ___2ddc8h
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
