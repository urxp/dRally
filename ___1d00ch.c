#include "drally.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ ___185a58h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __DWORD__ CONNECTION_TYPE;
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___199f9ch[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b5f0h(void);
__DWORD__ ___1caf4h(void);
void ___2415ch(void);
void ___13710h(__DWORD__, __DWORD__);
__DWORD__ ___3ab5ch_cdecl(__DWORD__);
void ___61278h(void);
void ___623d4h(void);
void ___135fch(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___23230h(void);
void ___23488h_cdecl(__POINTER__, __BYTE__, __BYTE__);
void dRChatbox_push(const char * line, int col);

void ___1d00ch(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;
	int 	n;
	char 	buffer[0x96];

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		D(___185a58h) = 0;

		dRChatbox_push(strcat(strcat(strcpy(buffer, "-- "), ___1a01e0h+0x6c*D(___1a1ef8h)), " has left from Death Rally."), 0);
		___23488h_cdecl(buffer, 0x64, 6);
		dRChatbox_push("", 0);

		___135fch(0, 0x173, 0x27f, 0x6d);
		___23230h();
		___12cb8h__VESA101_PRESENTSCREEN();
		___61278h();
		___623d4h();
		strcpy(___1866b8h+0x384, "Initialize A New Game");
		B(___185b58h) = 1;
		strcpy(___1866b8h+0x3b6, "Join An Existing Game");
		B(___185b58h+0x12) = 0;
		B(___185b58h+0x13) = 0;
		B(___185b58h+0x14) = 1;
		B(___185b58h+0x15) = 1;
		B(___185b58h+0x16) = 1;
		___19bd60h = 0;
		CONNECTION_TYPE = 0;
		B(___185b58h+0x17) = 1;
		strcpy(___1866b8h+0x3e8, "Network Connection");
		___2415ch();
		___13710h(2, 1);
		___12cb8h__VESA101_PRESENTSCREEN();
		D(___1a1ef8h) = 0x13;
	}
	else {
#endif // DR_MULTIPLAYER
		___13710h(2, 0);

		if(___3ab5ch_cdecl(0) != 0){

			CONNECTION_TYPE = 2;
			D(___199f9ch) = 0;
			ecx = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x2c);
			___2415ch();
			D(___1a01e0h+0x6c*D(___1a1ef8h)+0x2c) = ecx;
			___2b5f0h();

			if(___1caf4h() != 0) strcpy(___1866b8h+0x3e8, "Disconnect Network");
		}
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER
}
