#include "drally.h"
#include "sfx.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a1ef0h[];
	extern byte ___1a01e0h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___185a38h_delay[];
	extern byte ___1a0a50h[];
	extern byte ___1a0170h_PriceMines[];
	extern byte ___1a0174h_PriceSpikedBumpers[];
	extern byte ___1a0178h_PriceRocketFuel[];
	extern byte ___1a017ch_PriceSabotage[];
	extern byte ___19bd60h[];
	extern byte ___196adch[];
	extern byte ___185a20h[];

void ___31008h(void);
void ___3266ch(void);
void ___33010h_cdecl(dword A1);
void ___13094h_cdecl(const char * A1, dword A2);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___2db88h(void);
void ___2da10h(void);
void ___2d898h(void);
void ___2d728h(void);
void ___2d0ech_cdecl(dword);
dword ___28ab4h_cdecl(dword);
void ___2d6a0h(void);
void ___2d618h(void);
void ___25330h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___26fach(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

void underground___2e350h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];


		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		L(edx) = 5;
		H(edx) = B(eax*4+___1a01e0h+0x1c);
		L(edx) -= H(edx);
		B(esp+8) = L(edx);
		if(D(eax*4+___1a01e0h+0x1c) != 0) goto ___2e395h;
		B(esp+8) = 4;
___2e395h:
		eax = D(___1a1ef0h);

		switch(eax){
		case 0: goto ___2e3abh;
		case 1: goto ___2e7adh;
		case 2: goto ___2e885h;
		case 3: goto ___2e959h;
		case 4: goto ___2ea30h;
		case 5: goto ___2eb07h;
		default:
			goto ___2ec5eh;
		}

___2e3abh:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a01e0h+0x38) != 0xffffffff) goto ___2e4f7h;
		if(D(eax+___1a01e0h+0x1c) == 0) goto ___2e4f7h;
		ecx = ___24cc54h_sfx_volume;
		dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ecx, 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		ebx = 1;
		eax -= edx;
		edx = edx^edx;
		eax <<= 2;
		L(edx) = B(esp+8);
		D(eax+___1a01e0h+0x38) = ebx;
		D(eax+___1a01e0h+0x34) = edx;
		if(L(edx)) goto ___2e43bh;
		D(eax+___1a01e0h+0x30) += 0x2ee0;
___2e43bh:
		if(B(esp+8) != 1) goto ___2e461h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x30) += 0x2328;
___2e461h:
		if(B(esp+8) != 2) goto ___2e487h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x30) += 0x1770;
___2e487h:
		if(B(esp+8) != 3) goto ___2e4adh;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x30) += 0xbb8;
___2e4adh:
		if(B(esp+8) != 4) goto ___2e4d3h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x30) += 0x5dc;
___2e4d3h:
		ebx = 0x136;
		___26fach();
		D(___185a38h_delay) = ebx;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e4f7h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a01e0h+0x38) != 0xffffffff) goto ___2e558h;
		if(D(eax+___1a01e0h+0x1c) != 0) goto ___2e558h;
		edx = 0x17;
		eax = 2;
		esi = 0x25500;
		ecx = ___24cc54h_sfx_volume;
		ebx = 0;
		edi = 0x136;
		dRally_Sound_pushEffect(eax, SFX_LAUGHTER, ebx, ecx, esi, 0x8000);
		D(___185a38h_delay) = edi;
		___2d618h();
		___12cb8h__VESA101_PRESENTSCREEN();
___2e558h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		ebp = D(eax+___1a01e0h+0x38);
		if(ebp == 0xffffffff) goto ___2ec5eh;
		edx = D(eax+___1a01e0h+0x34);
		L(ebx) = 0;
		if(edx) goto ___2e5aeh;
		eax = ebp-1;
		D(esp) = eax;
		FPUSH((int)D(esp));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*6000.0;
		ST(0) = ST(0)+12000.0;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
___2e5aeh:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		ecx = D(eax+___1a01e0h+0x34);
		if(ecx != 1) goto ___2e5f9h;
		eax = D(eax+___1a01e0h+0x38);
		eax -= ecx;
		D(esp) = eax;
		FPUSH((int)D(esp));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*4500.0;
		ST(0) = ST(0)+9000.0;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
___2e5f9h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a01e0h+0x34) != 2) goto ___2e641h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp) = eax;
		FPUSH((int)D(esp));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*3000.0;
		ST(0) = ST(0)+6000.0;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
___2e641h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a01e0h+0x34) != 3) goto ___2e689h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp) = eax;
		FPUSH((int)D(esp));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*1500.0;
		ST(0) = ST(0)+3000.0;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
___2e689h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if(D(eax+___1a01e0h+0x34) != 4) goto ___2e6d1h;
		eax = D(eax+___1a01e0h+0x38);
		eax--;
		D(esp) = eax;
		FPUSH((int)D(esp));
		ST(0) = ST(0)/3.0;
		ST(0) = ST(0)*750.0;
		ST(0) = ST(0)+1500.0;
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
___2e6d1h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(esp+4);
		if((int)edx <= (int)D(eax*4+___1a01e0h+0x30)) goto ___2e6f4h;
		L(ebx) = 1;
___2e6f4h:
		if(L(ebx)) goto ___2e780h;
		dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = 4*eax;
		edi = 0xffffffff;
		D(edx+___1a01e0h+0x38) = edi;
		eax = D(esp+4);
		esi = D(edx+___1a01e0h+0x30);
		D(edx+___1a01e0h+0x34) = edi;
		esi -= eax;
		eax = 0x136;
		D(edx+___1a01e0h+0x30) = esi;
		D(___185a38h_delay) = eax;
		___2d6a0h();
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e780h:
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2e7adh:
		ebp = D(___1a0a50h);
		if(ebp != 1) goto ___2e7c6h;
		eax = D(___1a0170h_PriceMines);
		eax = ___28ab4h_cdecl(eax);
		if(eax == 0) goto ___2e7f3h;
___2e7c6h:
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2e7f3h:
		dRally_Sound_pushEffect(ebp, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		edx = 0;
		D(___1a0a50h) = edx;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(___1a0170h_PriceMines);
		D(eax*4+___1a01e0h+0x30) -= edx;
		___2d728h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x5c) = 0x8;
		eax = eax^eax;
		esi = 0x136;
		___2d0ech_cdecl(eax);
		D(___185a38h_delay) = esi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e885h:
		ebp = D(___1a0a50h+4);
		if(ebp != 1) goto ___2e89eh;
		eax = D(___1a0174h_PriceSpikedBumpers);
		eax = ___28ab4h_cdecl(eax);
		if(eax == 0) goto ___2e8cbh;
___2e89eh:
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2e8cbh:
		dRally_Sound_pushEffect(ebp, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		edx = 0;
		D(___1a0a50h+4) = edx;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(___1a0174h_PriceSpikedBumpers);
		D(eax*4+___1a01e0h+0x30) -= edx;
		___2d898h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x60) = ebp;
		eax = ebp;
		esi = 0x136;
		___2d0ech_cdecl(eax);
		D(___185a38h_delay) = esi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2e959h:
		ebp = D(___1a0a50h+8);
		if(ebp != 1) goto ___2e972h;
		eax = D(___1a0178h_PriceRocketFuel);
		eax = ___28ab4h_cdecl(eax);
		if(eax == 0) goto ___2e99fh;
___2e972h:
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2e99fh:
		dRally_Sound_pushEffect(ebp, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		edx = 0;
		D(___1a0a50h+8) = edx;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(___1a0178h_PriceRocketFuel);
		D(eax*4+___1a01e0h+0x30) -= edx;
		___2da10h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x64) = ebp;
		eax = 2;
		esi = 0x136;
		___2d0ech_cdecl(eax);
		D(___185a38h_delay) = esi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2ea30h:
		ebp = D(___1a0a50h+0xc);
		if(ebp != 1) goto ___2ea49h;
		eax = D(___1a017ch_PriceSabotage);
		eax = ___28ab4h_cdecl(eax);
		if(eax == 0) goto ___2ea76h;
___2ea49h:
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2ea76h:
		dRally_Sound_pushEffect(ebp, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		edx = edx^edx;
		D(___1a0a50h+0xc) = edx;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edx = D(___1a017ch_PriceSabotage);
		D(eax*4+___1a01e0h+0x30) -= edx;
		___2db88h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		D(eax*4+___1a01e0h+0x68) = ebp;
		eax = 3;
		esi = 0x136;
		___2d0ech_cdecl(eax);
		D(___185a38h_delay) = esi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___2eb07h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		if(D(eax*4+___1a01e0h+0xc) != 0x64) goto ___2ebc1h;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		eax = "[Repair your car first.";
		___13094h_cdecl(eax, edx);
		edx = 0x15eaa;
		eax = "";
		___13094h_cdecl(eax, edx);
		edx = 0x186aa;
		eax = "What'cha gonna do with that pile of";
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = "junk, carry it around? Let me spell";
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = "this to you: R-E-P-A-I-R.";
		___13094h_cdecl(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		dRally_Sound_pushEffect(2, SFX_LAUGHTER, 0, ___24cc54h_sfx_volume, 0x25500, 0x8000);
		return;
___2ebc1h:
		edx = 0x18;
		eax = 1;
		ebx = 0;
		ecx = ___24cc54h_sfx_volume;
		dRally_Sound_pushEffect(eax, SFX_SIGNUP_ENGINE_ON, ebx, ecx, 0x28000, 0x8000);
		if(D(___19bd60h) == 0) goto ___2ebf9h;
		eax = D(___196adch);
		___33010h_cdecl(eax);
		goto ___2ec49h;
___2ebf9h:
		ebp = D(___1a1ef8h);
		L(eax) = 0;
		ecx = ecx^ecx;
___2ec03h:
		ebx = ebx^ebx;
		L(ebx) = L(eax);
		edx = 0x6c*ebx;
		edi = D(edx+___1a01e0h+0x44);
		if((int)ecx >= (int)edi) goto ___2ec1ah;
		if(ebx == ebp) goto ___2ec1ah;
		ecx = edi;
___2ec1ah:
		L(eax)++;
		if(L(eax) < 0x14) goto ___2ec03h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		if((int)ecx >= (int)D(4*eax+___1a01e0h+0x44)) goto ___2ec44h;
		___31008h();
		goto ___2ec49h;
___2ec44h:
		___3266ch();
___2ec49h:
		edx = 1;
		eax = 4;
		D(___185a20h) = edx;
		D(___1a1ef0h) = eax;
___2ec5eh:
		return;
}
