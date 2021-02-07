#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___1a1ec4h[];
	extern byte ___1a1ee4h[];
	extern byte ___24cc54h[];
	extern byte ___185c0bh[];
	extern byte ___1a110ch[];
	extern byte ___18e298h[];
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1a10e0h[];
#define CARENCS ___185cbch
	extern __DWORD__ ___185cbch[][0x40];
	extern byte ___1a1ed0h[];
	extern void * ___1a01b8h[6];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e68h[];
	extern byte ___1a10f4h[];
	extern byte ___19bd60h[];
	extern byte ___1a1e88h[];
	extern byte ___196a84h[];
	extern byte ___1a0fb8h[];
	extern byte ___1a1eb4h[];
	extern byte ___185a38h[];
	extern byte ___1a1028h[];
	extern byte ___185a4ch[];
	extern byte ___196adch[];
	extern byte ___185a20h[];

char * itoa_watcom106(int value, char * buffer, int radix);
void ___31008h(void);
void ___3266ch(void);
void ___33010h_cdecl(dword A1);
void underground_main(void);
dword underground___28c1ch(void);
void ___13094h_cdecl(dword, dword);
void ___27a10h(void);
void ___276f0h(void);
void ___273d8h(void);
void ___27078h(void);
void ___11378h_cdecl_float(float A1, float A2, float A3);
void ___25330h(void);
void ___25e40h(void);
void ___26650h(void);
void ___262b4h(void);
void ___269e4h(void);
void ___25a74h(void);
byte ___5994ch(void);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
dword ___28ab4h_cdecl(dword);
void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);


void shop___28e40h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	__esp[0xc+0x60];
	byte * 	esp = __esp+0xc;

/*
		FPUSH((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x3c));
		ST(0) = ceil(0.25*ST(0));
		D(esp+0x50) = (int)FPOP();
*/
		D(esp+0x50) = (D(0x6c*D(___1a1ef8h)+___1a01e0h+0x3c)+3)/4;

		ebx = 0x6c*D(___1a1ef8h);
		eax = (long long)(int)D(0x6e0*D(ebx+___1a01e0h+0x1c)+___18e298h+0x6dc)/0xa;

		if(D(___185a14h_UseWeapons) == 0){
	
			esi = D(ebx+___1a01e0h+0xc)*eax;
		}
		else {

			eax = D(ebx+___1a01e0h+0xc)*eax;
			edx = (int)eax>>0x1f;
			esi = (int)(eax-edx)>>2;
		}

		ebx = D(esp+0x50)-esi;
		D(esp+0x50) = ebx;

		if((int)ebx < 0) D(esp+0x50) = 0;

		ebx = 0xa;
		edx = esp+0x3c;
		eax = D(esp+0x50);
		edi = esp+0x3c;
		eax = itoa_watcom106(eax, edx, ebx);
		ecx = strlen(edi);
		B(esp+ecx+0x3b) = 0x30;
		eax = esp+0x3c;
		eax = atoi(eax);
		ebp = eax;
		D(esp+0x50) = eax;
		eax = D(___1a1ec4h);

		switch(eax){
		case 0: goto ___28f77h;
		case 1: goto ___29ba4h;
		case 2: goto ___29cebh;
		case 3: goto ___29e33h;
		case 4: goto ___29f83h;
		case 5: goto ___2a1afh;
		default:
			return;
		}


___28f77h:
		edx = D(___1a1ee4h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		eax -= edx;
		eax <<= 5;
		eax = D(eax+___18e298h+0xc);
		eax -= ebp;
		if((int)eax >= 0) goto ___291c4h;
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		edi = esp;
		dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		esi = "You would get a $";
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ebx = 0xa;
		edx = esp+0x3c;
		eax = ebp;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		eax = itoa_watcom106(eax, edx, ebx);
		esi = esp+0x3c;
		edi = esp;
		ebx = esp;
		eax = strcat(edi, esi);
		esi = " refund";
		edi = esp;
		edx = ___185c0bh;
		eax = strcat(edi, esi);
		ecx = 0x136aa;
		edi = esp;
		eax = D(___1a110ch);
		esi = "from your old car and upgrades.";
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 8;
		ebx = esp;
		edx = ___185c0bh;
		while(ecx--||++ecx){
		
			D(edi) = D(esi); edi += 4; esi += 4;
		}
		eax = D(___1a110ch);
		ecx = 0x15eaa;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ee4h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		edi = esp;
		eax -= edx;
		esi = "Money returned: ";
		eax <<= 5;
		ebx = 0xa;
		eax = D(eax+___18e298h+0xc);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);
		eax -= ebp;
		esi = "$";
		edx = (int)eax>>0x1f;
		eax ^= edx;
		eax -= edx;
		edx = esp+0x3c;
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		eax = strcat(edi, esi);
		esi = esp+0x3c;
		edi = esp;
		ebx = esp;
		edx = ___185c0bh;
		eax = strcat(edi, esi);
		ecx = 0x186aa;
		eax = D(___1a110ch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ee4h);
		eax = 8*edx;
		edi = esp;
		eax -= edx;
		esi = "Buy a ";
		eax <<= 3;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		eax -= edx;
		esi = ___18e298h;
		eax <<= 5;
		edi = esp;
		esi += eax;
		ebx = esp;
		eax = strcat(edi, esi);
		esi = " ?";
		edi = esp;
		edx = ___185c0bh;
		eax = strcat(edi, esi);
		ecx = 0x1aeaa;
		eax = D(___1a110ch);
		goto ___293cch;
___291c4h:
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		edi = esp;
		dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		esi = "You would get a $";
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ebx = 0xa;
		edx = esp+0x3c;
		eax = ebp;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		eax = itoa_watcom106(eax, edx, ebx);
		esi = esp+0x3c;
		edi = esp;
		ebx = esp;
		eax = strcat(edi, esi);
		esi = " refund";
		edi = esp;
		edx = ___185c0bh;
		eax = strcat(edi, esi);
		ecx = 0x136aa;
		edi = esp;
		eax = D(___1a110ch);
		esi = "from your old car and upgrades.";
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 8;
		ebx = esp;
		edx = ___185c0bh;
		while(ecx--||++ecx){
		
			D(edi) = D(esi); edi += 4; esi += 4;
		}
		eax = D(___1a110ch);
		ecx = 0x15eaa;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		edx = D(___1a1ee4h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		eax -= edx;
		esi = ___18e298h;
		eax <<= 5;
		edi = esp;
		esi += eax;
		eax = strcpy(edi, esi);
		esi = " would cost ";
		edi = esp;
		eax = strcat(edi, esi);
		edx = D(___1a1ee4h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 3;
		eax -= edx;
		ebx = 0xa;
		eax <<= 5;
		esi = "$";
		eax = D(eax+___18e298h+0xc);
		edx = esp+0x3c;
		eax -= ebp;
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		eax = strcat(edi, esi);
		esi = esp+0x3c;
		edi = esp;
		ebx = esp;
		edx = ___185c0bh;
		eax = strcat(edi, esi);
		ecx = 0x186aa;
		edi = esp;
		eax = D(___1a110ch);
		esi = "Purchase it ?";
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x1aeaa;
		ebx = esp;
		edx = ___185c0bh;
		eax = D(___1a110ch);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
___293cch:
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x1cf70;
		ebx = "yes";
		edx = ___185ba9h;
		eax = D(___1a10cch);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x1d01a;
		ebx = "no";
		edx = ___185ba9h;
		eax = D(___1a10e0h);
		ebp = 0;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ebx = 0;
		___12cb8h__VESA101_PRESENTSCREEN();
		D(esp+0x54) = ebx;
___29410h:
		esi = 0xaa*ebp;
		___2ab50h();
		___2ab50h();
		___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
		ecx = 0x40;
		ebx = 0x60;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x16090;
		edx += 0x16090;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		eax = D(___1a1ed0h);
		eax++;
		esi += 0x1e0d9;
		D(___1a1ed0h) = eax;
		if((int)eax <= 0x3f) goto ___2948eh;
		ebx = 0;
		D(___1a1ed0h) = ebx;
___2948eh:
		ecx = 0;
		edi = 0xc4;
___29495h:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ebx = 0x14;
		eax += esi;
		edx = edi;
		eax += ecx;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != 0x3200) goto ___29495h;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = D(___1a1e68h);
		ebx += esi;
		esi = 0x190*ecx;
		eax = D(___1a10f4h);
		ecx = 0x14;
		esi += eax;
		edx = ecx;
___294dah:
		edi = edx;
___294dch:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___294e4h;
		B(ebx) = L(eax);
___294e4h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___294dch;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___294dah;
		ecx = 0x1c;
		ebx = 0x14f;
		edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		eax = 0x1e0a5;
		edx += 0x1e0a5;
		___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
		esi = D(___1a1e68h);
		esi++;
		D(___1a1e68h) = esi;
		if((int)esi <= 0x31) goto ___2952dh;
		eax = 0;
		D(___1a1e68h) = eax;
___2952dh:

		switch(___5994ch()){
		case DR_SCAN_ESCAPE:
			ebp = 1;
			D(esp+0x54) = 0xffffffff;
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
			D(esp+0x54) = 0xffffffff;
			break;
#if defined(DR_MULTIPLAYER)
		case DR_SCAN_F1:
			if(D(___19bd60h) != 0) ___23758h();
			break;
#endif // DR_MULTIPLAYER
		case DR_SCAN_Y:
		case DR_SCAN_LEFT:
		case DR_SCAN_KP_4:
			if(ebp == 1) dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			
			ebp = 0;
			ecx = 0x1e000;
			while(1){

				memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+0xa8, 0xc4, 0x14f);

				ecx += 0x280;
				if(ecx == 0x21e80) break;
			}

			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "yes", 0x1cf70);
			___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "no", 0x1d01a);
			break;
		case DR_SCAN_N:
		case DR_SCAN_RIGHT:
		case DR_SCAN_KP_6:
			if(ebp == 0) dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);
			
			ebp = 1;
			ecx = 0x1e000;
			while(1){

				memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+0xa8, 0xc4, 0x14f);
			
				ecx += 0x280;
				if(ecx == 0x21e80) break;
			}

			___12e78h_cdecl(D(___1a10e0h), ___185ba9h, "yes", 0x1cf70);
			___12e78h_cdecl(D(___1a10cch), ___185ba9h, "no", 0x1d01a);
			break;
		default:
			break;
		}

		if(D(esp+0x54) == 0) goto ___29410h;
		if(ebp) goto ___29b90h;
		dRally_Sound_pushEffect(5, 4, 0, D(___24cc54h), 0x24000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(___1a1ee4h);
		D(4*eax+___1a01e0h+0x1c) = ebx;
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		ecx = D(4*eax+___1a01e0h+0x30);
		edx <<= 5;
		ebx = D(esp+0x50);
		edx = D(edx+___18e298h+0xc);
		D(4*eax+___1a01e0h+0xc) = ebp;
		edx -= ebx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		ecx -= edx;
		edx = 8*ebx;
		D(4*eax+___1a01e0h+0x10) = ebp;
		edx -= ebx;
		D(4*eax+___1a01e0h+0x14) = ebp;
		edx <<= 3;
		D(4*eax+___1a01e0h+0x18) = ebp;
		edx -= ebx;
		D(4*eax+___1a01e0h+0x30) = ecx;
		edx <<= 5;
		ecx = 0x77;
		edx = D(edx+___18e298h+0xc);
		ebx = 0x180;
		D(4*eax+___1a01e0h+0x3c) = edx;
		___25330h();
		___25e40h();
		___26650h();
		___262b4h();
		___269e4h();
		___25a74h();
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = 0x10;
		edx = 0x126;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e88h);
		ebx += 0x1e83c;
___29838h:
		edi = edx;
___2983ah:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___29842h;
		B(ebx) = L(eax);
___29842h:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___2983ah;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___29838h;
		ecx = 7;
		edi = esp;
		esi = "Use arrows to change the color";
		ebx = esp;
		edx = ___185c0bh;
		while(ecx--||++ecx){
		
			D(edi) = D(esi); edi += 4; esi += 4;
		}
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		eax = D(___1a110ch);
		ecx = 0x136aa;
		edi = esp;
		esi = "of your car and press Enter";
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 7;
		ebx = esp;
		edx = ___185c0bh;
		while(ecx--||++ecx){
		
			D(edi) = D(esi); edi += 4; esi += 4;
		}
		eax = D(___1a110ch);
		ecx = 0x15eaa;
		edi = esp;
		esi = "when finished.";
		___12e78h_cdecl(eax, edx, ebx, ecx);
		ecx = 0x186aa;
		ebx = esp;
		edx = ___185c0bh;
		eax = D(___1a110ch);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();






		
		B(esp+0x5c) = 0;
		ebp = 0x126;

	while(1){

		if((B(esp+0x5c) == DR_SCAN_KP_ENTER)||(D(___196a84h) != 0)) break;
		B(esp+0x5c) = ___5994ch();

#if defined(DR_MULTIPLAYER)
		if((B(esp+0x5c) == DR_SCAN_F1)&&(D(___19bd60h) != 0)) ___23758h();
#endif // DR_MULTIPLAYER

		if(B(esp+0x5c) == DR_SCAN_LEFT){

			if((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) > 0) D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) -= 2;
		}

		if(B(esp+0x5c) == DR_SCAN_KP_4){

			if((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) > 0) D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) -= 2;
		}

		if(B(esp+0x5c) == DR_SCAN_RIGHT){
			
			if((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) < 0xfd) D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) += 2;
		}

		if(B(esp+0x5c) == DR_SCAN_KP_6){

			if((int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) < 0xfd) D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c) += 2;
		}

		eax = 0x6c*D(___1a1ef8h);
		edx = D(eax+___1a01e0h+0x2c);
		eax = D(___1a0fb8h);
		edx = 3*edx;
		edx += eax;
		eax = 0;
		L(eax) = B(edx+2);
		D(esp+0x58) = eax;
		FPUSH((short)W(esp+0x58));
		esp -= 4;
		eax = 0;
		F32(esp) = (float)FPOP();
		L(eax) = B(edx+1);
		D(esp+0x5c) = eax;
		FPUSH((short)W(esp+0x5c));
		esp -= 4;
		eax = 0;
		F32(esp) = (float)FPOP();
		L(eax) = B(edx);
		D(esp+0x60) = eax;
		FPUSH((short)W(esp+0x60));
		esp -= 4;
		F32(esp) = (float)FPOP();
		___11378h_cdecl_float(F32(esp), F32(esp+4), F32(esp+8));
		esp += 0xc;
		ecx = 0x1dd80;
	
		while(1){

			memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+0xb6, 0xc4, ebp);
		
			ecx += 0x280;
			if(ecx == 0x21980) break;
		}

		ecx = 0x10;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e88h);
		edx = ebp;
		ebx += 0x1e83c;

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

		edx = 0x6c*D(___1a1ef8h);
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		ecx = 0x18;
		eax += 0x1de3c;
		ebx = D(edx+___1a01e0h+0x2c);
		esi = D(___1a1eb4h);
		ebx += eax;
		edx = 0xa;
		ebx += 0xe;

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

		___2ab50h();
		___2ab50h();
		___1398ch__VESA101_PRESENTRECTANGLE(
			D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+0x1de48,
			D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x1de3c+D(0x6c*D(___1a1ef8h)+___1a01e0h+0x2c)+0xc,
			0xe,
			0x18);
		___259e0h_cdecl(0x10, 0x8d, D(___1a1ed0h), ___1a01b8h[D(___1a1ee4h)], CARENCS[D(___1a1ee4h)]);
		___1398ch__VESA101_PRESENTRECTANGLE(0x16090, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x16090, 0x60, 0x40);
		D(___1a1ed0h)++;

		if((int)D(___1a1ed0h) > 0x3f) D(___1a1ed0h) = 0;

		if(B(esp+0x5c) == 0x1c) break;
	}








		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		ebx = D(eax+___1a01e0h+0x1c);
		if((int)ebx >= 5) goto ___29b67h;
		eax = ebx+1;
		D(___1a1ee4h) = eax;
		goto ___29b71h;
___29b67h:
		D(___1a1ee4h) = 5;
___29b71h:
		esi = 0x136;
		___27078h();
		D(___185a38h) = esi;
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29b90h:
		___25a74h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29ba4h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		edx <<= 5;
		eax = D(4*eax+___1a01e0h+0x10);
		if((int)eax >= (int)D(edx+___18e298h+0x6a0)) goto ___29cd7h;
		eax = D(edx+4*eax+___18e298h+0x6ac);
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		edx <<= 5;
		ebx = D(4*eax+___1a01e0h+0x10);
		edx = D(edx+4*ebx+___18e298h+0x6ac);
		D(4*eax+___1a01e0h+0x30) -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		ebx = D(4*eax+___1a01e0h+0x10);
		edx <<= 5;
		ecx = D(4*eax+___1a01e0h+0x3c);
		edx = D(edx+4*ebx+___18e298h+0x6ac);
		ecx += edx;
		D(4*eax+___1a01e0h+0x3c) = ecx;
		___273d8h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edi = D(4*eax+___1a01e0h+0x10);
		esi = 0x136;
		edi++;
		D(___185a38h) = esi;
		D(4*eax+___1a01e0h+0x10) = edi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29cd7h:
		___25e40h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29cebh:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		edx <<= 5;
		eax = D(4*eax+___1a01e0h+0x14);
		if((int)eax >= (int)D(edx+___18e298h+0x6a4)) goto ___29e1fh;
		eax = D(edx+4*eax+___18e298h+0x6bc);
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		edx <<= 5;
		ebx = D(4*eax+___1a01e0h+0x14);
		edx = D(edx+4*ebx+___18e298h+0x6bc);
		D(4*eax+___1a01e0h+0x30) -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		ebx = D(4*eax+___1a01e0h+0x14);
		edx <<= 5;
		ecx = D(4*eax+___1a01e0h+0x3c);
		edx = D(edx+4*ebx+___18e298h+0x6bc);
		ecx += edx;
		D(4*eax+___1a01e0h+0x3c) = ecx;
		___276f0h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		edi = D(4*eax+___1a01e0h+0x14);
		esi = 0x136;
		edi++;
		D(___185a38h) = esi;
		D(4*eax+___1a01e0h+0x14) = edi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29e1fh:
		___262b4h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29e33h:
		eax = D(___1a1ef8h);
		edx = 8*eax;
		edx -= eax;
		edx <<= 2;
		edx -= eax;
		ebx = D(4*edx+___1a01e0h+0x1c);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 3;
		eax -= ebx;
		eax <<= 5;
		edx = D(4*edx+___1a01e0h+0x18);
		if((int)edx >= (int)D(eax+___18e298h+0x6a8)) goto ___29f6fh;
		eax = D(eax+4*edx+___18e298h+0x6cc);
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		dRally_Sound_pushEffect(1, 0x1c, 0, D(___24cc54h), 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x1c);
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		ebx = D(4*eax+___1a01e0h+0x18);
		edx <<= 5;
		ebp = D(4*eax+___1a01e0h+0x30);
		edx = D(edx+4*ebx+___18e298h+0x6cc);
		ebx = D(4*eax+___1a01e0h+0x1c);
		ebp -= edx;
		edx = 8*ebx;
		edx -= ebx;
		edx <<= 3;
		edx -= ebx;
		edx <<= 5;
		ebx = D(4*eax+___1a01e0h+0x18);
		edx = D(edx+4*ebx+___18e298h+0x6cc);
		ebx = D(4*eax+___1a01e0h+0x3c);
		D(4*eax+___1a01e0h+0x30) = ebp;
		ebx += edx;
		D(4*eax+___1a01e0h+0x3c) = ebx;
		___27a10h();
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		esi = D(4*eax+___1a01e0h+0x18);
		ecx = 0x136;
		esi++;
		D(___185a38h) = ecx;
		D(4*eax+___1a01e0h+0x18) = esi;
		___25330h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29f6fh:
		___26650h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;
___29f83h:
		eax = D(___1a1ef8h);
		ebx = 8*eax;
		ebx -= eax;
		ebx <<= 2;
		ebx -= eax;
		ebx <<= 2;
		if((int)D(ebx+___1a01e0h+0xc) >= 0xa) goto ___29fe8h;
		if(D(___185a14h_UseWeapons) == 0) goto ___29fe8h;
		eax = D(ebx+___1a01e0h+0x1c);
		edx = 8*eax;
		edx -= eax;
		edx <<= 3;
		edx -= eax;
		edx <<= 5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		ecx = 0xa;
		edx = (int)edx>>0x1f;
		eax = (long long)(int)eax/(int)ecx;
		edx = D(ebx+___1a01e0h+0xc);
		edx = edx*eax;
		eax = edx;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		esi = eax;
___29fe8h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if((int)D(eax+___1a01e0h+0xc) < 0xa) goto ___2a039h;
		if(D(___185a14h_UseWeapons) == 0) goto ___2a039h;
		eax = D(eax+___1a01e0h+0x1c);
		edx = 8*eax;
		edx -= eax;
		edx <<= 3;
		edx -= eax;
		edx <<= 5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		edx = (int)edx>>0x1f;
		eax -= edx;
		eax = (int)eax>>1;
		esi = eax;
___2a039h:
		eax = D(___1a1ef8h);
		ebx = 8*eax;
		ebx -= eax;
		ebx <<= 2;
		ebx -= eax;
		ebx <<= 2;
		if((int)D(ebx+___1a01e0h+0xc) >= 0xa) goto ___2a093h;
		if(D(___185a14h_UseWeapons) != 0) goto ___2a093h;
		eax = D(ebx+___1a01e0h+0x1c);
		edx = 8*eax;
		edx -= eax;
		edx <<= 3;
		edx -= eax;
		edx <<= 5;
		eax = D(edx+___18e298h+0x6dc);
		edx = eax;
		ecx = 0xa;
		edx = (int)edx>>0x1f;
		eax = (long long)(int)eax/(int)ecx;
		esi = D(ebx+___1a01e0h+0xc);
		esi = esi*eax;
___2a093h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		if((int)D(eax+___1a01e0h+0xc) < 0xa) goto ___2a0d9h;
		if(D(___185a14h_UseWeapons) != 0) goto ___2a0d9h;
		eax = D(eax+___1a01e0h+0x1c);
		esi = 8*eax;
		esi -= eax;
		esi <<= 3;
		esi -= eax;
		esi <<= 5;
		esi = D(esi+___18e298h+0x6dc);
___2a0d9h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		if((int)D(4*eax+___1a01e0h+0xc) <= 0) return;
		eax = esi;
		eax = ___28ab4h_cdecl(eax);
		if(eax) return;
		dRally_Sound_pushEffect(1, 0x1f, 0, D(___24cc54h), 0x28000, 0x8000);
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		eax <<= 2;
		edi = D(eax+___1a01e0h+0xc);
		if((int)edi >= 0xa) goto ___2a159h;
		edx = 0;
		D(eax+___1a01e0h+0xc) = edx;
		goto ___2a162h;
___2a159h:
		ebp = edi-0xa;
		D(eax+___1a01e0h+0xc) = ebp;
___2a162h:
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 2;
		eax -= edx;
		ebx = D(4*eax+___1a01e0h+0x30);
		ecx = D(4*eax+___1a01e0h+0x3c);
		ebx -= esi;
		ecx += esi;
		D(4*eax+___1a01e0h+0x30) = ebx;
		D(4*eax+___1a01e0h+0x3c) = ecx;
		___25330h();
		___269e4h();
		___12cb8h__VESA101_PRESENTSCREEN();
		return;



// CONTINUE
___2a1afh:
		if((D(0x6c*D(___1a1ef8h)+___1a01e0h+0xc) == 0x64)&&(D(___185a14h_UseWeapons) == 0)){

			___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
			___13094h_cdecl("[Repair your car first.", 0x136aa);
			___13094h_cdecl("", 0x15eaa);
			___13094h_cdecl("What'cha gonna do with that pile of", 0x186aa);
			___13094h_cdecl("junk, carry it around? Let me spell", 0x1aeaa);
			___13094h_cdecl("this out for you: R-E-P-A-I-R.", 0x1d6aa);
			___12cb8h__VESA101_PRESENTSCREEN();
			dRally_Sound_pushEffect(2, 0x17, 0, D(___24cc54h), 0x25500, 0x8000);
		}
		else {

#if defined(DR_MULTIPLAYER)
			if(D(___19bd60h) == 0){
#endif // DR_MULTIPLAYER

				D(___185a4ch) = underground___28c1ch();

				if((D(___185a14h_UseWeapons) != 0)&&(D(___185a4ch) != 0)){
				
					underground_main();
				}
				else {

					dRally_Sound_pushEffect(1, 0x18, 0, D(___24cc54h), 0x28000, 0x8000);
					edi = D(___1a1ef8h);
					ecx = 0;
					edx = 0;
					eax = 0;

					while(1){

						esi = D(eax+___1a01e0h+0x44);
						if(((int)ecx < (int)esi)&&(edx != edi)) ecx = esi;
						edx++;
						eax += 0x6c;
					
						if((int)edx >= 0x14) break;
					}

					if((int)ecx < (int)D(0x6c*D(___1a1ef8h)+___1a01e0h+0x44)){

						___31008h();
					}
					else {

						___3266ch();
					}
				}
#if defined(DR_MULTIPLAYER)				
			}
			else {

				D(___1a1028h) = 0;
				D(___185a4ch) = underground___28c1ch();

				if((D(___185a14h_UseWeapons) == 0)||(D(___185a4ch) == 0)){

					dRally_Sound_pushEffect(1, 0x18, 0, D(___24cc54h), 0x28000, 0x8000);
					___33010h_cdecl(D(___196adch));
				}
				else {
				
					underground_main();
				}

				D(___185a20h) = 1;
			}
#endif // DR_MULTIPLAYER
		}

		return;
}
