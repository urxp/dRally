%include "macros.inc"

    extern  __CHK
    extern  __CEXT_V(___180004h)
    extern  __CEXT_F(printf__clib3r)
    extern  ___18005ch
    extern  ___180060h
    extern  __CEXT_F(chkarg__dr)
    extern  __CEXT_V(string__WINDIR)
    extern  getenv__clib3r
    extern  ___19bd48h
    extern  ___18006ch
    extern  ___19bd4ch
    extern  ___180084h

%include "layout.inc"

section @text

__GDECL(__CEXT_F(welcome__dr))
		push    0ch
		call    __CHK
		push    ebx
		push    __CEXT_V(___180004h)
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		push    ___18005ch
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		mov     eax, ___180060h
		call    __CEXT_F(chkarg__dr)
		test    eax, eax
		je      ___1009dh
		mov     dword [___19bd4ch], 1
___1009dh:
		mov     eax, __CEXT_V(string__WINDIR)
		call    getenv__clib3r
		mov     [___19bd48h], eax
		test    eax, eax
		je      ___100cah
		push    ___18006ch
		mov     ebx, 1
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		mov     [___19bd4ch], ebx
		pop     ebx
		retn    
___100cah:
		push    ___180084h
		call    __CEXT_F(printf__clib3r)
		add     esp, 4
		pop     ebx
		retn
