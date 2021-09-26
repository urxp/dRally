#include "drally.h"

void ___23488h_cdecl(dword A0, dword A1, dword A2){

/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___24e4c0h
	extern	___19bd60h
	extern	___6168ch

section .text

__GDECL(___23488h_cdecl)

	push 	ebx

	mov 	ebx, [esp+10h]
	mov 	edx, [esp+0ch]
	mov 	eax, [esp+8]
	call 	___23488h

	pop 	ebx
	retn

__GDECL(___23488h)
		push    18h
		call    near __CHK
		push    ecx
		push    esi
		push    edi
		sub     esp, byte 8
		mov     edi, [___24e4c0h]
		mov     esi, eax
		mov     [esp+4], edx
		mov     [esp], ebx
		cmp     dword [___19bd60h], byte 0
		je      near ___23587h
		mov     al, [esp]
		mov     ah, 0ah
		mul     ah
		mov     bx, [edi]
		and     bh, 0fh
		mov     dl, al
		mov     eax, edi
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], dl
		mov     bx, [edi]
		inc     ebx
		inc     dl
		mov     [edi], bx
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], dl
		mov     cx, [edi]
		mov     ebx, [esp+4]
		inc     ecx
		xor     edx, edx
		mov     [edi], cx
		test    ebx, ebx
		jle     short ___23520h
		mov     ebx, esi
		mov     eax, edi
___234fah:
		mov     si, [edi]
		and     esi, 0fffh
		and     esi, 0ffffh
		mov     cl, [ebx]
		mov     [esi+eax*1+4], cl
		inc     ebx
		mov     si, [edi]
		inc     edx
		inc     esi
		mov     ecx, [esp+4]
		mov     [edi], si
		cmp     edx, ecx
		jl      short ___234fah
___23520h:
		mov     ax, [edi]
		mov     edx, edi
		and     ah, 0fh
		and     eax, 0ffffh
		mov     bl, [esp+4]
		mov     [edx+eax*1+4], bl
		mov     al, [esp]
		mov     ah, 0ah
		mul     ah
		mov     bx, [edi]
		inc     ebx
		mov     [edi], bx
		mov     ah, al
		and     bh, 0fh
		add     ah, 2
		and     ebx, 0ffffh
		mov     [edx+ebx*1+4], ah
		mov     cx, [edi]
		mov     bl, al
		inc     ecx
		add     bl, 3
		mov     eax, ecx
		mov     [edi], cx
		and     ah, 0fh
		and     eax, 0ffffh
		mov     [edx+eax*1+4], bl
		mov     si, [edi]
		inc     esi
		mov     [___24e4c0h], edi
		mov     [edi], si

	push 	edx
	push 	ecx
	push 	eax
		call    ___6168ch
	pop 	eax
	pop 	ecx
	pop 	edx

		mov     edi, [___24e4c0h]
___23587h:
		mov     [___24e4c0h], edi
		add     esp, byte 8
		pop     edi
		pop     esi
		pop     ecx
		retn    
*/
}
