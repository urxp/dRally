/*
cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	__MOVS
	extern 	__STRCAT
	extern 	__STRCPY
	extern 	___1866b8h
	extern 	___185b58h
	extern 	___1866b8h
	extern 	___185a5ch
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
	extern 	___18e298h
	extern 	___1a1168h
	extern 	___60b60h
	extern 	___1a116ch
	extern 	___1a1f4eh
	extern 	___1a2010h
	extern 	___18d492h
	extern 	___23230h
	extern 	___12d6ch__VESA101_PRESENTBOTTOMSCREEN

section .text

__GDECL(___1c6bch_cdecl)
	mov 	eax, [esp+4]
	call 	___1c6bch
	retn

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
		mov     edi, ___1866b8h+384h
		mov     esi, __dfr_180b88h
		xor     ah, ah
		xor     ebx, ebx
		mov     [___185b58h], ah
		mov     [___185b58h+12h], dl
		mov     [___185b58h+13h], dl
		mov     [___185b58h+14h], ah
		mov     [___185b58h+15h], ah
		movsd   
		movsd   
		movsd   
		movsd   
		movsd   
		movsw   
		mov     [___185b58h+16h], ah
		mov     edi, ___1866b8h+3b6h
		mov     esi, __dfr_180ba0h
		xor     edx, edx
		mov     [___185b58h+17h], ah
		mov     [___185a5ch+50h], edx
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

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		mov     [esp+10h], edx
		mov     esi, 4
___1c73eh:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
		mov     eax, [esp+10h]
		mov     edx, eax
		mov     edi, 0ah
		sar     edx, 1fh
		idiv    edi
		cmp     edx, byte 1
		jne     short ___1c76ch
		mov     edx, [___196adch]
		mov     eax, esi

	push 	ecx
	push 	edx
	push 	eax
		call    ___60b48h
	add 	esp, 8
	pop 	ecx

		mov     ebx, eax
___1c76ch:
		inc     dword [esp+10h]
		cmp     ebx, 0ffh
		jne     short ___1c73eh
		xor     edx, edx
		xor     eax, eax
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

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
		mov     [edx+___1a01e0h+44h], ebx
		mov     [edx+___1a01e0h+0ch], ebx
		mov     [edx+___1a01e0h+10h], ebx
		mov     [edx+___1a01e0h+14h], ebx
		mov     [edx+___1a01e0h+18h], ebx
		mov     [edx+___1a01e0h+1ch], ebx
		lea     eax, [ebx*8+0]
		mov     [edx+___1a01e0h+30h], ebp
		shl     eax, 3
		mov     ebp, 1
		shl     eax, 5
		mov     [edx+___1a01e0h+48h], ebp
		mov     eax, [eax+___18e298h+0xc]
		mov     [esp+10h], ebx
		mov     [edx+___1a01e0h+3ch], eax
___1c863h:
		mov     eax, [esp+10h]
		mov     dl, [esp+10h]
		mov     [eax+___1a1168h], dl
		lea     edx, [eax+1]
		mov     [esp+10h], edx
		cmp     edx, byte 4
		jl      short ___1c863h
		mov     ecx, ___1a01e0h
		mov     esi, ___1a01e0h+6ch
		mov     edi, ___1a01e0h+6ch+6ch
		mov     ebp, ___1a01e0h+6ch+6ch+6ch
		xor     ebx, ebx
		mov     [esp], ecx
		mov     [esp+4], esi
		mov     [esp+8], edi
		mov     [esp+0ch], ebp

	push 	eax
	push 	ecx
	push 	edx
		call    ___60a84h
	pop 	edx
	pop 	ecx
	pop 	eax

		mov     [esp+10h], ebx
		mov     edi, 6ch
		mov     esi, 1
		mov     ebp, 0ah
___1c8bah:

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	

	push 	edx
	push 	ecx
	push 	eax
		call    ___2ab50h
	pop 	eax
	pop 	ecx
	pop 	edx
	
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

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___60b60h
	add 	esp, 10h

		mov     ebx, eax
___1c8f2h:
		inc     dword [esp+10h]
		cmp     ebx, 0ffh
		jne     short ___1c8bah
		mov     edx, esp
		mov     eax, 6ch
		mov     ebx, ___1a116ch
		xor     esi, esi
	
	push 	ecx
	push 	edx
	push 	eax
		call    ___611c0h
	add 	esp, 8
	pop 	ecx

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
		mov     al, [eax+___1a1f4eh+1]
		mov     [esp+10h], edi
		mov     [esi+___1a1f4eh], al
		cmp     edi, byte 15h
		jl      short ___1c91bh
		mov     ecx, 8
		mov     edx, [___196ad4h]
		mov     edi, ___1a116ch+0c4eh
		mov     esi, __dfr_180bb4h
		mov     dl, [edx+___1a2010h+1]
		rep movsd   
		movsb   
		and     edx, 0ffh
		mov     eax, edx
		shl     eax, 4
		mov     esi, ___18d492h
		sub     eax, edx
		mov     edi, ___1a116ch+0c4eh
		add     esi, eax
		call 	__STRCAT
		mov     esi, loc_dot
		call 	__STRCAT
		xor     al, al
		mov     [___1a1f4eh+15h], al
	
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
	
section .data
loc_dot:
	db 	".",0,0,0
__dfr_180b88h:
	db 	"Continue Current Game",0,0,0
__dfr_180ba0h:
	db 	"Abort Current Game",0,0
__dfr_180bb4h:
	db	"-- Prepare for the first track, ",0,0,0,0
*/
