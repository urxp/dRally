%include "macros.inc"

    extern  __CEXT_F(___60555h)
    extern  __CEXT_F(___602d9h)
    extern  __CEXT_V(___60424h)
    extern  __CEXT_V(___60420h)
    extern  __CEXT_F(___60777h)
    extern  __CEXT_F(___602fdh)
    extern  __CEXT_F(___605deh)
    extern  __CEXT_F(___60317h)
    extern  __CEXT_F(___6052fh)
    extern  __CEXT_F(___5fff2h)

%include "layout.inc"

section @text

; 60466h
__GDECL(__CEXT_F(install__timer))
		pushad  
		push    eax
		push    ebx
		call    near __CEXT_F(___60555h)
		mov     al, 0
		call    near __CEXT_F(___602d9h)
		mov     [__CEXT_V(___60424h)], ecx
		mov     [__CEXT_V(___60420h)], edx
		mov     edx, __CEXT_F(___60777h)
		mov     cx, cs
		mov     al, 0
		call    near __CEXT_F(___602fdh)
		pop     ebx
		pop     eax
		call    near __CEXT_F(___605deh)
		mov     al, 0
		call    near __CEXT_F(___60317h)
		mov     eax, __CEXT_F(___6052fh)
		call    near __CEXT_F(___5fff2h)
		popad   
		retn
