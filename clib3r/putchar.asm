%include "macros.inc"

	extern	___iob
    extern  fputc__clib3r

%include "layout.inc"

section @text

__GDECL(putchar)
		push    ebx
		push    ecx
		push    edx
		test    byte [___iob+27h], 4
		jne     ___6673eh
		mov     edx, [___iob+2eh]
		mov     ebx, [___iob+1eh]
		sub     edx, ebx
		cmp     edx, byte 1
		ja      ___6674ch
___6673eh:
		mov     edx, ___iob+1ah
		call    fputc__clib3r
		pop     edx
		pop     ecx
		pop     ebx
		retn    
___6674ch:
		mov     edx, [___iob+1ah]
		mov     [edx], al
		and     eax, 0ffh
		cmp     eax, byte 0ah
		jne     ___6676ch
		mov     edx, ___iob+1ah
		call    fputc__clib3r
		mov     edx, eax
		jmp     ___66793h
___6676ch:
		mov     dh, [___iob+27h]
		or      dh, 10h
		mov     eax, [___iob+1ah]
		mov     [___iob+27h], dh
		xor     edx, edx
		lea     ecx, [ebx+1]
		mov     dl, [eax]
		inc     eax
		mov     [___iob+1eh], ecx
		mov     [___iob+1ah], eax
___66793h:
		mov     eax, edx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
