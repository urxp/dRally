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

void menu___14010h(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, tmp;
	byte 	esp[0x18];
	int 	i, j;
	byte 	px;


	ebp = D(0x1c*A1+___185a5ch+4);
	esi = D(0x1c*A1+___185a5ch+0x10)-0x14;
	D(esp+8) = D(0x1c*A1+___185a5ch+8)+D(0x1c*A1+___185a5ch+0xc)*D(0x1c*A1+___185a5ch+0x18)+6;
	D(esp+0x14) = D(0x1c*A1+___185a5ch+0x10)-0xa;
	edi = 0x280*D(esp+8)+0x4100;
	ecx = 0x280*D(esp+8)+0xa00;

	if((int)ecx < (int)edi){

		while(1){

			memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+ebp+9, 0xc4, esi);

			ecx += 0x280;
			if((int)ecx >= (int)edi) break;
		}
	}

	___12e78h_cdecl(
		D(___1a10e0h),
		___185ba9h,
		0x32*D(0x1c*A1+___185a5ch+0x18)+0x1c2*A1+___1866b8h,
		0x280*(D(0x1c*A1+___185a5ch+8)+D(0x1c*A1+___185a5ch+0xc)*D(0x1c*A1+___185a5ch+0x18))+0xca0+ebp);

	while(1){

		if((int)D(0x1c*A1+___185a5ch+0x18) <= 0){

			D(0x1c*A1+___185a5ch+0x18) = D(0x1c*A1+___185a5ch)-1;
		}
		else {

			D(0x1c*A1+___185a5ch+0x18)--;
		}

		if(B(D(0x1c*A1+___185a5ch+0x18)+9*A1+___185b58h) != 0) break;
	}

	D(esp+0xc) = D(0x1c*A1+___185a5ch+0xc)*D(0x1c*A1+___185a5ch+0x18)+D(0x1c*A1+___185a5ch+8)+6;
	ecx = 0x280*D(esp+0xc)+0xa00;
	edi = 0x280*D(esp+0xc)+0x280*(0x20-0xa)+0xa00;

	if((int)ecx < (int)edi){

		while(1){

			memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+ebp+9, 0xc4, D(esp+0x14)-0xa);

			ecx += 0x280;
			if((int)ecx >= (int)edi) break;
		}
	}

	___12e78h_cdecl(
		D(___1a10cch),
		___185ba9h,
		0x32*D(0x1c*A1+___185a5ch+0x18)+0x1c2*A1+___1866b8h,
		ebp+0x280*(D(0x1c*A1+___185a5ch+8)+D(0x1c*A1+___185a5ch+0xc)*D(0x1c*A1+___185a5ch+0x18))+0xca0);

	j = -1;
	while(++j < 0x14){

		i = -1;
		while(++i < 0x14){

			px = B(D(___1a10f4h)+0x190*D(___1a1e68h)+0x14*j+i);
			if(px != 0) B(ebp+D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(D(0x1c*A1+___185a5ch+8)+D(0x1c*A1+___185a5ch+0xc)*D(0x1c*A1+___185a5ch+0x18))+0x1b89+0x280*j+i) = px;
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0x8)+ebp+7, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*D(esp+0x8)+ebp+7, D(esp+0x14), 0x20);
	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0xc)+ebp+7, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*D(esp+0xc)+ebp+7, D(esp+0x14), 0x20);
}
