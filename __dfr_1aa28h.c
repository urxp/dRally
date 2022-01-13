#include "drally.h"
#include "drmemory.h"
#include "drally_fonts.h"

	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___24e4ach;
	extern __BYTE__ ___1a1098h[];

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12e78h_cdecl(__POINTER__, font_props_t *, const char *, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
__DWORD__ __GET_TIMER_TICKS(void);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void ___23488h_cdecl(__POINTER__, __DWORD__, __DWORD__);
void ___2ab50h(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
__DWORD__ ___23594h_cdecl(__POINTER__, __DWORD__);
void ___13c9ch_cdecl(__DWORD__, __DWORD__);

__DWORD__ ___1aa28h(__DWORD__ A1, __DWORD__ A2, __DWORD__ A3){
	
	__DWORD__ 	eax, ebx, ecx, edx, edi, ebp;
	__BYTE__ 	esp[0x10];
	__POINTER__ vp, vp1;


	ebx = A3;
	edx = A2;
	eax = A1;


		D(esp) = eax;
		D(esp+4) = edx;
		edi = ebx;
		eax = 0x1f;
		ecx = 0x51;
		vp = ___3f71ch__allocateMemory(eax);
		eax = 0x1f;
		ebx = 0x14e;
		vp1 = ___3f71ch__allocateMemory(eax);
		___13248h_cdecl(D(esp), edx, ebx, ecx, 1);
		edx = D(esp+4);
		edx += 0xd;
		eax = 4*edx;
		ecx = D(esp);
		eax += edx;
		eax <<= 7;
		ecx += eax;
		ecx += 0x28;
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Waiting for other players...", ecx);
		edx = D(esp+4);
		edx += 0x1e;
		eax = 4*edx;
		eax += edx;
		edx = D(esp);
		eax <<= 7;
		eax += edx;
		ecx = eax+0x28;
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press ESC to leave netgame", ecx);
		 ___12cb8h__VESA101_PRESENTSCREEN();
		eax = __GET_TIMER_TICKS();
		edx = eax;
		eax = 0;
___1aaddh:
		ebx = 0;
	//mov     bl, [eax]				;; ???
		//mov 	bl, al
		L(ebx) = L(eax);
		eax += 2;
		edx += ebx;
		if((int)eax < 0x7530) goto ___1aaddh;
		B(vp) = 1;
		B(vp+1) = L(edx);
		eax = edx;
		eax = (int)eax>>8;
		B(vp+2) = L(eax);
		eax = edx;
		eax = (int)eax>>0x10;
		edx = (int)edx>>0x18;
		B(vp+3) = L(eax);
		B(vp+4) = L(edx);
		edx = 0;

		eax = 0;
		while(1){

			edx++;
			B(vp+edx+4) = B(___1a01e0h+eax+0x6c*D(___1a1ef8h));
			eax++;
			if((int)eax >= 0xb) break;
		}

		edx = 0x1e;
		ebx = edi+0xb;
		___23488h_cdecl(vp, edx, ebx);
		ebx = 0x1000;
		memset(___24e4ach+4, 0, ebx);
		W(___24e4ach+2) = W(___24e4ach);
		eax = D(esp+4);
		ebp = D(esp);
		eax += 0x13;
		ebp += 0xf;
		D(esp+0xc) = eax;
		ecx = 0;
___1ab73h:
		eax = ___5994ch();
		ebx = 0;
		edx = D(esp+0xc);
		L(ebx) = L(eax);
		___2ab50h();
		___2ab50h();
		eax = ebp;
		___13bd4h_cdecl(eax, edx);
		edx = 0xa;
		eax = ___23594h_cdecl(vp1, edx);
		if(eax == 0) goto ___1ac45h;
		eax = 0;
		L(eax) = B(vp1);
		if(eax != edi) goto ___1ac37h;
		if(L(ecx) != B(vp1+1)) goto ___1ac37h;
		edx = D(esp+4);
		edx += 0x2f;
		eax = 4*edx;
		eax += edx;
		ecx = D(esp);
		eax <<= 7;
		eax += ecx;
		ecx = eax+0x28;
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Host closed the game!", ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = D(esp+0xc);
		eax = ebp;
		___13c9ch_cdecl(eax, edx);
		edx = 0;
___1abfbh:
		edx++;
		___2ab50h();
		if((int)edx < 0x28) goto ___1abfbh;
		memset(___24e4ach+4, 0, 0x1000);
		dRMemory_free(vp1);
		dRMemory_free(vp);
		return 2;   
___1ac37h:
		eax = 0;
		L(eax) = B(vp1);
		if(eax != edi) goto ___1ac45h;
		if(B(vp1+1) == 2) goto ___1ac53h;
___1ac45h:
		if(ebx != 1) goto ___1ab73h;
		goto ___1ace1h;
___1ac53h:
		eax ^= edi;
		edx = D(esp+4);
		L(eax) = B(vp1+2);
		edx += 0x2f;
		D(___1a1098h) = eax;
		eax = 4*edx;
		ecx = D(esp);
		eax += edx;
		eax <<= 7;
		ecx += eax;
		ecx += 0x28;
		___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Host started the game!", ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = D(esp+4);
		eax = D(esp);
		edx += 0x13;
		eax += 0xf;
		___13c9ch_cdecl(eax, edx);
		edx = 0;
___1aca5h:
		edx++;
		___2ab50h();
		if((int)edx < 0x28) goto ___1aca5h;
		memset(___24e4ach+4, 0, 0x1000);
		dRMemory_free(vp1);
		dRMemory_free(vp);
		return 1;
___1ace1h:
		B(vp) = 0;
		___23488h_cdecl(vp, 0x1e, edi+0xb);
		memset(___24e4ach+4, 0, 0x1000);
		W(___24e4ach+2) = W(___24e4ach);
		dRMemory_free(vp1);
		dRMemory_free(vp);
		return 0;
}
