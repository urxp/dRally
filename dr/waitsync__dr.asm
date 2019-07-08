%include "macros.inc"

	extern 	__CHK
	extern 	__CEXT_F(___606d9h)
	extern 	__CEXT_V(___60436h)

%include "layout.inc"

section @text

;; 58c60h
__GDECL(__CEXT_F(waitSync__dr))
		push    8
		call    __CHK
		push    edx
		call    __CEXT_F(___606d9h)
		mov     edx, eax
___58c72h:
		call    __CEXT_F(___606d9h)
		cmp     edx, eax
		je      ___58c72h
		pop     edx
		retn    

;; 606d9h
__GDECL(__CEXT_F(___606d9h))
		mov     eax, [__CEXT_V(___60436h)]
		retn