cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___1854b0h
	extern	___24cc54h
	extern	dRally_Audio_pushSoundEffect
	extern	___1a1ec4h
	extern	___1a1ee4h
	extern	___25a74h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e78h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___28470h
	extern	___281d0h
	extern	___27f80h
	extern	___25e40h
	extern	___262b4h
	extern	___26650h
	extern	___269e4h

section .text

___285e0h:
dd	___28641h
dd	___286f1h
dd	___28739h
dd	___28784h
dd	___287cfh
dd	___2881dh
__GDECL(___285f8h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		push    8000h
		mov     eax, 1
		mov     edx, [___1854b0h]
		mov     ecx, [___24cc54h]
		push    edx
		xor     ebx, ebx
		mov     edx, 1ah
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Audio_pushSoundEffect
	add 	esp, 18h
		mov     eax, [___1a1ec4h]
		cmp     eax, byte 5
		ja      near ___28864h
		jmp     near dword [cs:eax*4+___285e0h]
___28641h:
		mov     eax, [___1a1ee4h]
		test    eax, eax
		jle     short ___28655h
		lea     ebx, [eax-1]
		mov     [___1a1ee4h], ebx
		jmp     short ___2865fh
___28655h:
		mov     dword [___1a1ee4h], 5
___2865fh:
		call    near ___25a74h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 16080h
		add     esi, 800h
___28686h:
		mov     edi, edx
___28688h:
		mov     al, [esi]
		or      al, al
		je      short ___28690h
		mov     [ebx], al
___28690h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___28688h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___28686h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		call    near ___25a74h
		call    near ___28470h
		mov     ecx, 40h
		mov     edx, 10h
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     esi, [___1a1e78h]
		add     ebx, 16080h
___286cbh:
		mov     edi, edx
___286cdh:
		mov     al, [esi]
		or      al, al
		je      short ___286d5h
		mov     [ebx], al
___286d5h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___286cdh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___286cbh
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___286f1h:
		mov     ecx, 72h
		mov     ebx, 6ch
		xor     ebp, ebp
		mov     edx, 0f3h
		mov     [___1a1ec4h], ebp
		call    near ___25a74h
		mov     eax, 0ah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 80h
		mov     edx, 73h
		xor     eax, eax
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28739h:
		mov     edi, 1
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], edi
		call    near ___25e40h
		mov     eax, ecx
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 0ah
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___28784h:
		mov     esi, 2
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], esi
		call    near ___262b4h
		mov     eax, 0dah
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
___287cfh:
		mov     ecx, 3
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     [___1a1ec4h], ecx
		call    near ___26650h
		mov     ecx, 72h
		mov     eax, 142h
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
___2881dh:
		mov     ebx, 4
		mov     ecx, 72h
		mov     edx, 0f3h
		mov     [___1a1ec4h], ebx
		call    near ___269e4h
		mov     ebx, 6ch
		mov     eax, 1aah
		call    near ___281d0h
		mov     ecx, 72h
		mov     ebx, 6ch
		mov     edx, 0f3h
		mov     eax, 142h
		call    near ___27f80h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
___28864h:
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
