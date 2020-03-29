cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	___3f71ch__allocateMemory
	extern 	___1a1138h__VESA101h_DefaultScreenBufferB
	extern 	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern 	___13710h
	extern 	___13248h
	extern 	___180aa8h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h
	extern 	___180ac8h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___24e4ach
	extern 	memset_
	extern 	___196a84h
	extern 	___5994ch
	extern 	___2ab50h
	extern 	___13bd4h
	extern 	___23594h
	extern 	___13c9ch
	extern 	___196ab8h
	extern 	___1a2010h
	extern 	___185a14h
	extern 	atoi_
	extern 	___185a54h
	extern 	___23488h
	extern 	___3f77ch__freeMemory
	extern 	___19bd60h
	extern 	___1a1098h
	extern 	___196adch
	extern 	___1c6bch
	extern 	___2b8ach
	extern 	___185a24h

section .text

__GDECL(___1c178h)
		push    2ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 0ch
		mov     eax, 12h
		mov     ecx, 28f00h
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     ebp, eax
		mov     eax, 1
		xor     edx, edx
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     esi, [___1a1138h__VESA101h_DefaultScreenBufferB]
		mov     edi, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, 10680h
		add     edi, 10680h
		mov     [esp+8], eax
		call 	__MOVS
		xor     eax, eax
		mov     ebx, 14eh
		call    near ___13710h
		mov     eax, 2
		xor     edx, edx
		mov     ecx, 41h
		call    near ___13710h
		push    byte 1
		mov     edx, 0c5h
		mov     eax, 97h
		call    near ___13248h
		mov     ecx, 20dbfh
		mov     ebx, ___180aa8h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]
		call    near ___12e78h
		mov     ecx, 2383fh
		mov     ebx, ___180ac8h
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

		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ecx, 1
___1c252h:
		cmp     dword [___196a84h], byte 0
		jne     near ___1c354h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		xor     ebx, ebx
		mov     edx, 0d8h
		mov     bl, al
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, 0a6h
		call    near ___13bd4h
		mov     edx, 0bh
		mov     eax, ebp
		call    near ___23594h
		test    eax, eax
		je      near ___1c34bh
		mov     edx, 0d8h
		mov     eax, 0a6h
		call    near ___13c9ch
		mov     edx, ebp
		xor     eax, eax
___1c2a8h:
		inc     eax
		mov     bl, [edx]
		inc     edx
		mov     [esp+eax*1-1], bl
		cmp     eax, byte 7
		jl      short ___1c2a8h
		xor     eax, eax
		mov     al, [ebp+7]
		mov     edx, ebp
		mov     [___196ab8h], eax
		xor     eax, eax
___1c2c3h:
		inc     eax
		mov     bl, [edx+8]
		inc     edx
		mov     [eax+___1a2010h], bl
		cmp     eax, byte 9
		jl      short ___1c2c3h
		xor     eax, eax
		mov     al, [ebp+11h]
		mov     ebx, 0ah
		mov     [___185a14h], eax
		mov     eax, esp
		mov     edx, ecx
		call    near atoi_
		mov     [___185a54h], eax
		mov     eax, [esp+8]
		call    near ___23488h
		mov     eax, [esp+8]
		call    near ___3f77ch__freeMemory
		mov     eax, ebp
		mov     ebx, 1000h
		call    near ___3f77ch__freeMemory
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     ebx, 2
		mov     eax, [___185a54h]
		mov     [___19bd60h], ecx
		mov     [___1a1098h], ebx
		mov     [___196adch], ebx
		call    near ___1c6bch
		call    near ___2b8ach
		mov     [___185a24h], ecx
		mov     ebx, ecx
___1c34bh:
		cmp     ebx, byte 1
		jne     near ___1c252h
___1c354h:
		add     esp, byte 0ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
