
    extern  __CHK
    extern int386__clib3r

%include "layout.inc"

section @text

global allocateDOSMemoryBlock__dpmi
allocateDOSMemoryBlock__dpmi:
		push    28h
		call    near __CHK
		push    ebx
		push    ecx
		sub     esp, byte 1ch
		mov     ecx, edx
		mov     dword [esp], 100h
		add     eax, byte 0fh
		shr     eax, 4
		mov     [esp+4], eax
		mov     ebx, esp
		mov     edx, esp
		mov     eax, 31h
		call    near int386__clib3r
		mov     eax, [esp+0ch]
		mov     [ecx], eax
		cmp     dword [esp+18h], byte 0
		je      short ___61b41h
		xor     eax, eax
		jmp     short ___61b4ch
___61b41h:
		mov     eax, [esp]
		and     eax, 0ffffh
		shl     eax, 4
___61b4ch:
		add     esp, byte 1ch
		pop     ecx
		pop     ebx
		retn
