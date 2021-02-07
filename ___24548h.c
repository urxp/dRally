#include "drally.h"
#include "assets.h"

	extern byte ___1a1edch[];
	extern byte ___1a1ecch[];
	extern byte ___1a1ee8h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a1ee0h[];
	extern byte ___1a1eech[];
	extern byte ___1a1ec0h[];
	extern byte ___1a1ec8h[];
	extern byte ___1a1ed0h[];
	extern byte ___1a01e0h[];
	extern byte ___1a1ec4h[];
	extern byte ___1a1ee4h[];
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern void * ___1a10e4h__VESA101h_DefaultScreenBufferA;
	extern void * ___1a1e80h;
	extern void * ___1a1e74h;
	extern void * ___1a1e84h;
	extern void * ___1a1e60h;
	extern void * ___1a1ed4h;
	extern void * ___1a1e90h;
	extern void * ___1a10b0h;
	extern void * ___1a1eb0h;
	extern void * ___1a1e78h;
	extern void * ___1a1eb8h;
	extern void * ___1a01b8h[6];
	extern void * ___1a0180h;
	extern void * ___1a01a8h[4];
	extern void * ___1a0198h[4];
	extern void * ___1a01d0h[4];
	extern void * ___1a1e8ch;
	extern void * ___1a1ea0h;
	extern void * ___1a1e7ch;
	extern void * ___1a1ebch;
	extern void * ___1a1eb4h;
	extern void * ___1a1e88h;
	extern void * ___1a1ea4h;
	extern void * ___1a1ea8h;
	extern void * ___1a1e6ch;
	extern void * ___1a1e98h;
	extern void * ___1a1e5ch;
	extern void * ___1a1e58h;
	extern void * ___1a1e54h;
	extern void * ___1a1e64h;

void * ___3f71ch__allocateMemory(dword);

static dword max_5(dword val){ return (val < 5) ? val : 5; }

void ___24548h(void){

	D(___1a1edch) = 0x64;
	D(___1a1ecch) = 0;
	D(___1a1ee8h) = 0;
	D(___1a1ee0h) = 0;
	D(___1a1eech) = 0;
	D(___1a1ec0h) = 0;
	D(___1a1ec8h) = 0;
	D(___1a1ed0h) = 0;
	D(___1a1ec4h) = 5;
	D(___1a1ee4h) = max_5(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)+1);
	___1a1124h__VESA101h_ScreenBufferA = ___1a10e4h__VESA101h_DefaultScreenBufferA = ___3f71ch__allocateMemory(0x4b000);

	___1a1e7ch = ___3f71ch__allocateMemory(0x1800);

	___1a01b8h[0] = dRally_Assets_loadRaw("MENU.BPA", "kupla.bpk", 0x1af00);
	___1a01b8h[1] = dRally_Assets_loadRaw("MENU.BPA", "pickup.bpk", 0x1a77b);
	___1a01b8h[2] = dRally_Assets_loadRaw("MENU.BPA", "sedan.bpk", 0x18f14);
	___1a01b8h[3] = dRally_Assets_loadRaw("MENU.BPA", "camaro.bpk", 0x18f51);
	___1a01b8h[4] = dRally_Assets_loadRaw("MENU.BPA", "porsche.bpk", 0x1a060);
	___1a01b8h[5] = dRally_Assets_loadRaw("MENU.BPA", "lotus.bpk", 0x1bea2);
	___1a01a8h[0] = dRally_Assets_loadRaw("MENU.BPA", "engi1.bpk", 0xa235);
	___1a01a8h[1] = dRally_Assets_loadRaw("MENU.BPA", "engi2.bpk", 0xae36);
	___1a01a8h[2] = dRally_Assets_loadRaw("MENU.BPA", "engi3.bpk", 0xb413);
	___1a01a8h[3] = dRally_Assets_loadRaw("MENU.BPA", "engi4.bpk", 0xd788);
	___1a0198h[0] = dRally_Assets_loadRaw("MENU.BPA", "tire1.bpk", 0x511c);
	___1a0198h[1] = dRally_Assets_loadRaw("MENU.BPA", "tire2.bpk", 0x52b8);
	___1a0198h[2] = dRally_Assets_loadRaw("MENU.BPA", "tire3.bpk", 0x5724);
	___1a0198h[3] = dRally_Assets_loadRaw("MENU.BPA", "tire4.bpk", 0x5f1e);
	___1a01d0h[0] = dRally_Assets_loadRaw("MENU.BPA", "armor1.bpk", 0x5ffb);
	___1a01d0h[1] = dRally_Assets_loadRaw("MENU.BPA", "armor2.bpk", 0x6dd9);
	___1a01d0h[2] = dRally_Assets_loadRaw("MENU.BPA", "armor3.bpk", 0x7922);
	___1a01d0h[3] = dRally_Assets_loadRaw("MENU.BPA", "armor4.bpk", 0x7801);
	___1a1e8ch = dRally_Assets_loadRaw("MENU.BPA", "repaani.bpk", 0x878b);
	___1a1ea0h = dRally_Assets_loadRaw("MENU.BPA", "contani.bpk", 0x8ae9);

	___1a1ed4h = dRally_Assets_loadDecode("MENU.BPA", "statbas7.bpk", 0x5400);
	___1a1e90h = dRally_Assets_loadDecode("MENU.BPA", "statpop4.bpk", 0x4b0);
	___1a10b0h = dRally_Assets_loadDecode("MENU.BPA", "f-sma3f.bpk", 0x8f0);
	___1a1e6ch = dRally_Assets_loadDecode("MENU.BPA", "carbas2.bpk", 0x2400);
	___1a1e74h = dRally_Assets_loadDecode("MENU.BPA", "spons1b.bpk", 0x3400);
	___1a1e80h = dRally_Assets_loadDecode("MENU.BPA", "drugdeal.bpk", 0x3400);
	___1a1e84h = dRally_Assets_loadDecode("MENU.BPA", "event_2.bpk", 0x3400);
	___1a1e60h = dRally_Assets_loadDecode("MENU.BPA", "reaper_x.bpk", 0x3400);
	___1a1e54h = dRally_Assets_loadDecode("MENU.BPA", "blacktx1.bpk", 0x2800);
	___1a1e64h = dRally_Assets_loadDecode("MENU.BPA", "blacktx2.bpk", 0x2800);
	___1a1e58h = dRally_Assets_loadDecode("MENU.BPA", "dealer2b.bpk", 0x2400);
	___1a1e5ch = dRally_Assets_loadDecode("MENU.BPA", "market1e.bpk", 0x1b000);
	___1a1e98h = dRally_Assets_loadDecode("MENU.BPA", "bases4.bpk", 0xb400);
	___1a0180h = dRally_Assets_loadDecode("MENU.BPA", "scenecar.bpk", 0x9000);
	___1a1eb0h = dRally_Assets_loadDecode("MENU.BPA", "choo2.bpk", 0x900);
	___1a1e78h = dRally_Assets_loadDecode("MENU.BPA", "arrows1d.bpk", 0x1000);
	___1a1eb8h = dRally_Assets_loadDecode("MENU.BPA", "maxi1f.bpk", 0x12000);
	___1a1ea8h = dRally_Assets_loadDecode("MENU.BPA", "carname.bpk", 0x2400);
	___1a1ea4h = dRally_Assets_loadDecode("MENU.BPA", "slidmus2.bpk", 0x1020);
	___1a1eb4h = dRally_Assets_loadDecode("MENU.BPA", "slidcur3.bpk", 0xf0);
	___1a1ebch = dRally_Assets_loadDecode("MENU.BPA", "volcur2.bpk", 0xf0);
	___1a1e88h = dRally_Assets_loadDecode("MENU.BPA", "slidcop2.bpk", 0x1260);
}
