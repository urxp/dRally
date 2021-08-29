#include "drally.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___1a1028h[];
	extern byte ___1de7d0h[];
	extern byte ___1a0ef8h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a0fe4h;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern void * ___1a0fa8h;
	extern byte ___185c7ah[];
	extern void * ___1a10b8h;
	extern byte ___19eb50h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___38184h_cdecl(dword, void *);
void ___35f34h_cdecl(dword, dword, dword);
void ___35dd0h(void);


// HARD RACE RESULTS
void ___36718h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[8];
	void * 	ebxp;
	void * 	esip;

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

		___12e78h_cdecl(___1a1108h, ___185c0bh, "Hard Race Results", 0xd890);
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
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+10", ecx);
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
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+7", ecx);
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
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+4", ecx);
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

		D(esp+0x4) = ebp;
		esi ^= esi;
		ebp = 0x640000;

		while(1){

			eax ^= eax;
			L(eax) = B(esp+4);
			nn = eax;
			edx = ebp;
			eax = D(esi+___19eb50h);
			___imul32(&eax, &edx, edx);
			eax += 0x8000;
			edx += !!(eax < 0x8000);
			eax = (eax>>0x10)|(edx<<0x10);
			eax += 0x8000;
			eax = (int)eax>>0x10;
			eax &= 0xff;
			rr = eax;
			edx = ebp;
			eax = D(esi+___19eb50h+4);
			___imul32(&eax, &edx, edx);
			eax += 0x8000;
			edx += !!(eax < 0x8000);
			eax = (eax>>0x10)|(edx<<0x10);
			eax += 0x8000;
			eax = (int)eax>>0x10;
			eax &= 0xff;
			gg = eax;
			edx = ebp;
			eax = D(esi+___19eb50h+8);
			___imul32(&eax, &edx, edx);
			eax += 0x8000;
			edx += !!(eax < 0x8000);
			eax = (eax>>0x10)|(edx<<0x10);
			eax += 0x8000;
			eax = (int)eax>>0x10;
			eax &= 0xff;
			bb = eax;
			__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
			ecx = D(esp+0x4);
			ecx++;
			esi += 0xc;
			D(esp+0x4) = ecx;
			if((int)ecx >= 0x100) break;
		}

		___12cb8h__VESA101_PRESENTSCREEN();
	}
}
