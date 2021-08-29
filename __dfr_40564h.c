/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___243890h
	extern	___24388ch
	extern	___19bd58h_gamepad

section .text

__GDECL(___40564h)
		push    18h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		cli     
		mov     dx, 201h
		xor     ebx, ebx
		out     dx, ax
		mov     ecx, 1388h
		xor     esi, esi
		xor     edi, edi
___40585h:
		in      al, dx
		dec     ecx
		je      short ___405aah
		mov     bl, al
		mov     bh, al
		and     bl, 1
		je      short ___40593h
		inc     esi
___40593h:
		and     bh, 2
		je      short ___40599h
		inc     edi
___40599h:
		test    bx, bx
		jne     short ___40585h
		mov     [___243890h], esi
		mov     [___24388ch], edi
___405aah:
		sti     
		test    ecx, ecx
		jne     short ___405b5h
		mov     [___19bd58h_gamepad], ecx
___405b5h:
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    
*/
