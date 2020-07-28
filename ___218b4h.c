#include "drally.h"

	extern byte ___24cc58h[];
	extern byte ___24cc54h[];
	extern byte ___196a84h[];
	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a1ea4h[];
	extern byte ___19bd60h[];
	extern byte ___1a1ebch[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1854b8h[];
	extern byte ___19bd58h[];
	extern byte ___1866b8h[];
	extern byte ___185ac8h[];
	extern byte ___185b73h[];
	extern byte ___185ab0h[];

void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
dword ___146c4h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
byte ___5994ch(void);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
char * itoa_watcom106(int value, char * buffer, int radix);
dword ___1f094h_cdecl(dword);
void dRally_Sound_setMusicVolume(dword vol);
void ___2ab50h(void);
void dRally_Sound_setEffectsVolume(dword vol);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void CONFIG_WRITE();
void ___596f0h(void);
void ___23758h(void);
void ___204fch(void);
void ___210b4h(void);
void ___217b0h(void);
void ___59db8h(void);

void ___218b4h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, cf;
	byte 	esp[0x20];

		eax = D(___24cc58h);
		edx = eax;
		edx = (int)edx>>0x1f;
		cf = (edx>>(0x20-9))&1;
		edx <<= 9;
		eax -= (edx+cf); 
		eax = (int)eax>>9;
		D(esp+0x1c) = eax;
		eax = D(___24cc54h);
		edx = eax;
		edx = (int)edx>>0x1f;
		cf = (edx>>(0x20-9))&1;
		edx <<= 9;
		eax -= (edx+cf); 
		eax = (int)eax>>9;
		D(esp+0x18) = eax;
		if(ebx == 0xffffffff) goto ___21c44h;
___21901h:
		edx = D(___196a84h);
		if(edx) goto ___21c44h;
		ecx = 0x2c380;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0xd200;
		edi += 0xd200;
		memcpy(edi, esi, ecx);
		eax = 0;
		___13710h(eax, edx);
		edx = 1;
		eax = 3;
		___13710h(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = 3;
		eax = ___146c4h_cdecl(eax);
		D(esp+0xc) = eax;
		if(eax > 5) goto ___21c39h;
		switch(eax){
		case 0: goto ___21976h;
		case 1: goto ___21c52h;
		case 2: goto ___21f17h;
		case 3: goto ___21f21h;
		case 4: goto ___21f2bh;
		case 5: goto ___21f93h;
		default:
			goto ___21c39h;
		}
___21976h:
		eax = 3;
		ecx = 0x46;
		edx = 0;
		ebx = 0x14a;
		___13710h(eax, edx);
		edx = 0xda;
		eax = 0xd6;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = 0x235e0;
		ebx = "Adjust music volume:";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x18;
		edx = 0xac;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1ea4h);
		ebx += 0x2723a;
___219d2h:
		edi = edx;
___219d4h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___219dch;
		B(ebx) = L(eax);
___219dch:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___219d4h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___219d2h;
		L(edx) = 0;
		___12cb8h__VESA101_PRESENTSCREEN();
		B(esp+0x14) = L(edx);
___219f7h:
		H(edx) = B(esp+0x14);
		if(H(edx) == 0x9c) goto ___21c0bh;
		if(H(edx) == 1) goto ___21c0bh;
		if(D(___196a84h) != 0) goto ___21c0bh;
		eax = ___5994ch();
		B(esp+0x14) = L(eax);
		if(L(eax) != 0xcb) goto ___21a36h;
		ebx = D(esp+0x1c);
		if((int)ebx <= 0) goto ___21a36h;
		ecx = ebx-2;
		D(esp+0x1c) = ecx;
___21a36h:
		if(B(esp+0x14) != 0x4b) goto ___21a4ch;
		esi = D(esp+0x1c);
		if((int)esi <= 0) goto ___21a4ch;
		edi = esi-2;
		D(esp+0x1c) = edi;
___21a4ch:
		if(B(esp+0x14) != 0xcd) goto ___21a65h;
		eax = D(esp+0x1c);
		if((int)eax >= 0x80) goto ___21a65h;
		edx = eax+2;
		D(esp+0x1c) = edx;
___21a65h:
		if(B(esp+0x14) != 0x4d) goto ___21a7fh;
		ebx = D(esp+0x1c);
		if((int)ebx >= 0x80) goto ___21a7fh;
		ecx = ebx+2;
		D(esp+0x1c) = ecx;
___21a7fh:
		if(B(esp+0x14) != 0x3b) goto ___21a94h;
		if(D(___19bd60h) == 0) goto ___21a94h;
		___23758h();
___21a94h:
		ecx = 0x26700;
		edi = 0xc4;
		esi = 0x113;
___21aa3h:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ebx = esi;
		eax += ecx;
		edx = edi;
		eax += 0xdc;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != 0x2b200) goto ___21aa3h;
		ecx = 0x18;
		edx = 0xac;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1ea4h);
		ebx += 0x2723a;
___21ae2h:
		edi = edx;
___21ae4h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___21aech;
		B(ebx) = L(eax);
___21aech:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___21ae4h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___21ae2h;
		edi = D(esp+0x1c);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += 0x2723a;
		edx = 0xa;
		eax += edi;
		esi = D(___1a1ebch);
		ebx = eax+0xf;
___21b1fh:
		edi = edx;
___21b21h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___21b29h;
		B(ebx) = L(eax);
___21b29h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___21b21h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___21b1fh;
		edx = D(esp+0x1c);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += 0x2723a;
		ebx = 0xe;
		edx += eax;
		eax = D(esp+0x1c);
		edx += 0xd;
		eax += 0x27247;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		FPUSH((int)D(esp+0x1c));
		ST(0) = 0.78125*ST(0);		// 25/32
		esi = "%";
		ebx = 0xa;
		edx = esp;
		D(esp+0x10) = (int)FPOP();
		eax = D(esp+0x10);
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp;
		ecx = 0x265b5;
		ebx = esp;
		edx = ___185ba9h;
		eax = ___1f094h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10cch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x20;
		ebx = 0x78;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x26560;
		edx += 0x26560;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		eax = D(esp+0x1c);
		eax <<= 9;
		dRally_Sound_setMusicVolume(eax);
		___2ab50h();
		if(B(esp+0x14) != 0x1c) goto ___219f7h;
___21c0bh:
		eax = D(esp+0x1c);
		eax <<= 9;
		edx = 0x16;
		D(___24cc58h) = eax;
		eax = D(___1854b8h);
		ecx = D(___24cc54h);
		ebx = 0;
		dRally_Sound_pushEffect(1, edx, ebx, ecx, eax, 0x8000);
___21c39h:
		if(D(esp+0xc) != 0xffffffff) goto ___21901h;
___21c44h:
		CONFIG_WRITE();
		return;   
___21c52h:
		eax = 3;
		ecx = 0x46;
		edx = 0;
		ebx = 0x14a;
		___13710h(eax, edx);
		edx = 0xda;
		eax = 0xd6;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = 0x235e0;
		ebx = "Adjust effect volume:";
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x18;
		edx = 0xac;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1ea4h);
		ebx += 0x2723a;
___21caeh:
		edi = edx;
___21cb0h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___21cb8h;
		B(ebx) = L(eax);
___21cb8h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___21cb0h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___21caeh;
		___12cb8h__VESA101_PRESENTSCREEN();
		H(eax) = 0;
		B(esp+0x14) = H(eax);
___21cd3h:
		L(ebx) = B(esp+0x14);
		if(L(ebx) == 0x9c) goto ___21ee9h;
		if(L(ebx) == 1) goto ___21ee9h;
		if(D(___196a84h) != 0) goto ___21ee9h;
		eax = ___5994ch();
		B(esp+0x14) = L(eax);
		if(L(eax) != 0xcb) goto ___21d12h;
		ebx = D(esp+0x18);
		if((int)ebx <= 0) goto ___21d12h;
		ecx = ebx-2;
		D(esp+0x18) = ecx;
___21d12h:
		if(B(esp+0x14) != 0x4b) goto ___21d28h;
		esi = D(esp+0x18);
		if((int)esi <= 0) goto ___21d28h;
		edi = esi-2;
		D(esp+0x18) = edi;
___21d28h:
		if(B(esp+0x14) != 0xcd) goto ___21d41h;
		eax = D(esp+0x18);
		if((int)eax >= 0x80) goto ___21d41h;
		edx = eax+2;
		D(esp+0x18) = edx;
___21d41h:
		if(B(esp+0x14) != 0x4d) goto ___21d5bh;
		ebx = D(esp+0x18);
		if((int)ebx >= 0x80) goto ___21d5bh;
		ecx = ebx+2;
		D(esp+0x18) = ecx;
___21d5bh:
		if(B(esp+0x14) != 0x3b) goto ___21d70h;
		if(D(___19bd60h) == 0) goto ___21d70h;
		___23758h();
___21d70h:
		ecx = 0x26700;
		esi = 0xc4;
		edi = 0x113;
___21d7fh:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ebx = edi;
		eax += ecx;
		edx = esi;
		eax += 0xdc;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != 0x2b200) goto ___21d7fh;
		ecx = 0x18;
		edx = 0xac;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1ea4h);
		ebx += 0x2723a;
___21dbeh:
		edi = edx;
___21dc0h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___21dc8h;
		B(ebx) = L(eax);
___21dc8h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___21dc0h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___21dbeh;
		edi = D(esp+0x18);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += 0x2723a;
		edx = 0xa;
		eax += edi;
		esi = D(___1a1ebch);
		ebx = eax+0xf;
___21dfbh:
		edi = edx;
___21dfdh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___21e05h;
		B(ebx) = L(eax);
___21e05h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___21dfdh;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___21dfbh;
		edx = D(esp+0x18);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += 0x2723a;
		ebx = 0xe;
		edx += eax;
		eax = D(esp+0x18);
		edx += 0xd;
		eax += 0x27247;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		FPUSH((int)D(esp+0x18));
		ST(0) = 0.78125*ST(0);		// 25/32
		esi = "%";
		ebx = 0xa;
		edx = esp;
		D(esp+0x10) = (int)FPOP();
		eax = D(esp+0x10);
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		strcat(edi, esi);
		eax = esp;
		ecx = 0x265b5;
		ebx = esp;
		edx = ___185ba9h;
		eax = ___1f094h_cdecl(eax);
		ecx -= eax;
		eax = D(___1a10cch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x20;
		ebx = 0x78;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x26560;
		edx += 0x26560;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		eax = D(esp+0x18);
		eax <<= 9;
		L(edx) = B(esp+0x14);
		dRally_Sound_setEffectsVolume(eax);
		___2ab50h();
		if(L(edx) != 0x1c) goto ___21cd3h;
___21ee9h:
		ecx = D(esp+0x18);
		edx = 0x16;
		eax = D(___1854b8h);
		ebx = 0;
		ecx <<= 9;
		D(___24cc54h) = ecx;
		dRally_Sound_pushEffect(1, edx, ebx, ecx, eax, 0x8000);
		goto ___21c39h;
___21f17h:
		___204fch();
		goto ___21c39h;
___21f21h:
		___210b4h();
		goto ___21c39h;
___21f2bh:
		L(eax) = !!(D(___19bd58h) == 0);
		eax &= 0xff;
		D(___19bd58h) = eax;
		if(eax != 1) goto ___21f6eh;
		___59db8h();
		if(D(___19bd58h) != 0) goto ___21f57h;
		___217b0h();
___21f57h:
		ecx = 6;
		edi = ___1866b8h+0x60e;
		esi = "Gamepad/Joystick Enabled";
		___596f0h();
		memcpy(edi, esi, 0x19);
___21f6eh:
		if(D(___19bd58h) != 0) goto ___21c39h;
		ecx = 6;
		edi = ___1866b8h+0x60e;
		esi = "Gamepad/Joystick Disabled";
		memcpy(edi, esi, 0x1a);
		goto ___21c39h;
___21f93h:
		ebx = 0xffffffff;
		ecx = 0;
		D(esp+0xc) = ebx;
		D(___185ac8h) = ecx;
		ebx = 0;
___21fa6h:
		eax = D(___185ac8h);
		if(L(ebx) != B(eax+___185b73h)) goto ___21c39h;
		edx = D(___185ab0h);
		edx--;
		if((int)eax >= (int)edx) goto ___21fcah;
		eax++;
		D(___185ac8h) = eax;
		goto ___21fa6h;
___21fcah:
		D(___185ac8h) = ebx;
		goto ___21fa6h;
}
