#include "x86.h"

    extern const char ___182890h[];		// "startscr.pal"
    extern const char ___1828a0h[];		// "startscr.bpk"
    extern const char MENU_BPA[];		// "MENU.BPA"
    extern byte BPA_Buffer[];
    extern void * VGABufferPtr_0;

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    void popScreen(void);
    void fadeinScreen(void);
    void read__bpa(const char *, void *, const char *);
    void loadPalette(dword);
    #pragma aux writeColor__video parm routine []
	void writeColor__video(dword, dword, dword, dword);


// 3d890h
void startingScreen__dr(void){

	byte 	__esp[4];
    byte *  esp = __esp;

	D(esp) = -1;
    while(++D(esp) < 0x100) writeColor__video(0, 0, 0, D(esp));

	loadPalette(___182890h);
	read__bpa(MENU_BPA, BPA_Buffer, ___1828a0h);
	decode2__bpk(VGABufferPtr_0, BPA_Buffer);
	popScreen();
	fadeinScreen();
}
