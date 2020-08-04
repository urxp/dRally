cpu 386
%include "macros.inc"

	extern	__CHK
	extern 	__STRCAT
	extern 	__STRCPY
	extern	___199f54h
	extern	rand_watcom106
	extern	___196b24h
	extern	___185a14h_UseWeapons
	extern	___1a1ef8h
	extern	___1a01fch
	extern	___1806a0h
	extern	___1806a8h
	extern	___1806b0h
	extern	___1806b8h
	extern	___1806c0h
	extern	___1806c8h
	extern	___13248h
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1a1e80h
	extern	___1930e0h
	extern	___13094h_cdecl
	extern	___193180h
	extern	___193130h
	extern	___182370h
	extern	___1931d0h
	extern	___193220h
	extern	___193270h
	extern	___1932c0h
	extern	___193310h
	extern	___193360h
	extern	___1933b0h
	extern	___12cb8h__VESA101_PRESENTSCREEN
	extern	___2ab50h
	extern	___24cc54h
	extern	dRally_Sound_pushEffect
	extern	___148cch_cdecl
	extern	___196aa4h
	extern	dRally_Sound_freeEffectChannel
	extern	___1806dch
	extern	___1806e4h
	extern	___1a1e84h
	extern	___193400h
	extern	___193450h
	extern	___1934a0h
	extern	___1934f0h
	extern	___193540h
	extern	___1a1028h
	extern	___1a0ef8h
	extern	___193590h
	extern	___1a01e0h
	extern	___182388h
	extern	___193630h
	extern	___1935e0h
	extern	___180724h
	extern	___193680h
	extern	___1936d0h
	extern	___196aa8h
	extern	___196aach
	extern	___1a1ff1h

section .text

__GDECL(___31868h)
		push    78h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 54h
		mov     ebx, 83h
		mov     edx, 21h
		mov     ecx, [___199f54h]
		mov     [esp+4ch], ebx
		mov     [esp+50h], edx
		test    ecx, ecx
		je      short ___3189eh
		xor     eax, eax
		jmp     near ___32224h
___3189eh:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		mov     ebx, 64h
		sar     edx, 1fh
		idiv    ebx
		mov     esi, 1
		mov     edi, [___196b24h]
		mov     [esp+44h], esi
		cmp     edx, edi
		jge     near ___32207h
		cmp     dword [___185a14h_UseWeapons], byte 0
		je      near ___32207h
		mov     ecx, 5
		mov     [___196b24h], ecx

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		mov     ebx, edx
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		cmp     ebx, byte 32h
		jge     near ___31d05h
		cmp     ecx, [eax+___1a01fch]
		jne     short ___31929h
		mov     ebx, 1
		lea     edi, [esp+34h]
		mov     esi, ___1806a0h
		mov     [esp+48h], ebx
		movsd   
		movsw   
___31929h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 4
		jne     short ___3195ah
		lea     edi, [esp+34h]
		mov     esi, ___1806a8h
		movsd   
		movsb   
		mov     dword [esp+48h], 2
___3195ah:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 3
		jne     short ___3198ch
		mov     ebp, 3
		lea     edi, [esp+34h]
		mov     esi, ___1806b0h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___3198ch:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 2
		jne     short ___319beh
		mov     ebx, 4
		lea     edi, [esp+34h]
		mov     esi, ___1806b8h
		mov     [esp+48h], ebx
		movsd   
		movsb   
___319beh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 1
		jne     short ___319efh
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		movsd   
		movsb   
		mov     dword [esp+48h], 5
___319efh:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___31a21h
		mov     ebp, 6
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___31a21h:
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, [esp+50h]
		mov     eax, [esp+54h]
		call    near ___13248h
		mov     edx, [esp+4ch]
		add     edx, byte 25h
		lea     ebp, [edx*4+0]
		mov     ebx, [esp+50h]
		add     ebp, edx
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     ebp, 7
		mov     ecx, 80h
		add     eax, ebp
		mov     esi, [___1a1e80h]
		add     ebx, eax
		mov     edx, 68h
		add     ebx, byte 0ch
___31a6dh:
		mov     edi, edx
___31a6fh:
		mov     al, [esi]
		or      al, al
		je      short ___31a77h
		mov     [ebx], al
___31a77h:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___31a6fh
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___31a6dh
		mov     edx, [esp+50h]
		add     edx, ebp
		mov     eax, ___1930e0h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 35h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		mov     esi, ___193180h
		add     edx, eax
		mov     eax, ___193130h
		add     edx, 80h
		mov     edi, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___182370h
		mov     edi, esp
		add     edx, byte 45h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     eax, edx
		lea     edx, [eax+80h]
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 55h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ebx, [esp+50h]
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___1931d0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 65h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193220h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 75h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___193270h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 85h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___1932c0h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 95h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193310h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 0a5h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___193360h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 0b5h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [ebx+eax*1]
		mov     eax, ___1933b0h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___31c7dh:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 32h
		jl      short ___31c7dh
		push    8000h
		mov     edx, 5
		mov     ecx, [___24cc54h]
		push    24000h
		xor     ebx, ebx
		mov     eax, edx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		xor     edx, edx
___31ca8h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 14h
		jl      short ___31ca8h
		mov     edi, 1
		mov     edx, [esp+4ch]
		mov     eax, [esp+50h]
		lea     ecx, [esp+40h]
		xor     ebx, ebx
		add     edx, 0beh
		add     eax, 80h
		mov     [esp+40h], edi

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___148cch_cdecl
	add 	esp, 10h

		cmp     edi, [esp+40h]
		jne     near ___321efh
		mov     eax, [esp+48h]
		mov     [___196aa4h], eax
		mov     eax, 5
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [esp+44h]
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___31d05h:
		cmp     ecx, [eax+___1a01fch]
		jne     short ___31d20h
		lea     edi, [esp+34h]
		mov     esi, ___1806b0h
		movsd   
		movsb   
		mov     dword [esp+48h], 1
___31d20h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 4
		jne     short ___31d52h
		mov     eax, 2
		lea     edi, [esp+34h]
		mov     esi, ___1806b8h
		mov     [esp+48h], eax
		movsd   
		movsb   
___31d52h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edx, [eax*4+___1a01fch]
		cmp     edx, byte 3
		jne     short ___31d81h
		lea     edi, [esp+34h]
		mov     esi, ___1806dch
		mov     [esp+48h], edx
		movsd   
		movsb   
___31d81h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 2
		jne     short ___31db2h
		lea     edi, [esp+34h]
		mov     esi, ___1806c0h
		movsd   
		movsb   
		mov     dword [esp+48h], 4
___31db2h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 1
		jne     short ___31de4h
		mov     ebp, 5
		lea     edi, [esp+34h]
		mov     esi, ___1806c8h
		mov     [esp+48h], ebp
		movsd   
		movsb   
___31de4h:
		mov     edx, [___1a1ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		cmp     dword [eax*4+___1a01fch], byte 0
		jne     short ___31e14h
		mov     ebx, 6
		mov     eax, [___1806e4h]
		mov     [esp+48h], ebx
		mov     [esp+34h], eax
___31e14h:
		push    byte 1
		mov     ecx, 0e6h
		mov     ebx, 1e2h
		mov     edx, [esp+50h]
		mov     eax, [esp+54h]
		call    near ___13248h
		mov     eax, [esp+4ch]
		add     eax, byte 25h
		lea     ebp, [eax*4+0]
		mov     ecx, [esp+50h]
		add     ebp, eax
		mov     eax, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		shl     ebp, 7
		mov     edx, 68h
		add     eax, ebp
		mov     esi, [___1a1e84h]
		add     eax, ecx
		mov     ecx, 80h
		lea     ebx, [eax+0ch]
___31e60h:
		mov     edi, edx
___31e62h:
		mov     al, [esi]
		or      al, al
		je      short ___31e6ah
		mov     [ebx], al
___31e6ah:
		inc     ebx
		inc     esi
		dec     edi
		jne     short ___31e62h
		add     ebx, 280h
		sub     ebx, edx
		dec     ecx
		jne     short ___31e60h
		mov     edx, [esp+50h]
		add     edx, ebp
		mov     eax, ___193400h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 35h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     esi, [esp+50h]
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___193450h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 45h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___1934a0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 55h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		add     eax, esi
		lea     edx, [eax+80h]
		mov     eax, ___1934f0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, byte 65h
		lea     eax, [edx*4+0]
		add     eax, edx
		shl     eax, 7
		lea     edx, [esi+eax*1]
		mov     eax, ___193540h
		add     edx, 80h
		mov     ebx, 4

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
___31f2eh:

	push 	edx
	push 	ecx
		call    rand_watcom106
	pop 	ecx
	pop 	edx

		mov     edx, eax
		sar     edx, 1fh
		idiv    ebx
		mov     eax, [___1a1028h]
		mov     ebp, edx
		mov     al, [ebp+eax*4+___1a0ef8h]
		mov     esi, [___1a1ef8h]
		and     eax, 0ffh
		cmp     eax, esi
		je      short ___31f2eh
		mov     esi, ___193590h
		mov     edi, esp
		call 	__STRCPY
		mov     eax, [___1a1028h]
		xor     edx, edx
		mov     dl, [ebp+eax*4+___1a0ef8h]
		lea     eax, [edx*8+0]
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, esp
		add     esi, eax
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___182388h
		mov     edi, esp
		add     edx, byte 75h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     edx, eax
		mov     eax, esp
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 85h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edi, [esp+50h]
		shl     eax, 7
		add     eax, edi
		lea     edx, [eax+80h]
		mov     esi, ___193630h
		mov     eax, ___1935e0h
		mov     edi, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		call 	__STRCPY
		lea     esi, [esp+34h]
		mov     edi, esp
		mov     edx, [esp+4ch]
		call 	__STRCAT
		mov     esi, ___180724h
		mov     edi, esp
		add     edx, 95h
		call 	__STRCAT
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     eax, edx
		lea     edx, [eax+80h]
		mov     eax, esp

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 0a5h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     edx, [esp+50h]
		shl     eax, 7
		add     edx, eax
		mov     eax, ___193680h
		add     edx, 80h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	
		mov     edx, [esp+4ch]
		add     edx, 0b5h
		lea     eax, [edx*4+0]
		add     eax, edx
		mov     ebx, [esp+50h]
		shl     eax, 7
		add     eax, ebx
		lea     edx, [eax+80h]
		mov     eax, ___1936d0h

	push 	ecx
	push 	edx
	push 	eax
		call    ___13094h_cdecl
	add 	esp, 8
	pop 	ecx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___12cb8h__VESA101_PRESENTSCREEN
	pop 	eax
	pop		ecx
	pop		edx

		xor     edx, edx
___32137h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 32h
		jl      short ___32137h
		push    8000h
		mov     edx, 5
		mov     ecx, [___24cc54h]
		push    24000h
		xor     ebx, ebx
		mov     eax, edx
	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    dRally_Sound_pushEffect
	add 	esp, 18h
		xor     edx, edx
___32162h:
		inc     edx

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		cmp     edx, byte 14h
		jl      short ___32162h
		mov     ecx, 1
		mov     edx, [esp+4ch]
		mov     eax, [esp+50h]
		xor     ebx, ebx
		mov     [esp+40h], ecx
		add     edx, 0beh
		add     eax, 80h
		lea     ecx, [esp+40h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___148cch_cdecl
	add 	esp, 10h

		cmp     dword [esp+40h], byte 1
		jne     short ___321efh
		mov     eax, [esp+48h]
		mov     [___196aa8h], eax
		mov     eax, [___1a1028h]
		mov     al, [ebp+eax*4+___1a0ef8h]
		and     eax, 0ffh
		mov     [___196aach], eax
		mov     edx, eax
		shl     eax, 3
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     esi, ___1a01e0h
		shl     eax, 2
		mov     edi, ___1a1ff1h
		add     esi, eax
		call 	__STRCPY
___321efh:
		mov     eax, 5
	push 	edx
	push 	ecx
	push 	eax
		call    dRally_Sound_freeEffectChannel
	add 	esp, 4
	pop 	ecx
	pop 	edx
		mov     eax, [esp+44h]
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___32207h:
		mov     eax, [___196b24h]
		cmp     eax, byte 61h
		jge     short ___3221ah
		lea     edx, [eax+2]
		mov     [___196b24h], edx
___3221ah:
		xor     ebx, ebx
		mov     [esp+44h], ebx
		mov     eax, [esp+44h]
___32224h:
		add     esp, byte 54h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
