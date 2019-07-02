#include "x86.h"

    extern byte * tex_carframe;
    extern byte * VGABufferPtr_0;

    #pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);


// 259e0h
void carAnimFrame(dword A0, dword A1, dword A2, byte * bpk_car_p, dword * A4){

    dword   w, h;

    while(A2--) bpk_car_p += *A4++;

	decode2__bpk(tex_carframe, bpk_car_p);

    for(h = 0; h < 0x40; h++){

        for(w = 0; w < 0x60; w+=4){

            D(VGABufferPtr_0 + 640*(A1 + h) + A0 + w) = D(tex_carframe + 0x60*h + w);
        }
    }
}
