#include "drally.h"
#include "sfx.h"

	extern byte ___199f54h[];
	extern byte ___196b24h[];
	extern byte ___185a14h_UseWeapons[];
	extern byte ___1a1ef8h[];
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e80h;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___196aa4h[];
	extern void * ___1a1e84h;
	extern byte ___1a1028h[];
	extern byte ___1a0ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___196aa8h[];
	extern byte ___196aach[];
	extern byte ___1a1ff1h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void dRally_Sound_freeEffectChannel(byte ch_num);
int ___148cch_cdecl(int x, int y, dword A3, int * A4);
int rand_watcom106(void);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);

dword ___31868h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x54];
	void * 	ebxp;
	void * 	esip;
	int 	rslt;


	rslt = 0;

	if(D(___199f54h) == 0){

		eax = rand_watcom106();
		edx = (int)eax>>0x1f;
		___idiv32(&eax, &edx, 0x64);
		rslt = 1;

		if(((int)edx >= (int)D(___196b24h))||(D(___185a14h_UseWeapons) == 0)){

			if((int)D(___196b24h) < 0x61) D(___196b24h) += 2;
		}
		else {

			D(___196b24h) = 5;
			eax = rand_watcom106();
			edx = (int)eax>>0x1f;
			___idiv32(&eax, &edx, 0x64);
		
			if((int)edx >= 0x32){

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 5){

					D(esp+0x48) = 1;
					strcpy(esp+0x34, "6000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 4){

					D(esp+0x48) = 2;
					strcpy(esp+0x34, "4000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 3){
						
					D(esp+0x48) = 3;
					strcpy(esp+0x34, "3000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 2){

					D(esp+0x48) = 4;
					strcpy(esp+0x34, "2000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 1){

					D(esp+0x48) = 5;
					strcpy(esp+0x34, "1000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 0){

					D(esp+0x48) = 6;
					strcpy(esp+0x34, "500");
				}

				___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);
				esip = ___1a1e84h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x25)+0x21+0xc;

				ecx = 0x80;
				while(1){

					edi = 0x68;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;
						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= 0x68;
					ecx--;
					if(ecx == 0) break;
				}

				___13094h_cdecl("[Wanna be my hitman, driver?", 0x280*(0x83+0x25)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0x35)+0x21+0x80);
				___13094h_cdecl("Wanna get rich, tough guy? OK.", 0x280*(0x83+0x45)+0x21+0x80);
				___13094h_cdecl("[Here's the deal{. I have put some", 0x280*(0x83+0x55)+0x21+0x80);
				___13094h_cdecl("major funds on this race, betting", 0x280*(0x83+0x65)+0x21+0x80);

				edx = 0;
				while(1){

					eax = rand_watcom106();
					edx = (int)eax>>0x1f;
					___idiv32(&eax, &edx, 4);
					eax = B(___1a0ef8h+4*D(___1a1028h)+edx);
					if(eax != D(___1a1ef8h)) break;
				}

				ebp = edx;

				strcpy(esp, "that [");
				strcat(esp, ___1a01e0h+0x6c*B(___1a0ef8h+4*D(___1a1028h)+edx));
				strcat(esp, " won't reach the");
				___13094h_cdecl(esp, 0x280*(0x83+0x75)+0x21+0x80);
				___13094h_cdecl("[finish line{. Make me right, and", 0x280*(0x83+0x85)+0x21+0x80);
				strcpy(esp, "[it'll pay you $");
				strcat(esp, esp+0x34);
				strcat(esp, ".");
				___13094h_cdecl(esp, 0x280*(0x83+0x95)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0xa5)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0xb5)+0x21+0x80);
				___12cb8h__VESA101_PRESENTSCREEN();

				edx = 0;
				while(1){

					edx++;
					___2ab50h();
					if((int)edx >= 0x32) break;
				}

				dRally_Sound_pushEffect(5, SFX_SPECIAL_OFFER, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);

				edx = 0;
				while(1){

					edx++;
					___2ab50h();
					if((int)edx >= 0x14) break;
				}

				D(esp+0x40) = 1;
				___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, esp+0x40);
			
				if(D(esp+0x40) == 1){

					D(___196aa8h) = D(esp+0x48);
					D(___196aach) = B(___1a0ef8h+ebp+4*D(___1a1028h));
					strcpy(___1a1ff1h, ___1a01e0h+0x6c*D(___196aach));
				}
			}
			else {
					
				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 5){

					D(esp+0x48) = 1;
					strcpy(esp+0x34, "12000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 4){

					D(esp+0x48) = 2;
					strcpy(esp+0x34, "8000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 3){

					D(esp+0x48) = 3;
					strcpy(esp+0x34, "6000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 2){

					D(esp+0x48) = 4;
					strcpy(esp+0x34, "4000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 1){

					D(esp+0x48) = 5;
					strcpy(esp+0x34, "2000");
				}

				if(D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c) == 0){

					D(esp+0x48) = 6;
					strcpy(esp+0x34, "1000");
				}

				___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);
				esip = ___1a1e80h;
				ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x280*(0x83+0x25)+0x21+0xc;

				ecx = 0x80;
				while(1){

					edi = 0x68;

					while(1){

						L(eax) = B(esip);
						if(L(eax) != 0) B(ebxp) = L(eax);
						ebxp++;
						esip++;
						edi--;
						if(edi == 0) break;
					}

					ebxp += 0x280;
					ebxp -= 0x68;
					ecx--;
					if(ecx == 0) break;
				}

				___13094h_cdecl("[A slick steroid run, anyone?", 0x280*(0x83+0x25)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0x35)+0x21+0x80);
				strcpy(esp, "[Extra $");
				strcat(esp, esp+0x34);
				strcat(esp, "{, anyone? You? This is");
				___13094h_cdecl(esp, 0x280*(0x83+0x45)+0x21+0x80);
				___13094h_cdecl("easy as shifting gears 1-2-3.", 0x280*(0x83+0x55)+0x21+0x80);
				___13094h_cdecl("[Just pick up some pills along the", 0x280*(0x83+0x65)+0x21+0x80);
				___13094h_cdecl("[way, and get them to the finish", 0x280*(0x83+0x75)+0x21+0x80);
				___13094h_cdecl("[line before things get crowded{, be", 0x280*(0x83+0x85)+0x21+0x80);
				___13094h_cdecl("first, like, floor it, like.", 0x280*(0x83+0x95)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0xa5)+0x21+0x80);
				___13094h_cdecl("", 0x280*(0x83+0xb5)+0x21+0x80);
				___12cb8h__VESA101_PRESENTSCREEN();
			
				edx = 0;
				while(1){

					edx++;
					___2ab50h();
					if((int)edx >= 0x32) break;
				}

				dRally_Sound_pushEffect(5, SFX_SPECIAL_OFFER, 0, ___24cc54h_sfx_volume, 0x24000, 0x8000);

				edx = 0;
				while(1){

					edx++;
					___2ab50h();
					if((int)edx >= 0x14) break;
				}

				D(esp+0x40) = 1;
				___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, esp+0x40);

				if(D(esp+0x40) == 1) D(___196aa4h) = D(esp+0x48);
			}
		
			dRally_Sound_freeEffectChannel(5);
			rslt = 1;
		}
	}
	
	return rslt;
}
