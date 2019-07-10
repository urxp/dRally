#include "x86.h"

    extern const char MENU_BPA[];
    extern byte BPA_Buffer[];

    extern byte ___1a1e68h[];
    extern byte p_bpk_chattext[];
    extern byte p_bpk_facesel1[];
    extern byte p_bpk_facearr1[];
    extern byte p_bpk_entertx2[];
    extern byte p_bpk_shoptxt1[];
    extern byte p_bpk_shoptxt2[];
    extern byte p_bpk_fametxt[];
    extern byte p_bpk_recotxt[];
    extern byte p_bpk_recobar[];
    extern byte p_bpk_lic_lin1[];
    extern byte p_bpk_chatlin1[];
    extern byte p_bpk_cursor[];
    extern byte p_bpk_f_big3d[];
    extern byte p_bpk_f_big3b[];
    extern byte p_bpk_mseletx1[];
    extern byte p_bpk_trarr1[];
    extern byte ps_bpk_trsnap2m[];
    extern byte ___1a1044h[];
    extern byte ___1a1048h[];
    extern byte ___1a104ch[];
    extern byte ___1a1050h[];
    extern byte ___1a1054h[];
    extern byte ___1a1058h[];
    extern byte ___1a105ch[];
    extern byte ___1a1060h[];
    extern byte ___1a1064h[];
    extern byte ___1a1068h[];
    extern byte ___1a106ch[];
    extern byte ___1a1070h[];
    extern byte ___1a1074h[];
    extern byte ___1a1078h[];
    extern byte ___1a107ch[];
    extern byte ___1a1080h[];
    extern byte ___1a1084h[];
    extern byte ___1a1088h[];
    extern byte p0_bpk_trsnap2m[];
    extern byte p1_bpk_trsnap2m[];

    extern const char bpk_trsnap2m[];	// "trsnap2m.bpk"
    extern const char bpk_cursor[];		// "cursor.bpk"
    extern const char bpk_f_big3b[];	// "f-big3b.bpk"
    extern const char bpk_f_big3d[];	// "f-big3d.bpk"
    extern const char bpk_chatlin1[];	// "chatlin1.bpk"
    extern const char bpk_chattext[];	// "chattext.bpk"
    extern const char bpk_entertx2[];	// "entertx2.bpk"
    extern const char bpk_shoptxt1[];	// "shoptxt1.bpk"
    extern const char bpk_shoptxt2[];	// "shoptxt2.bpk"
    extern const char bpk_fametxt[];	// "fametxt.bpk"
    extern const char bpk_recotxt[];	// "recotxt.bpk"
    extern const char bpk_recobar[];	// "recobar.bpk"
    extern const char bpk_lic_lin1[];	// "lic-lin1.bpk"
    extern const char bpk_facesel1[];	// "facesel1.bpk"
    extern const char bpk_facearr1[];	// "facearr1.bpk"
    extern const char bpk_mseletx1[];	// "mseletx1.bpk"
    extern const char bpk_trarr1[];		// "trarr1.bpk"


    void * allocMemSafe(dword size);
    void freeMemSafe(void * p);
    void read__bpa(const char * bpa, void * dst, const char * file);

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    #pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);


// 1240ch
void loadOtherBPK(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x100];
	byte * 	esp = __esp + 0x100;

//		push    2ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		xor     edx, edx
    edx = 0;
//		mov     eax, 7530h
    eax = 0x7530;
//		mov     [__CEXT_V(___1a1e68h)], edx
    D(___1a1e68h) = edx;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_chattext)], eax
    D(p_bpk_chattext) = eax;
//		mov     eax, 1b18h
    eax = 0x1b18;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_facesel1)], eax
    D(p_bpk_facesel1) = eax;
//		mov     eax, 1100h
    eax = 0x1100;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_facearr1)], eax
    D(p_bpk_facearr1) = eax;
//		mov     eax, 5000h
    eax = 0x5000;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_entertx2)], eax
    D(p_bpk_entertx2) = eax;
//		mov     eax, 2800h
    eax = 0x2800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_shoptxt1)], eax
    D(p_bpk_shoptxt1) = eax;
//		mov     eax, 2800h
    eax = 0x2800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_shoptxt2)], eax
    D(p_bpk_shoptxt2) = eax;
//		mov     eax, 8700h
    eax = 0x8700;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_fametxt)], eax
    D(p_bpk_fametxt) = eax;
//		mov     eax, 2800h
    eax = 0x2800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_recotxt)], eax
    D(p_bpk_recotxt) = eax;
//		mov     eax, 0aa00h
    eax = 0xaa00;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_recobar)], eax
    D(p_bpk_recobar) = eax;
//		mov     eax, 111ch
    eax = 0x111c;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_lic_lin1)], eax
    D(p_bpk_lic_lin1) = eax;
//		mov     eax, 1900h
    eax = 0x1900;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_chatlin1)], eax
    D(p_bpk_chatlin1) = eax;
//		mov     eax, 4e20h
    eax = 0x4e20;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_cursor)], eax
    D(p_bpk_cursor) = eax;
//		mov     eax, 18000h
    eax = 0x18000;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_big3d)], eax
    D(p_bpk_f_big3d) = eax;
//		mov     eax, 18000h
    eax = 0x18000;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_f_big3b)], eax
    D(p_bpk_f_big3b) = eax;
//		mov     eax, 2800h
    eax = 0x2800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_mseletx1)], eax
    D(p_bpk_mseletx1) = eax;
//		mov     eax, 1500h
    eax = 0x1500;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p_bpk_trarr1)], eax
    D(p_bpk_trarr1) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(ps_bpk_trsnap2m)], eax
    D(ps_bpk_trsnap2m) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1044h)], eax
    D(___1a1044h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1048h)], eax
    D(___1a1048h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a104ch)], eax
    D(___1a104ch) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1050h)], eax
    D(___1a1050h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1054h)], eax
    D(___1a1054h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1058h)], eax
    D(___1a1058h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a105ch)], eax
    D(___1a105ch) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1060h)], eax
    D(___1a1060h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1064h)], eax
    D(___1a1064h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1068h)], eax
    D(___1a1068h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a106ch)], eax
    D(___1a106ch) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1070h)], eax
    D(___1a1070h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1074h)], eax
    D(___1a1074h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1078h)], eax
    D(___1a1078h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a107ch)], eax
    D(___1a107ch) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1080h)], eax
    D(___1a1080h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1084h)], eax
    D(___1a1084h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1088h)], eax
    D(___1a1088h) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		xor     edi, edi
    edi = 0;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p0_bpk_trsnap2m)], eax
    D(p0_bpk_trsnap2m) = eax;
//		mov     eax, 3800h
    eax = 0x3800;
//		xor     esi, esi
    esi = 0;
//		call    __CEXT_F(allocMemSafe)
    eax = allocMemSafe(eax);
//		mov     [__CEXT_V(p1_bpk_trsnap2m)], eax
    D(p1_bpk_trsnap2m) = eax;
___12653h:
//		mov     ebx, __CEXT_V(bpk_trsnap2m)
    ebx = bpk_trsnap2m;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebx, [esi+__CEXT_V(ps_bpk_trsnap2m)]
    ebx = D(esi+ps_bpk_trsnap2m);
//		push    ebx
    PUSH(ebx);
//		push    edi
    PUSH(edi);
//		push    3800h
    PUSH(0x3800);
//		add     esi, byte 4
    esi += 4;
//		call    __CEXT_F(decode4__bpk)
    decode4__bpk(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
    esp += 0x10;
//		add     edi, 3800h
    edi += 0x3800;
//		cmp     esi, byte 4ch
//		jne     short ___12653h
    if(esi != 0x4c) goto ___12653h;
//		mov     ebx, __CEXT_V(bpk_trsnap2m)
    ebx = bpk_trsnap2m;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p0_bpk_trsnap2m)]
    ecx = D(p0_bpk_trsnap2m);
//		push    ecx
    PUSH(ecx);
//		push    3f000h
    PUSH(0x3f000);
//		push    3800h
    PUSH(0x3800);
//		call    __CEXT_F(decode4__bpk)
    decode4__bpk(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
    esp += 0x10;
//		mov     ebx, __CEXT_V(bpk_trsnap2m)
    ebx = bpk_trsnap2m;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p1_bpk_trsnap2m)]
    esi = D(p1_bpk_trsnap2m);
//		push    esi
    PUSH(esi);
//		push    42800h
    PUSH(0x42800);
//		push    3800h
    PUSH(0x3800);
//		call    __CEXT_F(decode4__bpk)
    decode4__bpk(D(esp), D(esp+4), D(esp+8), D(esp+0xc));
    esp += 0x10;
//		mov     ebx, __CEXT_V(bpk_cursor)
    ebx = bpk_cursor;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_cursor)]
    edi = D(p_bpk_cursor);
//		push    edi
    PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_big3b)
    ebx = bpk_f_big3b;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_f_big3b)]
    ebp = D(p_bpk_f_big3b);
//		push    ebp
    PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_f_big3d)
    ebx = bpk_f_big3d;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_f_big3d)]
    eax = D(p_bpk_f_big3d);
//		push    eax
    PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_chatlin1)
    ebx = bpk_chatlin1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_chatlin1)]
    edx = D(p_bpk_chatlin1);
//		push    edx
    PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_chattext)
    ebx = bpk_chattext;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_chattext)]
    ebx = D(p_bpk_chattext);
//		push    ebx
    PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_entertx2)
    ebx = bpk_entertx2;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_entertx2)]
    ecx = D(p_bpk_entertx2);
//		push    ecx
    PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_shoptxt1)
    ebx = bpk_shoptxt1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_shoptxt1)]
    esi = D(p_bpk_shoptxt1);
//		push    esi
    PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_shoptxt2)
    ebx = bpk_shoptxt2;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_shoptxt2)]
    edi = D(p_bpk_shoptxt2);
//		push    edi
    PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_fametxt)
    ebx = bpk_fametxt;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_fametxt)]
    ebp = D(p_bpk_fametxt);
//		push    ebp
    PUSH(ebp);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_recotxt)
    ebx = bpk_recotxt;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     eax, [__CEXT_V(p_bpk_recotxt)]
    eax = D(p_bpk_recotxt);
//		push    eax
    PUSH(eax);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_recobar)
    ebx = bpk_recobar;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     edx, [__CEXT_V(p_bpk_recobar)]
    edx = D(p_bpk_recobar);
//		push    edx
    PUSH(edx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_lic_lin1)
    ebx = bpk_lic_lin1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebx, [__CEXT_V(p_bpk_lic_lin1)]
    ebx = D(p_bpk_lic_lin1);
//		push    ebx
    PUSH(ebx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_facesel1)
    ebx = bpk_facesel1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ecx, [__CEXT_V(p_bpk_facesel1)]
    ecx = D(p_bpk_facesel1);
//		push    ecx
    PUSH(ecx);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_facearr1)
    ebx = bpk_facearr1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     esi, [__CEXT_V(p_bpk_facearr1)]
    esi = D(p_bpk_facearr1);
//		push    esi
    PUSH(esi);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_mseletx1)
    ebx = bpk_mseletx1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     edi, [__CEXT_V(p_bpk_mseletx1)]
    edi = D(p_bpk_mseletx1);
//		push    edi
    PUSH(edi);
//		call    __CEXT_F(decode2__bpk)
    decode2__bpk(D(esp), D(esp+4));
    esp += 8;
//		mov     ebx, __CEXT_V(bpk_trarr1)
    ebx = bpk_trarr1;
//		mov     edx, __CEXT_V(BPA_Buffer)
    edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
    eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
    read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
    PUSH(BPA_Buffer);
//		mov     ebp, [__CEXT_V(p_bpk_trarr1)]
    ebp = D(p_bpk_trarr1);
//		push    ebp
    PUSH(ebp);
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
}

// 12a54h
void unloadOtherBPK(void){

    dword   eax;

//		push    4
//		call    __CHK
//		mov     eax, [__CEXT_V(p_bpk_chattext)]
    eax = D(p_bpk_chattext);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_facesel1)]
    eax = D(p_bpk_facesel1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_facearr1)]
    eax = D(p_bpk_facearr1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_entertx2)]
    eax = D(p_bpk_entertx2);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_shoptxt1)]
    eax = D(p_bpk_shoptxt1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_shoptxt2)]
    eax = D(p_bpk_shoptxt2);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_fametxt)]
    eax = D(p_bpk_fametxt);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_recotxt)]
    eax = D(p_bpk_recotxt);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_recobar)]
    eax = D(p_bpk_recobar);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_lic_lin1)]
    eax = D(p_bpk_lic_lin1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_chatlin1)]
    eax = D(p_bpk_chatlin1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_cursor)]
    eax = D(p_bpk_cursor);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_big3d)]
    eax = D(p_bpk_f_big3d);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_f_big3b)]
    eax = D(p_bpk_f_big3b);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_mseletx1)]
    eax = D(p_bpk_mseletx1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p_bpk_trarr1)]
    eax = D(p_bpk_trarr1);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(ps_bpk_trsnap2m)]
    eax = D(ps_bpk_trsnap2m);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1044h)]
    eax = D(___1a1044h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1048h)]
    eax = D(___1a1048h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a104ch)]
    eax = D(___1a104ch);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1050h)]
    eax = D(___1a1050h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1054h)]
    eax = D(___1a1054h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1058h)]
    eax = D(___1a1058h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a105ch)]
    eax = D(___1a105ch);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1060h)]
    eax = D(___1a1060h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1064h)]
    eax = D(___1a1064h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1068h)]
    eax = D(___1a1068h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a106ch)]
    eax = D(___1a106ch);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1070h)]
    eax = D(___1a1070h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1074h)]
    eax = D(___1a1074h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1078h)]
    eax = D(___1a1078h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a107ch)]
    eax = D(___1a107ch);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1080h)]
    eax = D(___1a1080h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1084h)]
    eax = D(___1a1084h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(___1a1088h)]
    eax = D(___1a1088h);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p0_bpk_trsnap2m)]
    eax = D(p0_bpk_trsnap2m);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		mov     eax, [__CEXT_V(p1_bpk_trsnap2m)]
    eax = D(p1_bpk_trsnap2m);
//		call    __CEXT_F(freeMemSafe)
    freeMemSafe(eax);
//		retn    
    return;
}
