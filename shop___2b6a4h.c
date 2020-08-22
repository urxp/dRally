#include "drally.h"

#define COOXY(x,y) (0x280*(y)+(x))

	extern byte ___19bd60h[];
	extern byte * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___1a10bch[];
	extern byte ___1a10e8h[];
	extern byte ___185a3ch[];
	extern byte ___196a98h[];
	extern byte ___196a9ch[];
	extern byte ___196aa0h[];
	extern byte ___196aa4h[];
	extern byte ___196aa8h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a0218h[];


void ___27f80h_cdecl(dword, dword, dword, dword);
void ___25a74h(void);
void ___25e40h(void);
void ___262b4h(void);
void ___26650h(void);
void ___269e4h(void);
void ___26e54h(void);
void ___25330h(void);

void shop___2b6a4h(void){

	int 	i, j;
	byte 	px;
	byte * 	head_img;

	head_img = D(___1a10bch);

#if defined(DR_MULTIPLAYER)
	if(D(___19bd60h) != 0) head_img = D(___1a10e8h);
#endif // DR_MULTIPLAYER

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x280){

			px = head_img[COOXY(i,j)];
			if(px != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(i,j+0x5c)] = px;
		}
	}

	___25330h();

	if((D(___185a3ch) == 0)
		&&(D(___196a98h) != 3)
		&&(D(___196a9ch) != 1)
		&&(D(___196aa0h) != 1)
		&&(D(___196aa4h) == 0)
		&&(D(___196aa8h) == 0)
		&&(D(0x6c*D(___1a1ef8h)+___1a0218h) != 4)) ___27f80h_cdecl(0x1aa, 0xf3, 0x6c, 0x72);

	___25a74h();
	___25e40h();
	___262b4h();
	___26650h();
	___269e4h();
	___26e54h();
}
