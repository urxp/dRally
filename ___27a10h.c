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

dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___13094h_cdecl(const char *, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);

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

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];
	void * 	ebxp;
	void * 	esip;

		ecx = 0x60;
		esip = ___1a1e98h+0x4800;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x27960;
		edx = ecx;
		L(edx) >>= 0x2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esip);
				D(ebxp) = eax;
				ebxp += 0x4;
				esip += 0x4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x280;
			L(edx) <<= 0x2;
			ebxp -= edx;
			L(edx) >>= 0x2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		edx = 4*eax;
		ebx = D(edx+___1a01e0h+0x1c);
		eax = 8*ebx;
		eax -= ebx;
		eax <<= 0x3;
		eax -= ebx;
		eax <<= 0x5;
		eax = D(eax+___18e298h+0x6a8);
		ebx = D(edx+___1a01e0h+0x18);
		eax--;
		if(eax != ebx) goto ___27afbh;
		ecx = 0x40;
		edx = eax;
		eax <<= 0x2;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0x2a160;
		eax -= edx;
		eax <<= 0xb;
		edx = 0x60;
		esip = ___1a1eb8h+0xc000+eax;
		L(edx) >>= 0x2;

		while(1){

			H(ecx) = L(edx);

			while(1){

				eax = D(esip);
				D(ebxp) = eax;
				ebxp += 0x4;
				esip += 0x4;
				H(ecx)--;
				if(H(ecx) == 0) break;
			}

			ebxp += 0x280;
			L(edx) <<= 0x2;
			ebxp -= edx;
			L(edx) >>= 0x2;
			L(ecx)--;
			if(L(ecx) == 0) break;
		}

		goto ___27bb4h;
___27afbh:
		___259e0h_cdecl(0xe0, 0x10d, D(___1a1eech), ___1a01d0h[ebx], ___1864fch[ebx]);
		edx = D(___1a1ef8h);
		ebx = 8*edx;
		ebx -= edx;
		ebx <<= 0x2;
		ebx -= edx;
		ebx <<= 0x2;
		edx = D(ebx+___1a01e0h+0x1c);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x3;
		eax -= edx;
		edx = D(ebx+___1a01e0h+0x18);
		eax <<= 0x5;
		ebx = 0xa;
		eax = D(eax+edx*4+___18e298h+0x6d0);
		edx = esp;
		esi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W("$");
		edi = esp+0x14;
		W(esp+0x14) = X(eax);
		strcat(edi, esi);
		eax = esp+0x14;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x34660;
		eax = esp+0x14;
		___12f60h_cdecl(eax, edx);
___27bb4h:
		___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][0], 0x136aa);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][1], 0x15eaa);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][2], 0x186aa);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][3], 0x1aeaa);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][4], 0x1d6aa);
		___13094h_cdecl(___192000h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][5], 0x1feaa);
		return;
}
