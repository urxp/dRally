#include "x86.h"

	extern byte VGABufferPtr_0;
    extern byte p_bpk_corn3b[];
    extern byte p_bpk_corn3a[];
    extern byte p_pal_copper[];
    extern byte p_pal_carcol[];
    extern byte p_bpk_15x150[];
    extern byte p_bpk_f_big3a[];
    extern byte p_bpk_f_sma3b[];
    extern byte p_bpk_f_sma3c[];
    extern byte p_bpk_f_sma3a[];
    extern byte p_bpk_f_med1a[];
    extern byte p_bpk_menubg5[];
    extern byte p_bpk_mulsbg2[];
    extern byte p_bpk_rank1c[];
    extern byte p_bpk_resupok1[];
    extern byte p_bpk_rankinf1[];
    extern byte p_bpk_rankinf2[];
    extern byte p_bpk_rankinf3[];
    extern byte p_bpk_race_eas[];
    extern byte p_bpk_race_med[];
    extern byte p_bpk_race_har[];
    extern byte p_bpk_p_name[];
    extern byte p_bpk_p_pist[];
    extern byte p_bpk_p_rank[];
    extern byte p_bpk_pts_easy[];
    extern byte p_bpk_pts_med[];
    extern byte p_bpk_pts_hard[];
    extern byte p_bpk_placing[];
    extern byte p_bpk_carres[];
    extern byte p_bpk_face01[];
    extern byte p_bpk_face02[];
    extern byte p_bpk_face03[];
    extern byte p_bpk_face04[];
    extern byte p_bpk_face05[];
    extern byte p_bpk_face06[];
    extern byte p_bpk_face07[];
    extern byte p_bpk_face08[];
    extern byte p_bpk_face09[];
    extern byte p_bpk_face10[];
    extern byte p_bpk_face11[];
    extern byte p_bpk_face12[];
    extern byte p_bpk_face13[];
    extern byte p_bpk_face14[];
    extern byte p_bpk_face15[];
    extern byte p_bpk_face16[];
    extern byte p_bpk_face17[];
    extern byte p_bpk_face18[];
    extern byte p_bpk_face19[];
    extern byte p_bpk_face20[];
    extern byte pal_bgcop[];
    extern byte bpk_rank1c[];
    extern byte p_pal_bgcop[];
    extern byte p_bpk_facexx[];
    extern byte MENU_BPA[];
    extern byte bpk_15x150[];
    extern byte BPA_Buffer[];
    extern byte bpk_f_big3a[];
    extern byte bpk_f_sma3a[];
    extern byte bpk_f_sma3b[];
    extern byte bpk_f_sma3c[];
    extern byte bpk_f_med1a[];
    extern byte bpk_resupok1[];
    extern byte bpk_mulsbg2[];
    extern byte bpk_rankinf1[];
    extern byte bpk_rankinf2[];
    extern byte bpk_rankinf3[];
    extern byte bpk_race_eas[];
    extern byte bpk_race_med[];
    extern byte bpk_race_har[];
    extern byte bpk_p_name[];
    extern byte bpk_p_pist[];
    extern byte bpk_p_rank[];
    extern byte bpk_pts_easy[];
    extern byte bpk_pts_med[];
    extern byte bpk_pts_hard[];
    extern byte bpk_placing[];
    extern byte bpk_carres[];
    extern byte bpk_face01[];
    extern byte bpk_face02[];
    extern byte bpk_face03[];
    extern byte bpk_face04[];
    extern byte bpk_face05[];
    extern byte bpk_face06[];
    extern byte bpk_face07[];
    extern byte bpk_face08[];
    extern byte bpk_face09[];
    extern byte bpk_face10[];
    extern byte bpk_face11[];
    extern byte bpk_face12[];
    extern byte bpk_face13[];
    extern byte bpk_face14[];
    extern byte bpk_face15[];
    extern byte bpk_face16[];
    extern byte bpk_face17[];
    extern byte bpk_face18[];
    extern byte bpk_face19[];
    extern byte bpk_face20[];
    extern byte bpk_facexx[];
    extern byte pal_copper[];
    extern byte pal_carcol[];
    extern byte bpk_corn3a[];
    extern byte bpk_corn3b[];
    extern byte bpk_menubg5[];

    void * allocMemSafe(dword);
	void freeMemSafe(void * p);
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
	void read__bpa(const char *, void *, const char *);


// 117f4h
void loadMenuBPK(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x100];
	byte * 	esp = __esp + 0x100;


//		push    24h
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     eax, 0a00h
	eax = 0xa00;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_corn3b)], eax
	D(p_bpk_corn3b) = eax;
//		mov     eax, 0a00h
	eax = 0xa00;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_corn3a)], eax
	D(p_bpk_corn3a) = eax;
//		mov     eax, 300h
	eax = 0x300;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_pal_copper)], eax
	D(p_pal_copper) = eax;
//		mov     eax, 300h
	eax = 0x300;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_pal_carcol)], eax
	D(p_pal_carcol) = eax;
//		mov     eax, 600h
	eax = 0x600;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_pal_bgcop)], eax
	D(p_pal_bgcop) = eax;
//		mov     eax, 8cah
	eax = 0x8ca;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_15x150)], eax
	D(p_bpk_15x150) = eax;
//		mov     eax, 18000h
	eax = 0x18000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_big3a)], eax
	D(p_bpk_f_big3a) = eax;
//		mov     eax, 6000h
	eax = 0x6000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_sma3b)], eax
	D(p_bpk_f_sma3b) = eax;
//		mov     eax, 6000h
	eax = 0x6000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_sma3c)], eax
	D(p_bpk_f_sma3c) = eax;
//		mov     eax, 6000h
	eax = 0x6000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_sma3a)], eax
	D(p_bpk_f_sma3a) = eax;
//		mov     eax, 1a28h
	eax = 0x1a28;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_med1a)], eax
	D(p_bpk_f_med1a) = eax;
//		mov     eax, 4b000h 		;; 640x480
	eax = 0x4b000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_menubg5)], eax
	D(p_bpk_menubg5) = eax;
//		mov     eax, 2e00h
	eax = 0x2e00;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_mulsbg2)], eax
	D(p_bpk_mulsbg2) = eax;
//		mov     eax, 516ch
	eax = 0x516c;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_rank1c)], eax
	D(p_bpk_rank1c) = eax;
//		mov     eax, 19a20h
	eax = 0x19a20;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_resupok1)], eax
	D(p_bpk_resupok1) = eax;
//		mov     eax, 22eh
	eax = 0x22e;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_rankinf1)], eax
	D(p_bpk_rankinf1) = eax;
//		mov     eax, 71ah
	eax = 0x71a;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_rankinf2)], eax
	D(p_bpk_rankinf2) = eax;
//		mov     eax, 3bah
	eax = 0x3ba;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_rankinf3)], eax
	D(p_bpk_rankinf3) = eax;
//		mov     eax, 3fc0h
	eax = 0x3fc0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_race_eas)], eax
	D(p_bpk_race_eas) = eax;
//		mov     eax, 3fc0h
	eax = 0x3fc0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_race_med)], eax
	D(p_bpk_race_med) = eax;
//		mov     eax, 3fc0h
	eax = 0x3fc0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_race_har)], eax
	D(p_bpk_race_har) = eax;
//		mov     eax, 71ah
	eax = 0x71a;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_p_name)], eax
	D(p_bpk_p_name) = eax;
//		mov     eax, 3bah
	eax = 0x3ba;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_p_pist)], eax
	D(p_bpk_p_pist) = eax;
//		mov     eax, 22eh
	eax = 0x22e;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_p_rank)], eax
	D(p_bpk_p_rank) = eax;
//		mov     eax, 2f4h
	eax = 0x2f4;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_pts_easy)], eax
	D(p_bpk_pts_easy) = eax;
//		mov     eax, 2f4h
	eax = 0x2f4;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_pts_med)], eax
	D(p_bpk_pts_med) = eax;
//		mov     eax, 2f4h
	eax = 0x2f4;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_pts_hard)], eax
	D(p_bpk_pts_hard) = eax;
//		mov     eax, 3a64h
	eax = 0x3a64;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_placing)], eax
	D(p_bpk_placing) = eax;
//		mov     eax, 1e780h
	eax = 0x1e780;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_carres)], eax
	D(p_bpk_carres) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face01)], eax
	D(p_bpk_face01) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face02)], eax
	D(p_bpk_face02) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face03)], eax
	D(p_bpk_face03) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face04)], eax
	D(p_bpk_face04) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face05)], eax
	D(p_bpk_face05) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face06)], eax
	D(p_bpk_face06) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face07)], eax
	D(p_bpk_face07) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face08)], eax
	D(p_bpk_face08) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face09)], eax
	D(p_bpk_face09) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face10)], eax
	D(p_bpk_face10) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face11)], eax
	D(p_bpk_face11) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face12)], eax
	D(p_bpk_face12) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face13)], eax
	D(p_bpk_face13) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face14)], eax
	D(p_bpk_face14) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face15)], eax
	D(p_bpk_face15) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face16)], eax
	D(p_bpk_face16) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face17)], eax
	D(p_bpk_face17) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face18)], eax
	D(p_bpk_face18) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face19)], eax
	D(p_bpk_face19) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_face20)], eax
	D(p_bpk_face20) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		mov     ebx, __CEXT_V(pal_bgcop)
	ebx = pal_bgcop;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     edx, [__CEXT_V(p_pal_bgcop)]
	edx = D(p_pal_bgcop);
//		mov     [__CEXT_V(p_bpk_facexx)], eax
	D(p_bpk_facexx) = eax;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_15x150)
	ebx = bpk_15x150;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_15x150)]
	edx = D(p_bpk_15x150);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_big3a)
	ebx = bpk_f_big3a;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_f_big3a)]
	ebx = D(p_bpk_f_big3a);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_sma3a)
	ebx = bpk_f_sma3a;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_f_sma3a)]
	ecx = D(p_bpk_f_sma3a);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_sma3b)
	ebx = bpk_f_sma3b;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_f_sma3b)]
	esi = D(p_bpk_f_sma3b);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_sma3c)
	ebx = bpk_f_sma3c;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_f_sma3c)]
	edi = D(p_bpk_f_sma3c);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_med1a)
	ebx = bpk_f_med1a;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_f_med1a)]
	ebp = D(p_bpk_f_med1a);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_rank1c)
	ebx = bpk_rank1c;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_rank1c)]
	eax = D(p_bpk_rank1c);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_resupok1)
	ebx = bpk_resupok1;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_resupok1)]
	edx = D(p_bpk_resupok1);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_mulsbg2)
	ebx = bpk_mulsbg2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_mulsbg2)]
	ebx = D(p_bpk_mulsbg2);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_rankinf1)
	ebx = bpk_rankinf1;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_rankinf1)]
	ecx = D(p_bpk_rankinf1);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_rankinf2)
	ebx = bpk_rankinf2;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_rankinf2)]
	esi = D(p_bpk_rankinf2);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_rankinf3)
	ebx = bpk_rankinf3;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_rankinf3)]
	edi = D(p_bpk_rankinf3);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_race_eas)
	ebx = bpk_race_eas;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_race_eas)]
	ebp = D(p_bpk_race_eas);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_race_med)
	ebx = bpk_race_med;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_race_med)]
	eax = D(p_bpk_race_med);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_race_har)
	ebx = bpk_race_har;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_race_har)]
	edx = D(p_bpk_race_har);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_p_name)
	ebx = bpk_p_name;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_p_name)]
	ebx = D(p_bpk_p_name);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_p_pist)
	ebx = bpk_p_pist;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_p_pist)]
	ecx = D(p_bpk_p_pist);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_p_rank)
	ebx = bpk_p_rank;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_p_rank)]
	esi = D(p_bpk_p_rank);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_pts_easy)
	ebx = bpk_pts_easy;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_pts_easy)]
	edi = D(p_bpk_pts_easy);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_pts_med)
	ebx = bpk_pts_med;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_pts_med)]
	ebp = D(p_bpk_pts_med);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_pts_hard)
	ebx = bpk_pts_hard;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_pts_hard)]
	eax = D(p_bpk_pts_hard);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_placing)
	ebx = bpk_placing;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_placing)]
	edx = D(p_bpk_placing);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_carres)
	ebx = bpk_carres;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_carres)]
	ebx = D(p_bpk_carres);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face01)
	ebx = bpk_face01;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_face01)]
	ecx = D(p_bpk_face01);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face02)
	ebx = bpk_face02;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_face02)]
	esi = D(p_bpk_face02);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face03)
	ebx = bpk_face03;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_face03)]
	edi = D(p_bpk_face03);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face04)
	ebx = bpk_face04;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_face04)]
	ebp = D(p_bpk_face04);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face05)
	ebx = bpk_face05;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_face05)]
	eax = D(p_bpk_face05);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face06)
	ebx = bpk_face06;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_face06)]
	edx = D(p_bpk_face06);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face07)
	ebx = bpk_face07;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_face07)]
	ebx = D(p_bpk_face07);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face08)
	ebx = bpk_face08;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_face08)]
	ecx = D(p_bpk_face08);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face09)
	ebx = bpk_face09;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_face09)]
	esi = D(p_bpk_face09);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face10)
	ebx = bpk_face10;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_face10)]
	edi = D(p_bpk_face10);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face11)
	ebx = bpk_face11;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_face11)]
	ebp = D(p_bpk_face11);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face12)
	ebx = bpk_face12;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_face12)]
	eax = D(p_bpk_face12);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face13)
	ebx = bpk_face13;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_face13)]
	edx = D(p_bpk_face13);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face14)
	ebx = bpk_face14;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_face14)]
	ebx = D(p_bpk_face14);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face15)
	ebx = bpk_face15;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_face15)]
	ecx = D(p_bpk_face15);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face16)
	ebx = bpk_face16;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_face16)]
	esi = D(p_bpk_face16);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face17)
	ebx = bpk_face17;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_face17)]
	edi = D(p_bpk_face17);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face18)
	ebx = bpk_face18;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_face18)]
	ebp = D(p_bpk_face18);
//		push    ebp
	PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face19)
	ebx = bpk_face19;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_face19)]
	eax = D(p_bpk_face19);
//		push    eax
	PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_face20)
	ebx = bpk_face20;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_face20)]
	edx = D(p_bpk_face20);
//		push    edx
	PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_facexx)
	ebx = bpk_facexx;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_facexx)]
	ebx = D(p_bpk_facexx);
//		push    ebx
	PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(pal_copper)
	ebx = pal_copper;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_pal_copper)]
	edx = D(p_pal_copper);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(pal_carcol)
	ebx = pal_carcol;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(p_pal_carcol)]
	edx = D(p_pal_carcol);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(bpk_corn3a)
	ebx = bpk_corn3a;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_corn3a)]
	ecx = D(p_bpk_corn3a);
//		push    ecx
	PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_corn3b)
	ebx = bpk_corn3b;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_corn3b)]
	esi = D(p_bpk_corn3b);
//		push    esi
	PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		mov     ebx, __CEXT_V(bpk_menubg5)
	ebx = bpk_menubg5;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
	PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_menubg5)]
	edi = D(p_bpk_menubg5);
//		push    edi
	PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(D(esp), D(esp+4));
	esp += 8;
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn    
	return;
}

// 12200h
void unloadMenuBPK(void){

	dword 	eax;

//		push    4
//		call    __CHK
//		mov     eax, [__CEXT_V(p_bpk_corn3b)]
	eax = D(p_bpk_corn3b);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_corn3a)]
	eax = D(p_bpk_corn3a);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_pal_copper)]
	eax = D(p_pal_copper);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_pal_carcol)]
	eax = D(p_pal_carcol);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_pal_bgcop)]
	eax = D(p_pal_bgcop);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(VGABufferPtr_0)]
	eax = D(VGABufferPtr_0);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_15x150)]
	eax = D(p_bpk_15x150);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_menubg5)]
	eax = D(p_bpk_menubg5);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_big3a)]
	eax = D(p_bpk_f_big3a);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_sma3b)]
	eax = D(p_bpk_f_sma3b);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_sma3c)]
	eax = D(p_bpk_f_sma3c);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_sma3a)]
	eax = D(p_bpk_f_sma3a);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_med1a)]
	eax = D(p_bpk_f_med1a);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_mulsbg2)]
	eax = D(p_bpk_mulsbg2);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_rank1c)]
	eax = D(p_bpk_rank1c);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_resupok1)]
	eax = D(p_bpk_resupok1);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_rankinf1)]
	eax = D(p_bpk_rankinf1);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_rankinf2)]
	eax = D(p_bpk_rankinf2);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_rankinf3)]
	eax = D(p_bpk_rankinf3);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_race_eas)]
	eax = D(p_bpk_race_eas);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_race_med)]
	eax = D(p_bpk_race_med);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_race_har)]
	eax = D(p_bpk_race_har);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_p_name)]
	eax = D(p_bpk_p_name);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_p_pist)]
	eax = D(p_bpk_p_pist);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_p_rank)]
	eax = D(p_bpk_p_rank);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_pts_easy)]
	eax = D(p_bpk_pts_easy);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_pts_med)]
	eax = D(p_bpk_pts_med);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_pts_hard)]
	eax = D(p_bpk_pts_hard);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_placing)]
	eax = D(p_bpk_placing);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_carres)]
	eax = D(p_bpk_carres);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face01)]
	eax = D(p_bpk_face01);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face02)]
	eax = D(p_bpk_face02);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face03)]
	eax = D(p_bpk_face03);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face04)]
	eax = D(p_bpk_face04);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face05)]
	eax = D(p_bpk_face05);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face06)]
	eax = D(p_bpk_face06);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face07)]
	eax = D(p_bpk_face07);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face08)]
	eax = D(p_bpk_face08);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face09)]
	eax = D(p_bpk_face09);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face10)]
	eax = D(p_bpk_face10);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face11)]
	eax = D(p_bpk_face11);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face12)]
	eax = D(p_bpk_face12);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face13)]
	eax = D(p_bpk_face13);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face14)]
	eax = D(p_bpk_face14);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face15)]
	eax = D(p_bpk_face15);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face16)]
	eax = D(p_bpk_face16);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face17)]
	eax = D(p_bpk_face17);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face18)]
	eax = D(p_bpk_face18);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face19)]
	eax = D(p_bpk_face19);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_face20)]
	eax = D(p_bpk_face20);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_facexx)]
	eax = D(p_bpk_facexx);
//		call    __CEXT_F(freeMemSafe)
	freeMemSafe(eax);
//		retn    
	return;
}
