/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___19bd60h
	extern	___24e4c0h
	extern	___618c4h

section .text

__GDECL(___47e90h)
		push    10h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		mov     cl, al
		cmp     dword [___19bd60h], byte 0
		je      short ___47ed1h
		xor     edx, edx
___47eaah:
		mov     eax, [___24e4c0h]
		mov     bx, [eax]
		and     bh, 0fh
		and     ebx, 0ffffh
		mov     [ebx+eax*1+4], cl
		mov     bx, [eax]
		inc     ebx
		inc     edx
		mov     [eax], bx
		cmp     edx, byte 0ah
		jl      short ___47eaah

	push 	edx
	push 	ecx
	push 	eax
		call    ___618c4h
	pop 	eax
	pop 	ecx
	pop 	edx

___47ed1h:
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
