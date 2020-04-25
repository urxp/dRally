cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___3f71ch__allocateMemory
	extern 	___13248h
	extern 	___180998h
	extern 	___185c0bh
	extern 	___1a1108h
	extern 	___12e78h
	extern 	___1809b8h
	extern 	___12cb8h__VESA101_PRESENTSCREEN
	extern 	___1a1ef8h
	extern 	___1a01e0h
	extern 	___23488h
	extern 	___24e4ach
	extern 	memset_
	extern 	___5994ch
	extern 	___2ab50h
	extern 	___13bd4h
	extern 	___23594h
	extern 	___1809d4h
	extern 	___13c9ch
	extern 	___3f77ch__freeMemory
	extern 	___1a1098h
	extern 	___1809ech
	extern 	getTimerTicks

section .text

__GDECL(___1aa28h)
		push    28h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 10h
		mov     [esp], eax
		mov     [esp+4], edx
		mov     edi, ebx
		mov     eax, 1fh
		mov     ecx, 51h

	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		mov     [esp+8], eax
		mov     eax, 1fh
		mov     ebx, 14eh
		
	push 	edx
	push 	ecx
	push 	eax
		call    ___3f71ch__allocateMemory
	add 	esp, 4
	pop 	ecx
	pop 	edx

		push    byte 1
		mov     esi, eax
		mov     eax, [esp+4]
		call    near ___13248h
		mov     edx, [esp+4]
		add     edx, byte 0dh
		lea     eax, [edx*4+0]
		mov     ecx, [esp]
		add     eax, edx
		mov     ebx, ___180998h
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a1108h]
		add     ecx, byte 28h
		call    near ___12e78h
		mov     edx, [esp+4]
		add     edx, byte 1eh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp]
		shl     eax, 7
		add     eax, edx
		mov     ebx, ___1809b8h
		lea     ecx, [eax+28h]
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

		call 	getTimerTicks
		mov 	edx, eax
		xor     eax, eax
___1aaddh:
		xor     ebx, ebx
	;mov     bl, [eax]				;; ???
	mov 	bl, al
		add     eax, byte 2
		add     edx, ebx
		cmp     eax, dword 7530h
		jl      short ___1aaddh
		mov     eax, [esp+8]
		mov     byte [eax], 1
		mov     [eax+1], dl
		mov     eax, edx
		mov     ebx, [esp+8]
		sar     eax, 8
		mov     [ebx+2], al
		mov     eax, edx
		sar     eax, 10h
		sar     edx, 18h
		mov     [ebx+3], al
		mov     [ebx+4], dl
		mov     eax, ebx
		mov     edx, ebx
		xor     eax, ebx
___1ab17h:
		imul    ebp, [___1a1ef8h], byte 6ch
		inc     edx
		mov     bl, [eax+ebp*1+___1a01e0h]
		inc     eax
		mov     [edx+4], bl
		cmp     eax, byte 0bh
		jl      short ___1ab17h
		mov     edx, 1eh
		mov     eax, [esp+8]
		lea     ebx, [edi+0bh]
		call    near ___23488h
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, [___24e4ach]
		mov     dx, [eax]
		mov     [eax+2], dx
		mov     eax, [esp+4]
		mov     ebp, [esp]
		add     eax, byte 13h
		add     ebp, byte 0fh
		mov     [esp+0ch], eax
		xor     ecx, ecx
___1ab73h:

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		xor     ebx, ebx
		mov     edx, [esp+0ch]
		mov     bl, al
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, ebp
		call    near ___13bd4h
		mov     edx, 0ah
		mov     eax, esi
		call    near ___23594h
		test    eax, eax
		je      near ___1ac45h
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, edi
		jne     near ___1ac37h
		cmp     cl, [esi+1]
		jne     near ___1ac37h
		mov     edx, [esp+4]
		add     edx, byte 2fh
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ecx, [esp]
		shl     eax, 7
		add     eax, ecx
		mov     ebx, ___1809d4h
		lea     ecx, [eax+28h]
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

		mov     edx, [esp+0ch]
		mov     eax, ebp
		call    near ___13c9ch
		xor     edx, edx
___1abfbh:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 28h
		jl      short ___1abfbh
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, esi
		call    near ___3f77ch__freeMemory
		mov     eax, [esp+8]
		call    near ___3f77ch__freeMemory
		mov     eax, 2
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
___1ac37h:
		xor     eax, eax
		mov     al, [esi]
		cmp     eax, edi
		jne     short ___1ac45h
		cmp     byte [esi+1], 2
		je      short ___1ac53h
___1ac45h:
		cmp     ebx, byte 1
		jne     near ___1ab73h
		jmp     near ___1ace1h
___1ac53h:
		xor     eax, edi
		mov     edx, [esp+4]
		mov     al, [esi+2]
		add     edx, byte 2fh
		mov     [___1a1098h], eax
		lea     eax, [edx*4+0]
		mov     ecx, [esp]
		add     eax, edx
		mov     ebx, ___1809ech
		shl     eax, 7
		mov     edx, ___185c0bh
		add     ecx, eax
		mov     eax, [___1a1108h]
		add     ecx, byte 28h
		call    near ___12e78h

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		mov     edx, [esp+4]
		mov     eax, [esp]
		add     edx, byte 13h
		add     eax, byte 0fh
		call    near ___13c9ch
		xor     edx, edx
___1aca5h:
		inc     edx
		call    near ___2ab50h
		cmp     edx, byte 28h
		jl      short ___1aca5h
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, esi
		call    near ___3f77ch__freeMemory
		mov     eax, [esp+8]
		call    near ___3f77ch__freeMemory
		mov     eax, 1
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
___1ace1h:
		mov     eax, [esp+8]
		mov     edx, 1eh
		lea     ebx, [edi+0bh]
		mov     byte [eax], 0
		call    near ___23488h
		mov     ebx, 1000h
		mov     eax, [___24e4ach]
		xor     edx, edx
		add     eax, byte 4
		call    near memset_
		mov     eax, [___24e4ach]
		mov     dx, [eax]
		mov     [eax+2], dx
		mov     eax, esi
		call    near ___3f77ch__freeMemory
		mov     eax, [esp+8]
		call    near ___3f77ch__freeMemory
		xor     eax, eax
		add     esp, byte 10h
		pop     ebp
		pop     edi
		pop     esi
		pop     ecx
		retn    
