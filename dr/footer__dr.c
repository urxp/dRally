#include "x86.h"

	extern byte * p_bpk_menubg5;
	extern byte * VGABufferPtr_0;
	extern byte (SixLinesBuffer[])[0x96];
	extern byte (ChatLinesBuffer[])[0x96];
	extern byte RowBox0Colors[];
	extern byte Font0Props[];
	extern void * p_bpk_f_sma3a;
	extern void * p_bpk_f_sma3b;
	extern void * p_bpk_f_sma3c;

	void renderTextToBuffer__video(void *, byte *, const char *, dword);
	void * memcpy__clib3r(void * dest, const void * src, dword n);


// ~ 23245h (-1 label)
void footer__dr(void){

	dword 	n;


	memcpy__clib3r(VGABufferPtr_0+0x3b600, p_bpk_menubg5+0x3b600, 0x59*0x280);

	n = -1;
	while(++n < 6){

		switch(RowBox0Colors[n]){
		case 0:
			renderTextToBuffer__video(p_bpk_f_sma3a, Font0Props, 
				SixLinesBuffer[n], 0x3b10c + 0xf*0x280*n);
			break;
		case 1:
			renderTextToBuffer__video(p_bpk_f_sma3b, Font0Props, 
				SixLinesBuffer[n], 0x3b10c + 0xf*0x280*n);
			break;
		case 2:
			renderTextToBuffer__video(p_bpk_f_sma3c, Font0Props,
				SixLinesBuffer[n], 0x3b10c + 0xf*0x280*n);
			break;
		default:
			break;
		}
	}
}
