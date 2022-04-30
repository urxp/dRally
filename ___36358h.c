#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"

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
	extern __POINTER__ ___1a0fc4h;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___196ab0h[];
	extern __POINTER__ ___1a0ff0h;
	extern __POINTER__ ___1a10b8h;
	extern __BYTE__ ___185c7ah[];

void __DISPLAY_SET_PALETTE_COLOR(__DWORD__ b, __DWORD__ g, __DWORD__ r, __DWORD__ n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___38184h_cdecl(__DWORD__, __POINTER__);
void ___35dd0h(void);
void ___35f34h_cdecl(__DWORD__, __DWORD__, __DWORD__);

static __BYTE__ helper_color(__DWORD__ eax, __DWORD__ edx){

	___imul32((__POINTER__)&eax, (__POINTER__)&edx, edx);
	eax += 0x8000;
	edx += !!(eax < 0x8000);
	eax = (eax>>0x10)|(edx<<0x10);
	eax += 0x8000;
	eax = (int)eax>>0x10;

	return eax&0xff;
}

// SOMETHING WITH MEDIUM RACE RESULTS
void ___36358h_cdecl(__DWORD__ A1){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	__BYTE__ 	esp[8];
	__POINTER__ 	esip;
	__POINTER__ 	ebxp;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	eax = A1;
	ebp = eax;

	if(D(___1a1028h) != 1){


		ebx = 0x1;
		edx = 0x3;
		eax ^= eax;
		___35f34h_cdecl(eax, edx, ebx);
		L(eax) = B(___1a0ef8h+7);
		B(esp) = L(eax);
		L(eax) = B(___1a0ef8h+6);
		B(esp+1) = L(eax);
		L(eax) = B(___1a0ef8h+5);
		B(esp+2) = L(eax);
		L(eax) = B(___1a0ef8h+4);
		B(esp+3) = L(eax);
	}
	else {

		ebx ^= ebx;
		edx ^= edx;
		D(esp+0x4) = ebx;
		ebx = 0x4;

		while(1){

			if(D(edx+___1de7d0h+0x40) == 1){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+4);
				B(esp) = L(eax);
			}

			if(D(edx+___1de7d0h+0x40) == 2){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+4);
				B(esp+1) = L(eax);
			}

			if(D(edx+___1de7d0h+0x40) == 3){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+4);
				B(esp+2) = L(eax);
			}

			if(ebx == D(edx+___1de7d0h+0x40)){
			
				eax = D(esp+0x4);
				L(eax) = B(eax+___1a0ef8h+4);
				B(esp+3) = L(eax);
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
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd362;
		esip = ___1a0fc4h;

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

		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Medium Race Results", 0xd890);
		eax = 0x4;
		___38184h_cdecl(eax, esp);
	}

	D(esp+0x4) = 0;

	while(1){

		if(ebp == 0){

			edx = D(esp+0x4);
			eax ^= eax;
			L(eax) = B(esp+edx);
			edx = 0x6c*eax;

			if(s_6c[edx/0x6c].damage != 0x64){
				
				if((eax == D(___1a1ef8h))&&(D(___196ab0h) == 1)) break;

				edx = D(esp+0x4);
				eax ^= eax;
				L(eax) = B(esp+edx);
				eax = 0x13*eax;
				eax += 0x57;
				edx = 0x280*eax;
				ecx = 0x12;
				esip = ___1a0ff0h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+0xd9;
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
			eax = B(esp+edi);
			edx = 0x6c*eax;

			if(s_6c[edx/0x6c].damage != 0x64){
				
				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){

					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					edx = 0x280*edx;
					edi = s_6c[eax/0x6c].points;
					edi += 0x5;
					s_6c[eax/0x6c].points = edi;
					ecx = edx+0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+5", ecx);
				}
			}
			break;
		case 1:
			eax = B(esp+edi);
			edx = 0x6c*eax;

			if(s_6c[edx/0x6c].damage != 0x64){

				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){
					
					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					ecx = 0x280*edx;
					edi = s_6c[eax/0x6c].points;
					edi += 0x3;
					s_6c[eax/0x6c].points = edi;
					ecx += 0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+3", ecx);
				}
			}
			break;
		case 2:
			eax = B(esp+edi);
			edx = 0x6c*eax;

			if(s_6c[edx/0x6c].damage != 0x64){

				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){
					
					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					ecx = 0x280*edx;
					edi = s_6c[eax/0x6c].points;
					edi++;
					s_6c[eax/0x6c].points = edi;
					ecx += 0xe6;
					___12e78h_cdecl(___1a10b8h, (font_props_t *)___185c7ah, "+1", ecx);
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
