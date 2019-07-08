#include "x86.h"

    extern const char ___182818h[];	// "apogee.pal"
    extern const char ___182824h[];	// "apogee.bpk"
    extern const char ___182830h[];	// "gtlogo4.pal"
    extern const char ___18283ch[];	// "gtlogo4.bpk"
    extern const char ___182848h[];	// "remedy.pal"
    extern const char ___182854h[];	// "remedy.bpk"
    extern const char MENU_BPA[];	// "MENU.BPA"
    extern byte BPA_Buffer[];
    extern void * VGABufferPtr_0;

    void read__bpa(const char *, void *, const char *);
    void ___3d154h(dword);
    #pragma aux ___5e0f9h parm routine []
	void ___5e0f9h(dword, dword, dword, dword);
    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);
    void ___12cb8h(void);
    void ___3d1f0h(void);
    void ___58c60h(void);
	dword lastScanCode__keyboard(void);	
    void ___3d2bch(void);


// 3d38ch
void apogee_gt_remedy(void){

	byte 	__esp[4];
	byte *	esp = __esp;

	D(esp) = -1;
	while(++D(esp) < 0x100) ___5e0f9h(0, 0, 0, D(esp));
	

	___3d154h(___182818h);
	read__bpa(MENU_BPA, BPA_Buffer, ___182824h);
	decode2__bpk(VGABufferPtr_0, BPA_Buffer);
	___12cb8h();
	___3d1f0h();

	D(esp) = -1;
	while((++D(esp) < 0xb4)&&!lastScanCode__keyboard()) ___58c60h();

	___3d2bch();

	___3d154h(___182830h);
	read__bpa(MENU_BPA, BPA_Buffer, ___18283ch);
	decode2__bpk(VGABufferPtr_0, BPA_Buffer);
	___12cb8h();
	___3d1f0h();

	D(esp) = -1;
	while((++D(esp) < 0xb4)&&!lastScanCode__keyboard()) ___58c60h();

	___3d2bch();

	___3d154h(___182848h);
	read__bpa(MENU_BPA, BPA_Buffer, ___182854h);
	decode2__bpk(VGABufferPtr_0, BPA_Buffer);
	___12cb8h();
	___3d1f0h();

	D(esp) = -1;
	while((++D(esp) < 0xb4)&&!lastScanCode__keyboard()) ___58c60h();

	___3d2bch();
}
