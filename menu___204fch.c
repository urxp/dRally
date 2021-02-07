#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___185c0bh[];
	extern byte ___1a1108h[];
	extern byte ___1866b8h[];
	extern byte ___19ce70h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern __DWORD__ ___1a1140h[8];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
	extern byte ___1866b8h[];
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

			___1a1140h[6] = ___5994ch();

			if((___1a1140h[6] != 0)&&(___1a1140h[6] != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xa8c, "Accelerate    ");
		strcat(___1866b8h+0xa8c, ___19ce70h+0xf*___1a1140h[6]);
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

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[4] = eax;
		
			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xabe, "Brake        ");
		strcat(___1866b8h+0xabe, ___19ce70h+0xf*___1a1140h[4]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___207bbh:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp+0x14), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for left steer...", D(esp+0x38));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[2] = eax;
		
			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xaf0, "Steer Left    \xfa\xfa");
		strcat(___1866b8h+0xaf0, ___19ce70h+0xf*___1a1140h[2]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___2088dh:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp+4), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for right steer...", D(esp+0x1c));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[3] = eax;

			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xb22, "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfa");
		strcat(___1866b8h+0xb22, ___19ce70h+0xf*___1a1140h[3]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___2095eh:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp+8), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for turbo boost...", D(esp+0x18));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[0] = eax;
		
			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xb54, "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
		strcat(___1866b8h+0xb54, ___19ce70h+0xf*___1a1140h[0]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20a34h:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp+0x2c), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for machine gun...", D(esp+0xc));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[7] = eax;
			
			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xb86, "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
		strcat(___1866b8h+0xb86, ___19ce70h+0xf*___1a1140h[7]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20b08h:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp+0x34), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for drop mine...", D(esp+0x20));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[5] = eax;

			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xbb8, "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
		strcat(___1866b8h+0xbb8, ___19ce70h+0xf*___1a1140h[5]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;
___20bddh:
		___13710h(0, 0);
		___13710h(0x3, 0);
		___13710h(0x6, 0);
		___13248h_cdecl(0x127, D(esp), 0x143, 0x30, 1);
		___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Press a key for horn...", D(esp+0x30));
		___12cb8h__VESA101_PRESENTSCREEN();

		while(1){

			eax = ___5994ch();
			eax &= 0xff;
			___1a1140h[1] = eax;

			if((eax != 0)&&(eax != 0xaa)) break;
		}

		___59b3ch();
		___5994ch();
		strcpy(___1866b8h+0xbea, "Horn        \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
		strcat(___1866b8h+0xbea, ___19ce70h+0xf*___1a1140h[1]);
		if(ebp != 0xffffffff) goto ___205a3h;
		return;


___20cafh:
		eax = ___20220h();

		if(eax != 1){

			if(ebp == 8){
				
				ebx = 0;
				ebp = 0xffffffff;
				D(___185a5ch+0xc0) = ebx;

				while(1){

					eax = D(___185a5ch+0xc0);
					if(B(eax+___185b58h+0x36) != 0) break;
					esi = D(___185a5ch+0xa8);
					esi--;

					if((int)eax >= (int)esi){

						ecx = 0;
						D(___185a5ch+0xc0) = ecx;
					}
					else {
					
						eax++;
						D(___185a5ch+0xc0) = eax;
					}
				}
			}
			goto ___206d8h;
		}
		goto ___205a3h;
}
