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
	extern void * ___1a0fc4h;
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___1a01e0h[];
	extern byte ___1a1ef8h[];
	extern byte ___196ab0h[];
	extern void * ___1a0ff0h;
	extern void * ___1a10b8h;
	extern byte ___185c7ah[];
	extern byte ___19eb50h[];

void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___38184h_cdecl(dword, void *);
void ___35dd0h(void);
void ___35f34h_cdecl(dword, dword, dword);

// SOMETHING WITH MEDIUM RACE RESULTS
void ___36358h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn;
	byte 	esp[8];
	void * 	esip;
	void * 	ebxp;

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

		___12e78h_cdecl(___1a1108h, ___185c0bh, "Medium Race Results", 0xd890);
		edx = esp;
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

			if(D(edx+___1a01e0h+0xc) != 0x64){
				
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
					edi += 0x5;
					D(eax+___1a01e0h+0x44) = edi;
					ecx = edx+0xe6;
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+5", ecx);
				}
			}
			break;
		case 1:
			eax = B(esp+edi);
			edx = 0x6c*eax;

			if(D(edx+___1a01e0h+0xc) != 0x64){

				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){
					
					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					ecx = 0x280*edx;
					edi = D(eax+___1a01e0h+0x44);
					edi += 0x3;
					D(eax+___1a01e0h+0x44) = edi;
					ecx += 0xe6;
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+3", ecx);
				}
			}
			break;
		case 2:
			eax = B(esp+edi);
			edx = 0x6c*eax;

			if(D(edx+___1a01e0h+0xc) != 0x64){

				if((eax != D(___1a1ef8h))||(D(___196ab0h) != 1)){
					
					eax = D(esp+0x4);
					edx ^= edx;
					L(edx) = B(esp+eax);
					eax = 0x6c*edx;
					edx = 0x13*edx;
					edx += 0x59;
					ecx = 0x280*edx;
					edi = D(eax+___1a01e0h+0x44);
					edi++;
					D(eax+___1a01e0h+0x44) = edi;
					ecx += 0xe6;
					___12e78h_cdecl(___1a10b8h, ___185c7ah, "+1", ecx);
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
		esi = 0;
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
