#include "x86.h"

    extern byte ___185ba9h[];
    extern void * ___1a10e0h;
    extern const char ___18072ch[];
    extern int ___196ae0h;
    extern byte ___185cbch[];
    extern void * bpk_kupla_p;
    extern dword ___1a1ed0h;
    extern byte * VGABufferPtr_0;
    extern dword ___196ae4h;


    void delay_TBD(void);
    void memset__clib3r(void *, dword, dword);
    void ___1398ch(dword, void *, dword w, dword h);
    void carAnimFrame(dword, dword, dword, void *, void *);
    void renderTextToBuffer__video(void *, byte *, const char *, dword);


// 17384h
void ___17384h(dword A0, dword A1, dword A2, dword A3, dword A4, dword A5){

	dword 	n;

	delay_TBD();

	if(___196ae0h++ < 0xa){

		renderTextToBuffer__video(___1a10e0h, ___185ba9h, ___18072ch, 640*A1 + A0 + A2);
	}
	else {

		n = 640*(A1 + 2);

		while(n != (640*(A1 + 2) + 0x4b00)){

			memset__clib3r(VGABufferPtr_0 + n + A0 + A2, 0xc4, 0x14);
			n += 640;
		}
	}
	
	if(___196ae0h > 0x14) ___196ae0h = 0;

	___1398ch(640*A1 + A0 + A2, VGABufferPtr_0 + 640*A1 + A0 + A2, 0x14, 0x20);

	if(___196ae4h){

		___196ae4h = 0;
	}
	else {

		if(A3){

			carAnimFrame(A4 + 0x1a0, A5 + 0x50, ___1a1ed0h, bpk_kupla_p, ___185cbch);

			___1398ch(640*(A5 + 0x50) + A4 + 0x1a0, 640*(A5 + 0x50) + VGABufferPtr_0 + A4 + 0x1a0, 0x60, 0x40);

			if(++___1a1ed0h > 0x3f) ___1a1ed0h = 0;
		}

		___196ae4h = 1;
	}
}
