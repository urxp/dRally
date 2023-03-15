#include "drally.h"

#pragma pack(1)
typedef struct menubox_s {
	__DWORD__ 	row_n;			// +00
	__DWORD__ 	x;				// +04
	__DWORD__ 	y;				// +08
	__DWORD__ 	row_h;			// +0C
	__DWORD__ 	w;				// +10
	__DWORD__ 	h;				// +14
	__DWORD__ 	row_i;			// +18
} menubox_t;

	extern char ___1866b8h[9][9][50];
	extern __DWORD__ CONNECTION_TYPE;
	extern menubox_t ___185a5ch[9];
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196a78h[];
	extern __BYTE__ ___199f9ch[];
	extern __DWORD__ ___19bd60h;
	extern __BYTE__ ___185b58h[9][9];

void ___13710h(__DWORD__, __DWORD__);
void ___2415ch(void);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___60719h(void);
void ___63b20h(__DWORD__, __DWORD__);
__DWORD__ ___61cd0h(void);
void ___1123ch(void);
void ___623d4h(void);

void ___1e4f8h(void){

	__DWORD__ 	eax, ebx, ecx, edx, edi, esi, ebp;

	___185b58h[2][2] = 0;
	___185b58h[2][3] = 0;
	___185b58h[2][4] = 0;
	___185b58h[2][5] = 0;
	___185a5ch[2].row_i = 0;
	D(___196a84h) = 1;
	strcpy(___1866b8h[2][0], "Initialize A New Game");
	strcpy(___1866b8h[2][1], "Join An Existing Game");

	if(CONNECTION_TYPE == 2) ___185b58h[2][2] = 1;
	if(CONNECTION_TYPE == 1) ___185b58h[2][3] = 1;
	if(CONNECTION_TYPE == 3) ___185b58h[2][4] = 1;
	if(CONNECTION_TYPE == 4) ___185b58h[2][5] = 1;

	if(D(___196a78h) != 0){

		___13710h(2, 1);
		D(___196a84h) = 0;
		___2415ch();
		___12cb8h__VESA101_PRESENTSCREEN();
	}

	if(CONNECTION_TYPE == 2){

#if defined(DR_MULTIPLAYER)
		___623d4h();
		edx = D(___199f9ch);
		D(___199f9ch) = 0;

		if(___61cd0h() == 0) ___1123ch();

		if(___19bd60h != 0){

			if(CONNECTION_TYPE == 2){
			
				___60719h();
			}
		}

		if(___19bd60h != 0){
	
			if(CONNECTION_TYPE == 2){
			
				___63b20h(0, edx);
			}
		}
#endif // DR_MULTIPLAYER
	}

#if defined(DR_MULTIPLAYER)
	___19bd60h = 1;
#endif // DR_MULTIPLAYER
}
