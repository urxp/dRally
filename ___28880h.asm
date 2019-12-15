cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1a1ec4h
	extern	___1854b0h
	extern	___24cc54h
	extern	___654d4h
	extern	___1a1ee4h
	extern	___25a74h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e78h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___28470h
	extern	___262b4h
	extern	___281d0h
	extern	___27f80h
	extern	___26650h
	extern	___269e4h
	extern	___26e54h

section .text

___2886ch:
dd	___288d2h
dd	___28982h
dd	___289cdh
dd	___28a18h
dd	___28a66h
__GDECL(___28880h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		cmp     dword [___1a1ec4h], byte 5
		jge     short ___288bch
		push    8000h
		mov     edx, 1ah
		mov     ebx, [___1854b0h]
		mov     eax, 1
		push    ebx
		mov     ecx, [___24cc54h]
		xor     ebx, ebx
		call    near ___654d4h
___288bch:
		mov     eax, [___1a1ec4h]
		cmp     eax, byte 4
		ja      near ___28aadh
		jmp     near dword [cs:eax*4+___2886ch]
___288d2h:
		mov     eax, [___1a1ee4h]
		cmp     eax, byte 5
		jge     short ___288e7h
		lea     ebx, [eax+1]
		mov     [___1a1ee4h], ebx
		jmp     short ___288efh
___288e7h:
		xor     edx, edx
		mov     [___1a1ee4h], edx
___288efh:
		call    near ___25a74h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 160f0h
		add     esi, 0c00h
___28916h:
		mov     edi, edx
___28918h:
		mov     al, [esi]
		or      al, al
		je      short ___28920h
		mov     [ebx], al
___28920h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___28918h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___28916h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___28470h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 160f0h
		add     esi, 400h
___2895ch:
		mov     edi, edx
___2895eh:
		mov     al, [esi]
		or      al, al
		je      short ___28966h
		mov     [ebx], al
___28966h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___2895eh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___2895ch
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28982h:
		mov     ebp, 2
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], ebp
		call    near ___262b4h
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, ecx
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___289cdh:
		mov     edi, 3
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], edi
		call    near ___26650h
		mov     eax, ecx
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0dah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28a18h:
		mov     esi, 4
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], esi
		call    near ___269e4h
		mov     eax, 0dah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28a66h:
		mov     ecx, 5
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], ecx
		call    near ___26e54h
		mov     ecx, 72h
		mov     eax, 142h
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 1aah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___28aadh:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
