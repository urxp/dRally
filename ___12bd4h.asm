cpu 386
%include "macros.inc"

	extern 	__CHK
	extern 	___196a8ch__VGATYPE

section .text

__GDECL(___12bd4h__VESA101_SETBANK)
		push    0ch
		call    __CHK
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [___196a8ch__VGATYPE]
		cmp     eax, byte 1
		jb      .vbe
		jbe     .novbe
		cmp     eax, byte 2
		je      .cirrus
		pop     edx
		pop     ebx
		retn    
.vbe:
		test    eax, eax
		jne     ___12c35h
		push    edx
		xor     bx, bx
		mov     ax, 4f05h
		int     10h
		pop     edx
		inc     bx
		mov     ax, 4f05h
		int     10h
		pop     edx
		pop     ebx
		retn    
.novbe:
		push    edx
		mov     al, 0eh
		mov     dx, 3c4h
		out     dx, al
		inc     dx
		pop     eax
		xor     al, 2
		out     dx, al
		pop     edx
		pop     ebx
		retn    
.cirrus:
		shl     dl, 4
		push    edx
		mov     dx, 3ceh
		mov     al, 9
		out     dx, al
		inc     dx
		pop     eax
		out     dx, al
		dec     dx
		mov     al, 8
		out     dx, al
___12c35h:
		pop     edx
		pop     ebx
		retn    
