#include "drally.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10d8h[];
	extern byte ___1a10f0h[];

void ___13248h_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x18+0x14];

	D(esp+0x28) = A5;
	ecx = A4;
	ebx = A3;
	edx = A2;
	eax = A1;


		ebp = eax;
		D(esp+0x10) = edx;
		D(esp+0x14) = ebx;
		D(esp+0xc) = ecx;
		eax = ecx-8;
		edi = edx*4;
		edi += edx;
		edx = eax;
		eax <<= 2;
		esi = ebx-6;
		eax += edx;
		edi <<= 7;
		eax <<= 7;
		ebx = edi+0x500;
		eax += 0x500;
		edi += eax;
		ecx = ebx;
		if((int)ebx >= (int)edi) goto ___132b7h;
___13295h:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += ecx;
		edx = 0xc4;
		eax += ebp;
		ebx = esi;
		eax += 2;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if((int)ecx < (int)edi) goto ___13295h;
___132b7h:
		ebx = D(esp+0x10);
		ebx += D(esp+0xc);
		edx = D(esp+0x10);
		eax = edx*4;
		eax += edx;
		eax <<= 7;
		edx = ebx-0x14;
		D(esp+0x4) = eax;
		eax = edx*4;
		eax += edx;
		eax <<= 7;
		ebx = D(esp+0x28);
		D(esp+0x8) = eax;
		if(ebx) goto ___133ceh;
		esi = D(esp+0x4);
		ecx = 0x14;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x20;
		ebx += esi;
		esi = D(___1a10d8h);
		ebx += ebp;
___13310h:
		edi = edx;
___13312h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___1331ah;
		B(ebx) = L(eax);
___1331ah:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13312h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13310h;
		edi = D(esp+0x4);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax += edi;
		ecx = 0x14;
		ebx = eax+ebp;
		edx = 0x20;
		eax = D(esp+0x14);
		esi = D(___1a10d8h);
		ebx += eax;
		esi += 0x280;
		ebx -= 0x20;
___13357h:
		edi = edx;
___13359h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___13361h;
		B(ebx) = L(eax);
___13361h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13359h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13357h;
		edx = D(esp+0x8);
		ecx = 0x14;
		esi = D(___1a10d8h);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0x500;
		eax += edx;
		edx = 0x20;
		ebx = eax+ebp;
___13395h:
		edi = edx;
___13397h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___1339fh;
		B(ebx) = L(eax);
___1339fh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13397h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13395h;
		ebx = D(esp+0x8);
		ecx = D(esp+0x14);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x20;
		eax += ebx;
		esi = D(___1a10d8h);
		goto ___134a5h;
___133ceh:
		ecx = D(esp+0x4);
		edx = 0x20;
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10f0h);
		eax += ecx;
		ecx = 0x14;
		ebx = eax+ebp;
___133ech:
		edi = edx;
___133eeh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___133f6h;
		B(ebx) = L(eax);
___133f6h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___133eeh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___133ech;
		esi = D(esp+0x4);
		edi = D(esp+0x14);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x14;
		eax += esi;
		edx = 0x20;
		ebx = eax+ebp;
		esi = D(___1a10f0h);
		ebx += edi;
		esi += 0x280;
		ebx -= 0x20;
___13433h:
		edi = edx;
___13435h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___1343dh;
		B(ebx) = L(eax);
___1343dh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13435h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13433h;
		edx = D(esp+0x8);
		ecx = 0x14;
		esi = D(___1a10f0h);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0x500;
		eax += edx;
		edx = 0x20;
		ebx = eax+ebp;
___13471h:
		edi = edx;
___13473h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___1347bh;
		B(ebx) = L(eax);
___1347bh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___13473h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___13471h;
		ebx = D(esp+0x8);
		ecx = D(esp+0x14);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0x20;
		eax += ebx;
		esi = D(___1a10f0h);
___134a5h:
		eax += ebp;
		esi += 0x780;
		eax += ecx;
		ecx = 0x14;
		ebx = eax-0x20;
___134b7h:
		edi = edx;
___134b9h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___134c1h;
		B(ebx) = L(eax);
___134c1h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___134b9h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___134b7h;
		if(D(esp+0x28) != 0) goto ___134dfh;
		eax = 0x4;
		goto ___134e4h;
___134dfh:
		eax = 0x7;
___134e4h:
		ecx = D(esp+0x10);
		ecx++;
		esi = D(esp+0x14);
		edi = ecx*4;
		edx = 0;
		edi += ecx;
		esi -= 0x40;
		edi <<= 7;
		if((int)esi <= 0) goto ___13515h;
___13502h:
		ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx += edi;
		edx++;
		ecx += ebp;
		B(ecx+edx+0x1f) = L(eax);
		if((int)edx < (int)esi) goto ___13502h;
___13515h:
		ebx = D(esp+0x10);
		ebx += D(esp+0xc);
		ebx -= 7;
		esi = D(esp+0x14);
		edi = ebx*4;
		edx = 0;
		edi += ebx;
		esi -= 0x40;
		edi <<= 7;
		if((int)esi <= 0) goto ___1354ch;
___13539h:
		ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx += edi;
		edx++;
		ecx += ebp;
		B(ecx+edx+0x1f) = L(eax);
		if((int)edx < (int)esi) goto ___13539h;
___1354ch:
		ecx = D(esp+0xc);
		ecx -= 0x28;
		ebx = D(esp+0x10);
		D(esp) = ecx;
		esi = ebx*4;
		edi = D(esp);
		ecx <<= 2;
		esi += ebx;
		ecx += edi;
		esi <<= 7;
		ecx <<= 7;
		ebx = esi+0x3200;
		ecx += 0x3200;
		esi += ecx;
		edx = ebx;
		if((int)ebx >= (int)esi) goto ___1359bh;
___13585h:
		ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx += edx;
		edx += 0x280;
		B(ecx+ebp+1) = L(eax);
		if((int)edx < (int)esi) goto ___13585h;
___1359bh:
		ecx = D(esp+0xc);
		ebx = D(esp+0x10);
		ecx -= 0x28;
		esi = ebx*4;
		D(esp) = ecx;
		esi += ebx;
		ebx = D(esp);
		ecx <<= 2;
		ecx += ebx;
		esi <<= 7;
		ecx <<= 7;
		edi = esi+0x3200;
		ecx += 0x3200;
		esi += ecx;
		edx = edi;
		if((int)edi >= (int)esi) goto ___135f1h;
		edi = D(esp+0x14);
___135d8h:
		ecx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx += edx;
		ecx += ebp;
		ecx += edi;
		edx += 0x280;
		B(ecx-5) = L(eax);
		if((int)edx < (int)esi) goto ___135d8h;
___135f1h:
		return;
}
