#include "drally.h"
#include "drally_fonts.h"

	extern __BYTE__ ___19bd60h[];
	extern __BYTE__ ___199fa4h_com_port_addr[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ CONNECTION_TYPE[];
	extern __BYTE__ ___199fach[];
	extern __BYTE__ ___1a01e0h[];
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __BYTE__ ___185c0bh[];
	extern __POINTER__ ___1a1108h;
	extern __BYTE__ ___199fa0h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];


void ___12e78h_cdecl(__BYTE__ * A1, font_props_t * A2, const char * A3, __DWORD__ dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___60a84h(void);
__BYTE__ ___5994ch(void);
__DWORD__ ___60b48h(__DWORD__ A1, __DWORD__ A2);
void ___2ab50h(void);
void ___13bd4h_cdecl(__DWORD__, __DWORD__);
__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2);
void ___61278h(void);
__DWORD__ ___1caf4h(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___2415ch(void);
void ___2b5f0h(void);
__DWORD__ ___61cd0h(void);
void ___1123ch(void);
void ___1d4e8h(void);
__DWORD__ ___61b88h(__DWORD__ A1);
void ___1ca00h(__DWORD__ A1);
void ___13710h(__DWORD__, __DWORD__);
__DWORD__ ___3ab5ch_cdecl(__DWORD__);

void ___1d2a8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0xc];


	ebx = 0xc5;
	edx = 0x97;
	ecx = D(___19bd60h);
	D(esp+4) = ebx;
	D(esp) = edx;

	if(ecx == 0){

		eax = ___61b88h(D(___199fa4h_com_port_addr));
		
		if(eax != 0){

			___13710h(2, 0);
			eax = 0;
			eax = ___3ab5ch_cdecl(eax);

			if(eax != 0){

				D(CONNECTION_TYPE) = 1;
				D(___199fach) = 0x4b00;
				ebx = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x2c);
				___2415ch();
				D(___1a01e0h+0x6c*D(___1a1ef8h)+0x2c) = ebx;
				___2b5f0h();

				if(___61cd0h() == 0) ___1123ch();

				memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101_BACKGROUND+0x10680, 0x28f00);
				___13710h(0, 0);
				___13710h(2, 0);
				___13248h_cdecl(D(esp), D(esp+4), 0x14e, 0x41, 1);
				___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Waiting for remote player...", D(esp)+0x280*(D(esp+4)+0xd)+0x28);
				esi = D(esp+4)+0x13;
				edi = D(esp)+0xf;
				___12e78h_cdecl(___1a1108h, (font_props_t *)___185c0bh, "Press ESC to abort", 0x280*(D(esp+4)+0x1e)+D(esp)+0x28);
				___12cb8h__VESA101_PRESENTSCREEN();
				___60a84h();
				ecx = 0;
				ebx = 0;
				ebp = 0;

				while(1){

					if(ebp == 0xff) break;
					D(esp+8) = 0xa;
					ecx = ___5994ch();
					edx = (int)ebx>>0x1f;
					eax = ebx;
					___idiv32((__POINTER__)&eax, (__POINTER__)&edx, D(esp+8));
					if(edx == 1){
					
						ebp = ___60b48h(D(___199fa0h)+5, 2);
					}

					___2ab50h();
					___2ab50h();

					edx = esi;
					eax = edi;
					___13bd4h_cdecl(eax, edx);
					ebx++;
					if(ecx == 1) break;
				}

				if(ecx != 1)___611c0h(0, 0);

				___61278h();

				if(ecx != 1){
				
					B(___185b58h+0x18) = 0;
					___1caf4h();
					strcpy(___1866b8h+0x41a, "Disconnect Serial");
				}
			}
		}
		else {
		
			___1ca00h(0);
		}
	}
	else {
	
		___1d4e8h();
	}
}
