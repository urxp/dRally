#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___19dd70h[256];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___19bd60h[];
	extern byte ___24cc54h[];
	extern byte ___19de70h[];
	extern byte ___1a1104h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0fb8h[];
	extern byte ___1a1e88h[];
	extern byte ___1a1eb4h[];

void ___1398ch__VESA101_PRESENTRECTANGLE(dword offset, void * src, dword w, dword h);
void ___17384h_cdecl(dword, dword, dword, dword, dword, dword);
void ___11378h_cdecl_float(float A1, float A2, float A3);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
byte ___5994ch(void);
void ___12e78h_cdecl(dword, dword, dword, dword);

dword ___17510h_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8, dword A9){

	int 	n;
	long long 	ll_tmp;
	dword 	eax, eax1, eax2, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x9c+0xc+4+0x14];
	int 	i, j;


	D(esp+0x40) = A1;
	D(esp+0x3c) = A2;
	D(esp+0x8c) = A3;
	D(esp+0x4c) = A4;
	D(esp+0xac) = A5;
	D(esp+0xb0) = A6;
	D(esp+0xb4) = A7;
	D(esp+0xb8) = A8;
	D(esp+0xbc) = A9;

	D(esp+0x90) = 0x3f;
	D(esp+0x38) = 0x70;
	memset(___19dd70h, 0, 0x100);
	___19dd70h[0x20] = 'D';
	___19dd70h[0x1e] = 'A';
	___19dd70h[0x30] = 'B';
	___19dd70h[0x21] = 'F';
	___19dd70h[0x12] = 'E';
	___19dd70h[0x2e] = 'C';
	___19dd70h[0x22] = 'G';
	___19dd70h[0x23] = 'H';
	___19dd70h[0x26] = 'L';
	___19dd70h[0x17] = 'I';
	___19dd70h[0x24] = 'J';
	___19dd70h[0x31] = 'N';
	___19dd70h[0x32] = 'M';
	___19dd70h[0x25] = 'K';
	___19dd70h[0x18] = 'O';
	___19dd70h[0x19] = 'P';
	___19dd70h[0x14] = 'T';
	___19dd70h[0x10] = 'Q';
	___19dd70h[0x13] = 'R';
	___19dd70h[0x2f] = 'V';
	___19dd70h[0x16] = 'U';
	___19dd70h[0x1f] = 'S';
	___19dd70h[0x11] = 'W';
	___19dd70h[0x2d] = 'X';
	___19dd70h[0x03] = '2';
	___19dd70h[0x15] = 'Y';
	___19dd70h[0x2c] = 'Z';
	___19dd70h[0x05] = '4';
	___19dd70h[0x04] = '3';
	___19dd70h[0x02] = '1';
	___19dd70h[0x06] = '5';
	___19dd70h[0x07] = '6';
	___19dd70h[0x0b] = '0';
	___19dd70h[0x08] = '7';
	___19dd70h[0x09] = '8';
	___19dd70h[0x0d] = '=';
	___19dd70h[0x0c] = '-';
	___19dd70h[0x0a] = '9';
	___19dd70h[0x33] = ',';
	___19dd70h[0x34] = '.';
	___19dd70h[0x39] = ' ';
	___19dd70h[0x35] = '/';
	B(esp+0x95) = 0;
	___12e78h_cdecl(D(___1a10e0h), ___185ba9h, strcpy(esp, D(esp+0x40)), D(esp+0x3c)+0x280*D(esp+0x8c));
	ebp = 0;
	ebx = 0;

	if(ebx < strlen(esp)){

		while(1){

			ebp += B(B(esp+ebx)+___185ba9h-0x1e);

			ebx++;
			if(ebx >= strlen(esp)) break;
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0x8c)+D(esp+0x3c), D(esp+0x3c)+D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*D(esp+0x8c), ebp, 0x20);
	D(esp+0x80) = 0x80;
	D(esp+0x74) = 0x280*(D(esp+0x38)+0x3c);
	D(esp+0x68) = 0x280*(D(esp+0x38)+0x3c)+D(esp+0x90)+0x19;
	D(esp+0x64) = 0x280*(D(esp+0x38)+0x8f);
	D(esp+0x78) = 0x280*(D(esp+0x38)+0x92);
	D(esp+0x5c) = 0x280*(D(esp+0x38)+0x92)+D(esp+0x90)+0x19;
	D(esp+0x44) = 0x280*D(esp+0x8c);
	D(esp+0x54) = 0x280*D(esp+0x8c);
	D(esp+0x48) = 0x280*D(esp+0x8c)+D(esp+0x3c);
	D(esp+0x70) = 0x280*(D(esp+0x38)+0x4f);
	D(esp+0x50) = 0x280*D(esp+0x8c)+D(esp+0x3c);
	D(esp+0x60) = 0x280*(D(esp+0x38)+0x4f)+D(esp+0x90)+0x1b;
	D(esp+0x58) = 0;
	D(esp+0x7c) = 0;
	D(esp+0x6c) = D(esp+0x38)+0x8b;

	while(1){

		___17384h_cdecl(D(esp+0x3c), D(esp+0x8c), ebp, D(esp+0xbc), D(esp+0x90), D(esp+0x38));
		D(esp+0x88) = ___5994ch();

		switch(D(esp+0x88)){
		case DR_SCAN_ESCAPE:
			if(D(esp+0xb8) != 0) return 0;
			break;
		case DR_SCAN_BACKSPACE:
			edi = esp;
			ecx = strlen(edi);

			if(ecx > 0){

				edi = esp;
				ecx = strlen(edi);
				eax ^= eax;
				L(eax) = B(esp+ecx-1);
				L(eax) = B(eax+___185ba9h-0x1e);
				eax &= 0xff;
				edx = D(esp+0x8c);
				ebp -= eax;
				eax = 0x280*edx;
				esi = eax;
				eax += 0x5000;
				D(esp+0x84) = eax;

				while(1){

					edi = esp;
					ecx = strlen(edi);
					eax ^= eax;
					L(eax) = B(esp+ecx-1);
					ebx ^= ebx;
					L(ebx) = B(eax+___185ba9h-0x1e);
					eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
					edi = D(esp+0x3c);
					eax += esi;
					edx = 0x0c4;
					eax += edi;
					ebx += 0x14;
					eax += ebp;
					esi += 0x280;
					memset(eax, edx, ebx);

					if(esi == D(esp+0x84)) break;
				}

				edi = esp;
				esi = D(esp+0x3c);
				ecx = strlen(edi);
				eax ^= eax;
				ebx ^= ebx;
				L(eax) = B(esp+ecx-1);
				edx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = D(esp+0x54);
				L(ebx) = B(eax+___185ba9h-0x1e);
				eax = D(esp+0x50);
				ebx += 0x14;
				edx += ecx;
				ecx = 0x20;
				edx += esi;
				eax += ebp;
				edx += ebp;
				edi = esp;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
				ecx = strlen(edi);
				L(eax) = 0;
				B(esp+ecx-1) = L(eax);
			}
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			edi = esp;
			ecx = strlen(edi);

			if(ecx > 0) D(esp+0x58) = 0xffffffff;

			if(D(esp+0xbc) != 0){

				eax = 0x6c*D(___1a1ef8h);
				edx = D(esp+0x7c);
				D(eax+___1a01e0h+0x40) = edx;
			}

			if(D(esp+0xbc) != 0){
			
				eax = 0x6c*D(___1a1ef8h);
				edx = D(esp+0x80);
				D(eax+___1a01e0h+0x2c) = edx;
			}
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if((D(esp+0xb4) != 0)&&(D(___19bd60h) != 0)) ___23758h();
#endif // DR_MULTIPLAYER
			break;
		case DR_SCAN_UP:
		case DR_SCAN_KP_8:
			if(D(esp+0xbc) != 0){

				dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), 0x28000, 0x8000);

				if((int)D(esp+0x7c) <= 0){
				
					D(esp+0x7c) = 0x13;
				}
				else {

					D(esp+0x7c)--;
				}

				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+D(esp+0x70)+D(esp+0x90)+0x1b;

				j = -1;
				while(++j < 0x40){

					i = -1;
					while(++i < 0x40) B(ebx+0x280*j+i) = B(D(___19de70h+4*D(esp+0x7c))+0x40*j+i);
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x60), D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+D(esp+0x70)+D(esp+0x90)+0x1b, 0x40, 0x40);

				esi = 0;
				while(1){

					___17384h_cdecl(D(esp+0x3c), D(esp+0x8c), ebp, D(esp+0x0bc), D(esp+0x90), D(esp+0x38));

					esi++;
					if((int)esi >= 5) break;
				}

				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+D(esp+0x74)+D(esp+0x90)+0x19;

				j = -1;
				while(++j < 0x10){

					i = -1;
					while(++i < 0x44) B(ebx+0x280*j+i) = B(D(___1a1104h)+0x880+0x44*j+i);
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x68), D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+D(esp+0x74)+D(esp+0x90)+0x19, 0x44, 0x10);

				esi = 0;
				while(1){

					ebx = D(esp+0x38);
					ecx = D(esp+0x90);
					eax2 = ebx;
					edx = D(esp+0x8c);
					eax = D(esp+0x3c);
					eax1 = ecx;
					ebx = ebp;
					ecx = D(esp+0x0bc);
					esi++;
					___17384h_cdecl(eax, edx, ebx, ecx, eax1, eax2);

					if((int)esi >= 5) break;
				}

				esi = D(esp+0x74);
				edi = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = 0x10;
				eax += esi;
				edx = 0x44;
				eax += edi;
				esi = D(___1a1104h);
				ebx = eax+0x19;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 0x4;
						esi += 0x4;
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

				edx = D(esp+0x74);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				eax += edx;
				eax += edi;
				ecx = 0x10;
				edx = eax+0x19;
				ebx = 0x44;
				eax = D(esp+0x68);
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
				eax = 0x6c*D(___1a1ef8h);
				esi ^= esi;
				edx = D(esp+0x7c);
				D(esp+0x88) = esi;
				D(eax+___1a01e0h+0x40) = edx;
			}
			break;
		case DR_SCAN_LEFT:
		case DR_SCAN_KP_4:
			if(D(esp+0xbc) != 0){

				edx = D(esp+0x80);

				if((int)edx > 0){
						
					ebx = edx-2;
					D(esp+0x80) = ebx;
				}

				ebx = D(esp+0x80);
				eax = D(___1a0fb8h);
				ebx = 3*ebx;
				ebx += eax;
				esi = 0x280*D(esp+0x6c);
				edi = 0x0c4;
				___11378h_cdecl_float((float)B(ebx), (float)B(ebx+1), (float)B(ebx+2));
				ecx = esi;
				esi += 0x3c00;

				while(1){

					eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
					edx = D(esp+0x90);
					eax += ecx;
					eax += edx;
					ebx = 0x126;
					eax += 0x65;
					edx = edi;
					ecx += 0x280;
					memset(eax, edx, ebx);

					if(ecx == esi) break;
				}

				ebx = D(esp+0x64);
				ecx = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				edx = 0x126;
				eax += ebx;
				esi = D(___1a1e88h);
				eax += ecx;
				ecx = 0x10;
				ebx = eax+0x6b;

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

				esi = D(esp+0x6c);
				eax = 0x280*esi;
				D(esp+0x34) = eax;
				edx = D(esp+0x90);
				edi = D(esp+0x34);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ebx = D(esp+0x80);
				eax += edi;
				ecx = 0x18;
				eax += edx;
				esi = D(___1a1eb4h);
				eax += 0x79;
				edx = 0x0a;
				ebx += eax;

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

				ebx = D(esp+0x34);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = D(esp+0x90);
				eax += ebx;
				eax += ecx;
				edx = D(esp+0x80);
				eax += 0x77;
				edi = D(esp+0x80);
				edx += eax;
				eax = ebx+ecx;
				ecx = 0x18;
				eax += 0x77;
				ebx = 0x0e;
				eax += edi;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
				D(esp+0x88) = 0;
			}
			break;
		case DR_SCAN_RIGHT:
		case DR_SCAN_KP_6:
			if(D(esp+0xbc) != 0){

				esi = D(esp+0x80);

				if((int)esi < 0xfd){
						
					edi = esi+0x2;
					D(esp+0x80) = edi;
				}

				ebx = D(esp+0x80);
				eax = D(___1a0fb8h);
				ebx = 3*ebx;
				ebx += eax;
				___11378h_cdecl_float((float)B(ebx), (float)B(ebx+1), (float)B(ebx+2));
				esi = 0x280*D(esp+0x6c);
				edi = 0x0c4;
				ecx = esi;
				esi += 0x3c00;

				while(1){

					eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
					edx = D(esp+0x90);
					eax += ecx;
					eax += edx;
					ebx = 0x126;
					eax += 0x65;
					edx = edi;
					ecx += 0x280;
					memset(eax, edx, ebx);

					if(ecx == esi) break;
				}

				ebx = D(esp+0x64);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = 0x10;
				eax += ebx;
				ebx = D(esp+0x90);
				edx = 0x126;
				ebx += eax;
				esi = D(___1a1e88h);
				ebx += 0x6b;

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

				ecx = D(esp+0x6c);
				eax = 0x280*ecx;
				D(esp+0x34) = eax;
				edi = D(esp+0x90);
				esi = D(esp+0x34);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ebx = D(esp+0x80);
				eax += esi;
				edx = 0x0a;
				eax += edi;
				ecx = 0x18;
				eax += 0x79;
				esi = D(___1a1eb4h);
				ebx += eax;

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

				edx = D(esp+0x34);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ebx = D(esp+0x90);
				eax += edx;
				eax += ebx;
				edx = D(esp+0x80);
				eax += 0x77;
				esi = D(esp+0x80);
				edx += eax;
				eax = D(esp+0x34);
				ecx = 0x18;
				eax += ebx;
				edi ^= edi;
				eax += 0x77;
				ebx = 0x0e;
				eax += esi;
				D(esp+0x88) = edi;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
			}
			break;
		case DR_SCAN_DOWN:
		case DR_SCAN_KP_2:
			if(D(esp+0xbc) != 0){

				eax = 0x1;
				edx = 0x28000;
				ecx = D(___24cc54h);
				eax1 = edx;
				ebx ^= ebx;
				edx = 0x19;
				dRally_Sound_pushEffect(eax, edx, ebx, ecx, eax1, 0x8000);
				ebx = D(esp+0x7c);

				if((int)ebx >= 0x13){

					D(esp+0x7c) = 0;
				}
				else {

					D(esp+0x7c) = ebx+0x1;
				}

				edi = D(esp+0x70);
				edx = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(esp+0x7c);
				eax += edi;
				ecx = 0x40;
				eax += edx;
				esi = D(4*esi+___19de70h);
				ebx = eax+0x1b;
				edx = ecx;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 0x4;
						esi += 0x4;
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

				edx = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = 0x40;
				eax += edi;
				ebx = ecx;
				edx += eax;
				eax = D(esp+0x60);
				edx += 0x1b;
				edi ^= edi;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);

				while(1){

					edx = D(esp+0x38);
					ebx = D(esp+0x90);
					ecx = D(esp+0x0bc);
					eax2 = edx;
					eax = D(esp+0x3c);
					edx = D(esp+0x8c);
					eax1 = ebx;
					ebx = ebp;
					edi++;
					___17384h_cdecl(eax, edx, ebx, ecx, eax1, eax2);

					if((int)edi >= 5) break;
				}

				ecx = D(esp+0x78);
				esi = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				edx = 0x44;
				eax += ecx;
				ecx = 0x10;
				eax += esi;
				esi = D(___1a1104h);
				ebx = eax+0x19;
				esi += 0x0cc0;
				edi = D(esp+0x78);
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 0x4;
						esi += 0x4;
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

				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				edx = D(esp+0x90);
				eax += edi;
				eax += edx;
				ecx = 0x10;
				edx = eax+0x19;
				ebx = 0x44;
				eax = D(esp+0x5c);
				esi ^= esi;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);

				while(1){

					ebx = D(esp+0x38);
					ecx = D(esp+0x90);
					eax2 = ebx;
					edx = D(esp+0x8c);
					eax = D(esp+0x3c);
					eax1 = ecx;
					ebx = ebp;
					ecx = D(esp+0x0bc);
					esi++;
					___17384h_cdecl(eax, edx, ebx, ecx, eax1, eax2);

					if((int)esi >= 5) break;
				}

				esi = D(esp+0x78);
				edi = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				ecx = 0x10;
				eax += esi;
				edx = 0x44;
				eax += edi;
				esi = D(___1a1104h);
				ebx = eax+0x19;
				esi += 0x440;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esi);
						D(ebx) = eax;
						ebx += 0x4;
						esi += 0x4;
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

				edx = D(esp+0x78);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				eax += edx;
				eax += edi;
				ecx = 0x10;
				edx = eax+0x19;
				ebx = 0x44;
				eax = D(esp+0x5c);
				___1398ch__VESA101_PRESENTRECTANGLE(eax, edx, ebx, ecx);
				eax = 0x6c*D(___1a1ef8h);
				esi ^= esi;
				edx = D(esp+0x7c);
				D(esp+0x88) = esi;
				D(eax+___1a01e0h+0x40) = edx;
			}
			break;
		default:
			if(B(D(esp+0x4c)+___19dd70h[D(esp+0x88)]) == 1){

				if((strlen(esp) < D(esp+0x0ac))&&((int)ebp < (int)D(esp+0xb0))){
						
					B(esp+0x94) = ___19dd70h[D(esp+0x88)];

					if((B(esp+0x94) > 0x40)&&(B(esp+0x94) < 0x5b)) B(esp+0x94) += 0x20;

					strcat(esp, esp+0x94);

					n = -1;
					while(++n < 0x20) memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x280*(n+D(esp+0x8c))+D(esp+0x3c)+ebp, 0x0c4, 0x20);

					___12e78h_cdecl(D(___1a10e0h), ___185ba9h, esp+0x94, D(esp+0x48)+ebp);

					___1398ch__VESA101_PRESENTRECTANGLE(
						D(esp+0x48)+ebp,
						D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+D(esp+0x44)+D(esp+0x3c)+ebp,
						B(B(esp+0x94)+___185ba9h-0x1e),
						0x20);

					ebp += B(B(esp+0x94)+___185ba9h-0x1e);
				}
			}
			break;
		}

		if(D(esp+0x58) != 0) break;
	}
	
	if(D(esp+0x88) != 1) strcpy(D(esp+0x40), esp);

	return 1;
}
