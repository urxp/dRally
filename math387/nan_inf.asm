cpu 386

SEGMENT _TEXT   PUBLIC USE32 ALIGN=1 CLASS=CODE

global __Nan_Inf
__Nan_Inf:
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
		jne     short dr@7de31h
		mov     edx, [esp+6]
		xor     dl, dl
		mov     eax, ebx
		and     dh, 80h
		and     edx, 0ffffh
		je      short dr@7ddefh
		lea     eax, [ebx+1]
		mov     byte [ebx], 2dh
dr@7ddefh:
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
		jne     short dr@7de22h
		mov     edx, [L$6]
		jmp     short dr@7de28h
dr@7de22h:
		mov     edx, [L$7]
dr@7de28h:
		mov     [eax], edx
		mov     eax, 1
		jmp     short dr@7de33h
dr@7de31h:
		xor     eax, eax
dr@7de33h:
		add     esp, byte 8
		pop     edx
		pop     ebx
		ret     0ch


SEGMENT CONST   PUBLIC USE32 ALIGN=4 CLASS=DATA
L$6:
    db  "inf",0
L$7:
    db  "nan",0