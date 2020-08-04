#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1a1158h[];
	extern byte ___1866b8h[];
	extern byte ___19ce70h[];
	extern byte ___1a1150h[];
	extern byte ___1866b8h[];
	extern byte ___1818e8h[];
	extern byte ___181a0ch[];
	extern byte ___1a1148h[];
	extern byte ___1866b8h[];
	extern byte ___1818f8h[];
	extern byte ___181a2ch[];
	extern byte ___1a114ch[];
	extern byte ___1866b8h[];
	extern byte ___18190ch[];
	extern byte ___181a4ch[];
	extern byte ___1a1140h[];
	extern byte ___1866b8h[];
	extern byte ___181924h[];
	extern byte ___181a6ch[];
	extern byte ___1a115ch[];
	extern byte ___1866b8h[];
	extern byte ___181940h[];
	extern byte ___181a8ch[];
	extern byte ___1a1154h[];
	extern byte ___1866b8h[];
	extern byte ___18195ch[];
	extern byte ___181aach[];
	extern byte ___1a1144h[];
	extern byte ___1866b8h[];
	extern byte ___181ac4h[];
	extern byte ___185a5ch[];
	extern byte ___185b58h[];

dword ___20220h(void);
byte ___59b3ch(void);
void ___12e78h_cdecl(dword, dword, dword, dword);
byte ___5994ch(void);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
int ___146c4h_cdecl(dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___1f6e4h(void);


void menu___204fch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x3c];


		___1f6e4h();
		if(esi == 0xffffffff) goto ___206e1h;
		edx = 0x15031;
		ebx = 0x95;
		ecx = 0x19631;
		esi = 0xb1;
		edi = 0x1dc31;
		ebp = 0xcd;
		eax = 0x22231;
		D(esp+0x28) = edx;
		D(esp+0x10) = ebx;
		D(esp+0x24) = ecx;
		D(esp+0x14) = esi;
		D(esp+0x38) = edi;
		D(esp+4) = ebp;
		D(esp+0x1c) = eax;
		edx = 0xe9;
		ebx = 0x26831;
		ecx = 0x105;
		esi = 0x2ae31;
		edi = 0x121;
		ebp = 0x2f431;
		eax = 0x13d;
		D(esp+8) = edx;
		D(esp+0x18) = ebx;
		D(esp+0x2c) = ecx;
		D(esp+0x0c) = esi;
		D(esp+0x34) = edi;
		D(esp+0x20) = ebp;
		edx = 0x33a31;
		D(esp) = eax;
		D(esp+0x30) = edx;
___205a3h:
		ecx = 0x28f00;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0x10680;
		edi += 0x10680;
		edx = 0;
		memcpy(edi, esi, ecx);
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		___13710h(eax, edx);
		edx = 0x1;
		eax = 0x6;
		___13710h(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		eax = 0x6;
		eax = ___146c4h_cdecl(eax);
		ebp = eax;
		eax++;


		switch(eax){
		case 0: goto ___20cafh;
		case 1: goto ___20617h;
		case 2: goto ___206ebh;
		case 3: goto ___207bbh;
		case 4: goto ___2088dh;
		case 5: goto ___2095eh;
		case 6: goto ___20a34h;
		case 7: goto ___20b08h;
		case 8: goto ___20bddh;
		case 9: goto ___20cafh;
		default:
			goto ___206d8h;
		}

___20617h:
		___13710h(0, 0);
		___13710h(3, 0);
		___13710h(6, 0);
		___13248h_cdecl(0x127, 0x79, 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for accelerate...", D(esp+0x28));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			D(___1a1158h) = ___5994ch();

			if((D(___1a1158h) != 0)&&(D(___1a1158h) != 0xaa)) break;
		}

		___59b3ch();
		edi = ___1866b8h+0xa8c;
		esi = "Accelerate    ";
		eax = ___5994ch();
		ebx = D(___1a1158h);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		B(edi++) = B(esi++);
		esi = 0xf*ebx;
		edi = ___1866b8h+0xa8c;
		esi = esi+___19ce70h;
		strcat(edi, esi);
___206d8h:
		if(ebp != 0xffffffff) goto ___205a3h;
___206e1h:
		return;
___206ebh:
		___13710h(0, 0);
		___13710h(3, 0);
		___13710h(6, 0);
		___13248h_cdecl(0x127, D(esp+0x10), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for brake...", D(esp+0x24));
		___12cb8h__VESA101_PRESENTSCREEN();
___20743h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a1150h) = eax;
		if(eax == 0) goto ___20743h;
		if(eax == 0xaa) goto ___20743h;
		edi = ___1866b8h+0xabe;
		esi = ___1818e8h;
		eax = ___59b3ch();
		eax = ___5994ch();
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		esi = 0xf*D(___1a1150h);
		edi = ___1866b8h+0xabe;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___207bbh:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp+0x14);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0x38);
		ebx = ___181a0ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___20813h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a1148h) = eax;
		if(eax == 0) goto ___20813h;
		if(eax == 0xaa) goto ___20813h;
		eax = ___59b3ch();
		edi = ___1866b8h+0xaf0;
		esi = ___1818f8h;
		eax = ___5994ch();
		ebx = D(___1a1148h);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);
		esi = 0xf*ebx;
		edi = ___1866b8h+0xaf0;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___2088dh:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp+4);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0x1c);
		ebx = ___181a2ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___208e5h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a114ch) = eax;
		if(eax == 0) goto ___208e5h;
		if(eax == 0xaa) goto ___208e5h;
		edi = ___1866b8h+0xb22;
		esi = ___18190ch;
		eax = ___59b3ch();
		eax = ___5994ch();
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		B(edi++) = B(esi++);
		esi = 0xf*D(___1a114ch);
		edi = ___1866b8h+0xb22;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___2095eh:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp+8);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0x18);
		ebx = ___181a4ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___209b6h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a1140h) = eax;
		if(eax == 0) goto ___209b6h;
		if(eax == 0xaa) goto ___209b6h;
		eax = ___59b3ch();
		ecx = 0x6;
		edi = ___1866b8h+0xb54;
		esi = ___181924h;
		eax = ___5994ch();
		ebx = D(___1a1140h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		W(edi) = W(esi); edi += 2; esi += 2;
		esi = 0xf*ebx;
		edi = ___1866b8h+0xb54;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20a34h:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp+0x2c);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0xc);
		ebx = ___181a6ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___20a8ch:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a115ch) = eax;
		if(eax == 0) goto ___20a8ch;
		if(eax == 0xaa) goto ___20a8ch;
		ecx = 0x6;
		edi = ___1866b8h+0xb86;
		esi = ___181940h;
		eax = ___59b3ch();
		eax = ___5994ch();
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		W(edi) = W(esi); edi += 2; esi += 2;
		esi = 0xf*D(___1a115ch);
		edi = ___1866b8h+0xb86;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20b08h:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp+0x34);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0x20);
		ebx = ___181a8ch;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___20b60h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a1154h) = eax;
		if(eax == 0) goto ___20b60h;
		if(eax == 0xaa) goto ___20b60h;
		eax = ___59b3ch();
		ecx = 0x6;
		edi = ___1866b8h+0xbb8;
		esi = ___18195ch;
		eax = ___5994ch();
		ebx = D(___1a1154h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		B(edi++) = B(esi++);
		esi = 0xf*ebx;
		edi = ___1866b8h+0xbb8;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20bddh:
		edx = 0;
		eax = 0;
		___13710h(eax, edx);
		eax = 0x3;
		edx = 0;
		ecx = 0x30;
		___13710h(eax, edx);
		eax = 0x6;
		edx = 0;
		ebx = 0x143;
		___13710h(eax, edx);
		edx = D(esp);
		eax = 0x127;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		ecx = D(esp+0x30);
		ebx = ___181aach;
		edx = ___185c0bh;
		eax = D(___1a1108h);
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___20c35h:
		eax = ___5994ch();
		eax &= 0xff;
		D(___1a1144h) = eax;
		if(eax == 0) goto ___20c35h;
		if(eax == 0xaa) goto ___20c35h;
		ecx = 0x8;
		edi = ___1866b8h+0xbea;
		esi = ___181ac4h;
		eax = ___59b3ch();
		eax = ___5994ch();
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		esi = 0xf*D(___1a1144h);
		edi = ___1866b8h+0xbea;
		esi = esi+___19ce70h;
		strcat(edi, esi);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20cafh:
		eax = 0;
		eax = ___20220h();
		if(eax != 1) goto ___20cd3h;
		ebp = 0xfffffffe;
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20cd3h:
		if(ebp != 8) goto ___206d8h;
		ebx = 0;
		ebp = 0xffffffff;
		D(___185a5ch+0xc0) = ebx;
___20ce9h:
		eax = D(___185a5ch+0xc0);
		if(B(eax+___185b58h+0x36) != 0) goto ___206d8h;
		esi = D(___185a5ch+0xa8);
		esi--;
		if((int)eax >= (int)esi) goto ___20d0eh;
		eax++;
		D(___185a5ch+0xc0) = eax;
		goto ___20ce9h;
___20d0eh:
		ecx = 0;
		D(___185a5ch+0xc0) = ecx;
		goto ___20ce9h;
}
