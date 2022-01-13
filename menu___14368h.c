#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___185a5ch[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10e0h;
	extern __BYTE__ ___185b58h[];
	extern __POINTER__ ___1a10cch;
	extern __DWORD__ ___1a1e68h;
	extern __POINTER__ ___1a10f4h;

void ___12e78h_cdecl(__POINTER__ A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
	
void ___14368h_cdecl(__DWORD__ A1){

	int 		i, j, n;
	__BYTE__ 	px;

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x18];

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

			memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+ebp+9, 0xc4, esi);

			ecx += 0x280;
			if((int)ecx >= (int)edi) break;
		}
	}

	___12e78h_cdecl(___1a10e0h, (font_props_t *)___185ba9h, 
		___1866b8h+50*D(0x1c*D(esp+4)+___185a5ch+0x18)+450*D(esp+4),
		0x280*D(0x1c*D(esp+4)+___185a5ch+0xc)*D(0x1c*D(esp+4)+___185a5ch+0x18)+0xca0+0x280*D(0x1c*D(esp+4)+___185a5ch+8)+D(0x1c*D(esp+4)+___185a5ch+4));

	while(1){

		if((int)(D(0x1c*D(esp+4)+___185a5ch)-1) <= (int)D(0x1c*D(esp+4)+___185a5ch+0x18)){

			D(0x1c*D(esp+4)+___185a5ch+0x18) = 0;
		}
		else {

			D(0x1c*D(esp+4)+___185a5ch+0x18)++;
		}

		if(B(D(0x1c*D(esp+4)+___185a5ch+0x18)+9*D(esp+4)+___185b58h) != 0) break;
	}

	D(esp+0xc) = D(0x1c*D(esp+4)+___185a5ch+8)+5+D(0x1c*D(esp+4)+___185a5ch+0xc)*D(0x1c*D(esp+4)+___185a5ch+0x18);

	n = D(esp+0x10)-0xa;
	i = -1;

	while(++i < n) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0xc)+0xa00+0x280*i+ebp+9, 0xc4, D(esp+0x14)-0xa);

	___12e78h_cdecl(___1a10cch, (font_props_t *)___185ba9h, 
		___1866b8h+50*D(0x1c*D(esp+4)+___185a5ch+0x18)+450*D(esp+4),
		D(0x1c*D(esp+4)+___185a5ch+4)+0x280*D(0x1c*D(esp+4)+___185a5ch+8)+D(0x1c*D(esp+4)+___185a5ch+0x18)*0x280*D(0x1c*D(esp+4)+___185a5ch+0xc)+0xca0);

	j = -1;
	while(++j < 0x14){

		i = -1;
		while(++i < 0x14){

			if((px = B(___1a10f4h+400*___1a1e68h+0x14*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(0x1c*D(esp+4)+___185a5ch+8)+D(0x1c*D(esp+4)+___185a5ch+4)+D(0x1c*D(esp+4)+___185a5ch+0x18)*0x280*D(0x1c*D(esp+4)+___185a5ch+0xc)+0x1b89+0x280*j+i) = px;
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0x8)+ebp+7, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0x8)+ebp+7, D(esp+0x14), D(esp+0x10));
	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0xc)+ebp+7, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0xc)+ebp+7, D(esp+0x14), D(esp+0x10));
}
