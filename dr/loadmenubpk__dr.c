#include "x86.h"

    extern const char MENU_BPA[];         // "MENU.BPA"
    extern byte BPA_Buffer[];

    extern void * p_bpk_corn3b;
    extern void * p_bpk_corn3a;
    extern void * p_pal_copper;
    extern void * p_pal_carcol;
    extern void * p_bpk_15x150;
    extern void * p_bpk_f_big3a;
    extern void * p_bpk_f_sma3b;
    extern void * p_bpk_f_sma3c;
    extern void * p_bpk_f_sma3a;
    extern void * p_bpk_f_med1a;
    extern void * p_bpk_menubg5;
    extern void * p_bpk_mulsbg2;
    extern void * p_bpk_rank1c;
    extern void * p_bpk_resupok1;
    extern void * p_bpk_rankinf1;
    extern void * p_bpk_rankinf2;
    extern void * p_bpk_rankinf3;
    extern void * p_bpk_race_eas;
    extern void * p_bpk_race_med;
    extern void * p_bpk_race_har;
    extern void * p_bpk_p_name;
    extern void * p_bpk_p_pist;
    extern void * p_bpk_p_rank;
    extern void * p_bpk_pts_easy;
    extern void * p_bpk_pts_med;
    extern void * p_bpk_pts_hard;
    extern void * p_bpk_placing;
    extern void * p_bpk_carres;
    extern void * p_bpk_face01;
    extern void * p_bpk_face02;
    extern void * p_bpk_face03;
    extern void * p_bpk_face04;
    extern void * p_bpk_face05;
    extern void * p_bpk_face06;
    extern void * p_bpk_face07;
    extern void * p_bpk_face08;
    extern void * p_bpk_face09;
    extern void * p_bpk_face10;
    extern void * p_bpk_face11;
    extern void * p_bpk_face12;
    extern void * p_bpk_face13;
    extern void * p_bpk_face14;
    extern void * p_bpk_face15;
    extern void * p_bpk_face16;
    extern void * p_bpk_face17;
    extern void * p_bpk_face18;
    extern void * p_bpk_face19;
    extern void * p_bpk_face20;
    extern void * p_pal_bgcop;
    extern void * p_bpk_facexx;

    extern const char pal_bgcop[];        // "bgcop.pal"
    extern const char bpk_rank1c[];       // "rank1c.bpk"
    extern const char bpk_15x150[];       // "15x150.bpk"
    extern const char bpk_f_big3a[];      // "f-big3a.bpk"
    extern const char bpk_f_sma3a[];      // "f-sma3a.bpk"
    extern const char bpk_f_sma3b[];      // "f-sma3b.bpk"
    extern const char bpk_f_sma3c[];      // "f-sma3c.bpk"
    extern const char bpk_f_med1a[];      // "f-med1a.bpk"
    extern const char bpk_resupok1[];     // "resupok1.bpk"
    extern const char bpk_mulsbg2[];      // "mulsbg2.bpk"
    extern const char bpk_rankinf1[];     // "rankinf1.bpk"
    extern const char bpk_rankinf2[];     // "rankinf2.bpk"
    extern const char bpk_rankinf3[];     // "rankinf3.bpk"
    extern const char bpk_race_eas[];     // "race-eas.bpk"
    extern const char bpk_race_med[];     // "race-med.bpk"
    extern const char bpk_race_har[];     // "race-har.bpk"
    extern const char bpk_p_name[];       // "p-name.bpk"
    extern const char bpk_p_pist[];       // "p-pist.bpk"
    extern const char bpk_p_rank[];       // "p-rank.bpk"
    extern const char bpk_pts_easy[];     // "pts-easy.bpk"
    extern const char bpk_pts_med[];      // "pts-med.bpk"
    extern const char bpk_pts_hard[];     // "pts-hard.bpk"
    extern const char bpk_placing[];      // "placing.bpk"
    extern const char bpk_carres[];       // "carres.bpk"
    extern const char bpk_face01[];       // "face01.bpk"
    extern const char bpk_face02[];       // "face02.bpk"
    extern const char bpk_face03[];       // "face03.bpk"
    extern const char bpk_face04[];       // "face04.bpk"
    extern const char bpk_face05[];       // "face05.bpk"
    extern const char bpk_face06[];       // "face06.bpk"
    extern const char bpk_face07[];       // "face07.bpk"
    extern const char bpk_face08[];       // "face08.bpk"
    extern const char bpk_face09[];       // "face09.bpk"
    extern const char bpk_face10[];       // "face10.bpk"
    extern const char bpk_face11[];       // "face11.bpk"
    extern const char bpk_face12[];       // "face12.bpk"
    extern const char bpk_face13[];       // "face13.bpk"
    extern const char bpk_face14[];       // "face14.bpk"
    extern const char bpk_face15[];       // "face15.bpk"
    extern const char bpk_face16[];       // "face16.bpk"
    extern const char bpk_face17[];       // "face17.bpk"
    extern const char bpk_face18[];       // "face18.bpk"
    extern const char bpk_face19[];       // "face19.bpk"
    extern const char bpk_face20[];       // "face20.bpk"
    extern const char bpk_facexx[];       // "facexx.bpk"
    extern const char pal_copper[];       // "copper.pal"
    extern const char pal_carcol[];       // "carcol.pal"
    extern const char bpk_corn3a[];       // "corn3a.bpk"
    extern const char bpk_corn3b[];       // "corn3b.bpk"
    extern const char bpk_menubg5[];      // "menubg5.bpk"

    
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
	void read__bpa(const char * bpa, void * dst, const char * file);
    void * allocMemSafe(dword size);


// 117f4h
void loadMenuBPK(void){

	p_pal_bgcop = allocMemSafe(0x600);
	read__bpa(MENU_BPA, p_pal_bgcop, pal_bgcop);

	p_pal_carcol = allocMemSafe(0x300);
	read__bpa(MENU_BPA, p_pal_carcol, pal_carcol);

    p_pal_copper = allocMemSafe(0x300);
    read__bpa(MENU_BPA, p_pal_copper, pal_copper);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_15x150);
	p_bpk_15x150 = allocMemSafe(0x8ca);
	decode2__bpk(p_bpk_15x150, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_big3a);
	p_bpk_f_big3a = allocMemSafe(0x18000);
	decode2__bpk(p_bpk_f_big3a, BPA_Buffer);
    
	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_sma3a);
	p_bpk_f_sma3a = allocMemSafe(0x6000);
	decode2__bpk(p_bpk_f_sma3a, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_sma3b);
	p_bpk_f_sma3b = allocMemSafe(0x6000);
	decode2__bpk(p_bpk_f_sma3b, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_sma3c);
	p_bpk_f_sma3c = allocMemSafe(0x6000);
	decode2__bpk(p_bpk_f_sma3c, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_f_med1a);
	p_bpk_f_med1a = allocMemSafe(0x1a28);
	decode2__bpk(p_bpk_f_med1a, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_rank1c);
	p_bpk_rank1c = allocMemSafe(0x516c);
	decode2__bpk(p_bpk_rank1c, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_resupok1);
	p_bpk_resupok1 = allocMemSafe(0x19a20);
	decode2__bpk(p_bpk_resupok1, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_mulsbg2);
	p_bpk_mulsbg2 = allocMemSafe(0x2e00);
	decode2__bpk(p_bpk_mulsbg2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_rankinf1);
	p_bpk_rankinf1 = allocMemSafe(0x22e);
	decode2__bpk(p_bpk_rankinf1, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_rankinf2);
	p_bpk_rankinf2 = allocMemSafe(0x71a);
	decode2__bpk(p_bpk_rankinf2, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_rankinf3);
	p_bpk_rankinf3 = allocMemSafe(0x3ba);
	decode2__bpk(p_bpk_rankinf3, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_race_eas);
	p_bpk_race_eas = allocMemSafe(0x3fc0);
	decode2__bpk(p_bpk_race_eas, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_race_med);
	p_bpk_race_med = allocMemSafe(0x3fc0);
	decode2__bpk(p_bpk_race_med, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_race_har);
	p_bpk_race_har = allocMemSafe(0x3fc0);
	decode2__bpk(p_bpk_race_har, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_p_name);
	p_bpk_p_name = allocMemSafe(0x71a);
	decode2__bpk(p_bpk_p_name, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_p_pist);
	p_bpk_p_pist = allocMemSafe(0x3ba);
	decode2__bpk(p_bpk_p_pist, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_p_rank);
	p_bpk_p_rank = allocMemSafe(0x22e);
	decode2__bpk(p_bpk_p_rank, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_pts_easy);
	p_bpk_pts_easy = allocMemSafe(0x2f4);
	decode2__bpk(p_bpk_pts_easy, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_pts_med);
	p_bpk_pts_med = allocMemSafe(0x2f4);
	decode2__bpk(p_bpk_pts_med, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_pts_hard);
	p_bpk_pts_hard = allocMemSafe(0x2f4);
	decode2__bpk(p_bpk_pts_hard, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_placing);
	p_bpk_placing = allocMemSafe(0x3a64);
	decode2__bpk(p_bpk_placing, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_carres);
	p_bpk_carres = allocMemSafe(0x1e780);
	decode2__bpk(p_bpk_carres, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face01);
	p_bpk_face01 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face01, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face02);
	p_bpk_face02 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face02, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face03);
	p_bpk_face03 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face03, BPA_Buffer);
    
	read__bpa(MENU_BPA, BPA_Buffer, bpk_face04);
	p_bpk_face04 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face04, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face05);
	p_bpk_face05 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face05, BPA_Buffer);
    
	read__bpa(MENU_BPA, BPA_Buffer, bpk_face06);
	p_bpk_face06 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face06, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face07);
	p_bpk_face07 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face07, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face08);
	p_bpk_face08 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face08, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face09);
	p_bpk_face09 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face09, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face10);
	p_bpk_face10 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face10, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face11);
	p_bpk_face11 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face11, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face12);
	p_bpk_face12 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face12, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face13);
	p_bpk_face13 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face13, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face14);
	p_bpk_face14 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face14, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face15);
	p_bpk_face15 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face15, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face16);
	p_bpk_face16 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face16, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face17);
	p_bpk_face17 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face17, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face18);
	p_bpk_face18 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face18, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face19);
	p_bpk_face19 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face19, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_face20);
	p_bpk_face20 = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_face20, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_facexx);
	p_bpk_facexx = allocMemSafe(0x1000);
	decode2__bpk(p_bpk_facexx, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_corn3a);
	p_bpk_corn3a = allocMemSafe(0xa00);
	decode2__bpk(p_bpk_corn3a, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_corn3b);
    p_bpk_corn3b = allocMemSafe(0xa00);
	decode2__bpk(p_bpk_corn3b, BPA_Buffer);
    
	read__bpa(MENU_BPA, BPA_Buffer, bpk_menubg5);
	p_bpk_menubg5 = allocMemSafe(0x4b000);
	decode2__bpk(p_bpk_menubg5, BPA_Buffer);
}
