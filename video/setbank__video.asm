%include "macros.inc"

	extern 	__CHK
	extern 	__CEXT_V(GXType)

%include 'layout.inc'

section @text

global setbank__video
setbank__video:
		push    0ch
		call    __CHK
		push    ebx
		push    edx
		mov     edx, eax
		mov     eax, [__CEXT_V(GXType)]
		cmp     eax, 1
		jb      ___12bf6h
		jbe     ___12c10h
		cmp     eax, 2
		je      @is_cirrus
		pop     edx
		pop     ebx
		retn    
___12bf6h:
		test    eax, eax
		jne     ___12c35h
		push    edx
;; BH = 0 :: Select memory window ;;;;;;;;;;;;;;;;
;; window ID 0
		xor     bx, bx
		mov     ax, 4f05h
		int     10h
		pop     edx
;; window ID 1
		inc     bx
		mov     ax, 4f05h
		int     10h
		pop     edx
		pop     ebx
		retn    
___12c10h:
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
@is_cirrus:
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
