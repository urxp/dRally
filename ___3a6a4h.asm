cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___2aa08h
	extern	___1a1124h__VESA101h_ScreenBufferA
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a10c4h
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___5994ch
	extern	___59b3ch

section .text

__GDECL(___3a6a4h)
		push    3ch
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 20h
		mov     ebx, 0bb80h
		xor     edx, edx
		mov     [esp], ebx
		mov     [esp+4], edx
___3a6c5h:
		imul    edx, [esp+4], byte 0fh
		call    near ___2aa08h
		xor     ecx, ecx
		mov     esi, 0bb80h
		mov     [esp+10h], ecx
		mov     [esp+0ch], esi
		mov     [esp+8], edx
___3a6e2h:
		xor     ebp, ebp
		mov     edx, [esp+0ch]
		mov     [esp+18h], ebp
		mov     [esp+1ch], ebp
		mov     [esp+14h], edx
		mov     ebp, [esp+8]
___3a6f8h:
		mov     edx, [esp+14h]
		mov     eax, [esp+1ch]
		mov     ecx, 0fh
		mov     esi, [___1a1124h__VESA101h_ScreenBufferA]
		mov     ebx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		add     esi, edx
		add     ebx, edx
		lea     edi, [esi+ebp*1]
		mov     edx, ecx
		mov     esi, [___1a10c4h]
		add     ebx, ebp
		add     esi, eax
		add     ebp, byte 0fh
___3a727h:
		mov     ch, dl
___3a729h:
		mov     al, [esi]
		or      al, al
		je      short ___3a733h
		mov     al, [edi]
		mov     [ebx], al
___3a733h:
		inc     ebx
		inc     esi
		inc     edi
		dec     ch
		jne     short ___3a729h
		add     ebx, 280h
		sub     ebx, edx
		add     edi, 280h
		sub     edi, edx
		dec     cl
		jne     short ___3a727h
		mov     edx, [esp+1ch]
		mov     ebx, [esp+18h]
		add     edx, 0e1h
		inc     ebx
		mov     [esp+1ch], edx
		mov     [esp+18h], ebx
		cmp     ebx, byte 0ah
		jl      short ___3a6f8h
		mov     edi, [esp+10h]
		mov     esi, [esp+0ch]
		inc     edi
		add     esi, 2580h
		mov     [esp+10h], edi
		mov     [esp+0ch], esi
		cmp     edi, byte 16h
		jl      near ___3a6e2h
		imul    ebx, [esp+4], byte 0fh
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     ecx, 14ah
		add     edx, 0bb80h
		mov     eax, [esp]
		add     edx, ebx
		mov     ebx, 96h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     edx, [esp]
		mov     ebx, [esp+4]
		add     edx, byte 0fh
		inc     ebx
		mov     [esp], edx
		mov     [esp+4], ebx
		cmp     ebx, byte 2bh
		jl      near ___3a6c5h

	push 	edx
	push 	ecx
		call    ___5994ch
	pop 	ecx
	pop 	edx

		call    near ___59b3ch
		add     esp, byte 20h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
