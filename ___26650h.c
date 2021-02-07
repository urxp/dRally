#include "drally.h"

typedef char char40[40];

	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern void * ___1a1e98h;
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___18e298h[];
	extern __DWORD__ ___1864fch[][0x10];
	extern void * ___1a01d0h[4];
	extern byte ___1a1eech[];
	extern byte ___1a1eb8h[];

void ___13094h_cdecl(const char *, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);

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

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = ___1a1e98h+0x4800;
		ebx += 0x27960;
		edx = ecx;
		L(edx) >>= 0x2;
___2667eh:
		H(ecx) = L(edx);
___26680h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___26680h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___2667eh;
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
		ebx = D(edx+___1a01e0h+0x18);
		ecx = D(eax+___18e298h+0x6a8);
		if((int)ebx >= (int)ecx) goto ___26910h;
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
		edx = eax;
		eax = D(ebx+___1a01e0h+0x18);
		edx <<= 0x5;
		ebx = 0xa;
		eax = D(edx+eax*4+___18e298h+0x6cc);
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
		ebx = 0x180;
		eax = esp+0x14;
		ecx = 0x77;
		___12f60h_cdecl(eax, edx);
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][0], 0x136aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][1], 0x15eaa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][2], 0x186aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][3], 0x1aeaa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][4], 0x1d6aa);
		___13094h_cdecl(___191c40h[D(___1a01e0h+0x18+0x6c*D(___1a1ef8h))][5], 0x1feaa);
		return;
___26910h:
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = ecx-1;
		eax = D(___1a1eb8h);
		ecx = 0x40;
		esi = 4*edx;
		ebx += 0x2a160;
		esi -= edx;
		eax += 0xc000;
		esi <<= 0xb;
		edx = 0x60;
		esi += eax;
		L(edx) >>= 0x2;
___26944h:
		H(ecx) = L(edx);
___26946h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___26946h;
		ebx += 0x280;
		L(edx) <<= 0x2;
		ebx -= edx;
		L(edx) >>= 0x2;
		L(ecx)--;
		if(L(ecx)) goto ___26944h;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		edx = 0x136aa;
		___13094h_cdecl("[NO MORE ARMOR UPGRADES", edx);
		edx = 0x15eaa;
		___13094h_cdecl("", edx);
		edx = 0x186aa;
		___13094h_cdecl("You got the best shining knight's", edx);
		edx = 0x1aeaa;
		___13094h_cdecl("armor this warhorsepower chariot", edx);
		edx = 0x1d6aa;
		___13094h_cdecl("can carry to any road battle.", edx);
		edx = 0x1feaa;
		___13094h_cdecl("", edx);
		return;
}
