
    extern  __CHK
    extern int386__clib3r

%include "layout.inc"

section @text

global allocateDOSMemoryBlock__dpmi
allocateDOSMemoryBlock__dpmi:
		push    28h
		call    __CHK
		push    ebx
		push    ecx
		sub     esp, 1ch
		mov     ecx, edx
		mov     dword [esp], 100h
		add     eax, 0fh
		shr     eax, 4
		mov     [esp+4], eax
		mov     ebx, esp
		mov     edx, esp
		mov     eax, 31h
		call    int386__clib3r
		mov     eax, [esp+0ch]
		mov     [ecx], eax
		cmp     dword [esp+18h], 0
		je      @ok
		xor     eax, eax
		jmp     @failed
@ok:
		mov     eax, [esp]
		and     eax, 0ffffh
		shl     eax, 4
@failed:
		add     esp, 1ch
		pop     ecx
		pop     ebx
		retn
