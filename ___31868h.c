#include "drally.h"
#include "drally_fonts.h"
#include "sfx.h"

	extern __BYTE__ ___196b24h[];
	extern __BYTE__ ___185a14h_UseWeapons[];
	extern __BYTE__ ___1a1ef8h[];
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e80h;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern __BYTE__ ___196aa4h[];
	extern __POINTER__ ___1a1e84h;
	extern __BYTE__ ___1a1028h[];
	extern __BYTE__ ___1a0ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196aa8h[];
	extern __BYTE__ ___196aach[];
	extern __BYTE__ ___1a1ff1h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2ab50h(void);
void dRally_Sound_pushEffect(__BYTE__ channel, __BYTE__ n, __DWORD__ unk, __DWORD__ a0, __DWORD__ a1, __DWORD__ a2);
void dRally_Sound_freeEffectChannel(__BYTE__ ch_num);
int ___148cch_cdecl(int x, int y, __DWORD__ A3, int * A4);
int rand_watcom106(void);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

__DWORD__ ___31868h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x54];
	__POINTER__ 	ebxp;
	__POINTER__ 	esip;
	int 	rslt;


	rslt = 0;

	eax = rand_watcom106();
	edx = (int)eax>>0x1f;
	___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x64);
	rslt = 1;

	if(((int)edx >= (int)D(___196b24h))||(D(___185a14h_UseWeapons) == 0)){

		if((int)D(___196b24h) < 0x61) D(___196b24h) += 2;
	}
	else {

		D(___196b24h) = 5;
		eax = rand_watcom106();
		edx = (int)eax>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0x64);
	
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

			VESA101_16X16_FORMAT_PRINT("[Wanna be my hitman, driver?", 161, 168);
			VESA101_16X16_FORMAT_PRINT("", 161, 184);
			VESA101_16X16_FORMAT_PRINT("Wanna get rich, tough guy? OK.", 161, 200);
			VESA101_16X16_FORMAT_PRINT("[Here's the deal{. I have put some", 161, 216);
			VESA101_16X16_FORMAT_PRINT("major funds on this race, betting", 161, 232);

			edx = 0;
			while(1){

				eax = rand_watcom106();
				edx = (int)eax>>0x1f;
				___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 4);
				eax = B(___1a0ef8h+4*D(___1a1028h)+edx);
				if(eax != D(___1a1ef8h)) break;
			}

			ebp = edx;
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "that ["), ___1a01e0h+0x6c*B(___1a0ef8h+4*D(___1a1028h)+edx)), " won't reach the"), 161, 248);
			VESA101_16X16_FORMAT_PRINT("[finish line{. Make me right, and", 161, 264);
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[it'll pay you $"), esp+0x34), "."), 161, 280);
			VESA101_16X16_FORMAT_PRINT("", 161, 296);
			VESA101_16X16_FORMAT_PRINT("", 161, 312);
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
			___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, (int *)(esp+0x40));
		
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

			VESA101_16X16_FORMAT_PRINT("[A slick steroid run, anyone?", 161, 168);
			VESA101_16X16_FORMAT_PRINT("", 161, 184);
			VESA101_16X16_FORMAT_PRINT(strcat(strcat(strcpy(esp, "[Extra $"), esp+0x34), "{, anyone? You? This is"), 161, 200);
			VESA101_16X16_FORMAT_PRINT("easy as shifting gears 1-2-3.", 161, 216);
			VESA101_16X16_FORMAT_PRINT("[Just pick up some pills along the", 161, 232);
			VESA101_16X16_FORMAT_PRINT("[way, and get them to the finish", 161, 248);
			VESA101_16X16_FORMAT_PRINT("[line before things get crowded{, be", 161, 264);
			VESA101_16X16_FORMAT_PRINT("first, like, floor it, like.", 161, 280);
			VESA101_16X16_FORMAT_PRINT("", 161, 296);
			VESA101_16X16_FORMAT_PRINT("", 161, 312);
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
			___148cch_cdecl(0x21+0x80, 0x83+0xbe, 0, (int *)(esp+0x40));

			if(D(esp+0x40) == 1) D(___196aa4h) = D(esp+0x48);
		}
	
		dRally_Sound_freeEffectChannel(5);
		rslt = 1;
	}
	
	return rslt;
}
