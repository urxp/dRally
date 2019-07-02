%include "macros.inc"

    extern  __CHK
    extern  __CEXT_F(read__bpa)
    extern  __CEXT_V(MENU_BPA)
    extern  __CEXT_F(allocMemSafe)
    extern  __CEXT_F(decode2__bpk)
    extern  __CEXT_F(decode4__bpk)

    extern  __CEXT_V(___1a1edch)
    extern  __CEXT_V(___1a1ecch)
    extern  __CEXT_V(___1a1ee8h)
    extern  __CEXT_V(___1a1ef8h)
    extern  __CEXT_V(___1a1ee0h)
    extern  __CEXT_V(___1a1eech)
    extern  __CEXT_V(___1a1ec0h)
    extern  __CEXT_V(___1a1ec8h)
    extern  __CEXT_V(___1a1ed0h)
    extern  __CEXT_V(___1a01fch)
    extern  __CEXT_V(___1a1ec4h)
    extern  __CEXT_V(___1a1ee4h)
    extern  __CEXT_V(___1a1124h)
    extern  __CEXT_V(___1a10e4h)
    extern  __CEXT_V(___1a1e80h)
    extern  __CEXT_V(___1a1e74h)
    extern  __CEXT_V(___1a1e84h)
    extern  __CEXT_V(___1a1e60h)
    extern  __CEXT_V(___1a1ed4h)
    extern  __CEXT_V(___1a1e90h)
    extern  __CEXT_V(___1a10b0h)
    extern  __CEXT_V(___1a1eb0h)
    extern  __CEXT_V(___1a1e78h)
    extern  __CEXT_V(___1a1eb8h)
    extern  __CEXT_V(bpk_kupla_p)
    extern  __CEXT_V(bpk_pickup_p)
    extern  __CEXT_V(bpk_sedan_p)
    extern  __CEXT_V(bpk_camaro_p)
    extern  __CEXT_V(bpk_porsche_p)
    extern  __CEXT_V(bpk_lotus_p)
    extern  __CEXT_V(___1a0180h)
    extern  __CEXT_V(___1a0184h)
    extern  __CEXT_V(___1a0188h)
    extern  __CEXT_V(___1a018ch)
    extern  __CEXT_V(___1a0190h)
    extern  __CEXT_V(___1a0194h)
    extern  __CEXT_V(bpk_engi1_p)
    extern  __CEXT_V(bpk_engi2_p)
    extern  __CEXT_V(bpk_engi3_p)
    extern  __CEXT_V(bpk_engi4_p)
    extern  __CEXT_V(bpk_tire1_p)
    extern  __CEXT_V(bpk_tire2_p)
    extern  __CEXT_V(bpk_tire3_p)
    extern  __CEXT_V(bpk_tire4_p)
    extern  __CEXT_V(bpk_armor1_p)
    extern  __CEXT_V(bpk_armor2_p)
    extern  __CEXT_V(bpk_armor3_p)
    extern  __CEXT_V(bpk_armor4_p)
    extern  __CEXT_V(___1a1e8ch)
    extern  __CEXT_V(___1a1ea0h)
    extern  __CEXT_V(tex_carframe)
    extern  __CEXT_V(___1a1ebch)
    extern  __CEXT_V(___1a1eb4h)
    extern  __CEXT_V(___1a1e88h)
    extern  __CEXT_V(___1a1ea4h)
    extern  __CEXT_V(___1a1ea8h)
    extern  __CEXT_V(___1a1e6ch)
    extern  __CEXT_V(___1a1e98h)
    extern  __CEXT_V(___1a1each)
    extern  __CEXT_V(___1a1e94h)
    extern  __CEXT_V(___1a1e9ch)
    extern  __CEXT_V(___1a1e70h)
    extern  __CEXT_V(___1a1e5ch)
    extern  __CEXT_V(___1a1e58h)
    extern  __CEXT_V(___181d24h)
    extern  __CEXT_V(___1a1e54h)
    extern  __CEXT_V(___1a1e64h)
    extern  __CEXT_V(___181d50h)
    extern  __CEXT_V(___181d5ch)
    extern  __CEXT_V(___181da4h)
    extern  __CEXT_V(___181db0h)
    extern  __CEXT_V(___181dbch)
    extern  __CEXT_V(___181e04h)
    extern  __CEXT_V(___181e68h)
    extern  __CEXT_V(___181ec4h)
    extern  __CEXT_V(___181ee0h)
    extern  __CEXT_V(___181f14h)
    extern  __CEXT_V(___181f24h)
    extern  __CEXT_V(___181f34h)
    extern  __CEXT_V(___181f40h)
    extern  __CEXT_V(BPA_Buffer)
    extern  __CEXT_V(___181d34h)
    extern  __CEXT_V(___181d44h)
    extern  __CEXT_V(___181d68h)
    extern  __CEXT_V(___181d74h)
    extern  __CEXT_V(___181d80h)
    extern  __CEXT_V(___181d8ch)
    extern  __CEXT_V(___181d98h)
    extern  __CEXT_V(___181dc8h)
    extern  __CEXT_V(___181dd4h)
    extern  __CEXT_V(___181de0h)
    extern  __CEXT_V(___181dech)
    extern  __CEXT_V(___181df8h)
    extern  __CEXT_V(___181e10h)
    extern  __CEXT_V(___181e1ch)
    extern  __CEXT_V(___181e28h)
    extern  __CEXT_V(___181e34h)
    extern  __CEXT_V(___181e40h)
    extern  __CEXT_V(___181e4ch)
    extern  __CEXT_V(___181e58h)
    extern  __CEXT_V(___181e74h)
    extern  __CEXT_V(___181e84h)
    extern  __CEXT_V(___181e94h)
    extern  __CEXT_V(___181ea4h)
    extern  __CEXT_V(___181eb4h)
    extern  __CEXT_V(___181ed0h)
    extern  __CEXT_V(___181eech)
    extern  __CEXT_V(___181efch)
    extern  __CEXT_V(___181f08h)

%include "layout.inc"

section @text

__GDECL(__CEXT_F(___24548h))
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
		mov     edx, [__CEXT_V(___1a1ef8h)]
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
		mov     ecx, [eax+__CEXT_V(___1a01fch)]
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
		mov     [__CEXT_V(___1a1e80h)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e74h)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e84h)], eax
		mov     eax, 3400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e60h)], eax
		mov     eax, 5400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1ed4h)], eax
		mov     eax, 4b0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e90h)], eax
		mov     eax, 8f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a10b0h)], eax
		mov     eax, 900h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1eb0h)], eax
		mov     eax, 1000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e78h)], eax
		mov     eax, 12000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1eb8h)], eax
		mov     eax, 1af00h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_kupla_p)], eax
		mov     eax, 1a77bh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_pickup_p)], eax
		mov     eax, 18f14h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_sedan_p)], eax
		mov     eax, 18f51h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_camaro_p)], eax
		mov     eax, 1a060h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_porsche_p)], eax
		mov     eax, 1bea2h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_lotus_p)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a0180h)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a0184h)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a0188h)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a018ch)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a0190h)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a0194h)], eax
		mov     eax, 0a235h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_engi1_p)], eax
		mov     eax, 0ae36h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_engi2_p)], eax
		mov     eax, 0b413h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_engi3_p)], eax
		mov     eax, 0d788h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_engi4_p)], eax
		mov     eax, 511ch
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_tire1_p)], eax
		mov     eax, 52b8h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_tire2_p)], eax
		mov     eax, 5724h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_tire3_p)], eax
		mov     eax, 5f1eh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_tire4_p)], eax
		mov     eax, 5ffbh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_armor1_p)], eax
		mov     eax, 6dd9h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_armor2_p)], eax
		mov     eax, 7922h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_armor3_p)], eax
		mov     eax, 7801h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(bpk_armor4_p)], eax
		mov     eax, 878bh
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e8ch)], eax
		mov     eax, 8ae9h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1ea0h)], eax
		mov     eax, 1800h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(tex_carframe)], eax
		mov     eax, 0f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1ebch)], eax
		mov     eax, 0f0h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1eb4h)], eax
		mov     eax, 1260h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e88h)], eax
		mov     eax, 1020h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1ea4h)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1ea8h)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e6ch)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e98h)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1each)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e94h)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e9ch)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e70h)], eax
		mov     eax, 1b000h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e5ch)], eax
		mov     eax, 2400h
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e58h)], eax
		mov     eax, 2800h
		mov     ebx, __CEXT_V(___181d24h)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e54h)], eax
		mov     eax, 2800h
		mov     edx, __CEXT_V(BPA_Buffer)
		call    __CEXT_F(allocMemSafe)
		mov     [__CEXT_V(___1a1e64h)], eax
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(___1a1ed4h)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181d34h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(___1a1e90h)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181d44h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(___1a10b0h)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181d50h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_kupla_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d5ch)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_pickup_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d68h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_sedan_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d74h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_camaro_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d80h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_porsche_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d8ch)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_lotus_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181d98h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_engi1_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181da4h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_engi2_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181db0h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_engi3_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181dbch)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_engi4_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181dc8h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_tire1_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181dd4h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_tire2_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181de0h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_tire3_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181dech)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_tire4_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181df8h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_armor1_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e04h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_armor2_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e10h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_armor3_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e1ch)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(bpk_armor4_p)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e28h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(___1a1ea0h)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e34h)
		mov     eax, __CEXT_V(MENU_BPA)
		mov     edx, [__CEXT_V(___1a1e8ch)]
		call    __CEXT_F(read__bpa)
		mov     ebx, __CEXT_V(___181e40h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(___1a1e6ch)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e4ch)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(___1a1e74h)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e58h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(___1a1e80h)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e68h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(___1a1e84h)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e74h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(___1a1e60h)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e84h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(___1a1e54h)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181e94h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(___1a1e64h)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181ea4h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(___1a1e58h)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181eb4h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(___1a1e5ch)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181ec4h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(___1a1e98h)]
		push    ecx
		push    byte 0
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(___1a1each)]
		push    esi
		push    2400h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(___1a1e94h)]
		push    edi
		push    4800h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(___1a1e9ch)]
		push    ebp
		push    6c00h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(___1a1e70h)]
		push    eax
		push    9000h
		push    2400h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(___181ed0h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(___1a0180h)]
		push    edx
		push    byte 0
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(___1a0184h)]
		push    ebx
		push    1800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(___1a0188h)]
		push    ecx
		push    3000h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(___1a018ch)]
		push    esi
		push    4800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(___1a0190h)]
		push    edi
		push    6000h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(___1a0194h)]
		push    ebp
		push    7800h
		push    1800h
		call    __CEXT_F(decode4__bpk)
		mov     ebx, __CEXT_V(___181ee0h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(___1a1eb0h)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181eech)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edx, [__CEXT_V(___1a1e78h)]
		push    edx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181efch)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebx, [__CEXT_V(___1a1eb8h)]
		push    ebx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181f08h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ecx, [__CEXT_V(___1a1ea8h)]
		push    ecx
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181f14h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     esi, [__CEXT_V(___1a1ea4h)]
		push    esi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181f24h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     edi, [__CEXT_V(___1a1eb4h)]
		push    edi
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181f34h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     ebp, [__CEXT_V(___1a1ebch)]
		push    ebp
		call    __CEXT_F(decode2__bpk)
		mov     ebx, __CEXT_V(___181f40h)
		mov     edx, __CEXT_V(BPA_Buffer)
		mov     eax, __CEXT_V(MENU_BPA)
		call    __CEXT_F(read__bpa)
		push    __CEXT_V(BPA_Buffer)
		mov     eax, [__CEXT_V(___1a1e88h)]
		push    eax
		call    __CEXT_F(decode2__bpk)
		pop     ebp
		pop     edi
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn   
