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
	extern byte ___185a5ch[];
	extern byte ___185b58h[];

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
#if defined(DR_MULTIPLAYER)
void ___23758h(void);
#endif // DR_MULTIPLAYER
void menu___204fch(void);
//void ___210b4h(void);
//void ___217b0h(void);
void ___59db8h(void);

void menu___218b4h(void){

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
	
	if(ebx != 0xffffffff){

		while(1){

			edx = D(___196a84h);
			if(edx) break;
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

			switch(eax){
			case 0: // MUSIC VOLUME
				___13710h(3, 0);
				___13248h_cdecl(0xd6, 0xda, 0x14a, 0x46, 1);
				___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Adjust music volume:", 0x235e0);
				ecx = 0x18;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a;
				esi = D(___1a1ea4h);

				while(1){

					edi = 0xac;

					while(1){

						if(B(esi) != 0) B(ebx) = B(esi);
						ebx++;
						esi++;
						edi--;
					
						if(edi == 0) break;
					}

					ebx += 0x280;
					ebx -= 0xac;
					ecx--;
				
					if(ecx == 0) break;
				}

				___12cb8h__VESA101_PRESENTSCREEN();

				B(esp+0x14) = 0;
				while(1){

					if((B(esp+0x14) == 0x9c)||(B(esp+0x14) == 1)||(D(___196a84h) != 0)) break;
					B(esp+0x14) = ___5994ch();
					
					if((B(esp+0x14) == 0xcb)&&((int)D(esp+0x1c) > 0)) D(esp+0x1c) -= 2;
					if((B(esp+0x14) == 0x4b)&&((int)D(esp+0x1c) > 0)) D(esp+0x1c) -= 2;
					if((B(esp+0x14) == 0xcd)&&((int)D(esp+0x1c) < 0x80)) D(esp+0x1c) += 2;
					if((B(esp+0x14) == 0x4d)&&((int)D(esp+0x1c) < 0x80)) D(esp+0x1c) += 2;

#if defined(DR_MULTIPLAYER)
					if((B(esp+0x14) == 0x3b)&&(D(___19bd60h) != 0)) ___23758h();
#endif // DR_MULTIPLAYER

					ecx = 0x26700;
					while(1){

						memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+0xdc, 0xc4, 0x113);
					
						ecx += 0x280;
						if(ecx == 0x2b200) break;
					}

					ecx = 0x18;
					ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a;
					esi = D(___1a1ea4h);

					while(1){

						edi = 0xac;

						while(1){

							if(B(esi) != 0) B(ebx) = B(esi);
							ebx++;
							esi++;
							edi--;
						
							if(edi == 0) break;
						}

						ebx += 0x280;
						ebx -= 0xac;
						ecx--;
					
						if(ecx == 0) break;
					}

					ecx = 0x18;
					esi = D(___1a1ebch);
					ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a+D(esp+0x1c)+0xf;

					while(1){

						edi = 0xa;
					
						while(1){

							if(B(esi) != 0) B(ebx) = B(esi);
							ebx++;
							esi++;
							edi--;
						
							if(edi == 0) break;
						}

						ebx += 0x280;
						ebx -= 0xa;
						ecx--;
					
						if(ecx == 0) break;
					}

					___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x1c)+0x27247, D(esp+0x1c)+D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a+0xd, 0xe, 0x18);
					eax = ___1f094h_cdecl(strcat(itoa_watcom106(0x64*D(esp+0x1c)/0x80, esp, 0xa), "%"));
					___12e78h_cdecl(D(___1a10cch), ___185ba9h, esp, 0x265b5-eax);
					___1398ch__VESA101_PRESENTRECTANGLE(0x26560, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x26560, 0x78, 0x20);
					dRally_Sound_setMusicVolume(0x200*D(esp+0x1c));
					___2ab50h();
				
					if(B(esp+0x14) == 0x1c) break;
				}

				D(___24cc58h) = 0x200*D(esp+0x1c);
				dRally_Sound_pushEffect(1, 0x16, 0, D(___24cc54h), D(___1854b8h), 0x8000);
				break;
			case 1: // EFFECT VOLUME
				___13710h(3, 0);
				___13248h_cdecl(0xd6, 0xda, 0x14a, 0x46, 1);
				___12e78h_cdecl(D(___1a1108h), ___185c0bh, "Adjust effect volume:", 0x235e0);
				ecx = 0x18;
				ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a;
				esi = D(___1a1ea4h);

				while(1){

					edi = 0xac;

					while(1){

						if(B(esi) != 0) B(ebx) = B(esi);
						ebx++;
						esi++;
						edi--;
					
						if(edi == 0) break;
					}

					ebx += 0x280;
					ebx -= 0xac;
					ecx--;
				
					if(ecx == 0) break;
				}

				___12cb8h__VESA101_PRESENTSCREEN();

				B(esp+0x14) = 0;
				while(1){

					if((B(esp+0x14) == 0x9c)||(B(esp+0x14) == 1)||(D(___196a84h) != 0)) break;
					B(esp+0x14) = ___5994ch();

					if((B(esp+0x14) == 0xcb)&&((int)D(esp+0x18) > 0)) D(esp+0x18) -= 2;
					if((B(esp+0x14) == 0x4b)&&((int)D(esp+0x18) > 0)) D(esp+0x18) -= 2;
					if((B(esp+0x14) == 0xcd)&&((int)D(esp+0x18) < 0x80)) D(esp+0x18) += 2;
					if((B(esp+0x14) == 0x4d)&&((int)D(esp+0x18) < 0x80)) D(esp+0x18) += 2;

#if defined(DR_MULTIPLAYER)
					if((B(esp+0x14) == 0x3b)&&(D(___19bd60h) != 0)) ___23758h();
#endif // DR_MULTIPLAYER

					ecx = 0x26700;
					while(1){

						memset(D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+ecx+0xdc, 0xc4, 0x113);
					
						ecx += 0x280;
						if(ecx == 0x2b200) break;
					}

					ecx = 0x18;
					ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a;
					esi = D(___1a1ea4h);

					while(1){

						edi = 0xac;

						while(1){

							if(B(esi) != 0) B(ebx) = B(esi);
							ebx++;
							esi++;
							edi--;
						
							if(edi == 0) break;
						}

						ebx += 0x280;
						ebx -= 0xac;
						ecx--;
					
						if(ecx == 0) break;
					}

					ecx = 0x18;
					esi = D(___1a1ebch);
					ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a+D(esp+0x18)+0xf;

					while(1){

						edi = 0xa;

						while(1){

							if(B(esi) != 0) B(ebx) = B(esi);
							ebx++;
							esi++;
							edi--;
						
							if(edi == 0) break;
						}

						ebx += 0x280;
						ebx -= 0xa;
						ecx--;
					
						if(ecx == 0) break;
					}

					___1398ch__VESA101_PRESENTRECTANGLE(D(esp+0x18)+0x27247, D(esp+0x18)+D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x2723a+0xd, 0xe, 0x18);
					eax = ___1f094h_cdecl(strcat(itoa_watcom106(0x64*D(esp+0x18)/0x80, esp, 0xa), "%"));
					___12e78h_cdecl(D(___1a10cch), ___185ba9h, esp, 0x265b5-eax);
					___1398ch__VESA101_PRESENTRECTANGLE(0x26560, D(___1a112ch__VESA101_ACTIVESCREEN_PTR)+0x26560, 0x78, 0x20);
					dRally_Sound_setEffectsVolume(0x200*D(esp+0x18));
					___2ab50h();
				
					if(B(esp+0x14) == 0x1c) break;
				}

				D(___24cc54h) = 0x200*D(esp+0x18);
				dRally_Sound_pushEffect(1, 0x16, 0, D(___24cc54h), D(___1854b8h), 0x8000);
				break;
			case 2: // DEFINE KEYBOARD
				menu___204fch();
				break;
			case 3:	// DEFINE GAMEPAD/JOYSTICK
				//___210b4h();
				break;
			case 4: // GAMEPAD/JOYSTICK
			/*
				D(___19bd58h) = !D(___19bd58h);

				if(D(___19bd58h) == 1){

					___59db8h();

					if(D(___19bd58h) == 0) ___217b0h();
					
					___596f0h();
					strcpy(___1866b8h+0x60e, "Gamepad/Joystick Enabled");
					B(___185b58h+3*9+3) = 1;
				}

				if(D(___19bd58h) == 0){
					
					B(___185b58h+3*9+3) = 0;
					strcpy(___1866b8h+0x60e, "Gamepad/Joystick Disabled");
				}
			*/
				break;
			case 5:
				D(esp+0xc) = 0xffffffff;
				D(___185a5ch+0x6c) = 0;

				while(B(D(___185a5ch+0x6c)+___185b58h+0x1b) == 0){

					if((int)D(___185a5ch+0x6c) >= (int)(D(___185a5ch+0x54)-1)){

						D(___185a5ch+0x6c) = 0;
					}
					else {

						D(___185a5ch+0x6c)++;
					}
				}
				break;
			default:
				break;
			}

			if(D(esp+0xc) == 0xffffffff) break;
		}
	}

	CONFIG_WRITE();
}
