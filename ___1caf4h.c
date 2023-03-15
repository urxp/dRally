#include "drally.h"
#include "drally_fonts.h"
#include "drally_structs_fixed.h"
#include "drmemory.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif //DR_MULTIPLAYER

	extern __DWORD__ CONNECTION_TYPE;
	extern __POINTER__ ___1a1138h__VESA101_BACKGROUND;
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a0f9ch;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___185a5ch[];

void ___13710h(__DWORD__, __DWORD__);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
__BYTE__ ___5994ch(void);
__BYTE__ ___59b3ch(void);

__DWORD__ NovellNetWare_IPX_InstallationCheck(void);
__DWORD__ ___61cd0h(void);
void ___1123ch(void);
__POINTER__ ___3f71ch__allocateMemory(__DWORD__);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
int ___23594h_cdecl(__POINTER__, int);
void ___58c60h(void);
void ___6168ch(void);
void ___23488h_cdecl(__POINTER__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);

void dRChatbox_push(const char * line, int col);

__DWORD__ ___1caf4h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 	esp[0x68];
	char 		buffer[0x96];
	int 		i, n;
	racer_t * 	s_6c;


	if(CONNECTION_TYPE == 2){

#if defined(DR_MULTIPLAYER)
		if(NovellNetWare_IPX_InstallationCheck() == 0){

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101_BACKGROUND+0x10680, 0x28f00);
			___13710h(0, 0);
			___13710h(2, 0);
			___13248h_cdecl(0x1c, 0xc6, 0x253, 0x56, 1);
			___12e78h_v3(___1a10cch___185ba9h, "Netware IPX-protocol not loaded!", 37, 208);
			___12e78h_v3(___1a10cch___185ba9h, "Press any key to continue.", 97, 240);
			___12cb8h__VESA101_PRESENTSCREEN();
			
			___5994ch();
			___59b3ch();
			while(___5994ch() == 0);
			___5994ch();
			___59b3ch();

			return 0;
		}

		s_6c = (racer_t *)___1a01e0h;

		if(___61cd0h() == 0) ___1123ch();

		___19bd60h = 1;

		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x10680, ___1a1138h__VESA101_BACKGROUND+0x10680, 0x28f00);
		___13710h(0, 0);
		___13710h(2, 0);
		___13248h_cdecl(0x4b, 0xc6, 0x1ae, 0x38, 1);
		___12e78h_v3(___1a10cch___185ba9h, "Connection established!", 86, 208);
		___12cb8h__VESA101_PRESENTSCREEN();
		dRChatbox_push("", 0);
		dRChatbox_push("-- Connecting to Death Rally multiplayer.", 0);

		___1a0f9ch = ___3f71ch__allocateMemory(0x64);

		if(CONNECTION_TYPE == 2) ___23488h_cdecl(___1a0f9ch, 0, 7);

		i = -1;
		while(++i < 0x1e){

			___58c60h();
			___6168ch();

			if(___23594h_cdecl(___1a0f9ch, 8) != 0){

				memcpy(esp, ___1a0f9ch, 0x64);
				dRChatbox_push(esp, 0);
			}
		}

		dRMemory_free(___1a0f9ch);
		dRChatbox_push(strcat(strcat(strcpy(buffer, "-- "), s_6c[D(___1a1ef8h)].name), " has joined to Death Rally."), 0);
		___23488h_cdecl(buffer, strlen(buffer)+1, 6);
		___23230h();
		___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
		B(___185b58h) = 0;
		D(___185a5ch+0x50) = 0;
		B(___185b58h+0x12) = 1;
		B(___185b58h+0x13) = 1;
		B(___185b58h+0x14) = 0;
		B(___185b58h+0x15) = 0;
		B(___185b58h+0x16) = 0;
		B(___185b58h+0x17) = 0;

		if(CONNECTION_TYPE == 2) B(___185b58h+0x14) = 1;

		___135fch(0, 0x173, 0x27f, 0x6d);
		___12e78h_v3(___1a10fch___185c0bh, "press   to enter chat mode", 35, 365);
		___12e78h_v3(___1a1108h___185c0bh, "F1", 89, 365);
		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();
		___59b3ch();
		___5994ch();
#endif // DR_MULTIPLAYER

		return 1;
	}

	return 0;
}
