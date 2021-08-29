#include "drally.h"

typedef char char40[40];

	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a1e98h;
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___18e298h[];
	extern __DWORD__ ___1864fch[][0x10];
	extern void * ___1a01d0h[4];
	extern byte ___1a1eech[];
	extern void * ___1a1eb8h;

void ___13094h_cdecl(const char *, dword);
int ___25180h_cdecl(const char * A1);
void ___12f60h_cdecl(const char * A1, dword A2);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___259e0h_cdecl(int dx, int dy, int aFrameIdx, void * aEncoded, int * aOffsets);

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
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][0], 0x136aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][1], 0x15eaa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][2], 0x186aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][3], 0x1aeaa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][4], 0x1d6aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][5], 0x1feaa);
	}
	else {

		j = -1;
		while(++j < 0x40){

			i = -1;
			while(++i < 0x60) write_b(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a160+0x280*j+i, read_b(___1a1eb8h+0x1800*n+0xc000-0x1800+0x60*j+i));
		}

		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		___13094h_cdecl("[NO MORE ARMOR UPGRADES", 0x136aa);
		___13094h_cdecl("", 0x15eaa);
		___13094h_cdecl("You got the best shining knight's", 0x186aa);
		___13094h_cdecl("armor this warhorsepower chariot", 0x1aeaa);
		___13094h_cdecl("can carry to any road battle.", 0x1d6aa);
		___13094h_cdecl("", 0x1feaa);
	}
}
