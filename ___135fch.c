#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10b4h[];

void ___135fch_cdecl(dword A1, dword A2, dword A3, dword A4){


	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];


	if(A4 > 0){

		D(esp+8) = 0x280*(A2+A4)-0xa00;
		edx = 0x280*A2-0xa00;

		while(1){

			esi = D(___1a1138h__VESA101h_DefaultScreenBufferB)+edx+A1+2;
			edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+edx+A1+2;
			memcpy(edi, esi, A3-6);

			edx += 0x280;
			if((int)edx >= (int)D(esp+8)) break;
		}
	}

	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(A2+1);
	esi = D(___1a10b4h);

	ecx = 0xa;
	while(1){

		edi = 0x280;

		while(1){

			if(B(esi)) B(ebx) = B(esi);
			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= 0x280;
		ecx--;

		if(ecx == 0) break;
	}

	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(A2+A4-9);
	esi = D(___1a10b4h);

	ecx = 0xa;
	while(1){

		edi = 0x280;

		while(1){

			if(B(esi)) B(ebx) = B(esi);
			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= 0x280;
		ecx--;

		if(ecx == 0) break;
	}
}
