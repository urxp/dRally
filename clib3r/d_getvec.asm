%include "macros.inc"

    extern  __Extender

%include "layout.inc"

section @text

__GDECL(_dos_getvect)
		push    ebx
		push    ecx
		xor     edx, edx
		mov     dl, [__Extender]
		cmp     edx, byte 2
		jl      ___7dd94h
		cmp     edx, byte 8
		jg      ___7dd94h
		mov     cl, al
		mov     eax, 2502h
		jmp     ___7dd9eh
___7dd94h:
		and     eax, 0ffh
		xor     cl, cl
		or      ah, 35h
___7dd9eh:
		push    es
		int     21h
		;mov     edx, es
		db	8ch,0c2h
		pop     es
		mov     eax, ebx
		pop     ecx
		pop     ebx
		retn    
