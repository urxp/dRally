cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern	___1f6e4h
	extern	___1a1138h__VESA101h_DefaultScreenBufferB
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___13710h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___146c4h
	extern	___13248h
	extern	___1819d0h
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h
	extern	___5994ch
	extern	___1a1158h
	extern	___59b3ch
	extern	___187144h
	extern	___1818d8h
	extern	___19ce70h
	extern	___1819f0h
	extern	___1a1150h
	extern	___187176h
	extern	___1818e8h
	extern	___181a0ch
	extern	___1a1148h
	extern	___1871a8h
	extern	___1818f8h
	extern	___181a2ch
	extern	___1a114ch
	extern	___1871dah
	extern	___18190ch
	extern	___181a4ch
	extern	___1a1140h
	extern	___18720ch
	extern	___181924h
	extern	___181a6ch
	extern	___1a115ch
	extern	___18723eh
	extern	___181940h
	extern	___181a8ch
	extern	___1a1154h
	extern	___187270h
	extern	___18195ch
	extern	___181aach
	extern	___1a1144h
	extern	___1872a2h
	extern	___181ac4h
	extern	___20220h
	extern	___185b1ch
	extern	___185b8eh
	extern	___185b04h

section .text

___204d4h:
dd	___20cafh
dd	___20617h
dd	___206ebh
dd	___207bbh
dd	___2088dh
dd	___2095eh
dd	___20a34h
dd	___20b08h
dd	___20bddh
dd	___20cafh
__GDECL(___204fch)
		push    5ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 3ch
		call    near ___1f6e4h
		cmp     esi, byte 0ffffffffh
		je      near ___206e1h
		mov     edx, 15031h
		mov     ebx, 95h
		mov     ecx, 19631h
		mov     esi, 0b1h
		mov     edi, 1dc31h
		mov     ebp, 0cdh
		mov     eax, 22231h
		mov     [esp+28h], edx
		mov     [esp+10h], ebx
		mov     [esp+24h], ecx
		mov     [esp+14h], esi
		mov     [esp+38h], edi
		mov     [esp+4], ebp
		mov     [esp+1ch], eax
		mov     edx, 0e9h
		mov     ebx, 26831h
		mov     ecx, 105h
		mov     esi, 2ae31h
		mov     edi, 121h
		mov     ebp, 2f431h
		mov     eax, 13dh
		mov     [esp+8], edx
		mov     [esp+18h], ebx
		mov     [esp+2ch], ecx
		mov     [esp+0ch], esi
		mov     [esp+34h], edi
		mov     [esp+20h], ebp
		mov     edx, 33a31h
		mov     [esp], eax
		mov     [esp+30h], edx
___205a3h:
		mov     ecx, 28f00h
		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		xor     edx, edx
		call 	__MOVS
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		call    near ___13710h
		mov     edx, 1
		mov     eax, 6
		call    near ___13710h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     eax, 6
		call    near ___146c4h
		mov     ebp, eax
		inc     eax
		cmp     eax, byte 9
		ja      near ___206d8h
		jmp     near dword [cs:eax*4+___204d4h]
___20617h:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, 79h
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+28h]
		mov     ebx, ___1819d0h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20670h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1158h], eax
		je      short ___20670h
		cmp     eax, dword 0aah
		je      short ___20670h
		call    near ___59b3ch
		mov     edi, ___187144h
		mov     esi, ___1818d8h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1158h]
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   
		imul    esi, ebx, byte 0fh
		mov     edi, ___187144h
		add     esi, ___19ce70h
		call 	__STRCAT
___206d8h:
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
___206e1h:
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___206ebh:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+14h]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+24h]
		mov     ebx, ___1819f0h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20743h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1150h], eax
		je      short ___20743h
		cmp     eax, dword 0aah
		je      short ___20743h
		mov     edi, ___187176h
		mov     esi, ___1818e8h
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		movsd   
		movsd   
		movsd   
		movsw   
		imul    esi, [___1a1150h], byte 0fh
		mov     edi, ___187176h
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___207bbh:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+18h]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+38h]
		mov     ebx, ___181a0ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20813h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1148h], eax
		je      short ___20813h
		cmp     eax, dword 0aah
		je      short ___20813h
		call    near ___59b3ch
		mov     edi, ___1871a8h
		mov     esi, ___1818f8h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1148h]
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		imul    esi, ebx, byte 0fh
		mov     edi, ___1871a8h
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2088dh:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+8]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+1ch]
		mov     ebx, ___181a2ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___208e5h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a114ch], eax
		je      short ___208e5h
		cmp     eax, dword 0aah
		je      short ___208e5h
		mov     edi, ___1871dah
		mov     esi, ___18190ch
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsb   
		imul    esi, [___1a114ch], byte 0fh
		mov     edi, ___1871dah
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___2095eh:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+0ch]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+18h]
		mov     ebx, ___181a4ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___209b6h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1140h], eax
		je      short ___209b6h
		cmp     eax, dword 0aah
		je      short ___209b6h
		call    near ___59b3ch
		mov     ecx, 6
		mov     edi, ___18720ch
		mov     esi, ___181924h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1140h]
		rep movsd   
		movsw   
		imul    esi, ebx, byte 0fh
		mov     edi, ___18720ch
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20a34h:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+30h]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+0ch]
		mov     ebx, ___181a6ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20a8ch:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a115ch], eax
		je      short ___20a8ch
		cmp     eax, dword 0aah
		je      short ___20a8ch
		mov     ecx, 6
		mov     edi, ___18723eh
		mov     esi, ___181940h
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		rep movsd   
		movsw   
		imul    esi, [___1a115ch], byte 0fh
		mov     edi, ___18723eh
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20b08h:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+38h]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+20h]
		mov     ebx, ___181a8ch
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20b60h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1154h], eax
		je      short ___20b60h
		cmp     eax, dword 0aah
		je      short ___20b60h
		call    near ___59b3ch
		mov     ecx, 6
		mov     edi, ___187270h
		mov     esi, ___18195ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		mov     ebx, [___1a1154h]
		rep movsd   
		movsb   
		imul    esi, ebx, byte 0fh
		mov     edi, ___187270h
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20bddh:
		xor     edx, edx
		xor     eax, eax
		call    near ___13710h
		mov     eax, 3
		xor     edx, edx
		mov     ecx, 30h
		call    near ___13710h
		mov     eax, 6
		xor     edx, edx
		mov     ebx, 143h
		call    near ___13710h
		push    byte 1
		mov     edx, [esp+4]
		mov     eax, 127h
		call    near ___13248h
		mov     ecx, [esp+30h]
		mov     ebx, ___181aach
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

___20c35h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		and     eax, 0ffh
		mov     [___1a1144h], eax
		je      short ___20c35h
		cmp     eax, dword 0aah
		je      short ___20c35h
		mov     ecx, 8
		mov     edi, ___1872a2h
		mov     esi, ___181ac4h
		call    near ___59b3ch

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		rep movsd   
		imul    esi, [___1a1144h], byte 0fh
		mov     edi, ___1872a2h
		add     esi, ___19ce70h
		call 	__STRCAT
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20cafh:
		xor     eax, eax
		call    near ___20220h
		cmp     eax, byte 1
		jne     short ___20cd3h
		mov     ebp, 0fffffffeh
		cmp     ebp, byte 0ffffffffh
		jne     near ___205a3h
		add     esp, byte 3ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___20cd3h:
		cmp     ebp, byte 8
		jne     near ___206d8h
		xor     ebx, ebx
		mov     ebp, 0ffffffffh
		mov     [___185b1ch], ebx
___20ce9h:
		mov     eax, [___185b1ch]
		cmp     byte [eax+___185b8eh], 0
		jne     near ___206d8h
		mov     esi, [___185b04h]
		dec     esi
		cmp     eax, esi
		jge     short ___20d0eh
		inc     eax
		mov     [___185b1ch], eax
		jmp     short ___20ce9h
___20d0eh:
		xor     ecx, ecx
		mov     [___185b1ch], ecx
		jmp     short ___20ce9h
