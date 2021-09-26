#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___19bd60h[];
	extern byte ___1a0a50h[];
	extern __DWORD__ ___1865fch[];
	extern void * ___1a1ea0h;
	extern byte ___1a1ee8h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___19eb50h[];
	extern byte ___1a1ef4h[];
	extern byte ___1a1ef0h[];
	extern byte ___185a40h[];
	extern byte ___185a20h[];
	extern byte ___185a38h_delay[];
	extern byte ___185a28h[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___185c0bh[];
	extern byte ___1a10fch[];
	extern byte ___1a1108h[];
	extern byte ___1a1124h__VESA101h_ScreenBufferA[];
	extern byte ___196a84h[];
	extern byte ___185a34h[];
	extern byte ___185a2ch[];

void ___2a608h_cdecl(dword);
void ___23230h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___281d0h_cdecl(dword, dword, dword, dword);
void ___2ddc8h(void);
void ___135fch(dword, dword, dword, dword);
dword ___2a6a8h(void);
void ___2d294h(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);
byte ___5994ch(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___2deb0h(void);
void ___2df34h(void);
void ___2dfd0h(void);
void ___2e1b0h(void);
void underground___2e350h(void);
void ___27f80h_cdecl(dword, dword, dword, dword);
void ___1716ch(void);
void ___13bd4h_cdecl(dword, dword);
void ___17324h(void);
void ___2ab50h(void);
void ___2ed2ch(void);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
dword dRally_Sound_getPosition(void);
byte dRally_Sound_setPosition(dword pos_n);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);
void ___2b318h(void);
void ___58c60h(void);
void dRally_Sound_setMasterVolume(dword vol);


// ___2ee78h
void underground_main(void){

	long long ll_tmp;
	dword 	rr, gg, bb, nn;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0x20+0x20];
	byte * 	esp = __esp+0x20;


	//	push    4ch
	//	call    near __CHK
	//	push    ebx
	//	push    ecx
	//	push    edx
	//	push    esi
	//	push    edi
	//	push    ebp
	//	sub     esp, byte 20h
		esi = D(___1a1ef8h);
		edx = 0;
		eax = 0;
		D(esp) = edx;
___2ee98h:
		ecx = D(eax+___1a01e0h+0x44);
		if((int)edx >= (int)ecx) goto ___2eea9h;
		if(esi == D(esp)) goto ___2eea9h;
		edx = ecx;
___2eea9h:
		edi = D(esp);
		edi++;
		eax += 0x6c;
		D(esp) = edi;
		if((int)edi < 0x14) goto ___2ee98h;
		if(D(___19bd60h) != 0) goto ___2eee6h;
		ebx = D(___1a1ef8h);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 2;
		eax -= ebx;
		if((int)edx >= (int)D(4*eax+___1a01e0h+0x44)) goto ___2eee6h;
		ecx = 0;
		D(___1a0a50h+0xc) = ecx;
___2eee6h:
		___2b318h();
		ebp = 0x32;
		esi = 0xffdc;
		edi = 0x640000;
		D(esp+0x10) = esi;
		D(esp+0x14) = edi;
___2ef02h:
		___58c60h();
		eax = D(esp+0x10);
		ebx = 2;
		dRally_Sound_setMasterVolume(eax);
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;

		if(edx != 0){

			edx = 0x10d;
			eax = 0x1b0;
			ebx = D(___1a1ee8h);
			___259e0h_cdecl(eax, edx, ebx, ___1a1ea0h, ___1865fch);
			ecx = 0x40;
			ebx = 0x60;
			eax = 0x2a230;
			___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, ebx, ecx);
			eax = D(___1a1ee8h);
			eax++;
			D(___1a1ee8h) = eax;
			
			if((int)eax > 0x16){
			
				ebx = 0;
				D(___1a1ee8h) = ebx;
			}
		}

		esi = D(esp+0x14);
		ecx = 0;
		edi = 0;
		D(esp) = ecx;
___2ef85h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp);
		eax++;
		edi += 0xc;
		D(esp) = eax;
		if((int)eax < 0x60) goto ___2ef85h;
		ebx = 0x80;
		esi = D(esp+0x14);
		edi = 0x600;
		D(esp) = ebx;
___2f020h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp);
		ecx++;
		edi += 0xc;
		D(esp) = ecx;
		if((int)ecx < 0x100) goto ___2f020h;
		ebx = D(esp+0x14);
		edx = D(esp+0x10);
		ebp--;
		ebx -= 0x20000;
		edx -= 0x51e;
		D(esp+0x14) = ebx;
		D(esp+0x10) = edx;
		if((int)ebp >= 0) goto ___2ef02h;
		eax = dRally_Sound_getPosition();
		eax &= 0xff00;
		D(___1a1ef4h) = eax;
		eax = 0x3100;
		ecx = 5;
		dRally_Sound_setPosition(eax);
		D(___1a1ef0h) = ecx;
		___2ed2ch();
		if(D(___185a40h) != 0) goto ___2f11dh;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
___2f11dh:
		if(D(___185a40h) == 0) goto ___2f12bh;
		___1716ch();
___2f12bh:
		___12cb8h__VESA101_PRESENTSCREEN();
		ebp = 0;
		___2b318h();
		D(esp+0x18) = ebp;
		D(esp+8) = ebp;
___2f13fh:
		___58c60h();
		eax = D(esp+0x18);
		ebx = 2;
		dRally_Sound_setMasterVolume(eax);
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		if(edx == 0) goto ___2f1c2h;
		if(D(___185a40h) != 0) goto ___2f1c2h;
		edx = 0x10d;
		eax = 0x1b0;
		ebx = D(___1a1ee8h);
		___259e0h_cdecl(eax, edx, ebx, ___1a1ea0h, ___1865fch);
		ecx = 0x40;
		ebx = 0x60;
		edx = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230;
		eax = 0x2a230;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, ebx, ecx);
		ecx = D(___1a1ee8h);
		ecx++;
		D(___1a1ee8h) = ecx;
		if((int)ecx <= 0x16) goto ___2f1c2h;
		edi = 0;
		D(___1a1ee8h) = edi;
___2f1c2h:
		ebx = 2;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		edx = (long long)(int)eax%(int)ebx;
		if(edx == 0) goto ___2f1ech;
		if(D(___185a40h) == 0) goto ___2f1ech;
		edx = 0x141;
		eax = 0xa4;
		___13bd4h_cdecl(eax, edx);
___2f1ech:
		esi = D(esp+8);
		edx = 0;
		edi = 0;
		D(esp) = edx;
___2f1f7h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ebx = D(esp);
		ebx++;
		edi += 0xc;
		D(esp) = ebx;
		if((int)ebx < 0x60) goto ___2f1f7h;
		esi = 0x80;
		edi = 0x600;
		D(esp) = esi;
		esi = D(esp+8);
___2f292h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		eax = D(esp);
		eax++;
		edi += 0xc;
		D(esp) = eax;
		if((int)eax < 0x100) goto ___2f292h;
		edx = D(esp+0xa);
		ebx = D(esp+0x18);
		ebp++;
		edx += 2;
		ebx += 0x51e;
		W(esp+0xa) = X(edx);
		D(esp+0x18) = ebx;
		if((int)ebp < 0x32) goto ___2f13fh;
		if(D(___185a40h) == 0) goto ___2f37bh;
		___17324h();
		ecx = 0x72;
		ebx = 0x6c;
		esi = 0;
		edx = 0xf3;
		D(___185a40h) = esi;
		___2ed2ch();
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___2f37bh:
		edi = 0;
		D(esp+4) = edi;
___2f381h:
		if(D(___185a20h) != 0) goto ___2f8ach;
		___2ab50h();
		___2ab50h();
		eax = D(___185a38h_delay);
		if((int)eax <= 0) goto ___2f3aah;
		edx = eax-1;
		D(___185a38h_delay) = edx;
___2f3aah:
		eax = D(___1a1ef0h);

		switch(eax){
		case 0: goto ___2f3c0h;
		case 1: goto ___2f3dch;
		case 2: goto ___2f3f8h;
		case 3: goto ___2f414h;
		case 4: goto ___2f42dh;
		case 5: goto ___2f442h;
		default:
			goto ___2f49ch;
		}


___2f3c0h:
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
		___2d294h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2f49ch;
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
___2f3dch:
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
		___2d728h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2f49ch;
___2f3f8h:
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
		___2d898h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2f49ch;
___2f414h:
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
		___2da10h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2f49ch;
___2f42dh:
		if(D(___185a38h_delay) != 1) goto ___2f49ch;
		___2db88h();
		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___2f49ch;
___2f442h:
		edx = 0x10d;
		eax = 0x1b0;
		ebx = D(___1a1ee8h);
		___259e0h_cdecl(eax, edx, ebx, ___1a1ea0h, ___1865fch);
		ecx = 0x40;
		ebx = 0x60;
		edx = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230;
		eax = 0x2a230;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, ebx, ecx);
		ebx = D(___1a1ee8h);
		ebx++;
		D(___1a1ee8h) = ebx;
		if((int)ebx <= 0x16) goto ___2f49ch;
		esi = 0;
		D(___1a1ee8h) = esi;
___2f49ch:
		L(eax) = ___5994ch();
		if(L(eax) < 0x4d) goto ___2f4f0h;
		if(L(eax) <= 0x4d) goto ___2f537h;
		if(L(eax) < 0xc8) goto ___2f4d9h;
		if(L(eax) <= 0xc8) goto ___2f522h;
		if(L(eax) < 0xcd) goto ___2f4cch;
		if(L(eax) <= 0xcd) goto ___2f537h;
		if(L(eax) == 0xd0) goto ___2f529h;
		goto ___2f559h;
___2f4cch:
		if(L(eax) == 0xcb) goto ___2f530h;
		goto ___2f559h;
___2f4d9h:
		if(L(eax) < 0x50) goto ___2f559h;
		if(L(eax) <= 0x50) goto ___2f529h;
		if(L(eax) == 0x9c) goto ___2f53eh;
		goto ___2f559h;
___2f4f0h:
		if(L(eax) < 0x3b) goto ___2f506h;
		if(L(eax) <= 0x3b) goto ___2f512h;
		if(L(eax) < 0x48) goto ___2f559h;
		if(L(eax) <= 0x48) goto ___2f522h;
		if(L(eax) == 0x4b) goto ___2f530h;
		goto ___2f559h;
___2f506h:
		if(L(eax) < 1) goto ___2f559h;
		if(L(eax) <= 1) goto ___2f545h;
		if(L(eax) == 0x1c) goto ___2f53eh;
		goto ___2f559h;
___2f512h:
		if(D(___19bd60h) == 0) goto ___2f559h;
#if defined(DR_MULTIPLAYER)
		___23758h();
#endif // DR_MULTIPLAYER
		goto ___2f559h;
___2f522h:
		___2deb0h();
		goto ___2f559h;
___2f529h:
		___2df34h();
		goto ___2f559h;
___2f530h:
		___2dfd0h();
		goto ___2f559h;
___2f537h:
		___2e1b0h();
		goto ___2f559h;
___2f53eh:
		underground___2e350h();
		goto ___2f559h;
___2f545h:
		edi = 0xffffffff;
		esi = 1;
		D(esp+4) = edi;
		D(___185a28h) = esi;
___2f559h:
		eax = ___2a6a8h();
		ebp = eax;
		if((int)eax <= 0) goto ___2f887h;
		ecx = 0x29b80;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = ___1a112ch__VESA101_ACTIVESCREEN_PTR;
		esi += 0xf000;
		edi += 0xf000;
		memcpy(edi, esi, ecx);
		___2ed2ch();
		___2b318h();
		eax = 0x20;
		esi = 0x180;
		edi = 0x640000;
		D(esp) = eax;
___2f5b1h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = edi;
		eax = D(esi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = edi;
		eax = D(esi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = edi;
		eax = D(esi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		edx = D(esp);
		edx++;
		esi += 0xc;
		D(esp) = edx;
		if((int)edx < 0x100) goto ___2f5b1h;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x1aa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0x73;
		eax = 0xa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xa;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = ecx;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xda;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x142;
		___281d0h_cdecl(eax, edx, ebx, ecx);
		if(D(___1a1ef0h) != 0) goto ___2f6f8h;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0x73;
		eax = 0xa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2d294h();
___2f6f8h:
		if(D(___1a1ef0h) != 1) goto ___2f71fh;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2d728h();
___2f71fh:
		if(D(___1a1ef0h) != 2) goto ___2f743h;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = ecx;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2d898h();
___2f743h:
		if(D(___1a1ef0h) != 3) goto ___2f76ah;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0xda;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2da10h();
___2f76ah:
		if(D(___1a1ef0h) != 4) goto ___2f791h;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x142;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2db88h();
___2f791h:
		if(D(___1a1ef0h) != 5) goto ___2f7b8h;
		ecx = 0x72;
		ebx = 0x6c;
		edx = 0xf3;
		eax = 0x1aa;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		___2ddc8h();
___2f7b8h:
		ecx = 0x6d;
		ebx = 0x27f;
		edx = 0x173;
		eax = 0;
		___135fch(eax, edx, ebx, ecx);
		if(D(___19bd60h) == 0) goto ___2f809h;
		ecx = 0x390a3;
		ebx = "press   to enter chat mode";
		edx = ___185c0bh;
		eax = D(___1a10fch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x390d9;
		ebx = "F1";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
___2f809h:
		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();
		ecx = 0x4b000;
		esi = ___1a112ch__VESA101_ACTIVESCREEN_PTR;
		edi = D(___1a1124h__VESA101h_ScreenBufferA);
		memcpy(edi, esi, ecx);
		if(ebp != 1) goto ___2f843h;
		eax = "Game Saved.";
		___2a608h_cdecl(eax);
___2f843h:
		if(ebp != 2) goto ___2f852h;
		eax = "Game Loaded.";
		___2a608h_cdecl(eax);
___2f852h:
		if(ebp != 3) goto ___2f861h;
		eax = "Game not found.";
		___2a608h_cdecl(eax);
___2f861h:
		ecx = 0x4b000;
		esi = D(___1a1124h__VESA101h_ScreenBufferA);
		edi = ___1a112ch__VESA101_ACTIVESCREEN_PTR;
		memcpy(edi, esi, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___2f887h:
		if(D(___19bd60h) == 0) goto ___2f8a1h;
		if(D(___196a84h) == 0) goto ___2f8a1h;
		D(esp+4) = 0xffffffff;
___2f8a1h:
		if(D(esp+4) == 0) goto ___2f381h;
___2f8ach:
		edx = 1;
		ebx = D(___196a84h);
		D(___185a20h) = edx;
		if(ebx == 0) goto ___2f8c7h;
		D(___185a34h) = edx;
___2f8c7h:
		if(D(___196a84h) != 0) goto ___2fae5h;
		if(D(___185a2ch) != 0) goto ___2fae5h;
		___2b318h();
		ebp = 0x32;
		eax = 0xffdc;
		edx = 0x640000;
		D(esp+0xc) = eax;
		D(esp+0x1c) = edx;
___2f8fdh:
		___58c60h();
		eax = ebp;
		edx = (int)eax>>0x1f;
		edx = (long long)(int)eax%2;

		if(edx != 0){

			if(D(___1a1ef0h) == 5){

				if(D(esp+4) == -1){

					___259e0h_cdecl(0x1b0, 0x10d, D(___1a1ee8h), ___1a1ea0h, ___1865fch);
					___1398ch__VESA101_PRESENTRECTANGLE(0x2a230, ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a230, 0x60, 0x40);
					D(___1a1ee8h)++;
					
					if((int)D(___1a1ee8h) > 0x16) D(___1a1ee8h) = 0;
				}
			}
		}

		if(D(esp+4) == -1) dRally_Sound_setMasterVolume(D(esp+0xc));

		esi = D(esp+0x1c);
		ebx = 0;
		edi = 0;
		D(esp) = ebx;
___2f998h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ecx = D(esp);
		ecx++;
		edi += 0xc;
		D(esp) = ecx;
		if((int)ecx < 0x60) goto ___2f998h;
		edx = 0x80;
		esi = D(esp+0x1c);
		edi = 0x600;
		D(esp) = edx;
___2fa33h:
		eax = 0;
		L(eax) = B(esp);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		ll_tmp = (long long)(int)eax*(int)edx; edx = ll_tmp>>0x20; eax = ll_tmp;
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg, rr, nn);
		ebx = D(esp);
		ebx++;
		edi += 0xc;
		D(esp) = ebx;
		if((int)ebx < 0x100) goto ___2fa33h;
		edi = D(esp+0x1c);
		esi = D(esp+0xc);
		ebp--;
		edi -= 0x20000;
		esi -= 0x51e;
		D(esp+0x1c) = edi;
		D(esp+0xc) = esi;
		if((int)ebp >= 0) goto ___2f8fdh;
___2fae5h:
	//	add     esp, byte 20h
	//	pop     ebp
	//	pop     edi
	//	pop     esi
	//	pop     edx
	//	pop     ecx
	//	pop     ebx
	//	retn    
		return;
}
