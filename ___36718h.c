#include "drally.h"
#include "drally_fonts.h"

#pragma pack(1)
typedef struct x655_s {
	__DWORD__ 	r;
	__DWORD__ 	g;
	__DWORD__ 	b;
} x655_t;

	extern x655_t ___19eb50h[0x100];

	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1de7d0h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0fe4h;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___196ab0h[];
	extern __POINTER__ ___1a0fa8h;
	extern __BYTE__ ___185c7ah[];
	extern __POINTER__ ___1a10b8h;

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___38184h_cdecl(__DWORD__, __POINTER__);
void ___35f34h_cdecl(__DWORD__, __DWORD__, __DWORD__);
void ___35dd0h(void);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	___imul32((__POINTER__)&eax, (__POINTER__)&edx, edx);
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax>>0x10)|(edx<<0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

// HARD RACE RESULTS
void ___36718h_cdecl(__DWORD__ A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[8];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;

	eax = A1;
	ebp = eax;
	
	if(D(___1a1028h) != 2){

		ebx = 0x2;
		edx = 0x3;
		eax ^= eax;
		___35f34h_cdecl(eax, edx, ebx);
		L(eax) = B(___1a0ef8h+0xb);
		B(esp) = L(eax);
		L(eax) = B(___1a0ef8h+0xa);
		B(esp+0x1) = L(eax);
		L(eax) = B(___1a0ef8h+9);
		B(esp+0x2) = L(eax);
		L(eax) = B(___1a0ef8h+8);
		B(esp+0x3) = L(eax);
	}
	else {
		ebx ^= ebx;
		edx ^= edx;
		D(esp+0x4) = ebx;
		ebx = 0x4;

		while(1){

			if(D(edx+___1de7d0h+0x40) == 1){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+8);
				B(esp) = L(eax);
			}

			if(D(edx+___1de7d0h+0x40) == 2){

				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+8);
				B(esp+0x1) = L(eax);
			}

			if(D(edx+___1de7d0h+0x40) == 3){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+8);
				B(esp+0x2) = L(eax);
			}

			if(ebx == D(edx+___1de7d0h+0x40)){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+8);
				B(esp+0x3) = L(eax);
			}

			ecx = D(esp+0x4);
			ecx++;
			edx += 0x54;
			D(esp+0x4) = ecx;
			if((int)ebx <= (int)ecx) break;
		}
	}

	if(ebp == 0){

		___35dd0h();
		ecx = 0x14;
		edx = 0x110;
		esip = ___1a0fe4h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd362;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Hard Race Results", 0xd890);
		eax = 0x4;
		___38184h_cdecl(eax, esp);
	}

	edi ^= edi;
	D(esp+0x4) = edi;

	while(1){

		if(ebp == 0){
			
			eax = D(esp+0x4);
			edx ^= edx;
			L(edx) = B(esp+eax);
			eax = 0x6c*edx;

			if(D(eax+___1a01e0h+0xc) != 0x64){

				if((edx == D(___1a1ef8h))&&(D(___196ab0h) == 1)) break;

				edx = D(esp+0x4);
				eax ^= eax;
				L(eax) = B(esp+edx);
				eax = 0x13*eax;
				eax += 0x57;
				eax = 0x280*eax;
				ecx = 0x12;
				esip = ___1a0fa8h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+eax+0xd9;
				edx = 0x2a;

				while(1){

					edi = edx;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;
						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					ecx--;
					if(ecx == 0) break;
				}
			}
		}

		edi = D(esp+0x4);

		switch(edi){
		case 0:
			edx ^= edx;
			L(edx) = B(esp+edi);
			eax = 0x6c*edx;

			if(D(eax+___1a01e0h+0xc) != 0x64){
				
				if((edx != D(___1a1ef8h))||(D(___196ab0h) != 1)){
					
					edx = D(esp+0x4);
					eax ^= eax;
					L(eax) = B(esp+edx);
					edx = 0x6c*eax;
					eax = 0x13*eax;
					eax += 0x59;
					eax = 0x280*eax;
					edi = D(edx+___1a01e0h+0x44);
					edi += 0xa;
					D(edx+___1a01e0h+0x44) = edi;
					ecx = eax+0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+10", ecx);
				}
			}
			break;
		case 1:
			eax ^= eax;
			L(eax) = B(esp+edi);
			edx = 0x6c*eax;

			if(D(edx+___1a01e0h+0xc) != 0x64){

				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){

					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					edx = 0x280*edx;
					edi = D(eax+___1a01e0h+0x44);
					edi += 0x7;
					D(eax+___1a01e0h+0x44) = edi;
					ecx = edx+0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+7", ecx);
				}
			}
			break;
		case 2:
			eax ^= eax;
			L(eax) = B(esp+edi);
			edx = 0x6c*eax;

			if(D(edx+___1a01e0h+0xc) != 0x64){
				
				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){
			
					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					edx = 0x280*edx;
					edi = D(eax+___1a01e0h+0x44);
					edi += 0x4;
					D(eax+___1a01e0h+0x44) = edi;
					ecx = edx+0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+4", ecx);
				}
			}
			break;
		default:
			break;
		}

		eax = D(esp+0x4);
		eax++;
		D(esp+0x4) = eax;
		if((int)eax >= 3) break;
	}

	if(ebp == 0){

		D(esp+0x4) = 0;

		while(1){

			nn = B(esp+4);
			rr = helper_color(___19eb50h[D(esp+0x4)].r, 0x640000);
			gg = helper_color(___19eb50h[D(esp+0x4)].g, 0x640000);
			bb = helper_color(___19eb50h[D(esp+0x4)].b, 0x640000);
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			D(esp+0x4)++;
			if((int)D(esp+0x4) >= 0x100) break;
		}

		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
