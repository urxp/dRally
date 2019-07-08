%include "macros.inc"

    extern  __CEXT_V(___68d4ch)

%include "layout.inc"

section @text

;; 659b8h
__GDECL(__CEXT_F(___659b8h))
		test    al, al
		setnz   al
		and     eax, 0ffh
		mov     [__CEXT_V(___68d4ch)], al
		retn    
