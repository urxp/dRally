cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2aa08h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a10c4h
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	dRally_Sound_setMasterVolume
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___3a968h_cdecl)
	mov 	eax, [esp+4]
	call 	___3a968h
	retn

__GDECL(___3a968h)
		push    44h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 28h
		mov     [esp], eax
		mov     ebx, 0b680h
		mov     ecx, 0fffch
		xor     edx, edx
		mov     [esp+8], ebx
		mov     [esp+0ch], ecx
		mov     [esp+4], edx
		mov     [esp+10h], edx
___3a99ah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2aa08h
	pop 	eax
	pop 	ecx
	pop 	edx

		imul    edx, [esp+10h], byte 0fh
		xor     edi, edi
		mov     ebp, 0bb80h
		mov     [esp+1ch], edi
		mov     [esp+18h], ebp
		mov     [esp+14h], edx
___3a9b7h:
		mov     ecx, [esp+18h]
		xor     edx, edx
		mov     esi, [esp+14h]
		mov     [esp+20h], edx
		mov     [esp+24h], edx
		lea     ebp, [ecx+esi*1]
___3a9cch:
		mov     eax, [esp+20h]
		mov     ecx, 0fh
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     esi, [___1a10c4h]
		mov     edx, ecx
		add     ebx, ebp
		add     edi, ebp
		add     esi, eax
		sub     ebx, 500h
		sub     edi, 500h
___3a9fbh:
		mov     ch, dl
___3a9fdh:
		mov     al, [esi]
		or      al, al
		je      short ___3aa07h
		mov     al, [edi]
		mov     [ebx], al
___3aa07h:
		inc     ebx
		inc     esi
		inc     edi
		dec     ch
		jne     short ___3a9fdh
		add     ebx, 280h
		sub     ebx, edx
		add     edi, 280h
		sub     edi, edx
		dec     cl
		jne     short ___3a9fbh
		add     ebp, byte 0fh
		mov     edx, [esp+20h]
		mov     ebx, [esp+24h]
		add     edx, 0e1h
		inc     ebx
		mov     [esp+20h], edx
		mov     [esp+24h], ebx
		cmp     ebx, byte 0ah
		jl      short ___3a9cch
		mov     edi, [esp+1ch]
		mov     esi, [esp+18h]
		inc     edi
		add     esi, 2580h
		mov     [esp+1ch], edi
		mov     [esp+18h], esi
		cmp     edi, byte 1bh
		jl      near ___3a9b7h
		imul    edx, [esp+10h], byte 0fh
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 195h
		add     ebx, 0bb80h
		mov     eax, [esp+8]
		add     edx, ebx
		mov     ebx, 96h
		sub     edx, 500h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		cmp     dword [esp], byte 0ffffffffh
		jne     short ___3aa9ch
		mov     eax, [esp+0ch]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___3aa9ch:
		cmp     dword [esp], byte 1
		jne     short ___3aaabh
		mov     eax, [esp+4]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___3aaabh:
		mov     esi, [esp+0ch]
		mov     edi, [esp+4]
		mov     ebp, [esp+10h]
		mov     ecx, [esp+8]
		sub     esi, 5f4h
		add     edi, 5f4h
		inc     ebp
		add     ecx, byte 0fh
		mov     [esp+0ch], esi
		mov     [esp+4], edi
		mov     [esp+10h], ebp
		mov     [esp+8], ecx
		cmp     ebp, byte 2bh
		jl      near ___3a99ah

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

	push 	edx
	push 	ecx
		call    ___59b3ch
	pop 	ecx
	pop 	edx

		add     esp, byte 28h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
