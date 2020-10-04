#include "drally.h"
#include "drally_keyboard.h"

	extern byte ___19dd70h[];
	extern byte ___19dd90h[];
	extern byte ___19dd8eh[];
	extern byte ___19dda0h[];
	extern byte ___19dd91h[];
	extern byte ___19dd82h[];
	extern byte ___19dd9eh[];
	extern byte ___19dd92h[];
	extern byte ___19dd93h[];
	extern byte ___19dd96h[];
	extern byte ___19dd87h[];
	extern byte ___19dd94h[];
	extern byte ___19dda1h[];
	extern byte ___19dda2h[];
	extern byte ___19dd95h[];
	extern byte ___19dd88h[];
	extern byte ___19dd89h[];
	extern byte ___19dd84h[];
	extern byte ___19dd80h[];
	extern byte ___19dd83h[];
	extern byte ___19dd9fh[];
	extern byte ___19dd86h[];
	extern byte ___19dd8fh[];
	extern byte ___19dd81h[];
	extern byte ___19dd9dh[];
	extern byte ___19dd73h[];
	extern byte ___19dd85h[];
	extern byte ___19dd9ch[];
	extern byte ___19dd75h[];
	extern byte ___19dd74h[];
	extern byte ___19dd72h[];
	extern byte ___19dd76h[];
	extern byte ___19dd77h[];
	extern byte ___19dd7bh[];
	extern byte ___19dd78h[];
	extern byte ___19dd79h[];
	extern byte ___19dd7dh[];
	extern byte ___19dd7ch[];
	extern byte ___19dd7ah[];
	extern byte ___19dda3h[];
	extern byte ___19dda4h[];
	extern byte ___19dda9h[];
	extern byte ___19dda5h[];
	extern byte ___185ba9h[];
	extern byte ___1a10e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___19bd60h[];
	extern byte ___1854ach[];
	extern byte ___24cc54h[];
	extern byte ___19de70h[];
	extern byte ___1a1104h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0220h[];
	extern byte ___1a0fb8h[];
	extern byte ___1a1e88h[];
	extern byte ___1a1eb4h[];
	extern byte ___1a020ch[];

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
	B(___19dd90h) = 0x44;
	B(___19dd8eh) = 0x41;
	B(___19dda0h) = 0x42;
	B(___19dd91h) = 0x46;
	B(___19dd82h) = 0x45;
	B(___19dd9eh) = 0x43;
	B(___19dd92h) = 0x47;
	B(___19dd93h) = 0x48;
	B(___19dd96h) = 0x4c;
	B(___19dd87h) = 0x49;
	B(___19dd94h) = 0x4a;
	B(___19dda1h) = 0x4e;
	B(___19dda2h) = 0x4d;
	B(___19dd95h) = 0x4b;
	B(___19dd88h) = 0x4f;
	B(___19dd89h) = 0x50;
	B(___19dd84h) = 0x54;
	B(___19dd80h) = 0x51;
	B(___19dd83h) = 0x52;
	B(___19dd9fh) = 0x56;
	B(___19dd86h) = 0x55;
	B(___19dd8fh) = 0x53;
	B(___19dd81h) = 0x57;
	B(___19dd9dh) = 0x58;
	B(___19dd73h) = 0x32;
	B(___19dd85h) = 0x59;
	B(___19dd9ch) = 0x5a;
	B(___19dd75h) = 0x34;
	B(___19dd74h) = 0x33;
	B(___19dd72h) = 0x31;
	B(___19dd76h) = 0x35;
	B(___19dd77h) = 0x36;
	B(___19dd7bh) = 0x30;
	B(___19dd78h) = 0x37;
	B(___19dd79h) = 0x38;
	B(___19dd7dh) = 0x3d;
	B(___19dd7ch) = 0x2d;
	B(___19dd7ah) = 0x39;
	B(___19dda3h) = 0x2c;
	B(___19dda4h) = 0x2e;
	B(___19dda9h) = 0x20;
	B(___19dda5h) = 0x2f;
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
				D(eax+___1a0220h) = edx;
			}

			if(D(esp+0xbc) != 0){
			
				eax = 0x6c*D(___1a1ef8h);
				edx = D(esp+0x80);
				D(eax+___1a020ch) = edx;
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

				dRally_Sound_pushEffect(1, 0x19, 0, D(___24cc54h), D(___1854ach), 0x8000);

				if((int)D(esp+0x7c) <= 0){
				
					D(esp+0x7c) = 0x13;
				}
				else {

					D(esp+0x7c)--;
				}

				ecx = D(esp+0x70);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				esi = D(esp+0x90);
				eax += ecx;
				ecx = 0x40;
				eax += esi;
				esi = D(esp+0x7c);
				ebx = eax+0x1b;
				edx = ecx;
				esi = D(4*esi+___19de70h);
				edi = D(esp+0x70);
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
				ecx = 0x40;
				edx = eax+0x1b;
				ebx = ecx;
				eax = D(esp+0x60);
				esi ^= esi;
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
					esi++;
					___17384h_cdecl(eax, edx, ebx, ecx, eax1, eax2);

					if((int)esi >= 5) break;
				}

				ecx = D(esp+0x74);
				esi = D(esp+0x90);
				eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
				edx = 0x44;
				eax += ecx;
				ecx = 0x10;
				eax += esi;
				esi = D(___1a1104h);
				ebx = eax+0x19;
				esi += 0x880;
				edi = D(esp+0x74);
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
				eax = D(esp+0x68);
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
				D(eax+___1a0220h) = edx;
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
				edx = D(___1854ach);
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
				D(eax+___1a0220h) = edx;
			}
			break;
		default:
			if(B(D(esp+0x4c)+B(D(esp+0x88)+___19dd70h)) == 1){

				if((strlen(esp) < D(esp+0x0ac))&&((int)ebp < (int)D(esp+0xb0))){
						
					B(esp+0x94) = B(D(esp+0x88)+___19dd70h);

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
