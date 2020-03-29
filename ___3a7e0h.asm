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

__GDECL(___3a7e0h_cdecl)
	mov 	eax, [esp+4]
	call 	___3a7e0h
	retn

__GDECL(___3a7e0h)
		push    48h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 2ch
		mov     [esp], eax
		mov     ebx, 0bb80h
		mov     ecx, 0fffch
		xor     edx, edx
		mov     [esp+0ch], ebx
		mov     [esp+8], ecx
		mov     [esp+4], edx
		mov     [esp+10h], edx
___3a812h:
		call    near ___2aa08h
		imul    edx, [esp+10h], byte 0fh
		xor     edi, edi
		mov     ebp, 0bb80h
		mov     [esp+18h], edi
		mov     [esp+1ch], ebp
		mov     [esp+14h], edx
___3a82fh:
		xor     edx, edx
		mov     [esp+24h], edx
		mov     [esp+28h], edx
		mov     edx, [esp+1ch]
		mov     ebp, [esp+14h]
		mov     [esp+20h], edx
___3a845h:
		mov     ecx, [esp+20h]
		mov     eax, [esp+28h]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     edi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     esi, [___1a10c4h]
		add     ebx, ecx
		add     edi, ecx
		add     esi, eax
		mov     ecx, 0fh
		add     ebx, ebp
		add     edi, ebp
		mov     edx, ecx
___3a870h:
		mov     ch, dl
___3a872h:
		mov     al, [esi]
		or      al, al
		je      short ___3a87ch
		mov     al, [edi]
		mov     [ebx], al
___3a87ch:
		inc     ebx
		inc     esi
		inc     edi
		dec     ch
		jne     short ___3a872h
		add     ebx, 280h
		sub     ebx, edx
		add     edi, 280h
		sub     edi, edx
		dec     cl
		jne     short ___3a870h
		add     ebp, byte 0fh
		mov     edx, [esp+28h]
		mov     ebx, [esp+24h]
		add     edx, 0e1h
		inc     ebx
		mov     [esp+28h], edx
		mov     [esp+24h], ebx
		cmp     ebx, byte 0ah
		jl      short ___3a845h
		mov     edi, [esp+18h]
		mov     esi, [esp+1ch]
		inc     edi
		add     esi, 2580h
		mov     [esp+18h], edi
		mov     [esp+1ch], esi
		cmp     edi, byte 16h
		jl      near ___3a82fh
		imul    ebx, [esp+10h], byte 0fh
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 14ah
		add     edx, 0bb80h
		mov     eax, [esp+0ch]
		add     edx, ebx
		mov     ebx, 96h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		cmp     dword [esp], byte 0ffffffffh
		jne     short ___3a90bh
		mov     eax, [esp+8]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___3a90bh:
		cmp     dword [esp], byte 1
		jne     short ___3a91ah
		mov     eax, [esp+4]
	push 	edx
	push 	ecx
	push 	eax
		call    near dRally_Sound_setMasterVolume
	add 	esp, 4
	pop 	ecx
	pop 	edx
___3a91ah:
		mov     esi, [esp+8]
		mov     edi, [esp+4]
		mov     ebp, [esp+10h]
		mov     ecx, [esp+0ch]
		sub     esi, 5f4h
		add     edi, 5f4h
		inc     ebp
		add     ecx, byte 0fh
		mov     [esp+8], esi
		mov     [esp+4], edi
		mov     [esp+10h], ebp
		mov     [esp+0ch], ecx
		cmp     ebp, byte 2bh
		jl      near ___3a812h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		call    near ___59b3ch
		add     esp, byte 2ch
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
