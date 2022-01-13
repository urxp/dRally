#include "drally.h"
#include "drally_fonts.h"

typedef char char40[40];

	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e98h;
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___18e298h[];
	extern __DWORD__ ___1864fch[][0x10];
	extern __POINTER__ ___1a01d0h[4];
	extern __BYTE__ ___1a1eech[];
	extern __POINTER__ ___1a1eb8h;

int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, __DWORD__ A2);
void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, __POINTER__ aEncoded, int * aOffsets);

static const char40 ___191c40h[4][6] = {
	[0] = {
		[0] = "[Steel Triumph Plating",
		[1] = "",
		[2] = "Steel Triumph won't stop the hurt,",
		[3] = "but it just might keep you in one",
		[4] = "piece to the finish line.",
		[5] = ""
	},
	[1] = {
		[0] = "[FerroChromium Armor",
		[1] = "",
		[2] = "What the rival guns give, this",
		[3] = "armor can take, but you'd better",
		[4] = "shoot back, there's a limit.",
		[5] = ""
	},
	[2] = {
		[0] = "[Titanium Plating",
		[1] = "",
		[2] = "See this big gun; see this armor.",
		[3] = "[BANG!{ Now see the armor. Smile to",
		[4] = "your reflection. Looking good.",
		[5] = ""
	},
	[3] = {
		[0] = "[Accesteel Armor",
		[1] = "",
		[2] = "All but the most extreme shots",
		[3] = "bounce off like hail on hard",
		[4] = "concrete.",
		[5] = ""
	}
};

// SHOP ARMOR
void ___26650h(void){

	int 	i, j, n;
	__BYTE__ 	esp[0x28];


	j = -1;
	while(++j < 0x60){

		i = -1;
		while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27960+0x280*j+i, read_b(___1a1e98h+0x4800+0x60*j+i));
	}

	i = D(0x6c*D(___1a1ef8h)+___1a01e0h+0x18);
	n = D(0x6e0*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)+___18e298h+0x6a8);

	if(i < n){

		___259e0h_cdecl(0xe0, 0x10d, D(___1a1eech), ___1a01d0h[i], ___1864fch[i]);
		itoa_watcom106(D(0x6e0*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)+4*D(0x6c*D(___1a1ef8h)+___1a01e0h+0x18)+___18e298h+0x6cc), esp, 0xa);
		strcat(strcpy(esp+0x14, "$"), esp);
		___12f60h_cdecl(esp+0x14, ___25180h_cdecl(esp+0x14)+0x34660);
		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][0], 170, 124);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][1], 170, 140);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][2], 170, 156);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][3], 170, 172);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][4], 170, 188);
		VESA101_16X16_FORMAT_PRINT(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][5], 170, 204);
	}
	else {

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a160+0x280*j+i, read_b(___1a1eb8h+0x1800*n+0xc000-0x1800+0x60*j+i));
		}

		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		VESA101_16X16_FORMAT_PRINT("[NO MORE ARMOR UPGRADES", 170, 124);
		VESA101_16X16_FORMAT_PRINT("", 170, 140);
		VESA101_16X16_FORMAT_PRINT("You got the best shining knight's", 170, 156);
		VESA101_16X16_FORMAT_PRINT("armor this warhorsepower chariot", 170, 172);
		VESA101_16X16_FORMAT_PRINT("can carry to any road battle.", 170, 188);
		VESA101_16X16_FORMAT_PRINT("", 170, 204);
	}
}
