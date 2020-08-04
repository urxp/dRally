#include "drally.h"

	extern byte ___185a5ch[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1866b8h[];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___185b58h[];
	extern byte ___1a10cch[];
	extern byte ___1a1e68h[];
	extern byte ___1a10f4h[];

void ___12e78h_cdecl(dword, dword, dword, dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
	
void ___14368h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18];

	eax = A1;

	D(esp+4) = eax;
	edx = eax;
	eax <<= 3;
	eax -= edx;
	ecx = D(4*eax+___185a5ch+0xc);
	ecx = ecx*D(4*eax+___185a5ch+0x18);
	ebp = D(4*eax+___185a5ch+4);
	edx = D(4*eax+___185a5ch+8);
	ebx = D(4*eax+___185a5ch+0x10);
	edx += 5;
	esi = D(4*eax+___185a5ch+0x10);
	edx += ecx;
	ebx -= 0xa;
	D(esp+8) = edx;
	edi = 4*edx;
	esi -= 0x14;
	edi += edx;
	D(esp+0x14) = ebx;
	edi <<= 7;
	ebx = 0x20;
	eax = edi+0xa00;
	D(esp+0x10) = ebx;
	edi += 0x4100;
	ecx = eax;

	if((int)eax < (int)edi){

		while(1){

			eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
			eax += ecx;
			edx = 0xc4;
			eax += ebp;
			ebx = esi;
			eax += 9;
			ecx += 0x280;
			memset(eax, edx, ebx);

			if((int)ecx >= (int)edi) break;
		}
	}

	edx = D(esp+4);
	eax = 8*edx;
	eax -= edx;
	eax <<= 2;
	edx = D(eax+___185a5ch+0xc);
	D(esp) = eax;
	eax = 4*edx;
	eax += edx;
	edx = D(esp);
	eax <<= 7;
	eax = eax*D(edx+___185a5ch+0x18);
	ecx = D(esp);
	edx = eax+0xca0;
	ecx = D(ecx+___185a5ch+8);
	eax = 4*ecx;
	ebx = D(esp);
	eax += ecx;
	ecx = D(ebx+___185a5ch+0x18);
	esi = D(ebx+___185a5ch+4);
	ebx = 4*ecx;
	ebx -= ecx;
	eax <<= 7;
	ebx <<= 3;
	eax += esi;
	ebx += ecx;
	ecx = D(esp+4);
	edx += eax;
	eax = 8*ecx;
	eax -= ecx;
	eax <<= 5;
	eax += ecx;
	ebx += ebx;
	eax += eax;
	ecx = edx;
	eax = eax+___1866b8h;
	edx = ___185ba9h;
	ebx += eax;
	eax = D(___1a10e0h);
	___12e78h_cdecl(eax, edx, ebx, ecx);
	eax = D(esp+4);
	edi = 8*eax;
	esi = D(esp);
	edi += eax;

	while(1){

		if((int)(D(esi+___185a5ch)-1) <= (int)D(esi+___185a5ch+0x18)){

			D(esi+___185a5ch+0x18) = 0;
		}
		else {

			D(esi+___185a5ch+0x18)++;
		}

		if(B(D(esi+___185a5ch+0x18)+edi+___185b58h) != 0) break;
	}

	eax = D(esi+___185a5ch+0xc);
	eax = eax*D(esi+___185a5ch+0x18);
	edx = D(esi+___185a5ch+8);
	edx += 5;
	edx += eax;
	eax = D(esp+0x10);
	D(esp+0xc) = edx;
	eax -= 0xa;
	edi = 4*edx;
	edi += edx;
	edx = eax;
	eax <<= 2;
	esi = D(esp+0x14);
	eax += edx;
	edi <<= 7;
	eax <<= 7;
	ebx = edi+0xa00;
	eax += 0xa00;
	esi -= 0xa;
	edi += eax;
	ecx = ebx;

	if((int)ebx < (int)edi){

		while(1){

			eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
			eax += ecx;
			edx = 0xc4;
			eax += ebp;
			ebx = esi;
			eax += 9;
			ecx += 0x280;
			memset(eax, edx, ebx);

			if((int)ecx >= (int)edi) break;
		}
	}

	eax = D(esp+4);
	esi = 8*eax;
	esi -= eax;
	edx = D(4*esi+___185a5ch+0xc);
	eax = 4*edx;
	eax += edx;
	edi = D(4*esi+___185a5ch+0x18);
	eax <<= 7;
	edi = edi*eax;
	edx = D(4*esi+___185a5ch+8);
	eax = 4*edx;
	eax += edx;
	ecx = D(4*esi+___185a5ch+4);
	eax <<= 7;
	ebx = edi+0xca0;
	ecx += eax;
	edx = D(4*esi+___185a5ch+0x18);
	ecx += ebx;
	ebx = 4*edx;
	ebx -= edx;
	ebx <<= 3;
	ebx += edx;
	edx = D(esp+4);
	eax = 8*edx;
	eax -= edx;
	eax <<= 5;
	eax += edx;
	eax += eax;
	ebx += ebx;
	eax = eax+___1866b8h;
	edx = ___185ba9h;
	ebx += eax;
	eax = D(___1a10cch);
	___12e78h_cdecl(eax, edx, ebx, ecx);
	eax = D(4*esi+___185a5ch+8);
	edx = 4*eax;
	edx += eax;
	eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	edx <<= 7;
	ebx = D(4*esi+___185a5ch+4);
	eax += edx;
	ecx = D(___1a1e68h);
	ebx += eax;
	eax = 4*ecx;
	edi += 0x1b89;
	eax -= ecx;
	esi = D(___1a10f4h);
	eax <<= 3;
	ebx += edi;
	eax += ecx;
	ecx = 0x14;
	eax <<= 4;
	edx = ecx;
	esi += eax;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esi);
			if(L(eax) != 0) B(ebx) = L(eax);
			ebx++;
			esi++;
			edi--;

			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;

		if(ecx == 0) break;
	}

	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0x8)+ebp+7, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*D(esp+0x8)+ebp+7, D(esp+0x14), D(esp+0x10));
	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0xc)+ebp+7, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*D(esp+0xc)+ebp+7, D(esp+0x14), D(esp+0x10));
}
