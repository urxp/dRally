#include "x86.h"

    extern const char MENU_BPA[];   // "MENU.BPA"
    extern byte BPA_Buffer[];
    
    extern void * ___1a1114h;

    extern void * p_bpk_badtit;
    extern void * p_bpk_badsnap;
    extern void * p_bpk_escbox;
    extern void * p_bpk_signline;
    extern void * p_bpk_prep4;
    extern void * p_bpk_prepw1;

    extern const char bpk_badtit[];     // "badtit.bpk"
    extern const char bpk_badsnap[];    // "badsnap.bpk"
    extern const char bpk_escbox[];     // "escbox.bpk"
    extern const char bpk_prep4[];      // "prep4.bpk"
    extern const char bpk_signline[];   // "signline.bpk"
    extern const char bpk_prepw1[];     // "prepw1.bpk"

    void * allocMemSafe(dword size);
	void freeMemSafe(void * p);
    void read__bpa(const char *, void *, const char *);
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

// 2faf0h
void loadAddBPK(void){

	___1a1114h = allocMemSafe(0x18150);


	read__bpa(MENU_BPA, BPA_Buffer, bpk_badtit);
	p_bpk_badtit = allocMemSafe(0x1b80);
	decode2__bpk(p_bpk_badtit, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_badsnap);
	p_bpk_badsnap = allocMemSafe(0xe400);
	decode2__bpk(p_bpk_badsnap, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_escbox);
	p_bpk_escbox = allocMemSafe(0x2eb8);
	decode2__bpk(p_bpk_escbox, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_prep4);
	p_bpk_prep4 = allocMemSafe(0x8700);
	decode2__bpk(p_bpk_prep4, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_signline);
	p_bpk_signline = allocMemSafe(0x110);
	decode2__bpk(p_bpk_signline, BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, bpk_prepw1);
	p_bpk_prepw1 = allocMemSafe(0xf0d2);
	decode2__bpk(p_bpk_prepw1, BPA_Buffer);
}

// 2fc50h
void unloadAddBPK(void){

	freeMemSafe(p_bpk_badtit);
	freeMemSafe(p_bpk_badsnap);
	freeMemSafe(p_bpk_escbox);
	freeMemSafe(p_bpk_signline);
	freeMemSafe(p_bpk_prep4);
	freeMemSafe(___1a1114h);
	freeMemSafe(p_bpk_prepw1);
}
