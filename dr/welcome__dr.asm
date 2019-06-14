%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(___180004h)
    extern  __CEXT_F(printf__clib3r)
    extern  __CEXT_V(___18005ch)
    extern  __CEXT_V(___180060h)
    extern  __CEXT_F(chkarg__dr)
    extern  __CEXT_V(string__WINDIR)
    extern  __CEXT_F(getenv__clib3r)
    extern  __CEXT_V(ENV_WINDIR)
    extern  __CEXT_V(___18006ch)
    extern  __CEXT_V(___19bd4ch)
    extern  __CEXT_V(___180084h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(welcome__dr))
		push    0ch
		call    __CHK
		push    ebx
		push    __CEXT_V(___180004h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		push    __CEXT_V(___18005ch)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		mov     eax, __CEXT_V(___180060h)
		call    __CEXT_F(chkarg__dr)
		test    eax, eax
		je      ___1009dh
		mov     dword [__CEXT_V(___19bd4ch)], 1
___1009dh:
		mov     eax, __CEXT_V(string__WINDIR)
		call    __CEXT_F(getenv__clib3r)
		mov     [__CEXT_V(ENV_WINDIR)], eax
		test    eax, eax
		je      ___100cah
		push    __CEXT_V(___18006ch)
		mov     ebx, 1
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		mov     [__CEXT_V(___19bd4ch)], ebx
		pop     ebx
		retn    
___100cah:
		push    __CEXT_V(___180084h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		pop     ebx
		retn
