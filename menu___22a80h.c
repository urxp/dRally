#include "drally.h"
#include "drally_keyboard.h"
#include "sfx.h"

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a10e4h__VESA101h_DefaultScreenBufferA[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a10dch[];
	extern byte ___1a0e28h[];
	extern byte ___185c7ah[];
	extern byte ___1a10b8h[];
	extern char ___18768ah[][0x18];
	extern byte ___1a1ef4h[];
	extern byte ___19bd60h[];
	extern byte ___1a10ach[];
	extern byte ___196abch[];
	extern byte ___1a1040h[];
	extern byte ___1a10a4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;

char * itoa_watcom106(int value, char * buffer, int radix);
char * strupr_watcom106(char * s);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___3a7e0h_cdecl(dword);
void ___21fd4h_cdecl(dword);
void ___27f80h_cdecl(dword, dword, dword, dword);
dword dRally_Sound_getPosition(void);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setMasterVolume(dword vol);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___3a6a4h(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void restoreDefaultScreenBuffer(void);

// HALL OF FAME
void menu___22a80h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x40];

	edx = 0x280;
	ebp = 0x169ad;
	memcpy(D(___1a10e4h__VESA101h_DefaultScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR), 0x4b000);
	D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
	D(esp+0x3c) = ebp;
	memcpy(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x10680, D(___1a1138h__VESA101h_DefaultScreenBufferB)+0x10680, 0x28f00);
	ecx = 0x36;
	ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
	esi = D(___1a10dch);
	ebx += 0xd200;
	ebp = 0;

	while(1){

		edi = edx;

		while(1){

			L(eax) = B(esi);
			if(L(eax) != 0) B(ebx) = L(eax);
			ebx++;
			esi++;
			edi--;
			if(edi == 0) break;
		}

		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx == 0) break;
	}

	ebx = 0x16889;
	ecx = ___1a0e28h;
	esi = 0x16950;
	edx = 0;
	edi = 0x16948;
	D(esp+0x28) = edx;
	D(esp+0x2c) = ebx;
	D(esp+0x34) = ecx;
	D(esp+0x38) = esi;
	D(esp+0x30) = edi;
	
	while(1){

		eax = D(esp+0x28);
		ebx = 0xa;
		edx = esp;
		esi = ".";
		eax++;
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		edx = D(esp+0x28);
		strcat(edi, esi);
		eax = 0x16*edx;
		eax += 0x90;
		eax = 0x280*eax;

		if(edx != 9){

			ebx = esp;
			ecx = eax+0x24;
		}
		else {
		
			ebx = esp;
			ecx = eax+0x1c;
		}

		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		esi = D(esp+0x34);
		edi = esp;
		strcpy(edi, esi);
		eax = esp;
		ecx = D(esp+0x28);
		eax = strupr_watcom106(eax);
		eax = 0x16*ecx;
		eax += 0x90;
		esi = 0x280*eax;
		ebx = esp;
		ecx = D(esp+0x2c);
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		ebx = 0xa;
		edx = esp;
		eax = D(ebp+___1a0e28h+0xc);
		eax = itoa_watcom106(eax, edx, ebx);
		edi = D(ebp+___1a0e28h+0xc);

		if(((int)edi >= 0)&&((int)edi < 0xa)){
		
			ebx = esp;
			eax = D(___1a10b8h);
			ecx = esi+0x158;
			___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		}

		edx = D(ebp+___1a0e28h+0xc);
		
		if(((int)edx >= 0xa)&&((int)edx < 0x64)){
		
			ecx = D(esp+0x38);
			ebx = esp;
			eax = D(___1a10b8h);
			___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		}

		if((int)D(ebp+___1a0e28h+0xc) >= 0x64){
		ecx = D(esp+0x30);
		ebx = esp;
		eax = D(___1a10b8h);
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		}

		ecx = D(esp+0x3c);
		strcpy(esp, ___18768ah[D(ebp+___1a0e28h+0x10)]);
		ebp += 0x14;
		eax = esp;
		edi = D(esp+0x28);
		eax = strupr_watcom106(eax);
		esi = D(___1a10b8h);
		ebx = eax;
		eax = esi;
		edi++;
		___12e78h_cdecl(eax, ___185c7ah, ebx, ecx);
		D(esp+0x28) = edi;
		eax = D(esp+0x2c);
		edx = D(esp+0x34);
		ebx = D(esp+0x38);
		ecx = D(esp+0x30);
		esi = D(esp+0x3c);
		eax += 0x3700;
		edx += 0x14;
		ebx += 0x3700;
		ecx += 0x3700;
		esi += 0x3700;
		D(esp+0x2c) = eax;
		D(esp+0x34) = edx;
		D(esp+0x38) = ebx;
		D(esp+0x30) = ecx;
		D(esp+0x3c) = esi;
	
		if((int)edi >= 0xa) break;
	}

	restoreDefaultScreenBuffer();
	___3a7e0h_cdecl(0xffffffff);
	D(___1a1ef4h) = dRally_Sound_getPosition()&0xff00;
	dRally_Sound_setPosition(0x5100);
	dRally_Sound_setMasterVolume(0x10000);
	___5994ch();
	___59b3ch();

	while(1){

		___2ab50h();
		H(eax) = ___5994ch();
		
#if defined(DR_MULTIPLAYER)
		if(D(___19bd60h) != 0){

			if(L(eax) == 0x3b){

				___23758h();
				H(eax) = 0;
			}
		}
#endif // DR_MULTIPLAYER

		if(H(eax) != 0) break;
	}

	___5994ch();
	___59b3ch();

		ecx = 0x4b000;
		esi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edi = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		memcpy(edi, esi, ecx);
		ecx = 0x2c380;
		eax = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = eax;
		esi += 0xd200;
		edi = eax+0xd200;
		edx = 0x280;
		memcpy(edi, esi, ecx);
		ecx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10ach);
		ebx += 0xe600;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esi);
				if(L(eax) != 0) B(ebx) = L(eax);
				ebx++;
				esi++;
				edi--;
				if(edi == 0) break;
			}

			ebx += 0x280;
			ebx -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		eax = 0;
		ecx = 0x62;
		L(eax) = B(___196abch);
		edx = 0x80;
		___21fd4h_cdecl(eax);
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = B(___196abch);
		ebx += 0x21728;
		esi = D(4*esi+___1a1040h);
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		L(edx) >>= 2;
___22e90h:
		H(ecx) = L(edx);
___22e92h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22e92h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22e90h;
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0x540;
		L(edx) >>= 2;
___22ed7h:
		H(ecx) = L(edx);
___22ed9h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 4;
		esi += 4;
		H(ecx)--;
		if(H(ecx)) goto ___22ed9h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___22ed7h;
		ecx = 0x75;
		ebx = 0xb2;
		edx = 0xcc;
		eax = 0xf;
		ebp = 0;
		___27f80h_cdecl(eax, edx, ebx, ecx);
		edi = 0;
		restoreDefaultScreenBuffer();
		___3a6a4h();
___22f25h:
		___2ab50h();
		eax = ___5994ch();
		if(L(eax) < 0x4b) goto ___22f63h;
		if(L(eax) <= 0x4b) goto ___22f9ah;
		if(L(eax) < 0x9c) goto ___22f56h;
		if(L(eax) <= 0x9c) goto ___231eeh;
		if(L(eax) < 0xcb) goto ___231f3h;
		if(L(eax) <= 0xcb) goto ___22f9ah;
		if(L(eax) == 0xcd) goto ___230c3h;
		goto ___231f3h;
___22f56h:
		if(L(eax) == 0x4d) goto ___230c3h;
		goto ___231f3h;
___22f63h:
		if(L(eax) < 0x1c) goto ___22f76h;
		if(L(eax) <= 0x1c) goto ___231eeh;
		if(L(eax) == 0x3b) goto ___22f83h;
		goto ___231f3h;
___22f76h:
		if(L(eax) == 1) goto ___231eeh;
		goto ___231f3h;
___22f83h:
		if(D(___19bd60h) == 0) goto ___231f3h;
#if defined(DR_MULTIPLAYER)
		___23758h();
#endif // DR_MULTIPLAYER
		goto ___231f3h;
___22f9ah:
		if((int)ebp <= 0){

			ebp = 0x11;
		}
		else {

			ebp--;
		}

		dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		esi += 0xa80;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		ecx = 0x62;
		edx = 0x80;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = B(ebp+___196abch);
		ebx += 0x21728;
		esi = D(4*esi+___1a1040h);
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		eax = B(ebp+___196abch);
		___21fd4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();

		edx = 0;
		while(1){

			edx++;
			___2ab50h();
			if((int)edx >= 8) break;
		}

		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23a18;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___231f3h;
___230c3h:
		if((int)ebp >= 0x11){

			ebp = 0;
		}
		else {
		
			ebp++;
		}

		dRally_Sound_pushEffect(1, SFX_CLICK_3, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0xfc0;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		ecx = 0x62;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = B(ebp+___196abch);
		edx = 0x80;
		ebx += 0x21728;
		esi = D(4*eax+___1a1040h);
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		eax = B(ebp+___196abch);
		edx = 0;
		___21fd4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			edx++;
			___2ab50h();
			if((int)edx >= 8) break;
		}

		ecx = 0x54;
		edx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a10a4h);
		ebx += 0x23aa8;
		esi += 0x540;
		L(edx) >>= 2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esi);
				D(ebx) = eax;
				ebx += 4;
				esi += 4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebx += 0x280;
			L(edx) <<= 2;
			ebx -= edx;
			L(edx) >>= 2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		___12cb8h__VESA101_PRESENTSCREEN();
		goto ___231f3h;
___231eeh:
		edi = 0xffffffff;
___231f3h:
		if(edi == 0) goto ___22f25h;
		memcpy(D(___1a10e4h__VESA101h_DefaultScreenBufferA), D(___1a112ch__VESA101_ACTIVESCREEN_PTR), 0x4b000);
		D(___1a112ch__VESA101_ACTIVESCREEN_PTR) = D(___1a10e4h__VESA101h_DefaultScreenBufferA);
}
