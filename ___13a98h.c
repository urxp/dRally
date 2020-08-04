#include "drally.h"

	extern byte ___185a5ch[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e68h[];
	extern byte ___1a10f4h[];


void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);

void ___13a98h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];

	eax = A1;

		ebp = 8*eax;
		ebp -= eax;
		ebp <<= 2;
		edx = D(ebp+___185a5ch+0xc);
		eax = 4*edx;
		eax += edx;
		eax <<= 7;
		eax = eax*D(ebp+___185a5ch+0x18);
		eax += 0x1b89;
		ecx = 0;
		D(esp) = eax;
		esi = 0x14;
___13adfh:
		eax = D(ebp+___185a5ch+8);
		eax += ecx;
		eax = 0x280*eax;
		edx = D(esp);
		edx += eax;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ebx = D(ebp+___185a5ch+4);
		eax += edx;
		edx = 0xc4;
		eax += ebx;
		ebx = esi;
		ecx++;
		memset(eax, edx, ebx);
		if((int)ecx < 0x14) goto ___13adfh;
		edx = D(ebp+___185a5ch+8);
		eax = 4*edx;
		edx += eax;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx <<= 7;
		ecx = D(ebp+___185a5ch+4);
		eax += edx;
		ebx = D(esp);
		eax += ecx;
		edx = D(___1a1e68h);
		ebx += eax;
		eax = 4*edx;
		eax -= edx;
		eax <<= 3;
		esi = D(___1a10f4h);
		eax += edx;
		ecx = 0x14;
		eax <<= 4;
		edx = ecx;
		esi += eax;
___13b5fh:
		edi = edx;
___13b61h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___13b69h;
		B(ebx) = L(eax);
___13b69h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13b61h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13b5fh;
		edx = D(ebp+___185a5ch+8);
		edi = D(esp);
		eax = 4*edx;
		ecx = 0x14;
		eax += edx;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax <<= 7;
		esi = D(ebp+___185a5ch+4);
		edx += eax;
		ebx = ecx;
		edx += esi;
		eax += esi;
		edx += edi;
		eax += edi;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		esi = D(___1a1e68h);
		esi++;
		D(___1a1e68h) = esi;
		if((int)esi <= 0x31) goto ___13bcah;
		ebp = 0;
		D(___1a1e68h) = ebp;
___13bcah:
		return;
}
