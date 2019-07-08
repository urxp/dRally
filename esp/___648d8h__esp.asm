%include "macros.inc"

    extern  __CEXT_F(___68d07h)
    extern  __CEXT_V(___199ff4h)
    extern  __CEXT_F(___68d01h)
    extern  __CEXT_V(___199ff8h)
    extern  __CEXT_F(freeMemory)
    extern  __CEXT_V(___24e640h)
    extern  __CEXT_F(___6879ch)
    extern  __CEXT_V(Sound_CardType)
    extern  __CEXT_V(IsSoundEnabled)
    extern  __CEXT_F(___6815ch)
    extern  __CEXT_F(___649a8h)
    extern  __CEXT_F(___5fff2h)

%include "layout.inc"

section @text

;; 648d8h
__GDECL(__CEXT_F(___648d8h))
		push    edx
		cmp     byte [__CEXT_V(___199ff4h)], 0
		je      ___64916h
		xor     dl, dl
		mov     eax, __CEXT_F(___68d07h)
		mov     [__CEXT_V(___199ff4h)], dl
		call    __CEXT_F(___68d01h)
		mov     eax, [__CEXT_V(___199ff8h)]
		call    __CEXT_F(freeMemory)
		xor     edx, edx
		mov     eax, [__CEXT_V(___24e640h)]
		mov     [__CEXT_V(___199ff8h)], edx
		call    __CEXT_F(freeMemory)
		mov     [__CEXT_V(___24e640h)], edx
___64916h:
		call    __CEXT_F(___6879ch)
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      ___6493ch
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      ___6493ch
		call    __CEXT_F(___6815ch)
		mov     eax, __CEXT_F(___649a8h)
		call    __CEXT_F(___5fff2h)
___6493ch:
		pop     edx
		retn    
