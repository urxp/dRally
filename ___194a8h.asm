cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___185a24h
	extern 	___185a2ch
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___1a1100h__VESA101h_DefaultScreenBuffer
	extern 	___3a6a4h
	extern 	___146c4h
	extern 	___1807ech
	extern 	___18687ah
	extern 	strcmp_
	extern 	___3ab5ch
	extern 	___185b59h
	extern 	___1a1ef8h
	extern 	___185b62h
	extern 	___185b63h
	extern 	___185b65h
	extern 	___185a48h
	extern 	___185a44h
	extern 	___185a40h
	extern 	___185a3ch
	extern 	___1a020ch
	extern 	___2415ch
	extern 	___2b5f0h
	extern 	___243d44h
	extern 	___18076ch
	extern 	___1866b8h
	extern 	___18077ch
	extern 	___2b8ach
	extern 	___13248h
	extern 	___180800h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h
	extern 	___148cch
	extern 	___180814h
	extern 	___185a90h
	extern 	___190c4h
	extern 	___18924h
	extern 	___18cf0h
	extern 	___185b61h
	extern 	___185a78h
	extern 	restoreDefaultScreenBuffer

section .text

___19490h:
dd	___1955ah
dd	___19649h
dd	___19735h
dd	___1974dh
dd	___1977ch
dd	___19794h
__GDECL(___194a8h)
		push    24h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 4
		xor     edx, edx
		mov     [___185a24h], edx
___194c3h:
		mov     ebx, [___185a2ch]
		test    ebx, ebx
		jne     near ___1963fh
		mov     ecx, 2af80h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 0e600h
		add     edi, 0e600h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		call    near ___13710h
		mov     edx, 1
		mov     eax, edx
		call    near ___13710h
		cmp     dword [___185a24h], byte 0
		jne     short ___19523h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		jmp     short ___1953dh
___19523h:
		call 	restoreDefaultScreenBuffer
		call    near ___3a6a4h
		call    near ___12cb8h__VESA101_PRESENTSCREEN
		mov     [___185a24h], ebx
___1953dh:
		mov     eax, 1
		call    near ___146c4h
		mov     ebp, eax
		cmp     eax, byte 5
		ja      near ___19636h
		jmp     near dword [cs:eax*4+___19490h]
___1955ah:
		mov     ecx, 1
		mov     edx, ___1807ech
		mov     eax, ___18687ah
		mov     [esp], ecx
		call    near strcmp_
		test    eax, eax
		jne     near ___1961dh
		mov     eax, ecx
		xor     edx, edx
		call    near ___13710h
		mov     eax, ecx
		call    near ___3ab5ch
		mov     [esp], eax
		test    eax, eax
		je      near ___1961dh
		xor     bh, bh
		mov     [___185b59h], bh
		imul    edx, [___1a1ef8h], byte 6ch
		mov     cl, 1
		mov     esi, 1
		mov     [___185b62h], cl
		mov     [___185b63h], cl
		mov     [___185b65h], cl
		mov     [___185a48h], esi
		mov     [___185a44h], esi
		mov     [___185a40h], esi
		mov     [___185a3ch], esi
		mov     edx, [edx+___1a020ch]
		call    near ___2415ch
		imul    eax, [___1a1ef8h], byte 6ch
		mov     edi, ___18687ah
		mov     [eax+___1a020ch], edx
		call    near ___2b5f0h
		mov     [___243d44h], esi
		mov     esi, ___18076ch
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		mov     ah, 1
		mov     edi, ___1866b8h
		mov     esi, ___18077ch
		mov     [___185b62h], ah
		movsd   
		movsd   
		movsd   
		movsd   
___1961dh:
		cmp     dword [esp], byte 0
		je      near ___19636h
		call    near ___2b8ach
		mov     dword [___185a24h], 1
___19636h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___194c3h
___1963fh:
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___19649h:
		mov     eax, 1
		mov     ecx, 50h
		xor     edx, edx
		mov     ebx, 12ch
		call    near ___13710h
		push    byte 1
		mov     edx, 0dch
		mov     eax, 0aah
		call    near ___13248h
		mov     ecx, 23ae8h
		mov     ebx, ___180800h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     edx, 1
		mov     ecx, esp
		mov     eax, 0b4h
		mov     [esp], edx
		mov     ebx, edx
		mov     edx, 102h
		call    near ___148cch
		mov     ebx, [esp]
		and     eax, 0ffh
		test    ebx, ebx
		je      short ___19636h
		test    eax, eax
		je      short ___19636h
		mov     ah, 1
		mov     edi, ___18687ah
		mov     esi, ___1807ech
		xor     dl, dl
		xor     ecx, ecx
		mov     [___185b59h], ah
		mov     [___185b62h], dl
		mov     [___185b63h], dl
		mov     [___185b65h], dl
		mov     [___185a48h], ecx
		mov     [___185a44h], ecx
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		mov     [___185a40h], ecx
		mov     edi, ___1866b8h
		mov     esi, ___180814h
		mov     [___185a3ch], ecx
		mov     edx, 1
		movsd   
		movsd   
		movsd   
		movsb   
		call    near ___2415ch
		call    near ___2b5f0h
		mov     [___243d44h], edx
		mov     [___185a90h], ecx
		cmp     ebp, byte 0ffffffffh
		jne     near ___194c3h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___19735h:
		call    near ___190c4h
		cmp     ebp, byte 0ffffffffh
		jne     near ___194c3h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1974dh:
		call    near ___18924h
		test    eax, eax
		je      near ___19636h
		call    near ___2b8ach
		mov     dword [___185a24h], 1
		cmp     ebp, byte 0ffffffffh
		jne     near ___194c3h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___1977ch:
		call    near ___18cf0h
		cmp     ebp, byte 0ffffffffh
		jne     near ___194c3h
		add     esp, byte 4
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___19794h:
		xor     edi, edi
		mov     ebp, 0ffffffffh
		mov     [___185a90h], edi
		xor     ecx, ecx
___197a3h:
		mov     eax, [___185a90h]
		cmp     cl, [eax+___185b61h]
		jne     near ___19636h
		mov     edx, [___185a78h]
		dec     edx
		cmp     eax, edx
		jge     short ___197c7h
		inc     eax
		mov     [___185a90h], eax
		jmp     short ___197a3h
___197c7h:
		mov     [___185a90h], ecx
		jmp     short ___197a3h
