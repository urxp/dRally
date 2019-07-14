#include "x86.h"
    
    extern byte p_bpk_menubg5[];
    extern byte VGABufferPtr_0[];
    extern byte p_bpk_chatlin1[];

	void * memcpy__clib3r(void * dest, const void * src, dword n);


// ~ 135f1h (+1 label)
void frameFooter__dr(dword eax, dword edx, dword ebx, dword ecx){

	dword 	edi, esi, ebp;
	byte 	esp[0x20];

	ebp = eax;
	D(esp+4) = edx;
	D(esp) = ecx;

	if((int)ecx > 0){

		edi = edx*4;
		esi = ecx*4;
		edi += edx;
		esi += ecx;
		edi <<= 7;
		esi <<= 7;
		edx = edi+0xfffff600;
		esi -= 0xa00;
		edi += esi;
		ebx -= 6;
		D(esp+8) = edi;

		while((int)edx < (int)D(esp+8)){

			esi = D(p_bpk_menubg5);
			edi = D(VGABufferPtr_0);
			ecx = ebx;
			esi += edx;
			edi += edx;
			esi += ebp;
			edi += ebp;
			esi += 2;
			edi += 2;
			edx += 0x280;

			memcpy__clib3r(edi, esi, ecx);
		}
	}

	ebx = D(esp+4);
	ebx++;

	edx = ebx*4;
	ecx = 0xa;
	edx += ebx;
	ebx = D(VGABufferPtr_0);
	edx <<= 7;
	esi = D(p_bpk_chatlin1);
	ebx += edx;
	edx = 0x280;

	while(ecx > 0){

		edi = edx;

		while(edi > 0){

			al = B(esi);
			al |= al;
			if(al != 0) B(ebx) = al;
			ebx++;
			esi++;
			edi--;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;
	}

	eax = D(esp+4);
	eax += D(esp);
	eax -= 9;

	edx = eax*4;
	ecx = 0xa;
	edx += eax;
	ebx = D(VGABufferPtr_0);
	edx <<= 7;
	esi = D(p_bpk_chatlin1);
	ebx += edx;
	edx = 0x280;

	while(ecx > 0){

		edi = edx;

		while(edi > 0){

			al = B(esi);
			al |= al;
			if(al != 0) B(ebx) = al;
			ebx++;
			esi++;
			edi--;
		}	

		ebx += 0x280;
		ebx -= edx;
		ecx--;
	}
}
