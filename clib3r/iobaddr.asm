%include "macros.inc"

    extern  ___iob

%include "layout.inc"

section @text

__GDECL(__get_std_stream)
		push    edx
		cmp     eax, byte 5
		jbe     ___7f3bdh
		xor     eax, eax
		pop     edx
		retn    
___7f3bdh:
		mov     edx, eax
		shl     eax, 2
		sub     eax, edx
		shl     eax, 2
		add     eax, edx
		add     eax, eax
		add     eax, ___iob
		pop     edx
		retn    
