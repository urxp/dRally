%include "macros.inc"

    extern  __CEXT_V(___24f760h)
    extern  __CEXT_F(freedosmem__dpmi)

    extern  ___58b20h_

%include "layout.inc"

section @text

;; 7c69ch
__GDECL(__CEXT_F(___7c69ch))
		push    edx
		xor     edx, edx
		mov     dl, al
		lea     eax, [edx*4+0]
		sub     eax, edx
		shl     eax, 2
		add     eax, edx
		add     eax, __CEXT_V(___24f760h)
		call    __CEXT_F(freedosmem__dpmi)
		pop     edx
		retn    
