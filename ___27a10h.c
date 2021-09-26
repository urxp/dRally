#include "drally.h"

typedef char char40[40];

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e98h;
	extern byte ___1a1ef8h[];
	extern byte ___18e298h[];
	extern byte ___1a01e0h[];
	extern void * ___1a1eb8h;
	extern __DWORD__ ___1864fch[][0x10];
	extern void * ___1a01d0h[4];
	extern byte ___1a1eech[];

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, dword A2);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);

static const char40 ___192000h[4][6] = {
	[0] = {
		[0] = "[Steel Triumph bought",
		[1] = "",
		[2] = "Straight from the best R&D Labs,",
		[3] = "shielding Steel Triumph gives you",
		[4] = "that extra edge you crave.",
		[5] = ""
	},
	[1] = {
		[0] = "[FerroChromium Armor",
		[1] = "",
		[2] = "Deflects bullets, and most other",
		[3] = "bad stuff that goes bang in the",
		[4] = "night, too.",
		[5] = ""
	},
	[2] = {
		[0] = "[Titanium Plates installed",
		[1] = "",
		[2] = "Shiny hard stuff. No explosive can",
		[3] = "shadow its tanning radiance. Don't",
		[4] = "forget your shades!",
		[5] = ""
	},
	[3] = {
		[0] = "[Accesteel Armor installed",
		[1] = "",
		[2] = "Not even a shell-shock serious",
		[3] = "bazooka can faze the cool mirror",
		[4] = "beauty of Accesteel.",
		[5] = ""
	}
};

// SHOP ARMOR MAX UPGRADE UPDATE
void ___27a10h(void){

	byte 	esp[0x28];
	int 	i, j, n;


	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27960+0x280*j+i) = B(___1a1e98h+0x4800+0x60*j+i);
	}

	n = D(___18e298h+0x6e0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+0x6a8)-1;
	i = D(___1a01e0h+0x6c*D(___1a1ef8h)+0x18);

	if(n != i){

		___259e0h_cdecl(0xe0, 0x10d, D(___1a1eech), ___1a01d0h[i], ___1864fch[i]);
		itoa_watcom106(D(___18e298h+0x6e0*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x1c)+4*D(___1a01e0h+0x6c*D(___1a1ef8h)+0x18)+0x6d0), esp, 0xa);
		strcpy(esp+0x14, "$");
		strcat(esp+0x14, esp);
		___12f60h_cdecl(esp+0x14, 0x34660+___25180h_cdecl(esp+0x14));
	}
	else {

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x60) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a160+0x280*j+i) = B(___1a1eb8h+0xc000+0x1800*n+0x60*j+i);
		}
	}

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][0], 0x136aa);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][1], 0x15eaa);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][2], 0x186aa);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][3], 0x1aeaa);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][4], 0x1d6aa);
	___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][5], 0x1feaa);
}
