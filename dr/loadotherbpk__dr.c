#include "x86.h"

    extern const char MENU_BPA[];
    extern byte BPA_Buffer[];

    extern byte ___1a1e68h[];
    extern void * p_bpk_chattext;
    extern void * p_bpk_facesel1;
    extern void * p_bpk_facearr1;
    extern void * p_bpk_entertx2;
    extern void * p_bpk_shoptxt1;
    extern void * p_bpk_shoptxt2;
    extern void * p_bpk_fametxt;
    extern void * p_bpk_recotxt;
    extern void * p_bpk_recobar;
    extern void * p_bpk_lic_lin1;
    extern void * p_bpk_chatlin1;
    extern void * p_bpk_cursor;
    extern void * p_bpk_f_big3d;
    extern void * p_bpk_f_big3b;
    extern void * p_bpk_mseletx1;
    extern void * p_bpk_trarr1;
    extern void * p0_bpk_trsnap2m;
    extern void * p1_bpk_trsnap2m;
    extern void * ps_bpk_trsnap2m[0x13];

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
    void read__bpa(const char * bpa, void * dst, const char * file);

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    #pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);


// 1240ch
void loadOtherBPK(void){

	dword 	n;

    D(___1a1e68h) = 0;

    n = 0;
    while(n < 0x13){

        read__bpa(MENU_BPA, BPA_Buffer, bpk_trsnap2m);
        ps_bpk_trsnap2m[n] = allocMemSafe(0x3800);
        decode4__bpk(0x3800, 0x3800*n, ps_bpk_trsnap2m[n], BPA_Buffer);
        n++;
    }

    read__bpa(MENU_BPA, BPA_Buffer, bpk_trsnap2m);
    p0_bpk_trsnap2m = allocMemSafe(0x3800);
    decode4__bpk(0x3800, 0x3f000, p0_bpk_trsnap2m, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_trsnap2m);
    p1_bpk_trsnap2m = allocMemSafe(0x3800);
    decode4__bpk(0x3800, 0x42800, p1_bpk_trsnap2m, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_cursor);
    p_bpk_cursor = allocMemSafe(0x4e20);
    decode2__bpk(p_bpk_cursor, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_f_big3b);
    p_bpk_f_big3b = allocMemSafe(0x18000);
    decode2__bpk(p_bpk_f_big3b, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_f_big3d);
    p_bpk_f_big3d = allocMemSafe(0x18000);
    decode2__bpk(p_bpk_f_big3d, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_chatlin1);
    p_bpk_chatlin1 = allocMemSafe(0x1900);
    decode2__bpk(p_bpk_chatlin1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_chattext);
    p_bpk_chattext = allocMemSafe(0x7530);
    decode2__bpk(p_bpk_chattext, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_entertx2);
    p_bpk_entertx2 = allocMemSafe(0x5000);
    decode2__bpk(p_bpk_entertx2, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_shoptxt1);
    p_bpk_shoptxt1 = allocMemSafe(0x2800);
    decode2__bpk(p_bpk_shoptxt1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_shoptxt2);
    p_bpk_shoptxt2 = allocMemSafe(0x2800);
    decode2__bpk(p_bpk_shoptxt2, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_fametxt);
    p_bpk_fametxt = allocMemSafe(0x8700);
    decode2__bpk(p_bpk_fametxt, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_recotxt);
    p_bpk_recotxt = allocMemSafe(0x2800);
    decode2__bpk(p_bpk_recotxt, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_recobar);
    p_bpk_recobar = allocMemSafe(0xaa00);
    decode2__bpk(p_bpk_recobar, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_lic_lin1);
    p_bpk_lic_lin1 = allocMemSafe(0x111c);
    decode2__bpk(p_bpk_lic_lin1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_facesel1);
    p_bpk_facesel1 = allocMemSafe(0x1b18);
    decode2__bpk(p_bpk_facesel1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_facearr1);
    p_bpk_facearr1 = allocMemSafe(0x1100);
    decode2__bpk(p_bpk_facearr1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_mseletx1);
    p_bpk_mseletx1 = allocMemSafe(0x2800);
    decode2__bpk(p_bpk_mseletx1, BPA_Buffer);

    read__bpa(MENU_BPA, BPA_Buffer, bpk_trarr1);
    p_bpk_trarr1 = allocMemSafe(0x1500);
    decode2__bpk(p_bpk_trarr1, BPA_Buffer);
}
