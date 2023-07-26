#include "drally.h"
#include "drally_keyboard.h"
#include "drally_structs_fixed.h"
#include "sfx.h"

#pragma pack(1)
typedef struct font_props_s {
	__BYTE__ 	w;
	__BYTE__ 	h;
	__BYTE__ 	props[];
} font_props_t;

	extern char ___19dd70h[0x100];
	extern __BYTE__ ___185ba9h[];
	extern __POINTER__ ___1a10e0h;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __POINTER__ ___19de70h[20];
	extern __POINTER__ ___1a1104h;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a0fb8h;
	extern __POINTER__ ___1a1e88h;
	extern __POINTER__ ___1a1eb4h;

void ___1398ch__VESA101_PRESENTRECTANGLE(__DWORD__ offset, __POINTER__ src, __DWORD__ w, __DWORD__ h);
void ___17384h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___11378h_cdecl_float(float A1, float A2, float A3);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
__BYTE__ ___5994ch(void);
void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);

__DWORD__ ___17510h_cdecl(__POINTER__ A1, __DWORD__ A2, __DWORD__ A3, __POINTER__ A4, __DWORD__ A5, __DWORD__ A6, __DWORD__ A7, __DWORD__ A8, __DWORD__ A9){

	int 	n;
	__DWORD__ 	eax, eax1, eax2, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x9c+0xc+4+0x14];
	int 	i, j;
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	racer_t * 		s_6c;


	s_6c = (racer_t *)___1a01e0h;
	//D(esp+0x40) = A1;
	D(esp+0x3c) = A2;
	D(esp+0x8c) = A3;
	//D(esp+0x4c) = A4;
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
	___12e78h_cdecl(___1a10e0h, (font_props_t *)___185ba9h, strcpy(esp, A1), D(esp+0x3c)+0x280*D(esp+0x8c));
	ebp = 0;
	ebx = 0;

	if(ebx < strlen(esp)){

		while(1){

			ebp += B(B(esp+ebx)+___185ba9h-0x1e);

			ebx++;
			if(ebx >= strlen(esp)) break;
		}
	}

	___1398ch__VESA101_PRESENTRECTANGLE(0x280*D(esp+0x8c)+D(esp+0x3c), D(esp+0x3c)+___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*D(esp+0x8c), ebp, 0x20);
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
			ecx = strlen(esp);

			if(ecx > 0){

				ecx = strlen(esp);
				eax = 0;
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

					ecx = strlen(esp);
					eax = B(esp+ecx-1);
					ebx = B(eax+___185ba9h-0x1e);
					edi = D(esp+0x3c);
					memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+ebp, 0x0c4, ebx+0x14);

					esi += 0x280;
					if(esi == D(esp+0x84)) break;
				}

				esi = D(esp+0x3c);
				ecx = strlen(esp);
				eax = B(esp+ecx-1);
				ecx = D(esp+0x54);
				ebx = B(eax+___185ba9h-0x1e);
				eax = D(esp+0x50);
				ebx = ebx+0x14;
				eax = eax+ebp;
				___1398ch__VESA101_PRESENTRECTANGLE(eax, ___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+esi+ebp, ebx, 0x20);
				ecx = strlen(esp);
				B(esp+ecx-1) = 0;
			}
			break;
		case DR_SCAN_ENTER:
		case DR_SCAN_KP_ENTER:
			ecx = strlen(esp);

			if(ecx > 0) D(esp+0x58) = 0xffffffff;

			if(D(esp+0xbc) != 0){

				eax = 0x6c*D(___1a1ef8h);
				edx = D(esp+0x7c);
				s_6c[eax/0x6c].face = edx;
			}

			if(D(esp+0xbc) != 0){
			
				eax = 0x6c*D(___1a1ef8h);
				edx = D(esp+0x80);
				s_6c[eax/0x6c].color = edx;
			}
			break;
		case DR_SCAN_F1:
#if defined(DR_MULTIPLAYER)
			if((D(esp+0xb4) != 0)&&(___19bd60h != 0)) ___23758h();
#endif // DR_MULTIPLAYER
			break;
		case DR_SCAN_UP:
		case DR_SCAN_KP_8:
			if(D(esp+0xbc) != 0){

				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);

				if((int)D(esp+0x7c) <= 0){
				
					D(esp+0x7c) = 0x13;
				}
				else {

					D(esp+0x7c)--;
				}

				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x70)+D(esp+0x90)+0x1b;

				j = -1;
				while(++j < 0x40){

					i = -1;
					while(++i < 0x40) B(ebxp+0x280*j+i) = B(___19de70h[D(esp+0x7c)]+0x40*j+i);
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x60), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x70)+D(esp+0x90)+0x1b, 0x40, 0x40);

				esi = 0;
				while(1){

					___17384h_cdecl(D(esp+0x3c), D(esp+0x8c), ebp, D(esp+0x0bc), D(esp+0x90), D(esp+0x38));

					esi++;
					if((int)esi >= 5) break;
				}

				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x74)+D(esp+0x90)+0x19;

				j = -1;
				while(++j < 0x10){

					i = -1;
					while(++i < 0x44) B(ebxp+0x280*j+i) = B(___1a1104h+0x880+0x44*j+i);
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x68), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x74)+D(esp+0x90)+0x19, 0x44, 0x10);

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
				ecx = 0x10;
				edx = 0x44;
				esip = ___1a1104h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+0x19;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esip);
						D(ebxp) = eax;
						ebxp += 0x4;
						esip += 0x4;
						H(ecx)--;
						
						if(H(ecx) == 0) break;
					}

					ebxp += 0x280;
					L(edx) <<= 2;
					ebxp -= edx;
					L(edx) >>= 2;
					L(ecx)--;

					if(L(ecx) == 0) break;
				}

				edx = D(esp+0x74);
				ecx = 0x10;
				ebx = 0x44;
				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x68), ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+edi+0x19, ebx, ecx);
				eax = 0x6c*D(___1a1ef8h);
				esi = 0;
				edx = D(esp+0x7c);
				D(esp+0x88) = esi;
				s_6c[eax/0x6c].face = edx;
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
				ebx = 3*ebx;
				ebxp = ___1a0fb8h+ebx;
				esi = 0x280*D(esp+0x6c);
				edi = 0x0c4;
				___11378h_cdecl_float((float)B(ebxp), (float)B(ebxp+1), (float)B(ebxp+2));
				ecx = esi;
				esi += 0x3c00;

				while(1){

					memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+D(esp+0x90)+0x65, edi, 0x126);

					ecx += 0x280;
					if(ecx == esi) break;
				}

				ebx = D(esp+0x64);
				ecx = D(esp+0x90);
				edx = 0x126;
				esip = ___1a1e88h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+ecx+0x6b;
				ecx = 0x10;

				while(1){

					edi = edx;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;

						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					ecx--;

					if(ecx == 0) break;
				}

				esi = D(esp+0x6c);
				eax = 0x280*esi;
				D(esp+0x34) = eax;
				edx = D(esp+0x90);
				edi = D(esp+0x34);
				ebx = D(esp+0x80);
				ecx = 0x18;
				esip = ___1a1eb4h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+edx+ebx+0x79;
				edx = 0x0a;

				while(1){

					edi = edx;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;

						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					ecx--;

					if(ecx == 0) break;
				}

				ebx = D(esp+0x34);
				ecx = D(esp+0x90);
				edx = D(esp+0x80);
				edi = D(esp+0x80);
				___1398ch__VESA101_PRESENTRECTANGLE(ebx+ecx+0x77+edi, ___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+ecx+edx+0x77, 0x0e, 0x18);
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
				ebx = 3*ebx;
				ebxp = ___1a0fb8h+ebx;
				___11378h_cdecl_float((float)B(ebxp), (float)B(ebxp+1), (float)B(ebxp+2));
				esi = 0x280*D(esp+0x6c);
				ecx = esi;
				esi += 0x3c00;

				while(1){

					memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+D(esp+0x90)+0x65, 0x0c4, 0x126);

					ecx += 0x280;
					if(ecx == esi) break;
				}

				ebx = D(esp+0x64);
				ecx = 0x10;
				edx = 0x126;
				esip = ___1a1e88h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ebx+D(esp+0x90)+0x6b;

				while(1){

					edi = edx;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;

						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					ecx--;

					if(ecx == 0) break;
				}

				ecx = D(esp+0x6c);
				eax = 0x280*ecx;
				D(esp+0x34) = eax;
				edi = D(esp+0x90);
				esi = D(esp+0x34);
				ebx = D(esp+0x80);
				edx = 0x0a;
				ecx = 0x18;
				esip = ___1a1eb4h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+0x79+ebx;

				while(1){

					edi = edx;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;

						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= edx;
					ecx--;

					if(ecx == 0) break;
				}

				ebx = D(esp+0x90);
				esi = D(esp+0x80);
				eax = D(esp+0x34)+ebx;
				edi = 0;
				D(esp+0x88) = edi;
				___1398ch__VESA101_PRESENTRECTANGLE(eax+0x77+esi, ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x34)+ebx+D(esp+0x80)+0x77, 0x0e, 0x18);
			}
			break;
		case DR_SCAN_DOWN:
		case DR_SCAN_KP_2:
			if(D(esp+0xbc) != 0){

				dRally_Sound_pushEffect(1, SFX_CLICK_2, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
				ebx = D(esp+0x7c);

				if((int)ebx >= 0x13){

					D(esp+0x7c) = 0;
				}
				else {

					D(esp+0x7c) = ebx+0x1;
				}

				edi = D(esp+0x70);
				edx = D(esp+0x90);
				esi = D(esp+0x7c);
				ecx = 0x40;
				esip = ___19de70h[esi];
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+edx+0x1b;
				edx = ecx;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esip);
						D(ebxp) = eax;
						ebxp += 0x4;
						esip += 0x4;
						H(ecx)--;

						if(H(ecx) == 0) break;
					}

					ebxp += 0x280;
					L(edx) <<= 2;
					ebxp -= edx;
					L(edx) >>= 2;
					L(ecx)--;

					if(L(ecx) == 0) break;
				}

				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x60), ___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x90)+edi+0x1b, 0x40, 0x40);

				edi = 0;
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
				edx = 0x44;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+ecx+esi+0x19;
				ecx = 0x10;
				esip = ___1a1104h+0x0cc0;
				edi = D(esp+0x78);
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esip);
						D(ebxp) = eax;
						ebxp += 0x4;
						esip += 0x4;
						H(ecx)--;
						if(H(ecx) == 0) break;
					}

					ebxp += 0x280;
					L(edx) <<= 2;
					ebxp -= edx;
					L(edx) >>= 2;
					L(ecx)--;

					if(L(ecx) == 0) break;
				}

				esi = 0;
				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x5c), ___1a112ch__VESA101_ACTIVESCREEN_PTR+edi+D(esp+0x90)+0x19, 0x44, 0x10);

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
				ecx = 0x10;
				edx = 0x44;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+esi+edi+0x19;
				esip = ___1a1104h+0x440;
				L(edx) >>= 2;

				while(1){

					H(ecx) = L(edx);

					while(1){

						eax = D(esip);
						D(ebxp) = eax;
						ebxp += 0x4;
						esip += 0x4;
						H(ecx)--;
						if(H(ecx) == 0) break;
					}

					ebxp += 0x280;
					L(edx) <<= 2;
					ebxp -= edx;
					L(edx) >>= 2;
					L(ecx)--;

					if(L(ecx) == 0) break;
				}

				edx = D(esp+0x78);
				ecx = 0x10;
				ebx = 0x44;
				___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x5c), ___1a112ch__VESA101_ACTIVESCREEN_PTR+edx+edi+0x19, ebx, ecx);
				eax = 0x6c*D(___1a1ef8h);
				esi = 0;
				edx = D(esp+0x7c);
				D(esp+0x88) = esi;
				s_6c[eax/0x6c].face = edx;
			}
			break;
		default:
			if(B(A4+___19dd70h[D(esp+0x88)]) == 1){

				if((strlen(esp) < D(esp+0x0ac))&&((int)ebp < (int)D(esp+0xb0))){
						
					B(esp+0x94) = ___19dd70h[D(esp+0x88)];

					if((B(esp+0x94) > 0x40)&&(B(esp+0x94) < 0x5b)) B(esp+0x94) += 0x20;

					strcat(esp, esp+0x94);

					n = -1;
					while(++n < 0x20) memset(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(n+D(esp+0x8c))+D(esp+0x3c)+ebp, 0x0c4, 0x20);

					___12e78h_cdecl(___1a10e0h, (font_props_t *)___185ba9h, esp+0x94, D(esp+0x48)+ebp);

					___1398ch__VESA101_PRESENTRECTANGLE(
						D(esp+0x48)+ebp,
						___1a112ch__VESA101_ACTIVESCREEN_PTR+D(esp+0x44)+D(esp+0x3c)+ebp,
						B(B(esp+0x94)+___185ba9h-0x1e),
						0x20);

					ebp += B(B(esp+0x94)+___185ba9h-0x1e);
				}
			}
			break;
		}

		if(D(esp+0x58) != 0) break;
	}
	
	if(D(esp+0x88) != 1) strcpy(A1, esp);

	return 1;
}
