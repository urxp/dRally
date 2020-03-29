cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	___186a3ch
	extern 	___180b88h
	extern 	___185b58h
	extern 	___185b6ah
	extern 	___185b6bh
	extern 	___185b6ch
	extern 	___185b6dh
	extern 	___185b6eh
	extern 	___186a6eh
	extern 	___180ba0h
	extern 	___185b6fh
	extern 	___185aach
	extern 	___2ec68h_cdecl
	extern 	___60a84h
	extern 	___2ab50h
	extern 	___196adch
	extern 	___60b48h
	extern 	___611c0h
	extern 	___1a103ch
	extern 	___1a1ef8h
	extern 	___1a01e0h
	extern 	___196ad4h
	extern 	___196a84h
	extern 	___196a98h
	extern 	___196a9ch
	extern 	___196aa0h
	extern 	___1a0224h
	extern 	___1a01ech
	extern 	___1a01f0h
	extern 	___1a01f4h
	extern 	___1a01f8h
	extern 	___1a01fch
	extern 	___1a0210h
	extern 	___1a0228h
	extern 	___18e2a4h
	extern 	___1a021ch
	extern 	___1a1168h
	extern 	___1a024ch
	extern 	___1a02b8h
	extern 	___1a0324h
	extern 	___60b60h
	extern 	___1a116ch
	extern 	___1a1f4fh
	extern 	___1a1f4eh
	extern 	___1a1dbah
	extern 	___180bb4h
	extern 	___1a2011h
	extern 	___18d492h
	extern 	___180724h
	extern 	___1a1f63h
	extern 	___23230h
	extern 	___12d6ch__VESA101_PRESENTBOTTOMSCREEN

section .text

__GDECL(___1c6bch)
		push    30h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		sub     esp, byte 14h
		mov     ebp, eax
		mov     dl, 1
		mov     edi, ___186a3ch
		mov     esi, ___180b88h
		xor     ah, ah
		xor     ebx, ebx
		mov     [___185b58h], ah
		mov     [___185b6ah], dl
		mov     [___185b6bh], dl
		mov     [___185b6ch], ah
		mov     [___185b6dh], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___185b6eh], ah
		mov     edi, ___186a6eh
		mov     esi, ___180ba0h
		xor     edx, edx
		mov     [___185b6fh], ah
		mov     [___185aach], edx
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		movsb   

	push 	eax
	push 	ecx
	push 	edx
		call    near ___2ec68h_cdecl
	pop 	edx
	pop 	ecx
	pop 	eax

		call    near ___60a84h
		mov     [esp+10h], edx
		mov     esi, 4
___1c73eh:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, [esp+10h]
		mov     edx, eax
		mov     edi, 0ah
		sar     edx, 1fh
		idiv    edi
		cmp     edx, byte 1
		jne     short ___1c76ch
		mov     edx, [___196adch]
		mov     eax, esi
		call    near ___60b48h
		mov     ebx, eax
___1c76ch:
		inc     dword [esp+10h]
		cmp     ebx, 0ffh
		jne     short ___1c73eh
		xor     edx, edx
		xor     eax, eax
		call    near ___611c0h
		mov     edx, eax
		mov     [___1a103ch], eax
		mov     eax, [___1a1ef8h]
		cmp     edx, eax
		je      short ___1c7d2h
		mov     ebx, eax
		shl     eax, 3
		sub     eax, ebx
		shl     eax, 2
		sub     eax, ebx
		mov     esi, ___1a01e0h
		shl     eax, 2
		add     esi, eax
		mov     eax, edx
		shl     eax, 3
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		mov     edi, ___1a01e0h
		shl     eax, 2
		mov     ecx, 6ch
		add     edi, eax
		call 	__MOVS
___1c7d2h:
		mov     eax, [___1a103ch]
		xor     edx, edx
		mov     [___1a1ef8h], eax
		mov     [___196ad4h], edx
		mov     [___196a84h], edx
		mov     [___196a98h], edx
		mov     [___196a9ch], edx
		mov     [___196aa0h], edx
		mov     edx, eax
		shl     eax, 3
		sub     eax, edx
		shl     eax, 2
		sub     eax, edx
		lea     edx, [eax*4+0]
		xor     ebx, ebx
		mov     [edx+___1a0224h], ebx
		mov     [edx+___1a01ech], ebx
		mov     [edx+___1a01f0h], ebx
		mov     [edx+___1a01f4h], ebx
		mov     [edx+___1a01f8h], ebx
		mov     [edx+___1a01fch], ebx
		lea     eax, [ebx*8+0]
		mov     [edx+___1a0210h], ebp
		shl     eax, 3
		mov     ebp, 1
		shl     eax, 5
		mov     [edx+___1a0228h], ebp
		mov     eax, [eax+___18e2a4h]
		mov     [esp+10h], ebx
		mov     [edx+___1a021ch], eax
___1c863h:
		mov     eax, [esp+10h]
		mov     dl, [esp+10h]
		mov     [eax+___1a1168h], dl
		lea     edx, [eax+1]
		mov     [esp+10h], edx
		cmp     edx, byte 4
		jl      short ___1c863h
		mov     ecx, ___1a01e0h
		mov     esi, ___1a024ch
		mov     edi, ___1a02b8h
		mov     ebp, ___1a0324h
		xor     ebx, ebx
		mov     [esp], ecx
		mov     [esp+4], esi
		mov     [esp+8], edi
		mov     [esp+0ch], ebp
		call    near ___60a84h
		mov     [esp+10h], ebx
		mov     edi, 6ch
		mov     esi, 1
		mov     ebp, 0ah
___1c8bah:
		call    near ___2ab50h
		call    near ___2ab50h
		mov     eax, [esp+10h]
		mov     edx, eax
		sar     edx, 1fh
		idiv    ebp
		cmp     edx, byte 1
		jne     short ___1c8f2h
		imul    ebx, [___1a1ef8h], byte 6ch
		mov     ecx, edi
		mov     eax, esi
		mov     edx, [___196adch]
		add     ebx, ___1a01e0h
		call    near ___60b60h
		mov     ebx, eax
___1c8f2h:
		inc     dword [esp+10h]
		cmp     ebx, 0ffh
		jne     short ___1c8bah
		mov     edx, esp
		mov     eax, 6ch
		mov     ebx, ___1a116ch
		xor     esi, esi
		call    near ___611c0h
		mov     [esp+10h], esi
		lea     edx, [ebx+96h]
___1c91bh:
		mov     esi, edx
		mov     edi, ebx
		call 	__STRCPY
		mov     eax, [esp+10h]
		mov     esi, [esp+10h]
		add     ebx, 96h
		add     edx, 96h
		lea     edi, [esi+1]
		mov     al, [eax+___1a1f4fh]
		mov     [esp+10h], edi
		mov     [esi+___1a1f4eh], al
		cmp     edi, byte 15h
		jl      short ___1c91bh
		mov     ecx, 8
		mov     edx, [___196ad4h]
		mov     edi, ___1a1dbah
		mov     esi, ___180bb4h
		mov     dl, [edx+___1a2011h]
		rep movsd   
		movsb   
		and     edx, 0ffh
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		mov     edi, ___1a1dbah
		add     esi, eax
		call 	__STRCAT
		mov     esi, ___180724h
		call 	__STRCAT
		xor     al, al
		mov     [___1a1f63h], al
	
	push 	edx
	push 	ecx
	push 	eax
		call    ___23230h
	pop 	eax
	pop 	ecx
	pop 	edx


	push 	edx
	push 	ecx
	push 	eax
		call    ___12d6ch__VESA101_PRESENTBOTTOMSCREEN
	pop		eax
	pop 	ecx
	pop		edx

		add     esp, byte 14h
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
