#include "x86.h"

    extern byte MENU_BPA[];

    extern byte ___1a1edch[];
    extern byte ___1a1ecch[];
    extern byte ___1a1ee8h[];
    extern byte MyID[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a01fch[];
    extern byte ___1a1ec4h[];
    extern byte ___1a1ee4h[];
    extern byte ___1a1124h[];
    extern byte ___1a10e4h[];
    extern byte p_bpk_drugdeal[];
    extern byte p_bpk_spons1b[];
    extern byte p_bpk_event_2[];
    extern byte p_bpk_repear_x[];
    extern byte p_bpk_statbas7[];
    extern byte p_bpk_statpop4[];
    extern byte p_bpk_f_sma3f[];
    extern byte p_bpk_choo2[];
    extern byte p_bpk_arrows1d[];
    extern byte p_bpk_maxi1f[];
    extern byte p_bpk_kupla[];
    extern byte p_bpk_pickup[];
    extern byte p_bpk_sedan[];
    extern byte p_bpk_camaro[];
    extern byte p_bpk_porsche[];
    extern byte p_bpk_lotus[];
    extern byte p0_bpk_scenecar[];
    extern byte p1_bpk_scenecar[];
    extern byte p2_bpk_scenecar[];
    extern byte p3_bpk_scenecar[];
    extern byte p4_bpk_scenecar[];
    extern byte p5_bpk_scenecar[];
    extern byte p_bpk_engi1[];
    extern byte p_bpk_engi2[];
    extern byte p_bpk_engi3[];
    extern byte p_bpk_engi4[];
    extern byte p_bpk_tire1[];
    extern byte p_bpk_tire2[];
    extern byte p_bpk_tire3[];
    extern byte p_bpk_tire4[];
    extern byte p_bpk_armor1[];
    extern byte p_bpk_armor2[];
    extern byte p_bpk_armor3[];
    extern byte p_bpk_armor4[];
    extern byte p_bpk_repaani[];
    extern byte p_bpk_contani[];
    extern byte tex_carframe[];
    extern byte p_bpk_volcur2[];
    extern byte p_bpk_slidcur3[];
    extern byte p_bpk_slidcop2[];
    extern byte p_bpk_slidmus2[];
    extern byte p_bpk_carname[];
    extern byte p_bpk_carbas2[];
    extern byte p0_bpk_bases4[];
    extern byte p1_bpk_bases4[];
    extern byte p2_bpk_bases4[];
    extern byte p3_bpk_bases4[];
    extern byte p4_bpk_bases4[];
    extern byte p_bpk_market1e[];
    extern byte p_bpk_dealer2b[];
    extern byte bpk_statbas7[];
    extern byte p_bpk_blacktx1[];
    extern byte p_bpk_blacktx2[];
    extern byte bpk_kupla[];
    extern byte bpk_pickup[];
    extern byte bpk_engi2[];
    extern byte bpk_engi3[];
    extern byte bpk_engi4[];
    extern byte bpk_armor2[];
    extern byte bpk_event_2[];
    extern byte bpk_bases4[];
    extern byte bpk_choo2[];
    extern byte bpk_slidmus2[];
    extern byte bpk_slidcur3[];
    extern byte bpk_volcur2[];
    extern byte bpk_slidcop2[];
    extern byte BPA_Buffer[];
    extern byte bpk_statpop4[];
    extern byte bpk_f_sma3f[];
    extern byte bpk_sedan[];
    extern byte bpk_camaro[];
    extern byte bpk_porsche[];
    extern byte bpk_lotus[];
    extern byte bpk_engi1[];
    extern byte bpk_tire1[];
    extern byte bpk_tire2[];
    extern byte bpk_tire3[];
    extern byte bpk_tire4[];
    extern byte bpk_armor1[];
    extern byte bpk_armor3[];
    extern byte bpk_armor4[];
    extern byte bpk_contani[];
    extern byte bpk_repaani[];
    extern byte bpk_carbas2[];
    extern byte bpk_spons1b[];
    extern byte bpk_drugdeal[];
    extern byte bpk_reaper_x[];
    extern byte bpk_blacktx1[];
    extern byte bpk_blacktx2[];
    extern byte bpk_dealer2b[];
    extern byte bpk_market1e[];
    extern byte bpk_scenecar[];
    extern byte bpk_arrows1d[];
    extern byte bpk_maxi1f[];
    extern byte bpk_carname[];


    void * allocMemSafe(dword);
	void freeMemSafe(void * p);

	void read__bpa(const char *, void *, const char *);

	#pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

	#pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 24548h
void loadShopBPK(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;

//		push    2ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     edx, 64h
	edx = 0x64;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [__CEXT_V(___1a1edch)], edx
	D(___1a1edch) = edx;
//		mov     [__CEXT_V(___1a1ecch)], ebx
	D(___1a1ecch) = ebx;
//		mov     [__CEXT_V(___1a1ee8h)], ebx
	D(___1a1ee8h) = ebx;
//		mov     edx, [__CEXT_V(MyID)]
	edx = D(MyID);
//		mov     [__CEXT_V(___1a1ee0h)], ebx
	D(___1a1ee0h) = ebx;
//		lea     eax, [edx*8+0]
	eax = edx*8;
//		mov     [__CEXT_V(___1a1eech)], ebx
	D(___1a1eech) = ebx;
//		sub     eax, edx
	eax -= edx;
//		mov     [__CEXT_V(___1a1ec0h)], ebx
	D(___1a1ec0h) = ebx;
//		shl     eax, 2
	eax <<= 2;
//		mov     [__CEXT_V(___1a1ec8h)], ebx
	D(___1a1ec8h) = ebx;
//		sub     eax, edx
	eax -= edx;
//		mov     [__CEXT_V(___1a1ed0h)], ebx
	D(___1a1ed0h) = ebx;
//		shl     eax, 2
	eax <<= 2;
//		mov     ebx, 5
	ebx = 5;
//		mov     ecx, [eax+__CEXT_V(Roster)+1ch]
	ecx = D(eax+___1a01fch);
//		mov     [__CEXT_V(___1a1ec4h)], ebx
	D(___1a1ec4h) = ebx;
//		cmp     ecx, ebx
//		jge     ___245c5h
	if((int)ecx >= (int)ebx) goto ___245c5h;
//		lea     eax, [ecx+1]
	eax = ecx+1;
//		mov     [__CEXT_V(___1a1ee4h)], eax
	D(___1a1ee4h) = eax;
//		jmp     ___245cbh
	goto ___245cbh;
___245c5h:
//		mov     [__CEXT_V(___1a1ee4h)], ebx
	D(___1a1ee4h) = ebx;
___245cbh:
//		mov     eax, 4b000h
	eax = 0x4b000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1124h)], eax
	D(___1a1124h) = eax;
//		mov     [__CEXT_V(___1a10e4h)], eax
	D(___1a10e4h) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_drugdeal)], eax
	D(p_bpk_drugdeal) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_spons1b)], eax
	D(p_bpk_spons1b) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_event_2)], eax
	D(p_bpk_event_2) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_repear_x)], eax
	D(p_bpk_repear_x) = eax;
//		mov     eax, 5400h
	eax = 0x5400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_statbas7)], eax
	D(p_bpk_statbas7) = eax;
//		mov     eax, 4b0h
	eax = 0x4b0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_statpop4)], eax
	D(p_bpk_statpop4) = eax;
//		mov     eax, 8f0h
	eax = 0x8f0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_sma3f)], eax
	D(p_bpk_f_sma3f) = eax;
//		mov     eax, 900h
	eax = 0x900;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_choo2)], eax
	D(p_bpk_choo2) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_arrows1d)], eax
	D(p_bpk_arrows1d) = eax;
//		mov     eax, 12000h
	eax = 0x12000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_maxi1f)], eax
	D(p_bpk_maxi1f) = eax;
//		mov     eax, 1af00h
	eax = 0x1af00;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_kupla)], eax
	D(p_bpk_kupla) = eax;
//		mov     eax, 1a77bh
	eax = 0x1a77b;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_pickup)], eax
	D(p_bpk_pickup) = eax;
//		mov     eax, 18f14h
	eax = 0x18f14;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_sedan)], eax
	D(p_bpk_sedan) = eax;
//		mov     eax, 18f51h
	eax = 0x18f51;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_camaro)], eax
	D(p_bpk_camaro) = eax;
//		mov     eax, 1a060h
	eax = 0x1a060;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_porsche)], eax
	D(p_bpk_porsche) = eax;
//		mov     eax, 1bea2h
	eax = 0x1bea2;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_lotus)], eax
	D(p_bpk_lotus) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p0_bpk_scenecar)], eax
	D(p0_bpk_scenecar) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p1_bpk_scenecar)], eax
	D(p1_bpk_scenecar) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p2_bpk_scenecar)], eax
	D(p2_bpk_scenecar) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p3_bpk_scenecar)], eax
	D(p3_bpk_scenecar) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p4_bpk_scenecar)], eax
	D(p4_bpk_scenecar) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p5_bpk_scenecar)], eax
	D(p5_bpk_scenecar) = eax;
//		mov     eax, 0a235h
	eax = 0xa235;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_engi1)], eax
	D(p_bpk_engi1) = eax;
//		mov     eax, 0ae36h
	eax = 0xae36;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_engi2)], eax
	D(p_bpk_engi2) = eax;
//		mov     eax, 0b413h
	eax = 0xb413;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_engi3)], eax
	D(p_bpk_engi3) = eax;
//		mov     eax, 0d788h
	eax = 0xd788;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_engi4)], eax
	D(p_bpk_engi4) = eax;
//		mov     eax, 511ch
	eax = 0x511c;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_tire1)], eax
	D(p_bpk_tire1) = eax;
//		mov     eax, 52b8h
	eax = 0x52b8;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_tire2)], eax
	D(p_bpk_tire2) = eax;
//		mov     eax, 5724h
	eax = 0x5724;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_tire3)], eax
	D(p_bpk_tire3) = eax;
//		mov     eax, 5f1eh
	eax = 0x5f1e;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_tire4)], eax
	D(p_bpk_tire4) = eax;
//		mov     eax, 5ffbh
	eax = 0x5ffb;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_armor1)], eax
	D(p_bpk_armor1) = eax;
//		mov     eax, 6dd9h
	eax = 0x6dd9;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_armor2)], eax
	D(p_bpk_armor2) = eax;
//		mov     eax, 7922h
	eax = 0x7922;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_armor3)], eax
	D(p_bpk_armor3) = eax;
//		mov     eax, 7801h
	eax = 0x7801;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_armor4)], eax
	D(p_bpk_armor4) = eax;
//		mov     eax, 878bh
	eax = 0x878b;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_repaani)], eax
	D(p_bpk_repaani) = eax;
//		mov     eax, 8ae9h
	eax = 0x8ae9;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_contani)], eax
	D(p_bpk_contani) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_carframe)], eax
	D(tex_carframe) = eax;
//		mov     eax, 0f0h
	eax = 0xf0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_volcur2)], eax
	D(p_bpk_volcur2) = eax;
//		mov     eax, 0f0h
	eax = 0xf0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_slidcur3)], eax
	D(p_bpk_slidcur3) = eax;
//		mov     eax, 1260h
	eax = 0x1260;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_slidcop2)], eax
	D(p_bpk_slidcop2) = eax;
//		mov     eax, 1020h
	eax = 0x1020;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_slidmus2)], eax
	D(p_bpk_slidmus2) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_carname)], eax
	D(p_bpk_carname) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_carbas2)], eax
	D(p_bpk_carbas2) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p0_bpk_bases4)], eax
	D(p0_bpk_bases4) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p1_bpk_bases4)], eax
	D(p1_bpk_bases4) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p2_bpk_bases4)], eax
	D(p2_bpk_bases4) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p3_bpk_bases4)], eax
	D(p3_bpk_bases4) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p4_bpk_bases4)], eax
	D(p4_bpk_bases4) = eax;
//		mov     eax, 1b000h
	eax = 0x1b000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_market1e)], eax
	D(p_bpk_market1e) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_dealer2b)], eax
	D(p_bpk_dealer2b) = eax;
//		mov     eax, 2800h
	eax = 0x2800;
//		mov     ebx, __CEXT_V(bpk_statbas7)
	ebx = bpk_statbas7;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_blacktx1)], eax
	D(p_bpk_blacktx1) = eax;
//		mov     eax, 2800h
	eax = 0x2800;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_blacktx2)], eax
	D(p_bpk_blacktx2) = eax;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(p_bpk_statbas7)]
	edi = D(p_bpk_statbas7);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_statpop4)
	ebx = bpk_statpop4;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(p_bpk_statpop4)]
	ebp = D(p_bpk_statpop4);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_f_sma3f)
	ebx = bpk_f_sma3f;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(p_bpk_f_sma3f)]
	eax = D(p_bpk_f_sma3f);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_kupla)
	ebx = bpk_kupla;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_kupla)]
	edx = D(p_bpk_kupla);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_pickup)
	ebx = bpk_pickup;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_pickup)]
	edx = D(p_bpk_pickup);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_sedan)
	ebx = bpk_sedan;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_sedan)]
	edx = D(p_bpk_sedan);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_camaro)
	ebx = bpk_camaro;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_camaro)]
	edx = D(p_bpk_camaro);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_porsche)
	ebx = bpk_porsche;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_porsche)]
	edx = D(p_bpk_porsche);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_lotus)
	ebx = bpk_lotus;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_lotus)]
	edx = D(p_bpk_lotus);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_engi1)
	ebx = bpk_engi1;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_engi1)]
	edx = D(p_bpk_engi1);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_engi2)
	ebx = bpk_engi2;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_engi2)]
	edx = D(p_bpk_engi2);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_engi3)
	ebx = bpk_engi3;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_engi3)]
	edx = D(p_bpk_engi3);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_engi4)
	ebx = bpk_engi4;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_engi4)]
	edx = D(p_bpk_engi4);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_tire1)
	ebx = bpk_tire1;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_tire1)]
	edx = D(p_bpk_tire1);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_tire2)
	ebx = bpk_tire2;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_tire2)]
	edx = D(p_bpk_tire2);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_tire3)
	ebx = bpk_tire3;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_tire3)]
	edx = D(p_bpk_tire3);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_tire4)
	ebx = bpk_tire4;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_tire4)]
	edx = D(p_bpk_tire4);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_armor1)
	ebx = bpk_armor1;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_armor1)]
	edx = D(p_bpk_armor1);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_armor2)
	ebx = bpk_armor2;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_armor2)]
	edx = D(p_bpk_armor2);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_armor3)
	ebx = bpk_armor3;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_armor3)]
	edx = D(p_bpk_armor3);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_armor4)
	ebx = bpk_armor4;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_armor4)]
	edx = D(p_bpk_armor4);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_contani)
	ebx = bpk_contani;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_contani)]
	edx = D(p_bpk_contani);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_repaani)
	ebx = bpk_repaani;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_bpk_repaani)]
	edx = D(p_bpk_repaani);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_carbas2)
	ebx = bpk_carbas2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(p_bpk_carbas2)]
	edx = D(p_bpk_carbas2);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_spons1b)
	ebx = bpk_spons1b;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(p_bpk_spons1b)]
	ebx = D(p_bpk_spons1b);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_drugdeal)
	ebx = bpk_drugdeal;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(p_bpk_drugdeal)]
	ecx = D(p_bpk_drugdeal);
//		push    ecx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ecx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_event_2)
	ebx = bpk_event_2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(p_bpk_event_2)]
	esi = D(p_bpk_event_2);
//		push    esi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(esi, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_reaper_x)
	ebx = bpk_reaper_x;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(p_bpk_repear_x)]
	edi = D(p_bpk_repear_x);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_blacktx1)
	ebx = bpk_blacktx1;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(p_bpk_blacktx1)]
	ebp = D(p_bpk_blacktx1);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_blacktx2)
	ebx = bpk_blacktx2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(p_bpk_blacktx2)]
	eax = D(p_bpk_blacktx2);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_dealer2b)
	ebx = bpk_dealer2b;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(p_bpk_dealer2b)]
	edx = D(p_bpk_dealer2b);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_market1e)
	ebx = bpk_market1e;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(p_bpk_market1e)]
	ebx = D(p_bpk_market1e);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_bases4)
	ebx = bpk_bases4;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(p0_bpk_bases4)]
	ecx = D(p0_bpk_bases4);
//		push    ecx
//		push    byte 0
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0, ecx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(p1_bpk_bases4)]
	esi = D(p1_bpk_bases4);
//		push    esi
//		push    2400h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x2400, esi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(p2_bpk_bases4)]
	edi = D(p2_bpk_bases4);
//		push    edi
//		push    4800h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x4800, edi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(p3_bpk_bases4)]
	ebp = D(p3_bpk_bases4);
//		push    ebp
//		push    6c00h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x6c00, ebp, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(p4_bpk_bases4)]
	eax = D(p4_bpk_bases4);
//		push    eax
//		push    9000h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x9000, eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_scenecar)
	ebx = bpk_scenecar;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(p0_bpk_scenecar)]
	edx = D(p0_bpk_scenecar);
//		push    edx
//		push    byte 0
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0, edx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(p1_bpk_scenecar)]
	ebx = D(p1_bpk_scenecar);
//		push    ebx
//		push    1800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x1800, ebx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(p2_bpk_scenecar)]
	ecx = D(p2_bpk_scenecar);
//		push    ecx
//		push    3000h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x3000, ecx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(p3_bpk_scenecar)]
	esi = D(p3_bpk_scenecar);
//		push    esi
//		push    4800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x4800, esi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(p4_bpk_scenecar)]
	edi = D(p4_bpk_scenecar);
//		push    edi
//		push    6000h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x6000, edi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(p5_bpk_scenecar)]
	ebp = D(p5_bpk_scenecar);
//		push    ebp
//		push    7800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x7800, ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_choo2)
	ebx = bpk_choo2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(p_bpk_choo2)]
	eax = D(p_bpk_choo2);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_arrows1d)
	ebx = bpk_arrows1d;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(p_bpk_arrows1d)]
	edx = D(p_bpk_arrows1d);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_maxi1f)
	ebx = bpk_maxi1f;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(p_bpk_maxi1f)]
	ebx = D(p_bpk_maxi1f);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_carname)
	ebx = bpk_carname;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(p_bpk_carname)]
	ecx = D(p_bpk_carname);
//		push    ecx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ecx, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_slidmus2)
	ebx = bpk_slidmus2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(p_bpk_slidmus2)]
	esi = D(p_bpk_slidmus2);
//		push    esi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(esi, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_slidcur3)
	ebx = bpk_slidcur3;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(p_bpk_slidcur3)]
	edi = D(p_bpk_slidcur3);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_volcur2)
	ebx = bpk_volcur2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(p_bpk_volcur2)]
	ebp = D(p_bpk_volcur2);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(bpk_slidcop2)
	ebx = bpk_slidcop2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(p_bpk_slidcop2)]
	eax = D(p_bpk_slidcop2);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn   
	return;
}

// 24ec0h
void unloadShopBPK(void){

	dword 	eax;

//		push    4
//		call    near __CHK
//		mov     eax, [__CEXT_V(___1a1124h)]
	eax = D(___1a1124h);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_statbas7)]
	eax = D(p_bpk_statbas7);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_statpop4)]
	eax = D(p_bpk_statpop4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_sma3f)]
	eax = D(p_bpk_f_sma3f);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_choo2)]
	eax = D(p_bpk_choo2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_arrows1d)]
	eax = D(p_bpk_arrows1d);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_maxi1f)]
	eax = D(p_bpk_maxi1f);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p0_bpk_scenecar)]
	eax = D(p0_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p1_bpk_scenecar)]
	eax = D(p1_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p2_bpk_scenecar)]
	eax = D(p2_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p3_bpk_scenecar)]
	eax = D(p3_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p4_bpk_scenecar)]
	eax = D(p4_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p5_bpk_scenecar)]
	eax = D(p5_bpk_scenecar);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_kupla)]
	eax = D(p_bpk_kupla);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_pickup)]
	eax = D(p_bpk_pickup);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_sedan)]
	eax = D(p_bpk_sedan);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_camaro)]
	eax = D(p_bpk_camaro);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_porsche)]
	eax = D(p_bpk_porsche);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_lotus)]
	eax = p_bpk_lotus;
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_engi1)]
	eax = D(p_bpk_engi1);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_engi2)]
	eax = D(p_bpk_engi2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_engi3)]
	eax = D(p_bpk_engi3);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_engi4)]
	eax = D(p_bpk_engi4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_tire1)]
	eax = D(p_bpk_tire1);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_tire2)]
	eax = D(p_bpk_tire2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_tire3)]
	eax = D(p_bpk_tire3);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_tire4)]
	eax = D(p_bpk_tire4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_armor1)]
	eax = D(p_bpk_armor1);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_armor2)]
	eax = D(p_bpk_armor2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_armor3)]
	eax = D(p_bpk_armor3);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_armor4)]
	eax = D(p_bpk_armor4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_repaani)]
	eax = D(p_bpk_repaani);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_contani)]
	eax = D(p_bpk_contani);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(tex_carframe)]
	eax = D(tex_carframe);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_drugdeal)]
	eax = D(p_bpk_drugdeal);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_spons1b)]
	eax = D(p_bpk_spons1b);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_event_2)]
	eax = D(p_bpk_event_2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_repear_x)]
	eax = D(p_bpk_repear_x);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_volcur2)]
	eax = D(p_bpk_volcur2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_slidcur3)]
	eax = D(p_bpk_slidcur3);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_slidcop2)]
	eax = D(p_bpk_slidcop2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_slidmus2)]
	eax = D(p_bpk_slidmus2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_carname)]
	eax = D(p_bpk_carname);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_carbas2)]
	eax = D(p_bpk_carbas2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p0_bpk_bases4)]
	eax = D(p0_bpk_bases4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p1_bpk_bases4)]
	eax = D(p1_bpk_bases4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p2_bpk_bases4)]
	eax = D(p2_bpk_bases4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p3_bpk_bases4)]
	eax = D(p3_bpk_bases4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p4_bpk_bases4)]
	eax = D(p4_bpk_bases4);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_market1e)]
	eax = D(p_bpk_market1e);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_dealer2b)]
	eax = D(p_bpk_dealer2b);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_blacktx1)]
	eax = D(p_bpk_blacktx1);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_blacktx2)]
	eax = D(p_bpk_blacktx2);
//		call    near __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		retn    
	return;
}
