%include "macros.inc"

    extern  __IsTable

%include "layout.inc"

section @text

__GDECL(atoi)
		push    ebx
		push    ecx
		push    edx
___65ed0h:
		mov     dl, [eax]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 2
		and     edx, 0ffh
		je      ___65eeeh
		inc     eax
		jmp     ___65ed0h
___65eeeh:
		mov     cl, [eax]
		mov     dl, cl
		cmp     edx, byte 2bh
		je      ___65efch
		cmp     edx, byte 2dh
		jne     ___65efdh
___65efch:
		inc     eax
___65efdh:
		xor     ebx, ebx
___65effh:
		mov     dl, [eax]
		inc     dl
		and     edx, 0ffh
		mov     dl, [edx+__IsTable]
		and     dl, 20h
		and     edx, 0ffh
		je      ___65f29h
		imul    ebx, ebx, byte 0ah
		xor     edx, edx
		mov     dl, [eax]
		add     ebx, edx
		inc     eax
		sub     ebx, byte 30h
		jmp     ___65effh
___65f29h:
		xor     eax, eax
		mov     al, cl
		cmp     eax, byte 2dh
		jne     ___65f34h
		neg     ebx
___65f34h:
		mov     eax, ebx
		pop     edx
		pop     ecx
		pop     ebx
		retn    
