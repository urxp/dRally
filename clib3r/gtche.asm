%include "macros.inc"

    extern  __cbyte

%include "layout.inc"

section @text

__GDECL(getche)
		push    edx
		xor     edx, edx
		mov     eax, [__cbyte]
		mov     [__cbyte], edx
		test    eax, eax
		jne     ___6bdf8h
		mov     ah, 1
		int     21h
		and     eax, 0ffh
___6bdf8h:
		pop     edx
		retn    
