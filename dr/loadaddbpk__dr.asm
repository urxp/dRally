%include "macros.inc"

    extern  __CHK

    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_V(BPA_Buffer)
    
    extern  __CEXT_V(p_bpk_badtit)
    extern  __CEXT_V(p_bpk_badsnap)
    extern  __CEXT_V(p_bpk_escbox)
    extern  __CEXT_V(p_bpk_signline)
    extern  __CEXT_V(p_bpk_prep4)
    extern  __CEXT_V(___1a1114h)
    extern  __CEXT_V(p_bpk_prepw1)

    extern  __CEXT_V(bpk_badtit)
    extern  __CEXT_V(bpk_badsnap)
    extern  __CEXT_V(bpk_escbox)
    extern  __CEXT_V(bpk_prep4)
    extern  __CEXT_V(bpk_signline)
    extern  __CEXT_V(bpk_prepw1)

    extern  __CEXT_F(allocMemSafe)
	extern 	__CEXT_F(freeMemSafe)
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_F(decode2__bpk)

%include "layout.inc"

section @text

;; 2faf0h
__GDECL(__CEXT_F(loadAddBPK))
		push    24h
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     eax, 1b80h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_badtit)], eax
		mov     eax, 0e400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_badsnap)], eax
		mov     eax, 2eb8h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_escbox)], eax
		mov     eax, 110h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_signline)], eax
		mov     eax, 8700h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_prep4)], eax
		mov     eax, 18150h
		mov     ebx, __CEXT_V(bpk_badtit)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1114h)], eax
		mov     eax, 0f0d2h
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_prepw1)], eax
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_badtit)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_badsnap)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_badsnap)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_escbox)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p_bpk_escbox)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_prep4)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p_bpk_prep4)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_signline)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_signline)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_prepw1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_prepw1)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

;; 2fc50h
__GDECL(__CEXT_F(unloadAddBPK))
		push    4
		call    __CHK
		mov     eax, [__CEXT_V(p_bpk_badtit)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_badsnap)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_escbox)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_signline)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_prep4)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1114h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_prepw1)]
		call    __CEXT_F(freeMemSafe)
		retn    
