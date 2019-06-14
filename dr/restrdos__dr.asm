%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(int386__clib3r)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(restrdos__dr))
		push    34h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		sub     esp, 1ch
		mov     edx, 3
		mov     ebx, esp
		mov     eax, 10h
		mov     ecx, 708h
		mov     esi, 200h
		mov     [esp], dx
		mov     edx, esp
		xor     edi, edi
		call    __CEXT_F(int386__clib3r)
		mov     ebx, 100h
		mov     edx, esp
		mov     eax, 10h
		mov     [esp], bx
		mov     ebx, esp
		mov     [esp+8], cx
		call    __CEXT_F(int386__clib3r)
		mov     eax, 1700h
		mov     ebx, esp
		mov     edx, esp
		mov     [esp], si
		mov     [esp+0ch], ax
		mov     eax, 10h
		mov     [esp+4], di
		call    __CEXT_F(int386__clib3r)
		add     esp, 1ch
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn
