%include "macros.inc"

    extern  ___185184h
    extern  ___185188h

%include "layout.inc"

section @text

__GDECL(__Nan_Inf)
		push    ebx
		push    edx
		sub     esp, byte 8
		mov     ebx, [esp+1ch]
		mov     eax, [esp+14h]
		mov     [esp], eax
		mov     eax, [esp+18h]
		mov     [esp+4], eax
		mov     eax, [esp+6]
		and     eax, 7ff0h
		and     eax, 0ffffh
		cmp     eax, dword 7ff0h
		jne     ___7de31h
		mov     edx, [esp+6]
		xor     dl, dl
		mov     eax, ebx
		and     dh, 80h
		and     edx, 0ffffh
		je      ___7ddefh
		lea     eax, [ebx+1]
		mov     byte [ebx], 2dh
___7ddefh:
		xor     ebx, ebx
		xor     edx, edx
		mov     bx, [esp+2]
		mov     dx, [esp]
		or      ebx, edx
		xor     edx, edx
		mov     dx, [esp+4]
		or      edx, ebx
		mov     ebx, [esp+6]
		xor     bh, bh
		and     bl, 0fh
		and     ebx, 0ffffh
		or      edx, ebx
		jne     ___7de22h
		mov     edx, [___185184h]
		jmp     ___7de28h
___7de22h:
		mov     edx, [___185188h]
___7de28h:
		mov     [eax], edx
		mov     eax, 1
		jmp     ___7de33h
___7de31h:
		xor     eax, eax
___7de33h:
		add     esp, byte 8
		pop     edx
		pop     ebx
		ret     0ch


section @const

___185184h:
db	"inf",0
___185188h:
db	"nan",0
