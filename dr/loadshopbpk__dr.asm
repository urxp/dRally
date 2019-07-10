%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_F(allocMemSafe)
	extern 	__CEXT_F(freeMemSafe)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(decode4__bpk)

    extern  __CEXT_V(___1a1edch)
    extern  __CEXT_V(___1a1ecch)
    extern  __CEXT_V(___1a1ee8h)
    extern  __CEXT_V(MyID)
    extern  __CEXT_V(___1a1ee0h)
    extern  __CEXT_V(___1a1eech)
    extern  __CEXT_V(___1a1ec0h)
    extern  __CEXT_V(___1a1ec8h)
    extern  __CEXT_V(___1a1ed0h)
    extern  __CEXT_V(Roster)+1ch
    extern  __CEXT_V(___1a1ec4h)
    extern  __CEXT_V(___1a1ee4h)
    extern  __CEXT_V(___1a1124h)
    extern  __CEXT_V(___1a10e4h)
    extern  __CEXT_V(p_bpk_drugdeal)
    extern  __CEXT_V(p_bpk_spons1b)
    extern  __CEXT_V(p_bpk_event_2)
    extern  __CEXT_V(p_bpk_repear_x)
    extern  __CEXT_V(p_bpk_statbas7)
    extern  __CEXT_V(p_bpk_statpop4)
    extern  __CEXT_V(p_bpk_f_sma3f)
    extern  __CEXT_V(p_bpk_choo2)
    extern  __CEXT_V(p_bpk_arrows1d)
    extern  __CEXT_V(p_bpk_maxi1f)
    extern  __CEXT_V(p_bpk_kupla)
    extern  __CEXT_V(p_bpk_pickup)
    extern  __CEXT_V(p_bpk_sedan)
    extern  __CEXT_V(p_bpk_camaro)
    extern  __CEXT_V(p_bpk_porsche)
    extern  __CEXT_V(p_bpk_lotus)
    extern  __CEXT_V(p0_bpk_scenecar)
    extern  __CEXT_V(p1_bpk_scenecar)
    extern  __CEXT_V(p2_bpk_scenecar)
    extern  __CEXT_V(p3_bpk_scenecar)
    extern  __CEXT_V(p4_bpk_scenecar)
    extern  __CEXT_V(p5_bpk_scenecar)
    extern  __CEXT_V(p_bpk_engi1)
    extern  __CEXT_V(p_bpk_engi2)
    extern  __CEXT_V(p_bpk_engi3)
    extern  __CEXT_V(p_bpk_engi4)
    extern  __CEXT_V(p_bpk_tire1)
    extern  __CEXT_V(p_bpk_tire2)
    extern  __CEXT_V(p_bpk_tire3)
    extern  __CEXT_V(p_bpk_tire4)
    extern  __CEXT_V(p_bpk_armor1)
    extern  __CEXT_V(p_bpk_armor2)
    extern  __CEXT_V(p_bpk_armor3)
    extern  __CEXT_V(p_bpk_armor4)
    extern  __CEXT_V(p_bpk_repaani)
    extern  __CEXT_V(p_bpk_contani)
    extern  __CEXT_V(tex_carframe)
    extern  __CEXT_V(p_bpk_volcur2)
    extern  __CEXT_V(p_bpk_slidcur3)
    extern  __CEXT_V(p_bpk_slidcop2)
    extern  __CEXT_V(p_bpk_slidmus2)
    extern  __CEXT_V(p_bpk_carname)
    extern  __CEXT_V(p_bpk_carbas2)
    extern  __CEXT_V(p0_bpk_bases4)
    extern  __CEXT_V(p1_bpk_bases4)
    extern  __CEXT_V(p2_bpk_bases4)
    extern  __CEXT_V(p3_bpk_bases4)
    extern  __CEXT_V(p4_bpk_bases4)
    extern  __CEXT_V(p_bpk_market1e)
    extern  __CEXT_V(p_bpk_dealer2b)
    extern  __CEXT_V(bpk_statbas7)
    extern  __CEXT_V(p_bpk_blacktx1)
    extern  __CEXT_V(p_bpk_blacktx2)
    extern  __CEXT_V(bpk_kupla)
    extern  __CEXT_V(bpk_pickup)
    extern  __CEXT_V(bpk_engi2)
    extern  __CEXT_V(bpk_engi3)
    extern  __CEXT_V(bpk_engi4)
    extern  __CEXT_V(bpk_armor2)
    extern  __CEXT_V(bpk_event_2)
    extern  __CEXT_V(bpk_bases4)
    extern  __CEXT_V(bpk_choo2)
    extern  __CEXT_V(bpk_slidmus2)
    extern  __CEXT_V(bpk_slidcur3)
    extern  __CEXT_V(bpk_volcur2)
    extern  __CEXT_V(bpk_slidcop2)
    extern  __CEXT_V(BPA_Buffer)
    extern  __CEXT_V(bpk_statpop4)
    extern  __CEXT_V(bpk_f_sma3f)
    extern  __CEXT_V(bpk_sedan)
    extern  __CEXT_V(bpk_camaro)
    extern  __CEXT_V(bpk_porsche)
    extern  __CEXT_V(bpk_lotus)
    extern  __CEXT_V(bpk_engi1)
    extern  __CEXT_V(bpk_tire1)
    extern  __CEXT_V(bpk_tire2)
    extern  __CEXT_V(bpk_tire3)
    extern  __CEXT_V(bpk_tire4)
    extern  __CEXT_V(bpk_armor1)
    extern  __CEXT_V(bpk_armor3)
    extern  __CEXT_V(bpk_armor4)
    extern  __CEXT_V(bpk_contani)
    extern  __CEXT_V(bpk_repaani)
    extern  __CEXT_V(bpk_carbas2)
    extern  __CEXT_V(bpk_spons1b)
    extern  __CEXT_V(bpk_drugdeal)
    extern  __CEXT_V(bpk_reaper_x)
    extern  __CEXT_V(bpk_blacktx1)
    extern  __CEXT_V(bpk_blacktx2)
    extern  __CEXT_V(bpk_dealer2b)
    extern  __CEXT_V(bpk_market1e)
    extern  __CEXT_V(bpk_scenecar)
    extern  __CEXT_V(bpk_arrows1d)
    extern  __CEXT_V(bpk_maxi1f)
    extern  __CEXT_V(bpk_carname)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(loadShopBPK))
		push    2ch
		call    __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		push    edi
		push    ebp
		mov     edx, 64h
		xor     ebx, ebx
		mov     [__CEXT_V(___1a1edch)], edx
		mov     [__CEXT_V(___1a1ecch)], ebx
		mov     [__CEXT_V(___1a1ee8h)], ebx
		mov     edx, [__CEXT_V(MyID)]
		mov     [__CEXT_V(___1a1ee0h)], ebx
		lea     eax, [edx*8+0]
		mov     [__CEXT_V(___1a1eech)], ebx
		sub     eax, edx
		mov     [__CEXT_V(___1a1ec0h)], ebx
		shl     eax, 2
		mov     [__CEXT_V(___1a1ec8h)], ebx
		sub     eax, edx
		mov     [__CEXT_V(___1a1ed0h)], ebx
		shl     eax, 2
		mov     ebx, 5
		mov     ecx, [eax+__CEXT_V(Roster)+1ch]
		mov     [__CEXT_V(___1a1ec4h)], ebx
		cmp     ecx, ebx
		jge     ___245c5h
		lea     eax, [ecx+1]
		mov     [__CEXT_V(___1a1ee4h)], eax
		jmp     ___245cbh
___245c5h:
		mov     [__CEXT_V(___1a1ee4h)], ebx
___245cbh:
		mov     eax, 4b000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1124h)], eax
		mov     [__CEXT_V(___1a10e4h)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_drugdeal)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_spons1b)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_event_2)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_repear_x)], eax
		mov     eax, 5400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_statbas7)], eax
		mov     eax, 4b0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_statpop4)], eax
		mov     eax, 8f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_f_sma3f)], eax
		mov     eax, 900h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_choo2)], eax
		mov     eax, 1000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_arrows1d)], eax
		mov     eax, 12000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_maxi1f)], eax
		mov     eax, 1af00h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_kupla)], eax
		mov     eax, 1a77bh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_pickup)], eax
		mov     eax, 18f14h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_sedan)], eax
		mov     eax, 18f51h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_camaro)], eax
		mov     eax, 1a060h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_porsche)], eax
		mov     eax, 1bea2h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_lotus)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p0_bpk_scenecar)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p1_bpk_scenecar)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p2_bpk_scenecar)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p3_bpk_scenecar)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p4_bpk_scenecar)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p5_bpk_scenecar)], eax
		mov     eax, 0a235h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_engi1)], eax
		mov     eax, 0ae36h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_engi2)], eax
		mov     eax, 0b413h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_engi3)], eax
		mov     eax, 0d788h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_engi4)], eax
		mov     eax, 511ch
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_tire1)], eax
		mov     eax, 52b8h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_tire2)], eax
		mov     eax, 5724h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_tire3)], eax
		mov     eax, 5f1eh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_tire4)], eax
		mov     eax, 5ffbh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_armor1)], eax
		mov     eax, 6dd9h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_armor2)], eax
		mov     eax, 7922h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_armor3)], eax
		mov     eax, 7801h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_armor4)], eax
		mov     eax, 878bh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_repaani)], eax
		mov     eax, 8ae9h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_contani)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(tex_carframe)], eax
		mov     eax, 0f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_volcur2)], eax
		mov     eax, 0f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_slidcur3)], eax
		mov     eax, 1260h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_slidcop2)], eax
		mov     eax, 1020h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_slidmus2)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_carname)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_carbas2)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p0_bpk_bases4)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p1_bpk_bases4)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p2_bpk_bases4)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p3_bpk_bases4)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p4_bpk_bases4)], eax
		mov     eax, 1b000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_market1e)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_dealer2b)], eax
		mov     eax, 2800h
		mov     ebx, __CEXT_V(bpk_statbas7)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_blacktx1)], eax
		mov     eax, 2800h
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(p_bpk_blacktx2)], eax
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_statbas7)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_statpop4)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_statpop4)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_f_sma3f)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_f_sma3f)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_kupla)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_kupla)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_pickup)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_pickup)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_sedan)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_sedan)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_camaro)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_camaro)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_porsche)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_porsche)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_lotus)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_lotus)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_engi1)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_engi1)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_engi2)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_engi2)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_engi3)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_engi3)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_engi4)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_engi4)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_tire1)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_tire1)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_tire2)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_tire2)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_tire3)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_tire3)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_tire4)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_tire4)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_armor1)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_armor1)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_armor2)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_armor2)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_armor3)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_armor3)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_armor4)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_armor4)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_contani)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_contani)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_repaani)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(p_bpk_repaani)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(bpk_carbas2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_carbas2)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_spons1b)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_spons1b)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_drugdeal)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p_bpk_drugdeal)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_event_2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p_bpk_event_2)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_reaper_x)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_repear_x)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_blacktx1)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_blacktx1)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_blacktx2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_blacktx2)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_dealer2b)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_dealer2b)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_market1e)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_market1e)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_bases4)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p0_bpk_bases4)]
		push    ecx
		push    byte 0
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p1_bpk_bases4)]
		push    esi
		push    2400h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p2_bpk_bases4)]
		push    edi
		push    4800h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p3_bpk_bases4)]
		push    ebp
		push    6c00h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p4_bpk_bases4)]
		push    eax
		push    9000h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(bpk_scenecar)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p0_bpk_scenecar)]
		push    edx
		push    byte 0
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p1_bpk_scenecar)]
		push    ebx
		push    1800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p2_bpk_scenecar)]
		push    ecx
		push    3000h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p3_bpk_scenecar)]
		push    esi
		push    4800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p4_bpk_scenecar)]
		push    edi
		push    6000h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p5_bpk_scenecar)]
		push    ebp
		push    7800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(bpk_choo2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_choo2)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_arrows1d)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(p_bpk_arrows1d)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_maxi1f)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(p_bpk_maxi1f)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_carname)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(p_bpk_carname)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_slidmus2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(p_bpk_slidmus2)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_slidcur3)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(p_bpk_slidcur3)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_volcur2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(p_bpk_volcur2)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(bpk_slidcop2)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(p_bpk_slidcop2)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   

;; 24ec0h
__GDECL(__CEXT_F(unloadShopBPK))
		push    4
		call    near __CHK
		mov     eax, [__CEXT_V(___1a1124h)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_statbas7)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_statpop4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_f_sma3f)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_choo2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_arrows1d)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_maxi1f)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p0_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p1_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p2_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p3_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p4_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p5_bpk_scenecar)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_kupla)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_pickup)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_sedan)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_camaro)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_porsche)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_lotus)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_engi1)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_engi2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_engi3)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_engi4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_tire1)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_tire2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_tire3)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_tire4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_armor1)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_armor2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_armor3)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_armor4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_repaani)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_contani)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(tex_carframe)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_drugdeal)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_spons1b)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_event_2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_repear_x)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_volcur2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_slidcur3)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_slidcop2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_slidmus2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_carname)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_carbas2)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p0_bpk_bases4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p1_bpk_bases4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p2_bpk_bases4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p3_bpk_bases4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p4_bpk_bases4)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_market1e)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_dealer2b)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_blacktx1)]
		call    near __CEXT_F(freeMemSafe)
		mov     eax, [__CEXT_V(p_bpk_blacktx2)]
		call    near __CEXT_F(freeMemSafe)
		retn    
