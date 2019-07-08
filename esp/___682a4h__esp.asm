%include "macros.inc"

    extern  __CEXT_V(MSX_Tracker)
    extern  __CEXT_V(Sound_CardType)
    extern  __CEXT_V(IsSoundEnabled)
    extern  __CEXT_V(___19a46ch)
    extern  __CEXT_V(___19a690h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(___682a4h))
		push    edx
		mov     edx, [__CEXT_V(MSX_Tracker)]
		cmp     edx, byte 1
		jb      ___682c9h
		jbe     ___682bbh
		cmp     edx, byte 2
		je      ___682c2h
		xor     al, al
		pop     edx
		retn    
___682bbh:
		call    ___71a88h
		pop     edx
		retn    
___682c2h:
		call    ___75d44h
		pop     edx
		retn    
___682c9h:
		xor     al, al
		pop     edx
		retn    

___71a88h:
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      ___71aa2h
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      ___71aa2h
		mov     [__CEXT_V(___19a46ch)], eax
		mov     al, 1
		retn    
___71aa2h:
		xor     al, al
		retn    

___75d44h:
		cmp     byte [__CEXT_V(Sound_CardType)], 0
		je      ___75d5eh
		cmp     byte [__CEXT_V(IsSoundEnabled)], 0
		je      ___75d5eh
		mov     [__CEXT_V(___19a690h)], eax
		mov     al, 1
		retn    
___75d5eh:
		xor     al, al
		retn    
