%include "macros.inc"

    extern  __CHK

    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_V(BPA_Buffer)

    extern  __CEXT_V(___1a1e68h)
    extern  __CEXT_V(p_bpk_chattext)
    extern  __CEXT_V(p_bpk_facesel1)
    extern  __CEXT_V(p_bpk_facearr1)
    extern  __CEXT_V(p_bpk_entertx2)
    extern  __CEXT_V(p_bpk_shoptxt1)
    extern  __CEXT_V(p_bpk_shoptxt2)
    extern  __CEXT_V(p_bpk_fametxt)
    extern  __CEXT_V(p_bpk_recotxt)
    extern  __CEXT_V(p_bpk_recobar)
    extern  __CEXT_V(p_bpk_lic_lin1)
    extern  __CEXT_V(p_bpk_chatlin1)
    extern  __CEXT_V(p_bpk_cursor)
    extern  __CEXT_V(p_bpk_f_big3d)
    extern  __CEXT_V(p_bpk_f_big3b)
    extern  __CEXT_V(p_bpk_mseletx1)
    extern  __CEXT_V(p_bpk_trarr1)
    extern  __CEXT_V(ps_bpk_trsnap2m)
    extern  __CEXT_V(___1a1044h)
    extern  __CEXT_V(___1a1048h)
    extern  __CEXT_V(___1a104ch)
    extern  __CEXT_V(___1a1050h)
    extern  __CEXT_V(___1a1054h)
    extern  __CEXT_V(___1a1058h)
    extern  __CEXT_V(___1a105ch)
    extern  __CEXT_V(___1a1060h)
    extern  __CEXT_V(___1a1064h)
    extern  __CEXT_V(___1a1068h)
    extern  __CEXT_V(___1a106ch)
    extern  __CEXT_V(___1a1070h)
    extern  __CEXT_V(___1a1074h)
    extern  __CEXT_V(___1a1078h)
    extern  __CEXT_V(___1a107ch)
    extern  __CEXT_V(___1a1080h)
    extern  __CEXT_V(___1a1084h)
    extern  __CEXT_V(___1a1088h)
    extern  __CEXT_V(p0_bpk_trsnap2m)
    extern  __CEXT_V(p1_bpk_trsnap2m)

    extern  __CEXT_V(bpk_trsnap2m)
    extern  __CEXT_V(bpk_cursor)
    extern  __CEXT_V(bpk_f_big3b)
    extern  __CEXT_V(bpk_f_big3d)
    extern  __CEXT_V(bpk_chatlin1)
    extern  __CEXT_V(bpk_chattext)
    extern  __CEXT_V(bpk_entertx2)
    extern  __CEXT_V(bpk_shoptxt1)
    extern  __CEXT_V(bpk_shoptxt2)
    extern  __CEXT_V(bpk_fametxt)
    extern  __CEXT_V(bpk_recotxt)
    extern  __CEXT_V(bpk_recobar)
    extern  __CEXT_V(bpk_lic_lin1)
    extern  __CEXT_V(bpk_facesel1)
    extern  __CEXT_V(bpk_facearr1)
    extern  __CEXT_V(bpk_mseletx1)
    extern  __CEXT_V(bpk_trarr1)


    extern  __CEXT_F(allocMemSafe)
	extern 	__CEXT_F(freeMemSafe)
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(decode4__bpk)

%include "layout.inc"

section @text

;; 1240ch
__GDECL(__CEXT_F(loadOtherBPK))
		push    2ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		xor     edx, edx
		mov     eax, 7530h
		mov     [__CEXT_V(___1a1e68h)], edx
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_chattext)], eax
		mov     eax, 1b18h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_facesel1)], eax
		mov     eax, 1100h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_facearr1)], eax
		mov     eax, 5000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_entertx2)], eax
		mov     eax, 2800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_shoptxt1)], eax
		mov     eax, 2800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_shoptxt2)], eax
		mov     eax, 8700h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_fametxt)], eax
		mov     eax, 2800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_recotxt)], eax
		mov     eax, 0aa00h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_recobar)], eax
		mov     eax, 111ch
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_lic_lin1)], eax
		mov     eax, 1900h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_chatlin1)], eax
		mov     eax, 4e20h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_cursor)], eax
		mov     eax, 18000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_f_big3d)], eax
		mov     eax, 18000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_f_big3b)], eax
		mov     eax, 2800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_mseletx1)], eax
		mov     eax, 1500h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_trarr1)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(ps_bpk_trsnap2m)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1044h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1048h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a104ch)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1050h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1054h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1058h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a105ch)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1060h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1064h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1068h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a106ch)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1070h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1074h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1078h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a107ch)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1080h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1084h)], eax
		mov     eax, 3800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1088h)], eax
		mov     eax, 3800h
		xor     edi, edi
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p0_bpk_trsnap2m)], eax
		mov     eax, 3800h
		xor     esi, esi
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p1_bpk_trsnap2m)], eax
___12653h:
		mov     ebx, __CEXT_V(bpk_trsnap2m)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [esi+__CEXT_V(ps_bpk_trsnap2m)]
		push    ebx
		push    edi
		push    3800h
		add     esi, byte 4
		call    __CEXT_F(decode4__bpk)
		add     edi, 3800h
		cmp     esi, byte 4ch
		jne     short ___12653h
		mov     ebx, __CEXT_V(bpk_trsnap2m)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p0_bpk_trsnap2m)]
		push    ecx
		push    3f000h
		push    3800h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(bpk_trsnap2m)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p1_bpk_trsnap2m)]
		push    esi
		push    42800h
		push    3800h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(bpk_cursor)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_cursor)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_f_big3b)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_f_big3b)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_f_big3d)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_f_big3d)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_chatlin1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_chatlin1)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_chattext)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_chattext)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_entertx2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p_bpk_entertx2)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_shoptxt1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p_bpk_shoptxt1)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_shoptxt2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_shoptxt2)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_fametxt)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_fametxt)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_recotxt)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_recotxt)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_recobar)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_recobar)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_lic_lin1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_lic_lin1)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_facesel1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p_bpk_facesel1)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_facearr1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p_bpk_facearr1)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_mseletx1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_mseletx1)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_trarr1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_trarr1)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

;; 12a54h
__GDECL(__CEXT_F(unloadOtherBPK))
		push    4
		call    __CHK
		mov     eax, [__CEXT_V(p_bpk_chattext)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_facesel1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_facearr1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_entertx2)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_shoptxt1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_shoptxt2)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_fametxt)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_recotxt)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_recobar)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_lic_lin1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_chatlin1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_cursor)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_f_big3d)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_f_big3b)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_mseletx1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_trarr1)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(ps_bpk_trsnap2m)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1044h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1048h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a104ch)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1050h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1054h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1058h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a105ch)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1060h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1064h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1068h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a106ch)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1070h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1074h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1078h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a107ch)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1080h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1084h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(___1a1088h)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p0_bpk_trsnap2m)]
		call    __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p1_bpk_trsnap2m)]
		call    __CEXT_F(freeMemSafe)
		retn    
