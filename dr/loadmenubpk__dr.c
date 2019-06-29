#include "x86.h"

    extern const char MENU_BPA[];

    extern byte ___1a1edch[];
    extern byte ___1a1ecch[];
    extern byte ___1a1ee8h[];
    extern byte ___1a1ef8h[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a01fch[];
    extern byte ___1a1ec4h[];
    extern byte ___1a1ee4h[];
    extern byte ___1a1124h[];
    extern byte ___1a10e4h[];
    extern byte ___1a1e80h[];
    extern byte ___1a1e74h[];
    extern byte ___1a1e84h[];
    extern byte ___1a1e60h[];
    extern byte ___1a1ed4h[];
    extern byte ___1a1e90h[];
    extern byte ___1a10b0h[];
    extern byte ___1a1eb0h[];
    extern byte ___1a1e78h[];
    extern byte ___1a1eb8h[];
    extern byte ___1a01b8h[];
    extern byte ___1a01bch[];
    extern byte ___1a01c0h[];
    extern byte ___1a01c4h[];
    extern byte ___1a01c8h[];
    extern byte ___1a01cch[];
    extern byte ___1a0180h[];
    extern byte ___1a0184h[];
    extern byte ___1a0188h[];
    extern byte ___1a018ch[];
    extern byte ___1a0190h[];
    extern byte ___1a0194h[];
    extern byte ___1a01a8h[];
    extern byte ___1a01ach[];
    extern byte ___1a01b0h[];
    extern byte ___1a01b4h[];
    extern byte ___1a0198h[];
    extern byte ___1a019ch[];
    extern byte ___1a01a0h[];
    extern byte ___1a01a4h[];
    extern byte ___1a01d0h[];
    extern byte ___1a01d4h[];
    extern byte ___1a01d8h[];
    extern byte ___1a01dch[];
    extern byte ___1a1e8ch[];
    extern byte ___1a1ea0h[];
    extern byte ___1a1e7ch[];
    extern byte ___1a1ebch[];
    extern byte ___1a1eb4h[];
    extern byte ___1a1e88h[];
    extern byte ___1a1ea4h[];
    extern byte ___1a1ea8h[];
    extern byte ___1a1e6ch[];
    extern byte ___1a1e98h[];
    extern byte ___1a1each[];
    extern byte ___1a1e94h[];
    extern byte ___1a1e9ch[];
    extern byte ___1a1e70h[];
    extern byte ___1a1e5ch[];
    extern byte ___1a1e58h[];
    extern byte ___1a1e54h[];
    extern byte ___1a1e64h[];

    extern byte BPA_Buffer[];

    extern const char ___181d24h[];
    extern const char ___181d50h[];
    extern const char ___181d5ch[];
    extern const char ___181da4h[];
    extern const char ___181db0h[];
    extern const char ___181dbch[];
    extern const char ___181e04h[];
    extern const char ___181e68h[];
    extern const char ___181ec4h[];
    extern const char ___181ee0h[];
    extern const char ___181f14h[];
    extern const char ___181f24h[];
    extern const char ___181f34h[];
    extern const char ___181f40h[];
    extern const char ___181d34h[];
    extern const char ___181d44h[];
    extern const char ___181d68h[];
    extern const char ___181d74h[];
    extern const char ___181d80h[];
    extern const char ___181d8ch[];
    extern const char ___181d98h[];
    extern const char ___181dc8h[];
    extern const char ___181dd4h[];
    extern const char ___181de0h[];
    extern const char ___181dech[];
    extern const char ___181df8h[];
    extern const char ___181e10h[];
    extern const char ___181e1ch[];
    extern const char ___181e28h[];
    extern const char ___181e34h[];
    extern const char ___181e40h[];
    extern const char ___181e4ch[];
    extern const char ___181e58h[];
    extern const char ___181e74h[];
    extern const char ___181e84h[];
    extern const char ___181e94h[];
    extern const char ___181ea4h[];
    extern const char ___181eb4h[];
    extern const char ___181ed0h[];
    extern const char ___181eech[];
    extern const char ___181efch[];
    extern const char ___181f08h[];


    void * allocMemSafe(dword);

	void read__bpa(const char *, void *, const char *);

	#pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

	#pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 24548h
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

	D(___1a1ee4h) = D(0x6c * D(___1a1ef8h) + ___1a01fch) + 1;
	if(D(___1a1ee4h) >= 5) D(___1a1ee4h) = 5;

	D(___1a1124h) = D(___1a10e4h) = allocMemSafe(0x4b000);
	D(___1a1e80h) = allocMemSafe(0x3400);
	D(___1a1e74h) = allocMemSafe(0x3400);
	D(___1a1e84h) = allocMemSafe(0x3400);
	D(___1a1e60h) = allocMemSafe(0x3400);
	D(___1a1ed4h) = allocMemSafe(0x5400);
	D(___1a1e90h) = allocMemSafe(0x4b0);
	D(___1a10b0h) = allocMemSafe(0x8f0);
	D(___1a1eb0h) = allocMemSafe(0x900);
	D(___1a1e78h) = allocMemSafe(0x1000);
	D(___1a1eb8h) = allocMemSafe(0x12000);
	D(___1a01b8h) = allocMemSafe(0x1af00);
	D(___1a01bch) = allocMemSafe(0x1a77b);
	D(___1a01c0h) = allocMemSafe(0x18f14);
	D(___1a01c4h) = allocMemSafe(0x18f51);
	D(___1a01c8h) = allocMemSafe(0x1a060);
	D(___1a01cch) = allocMemSafe(0x1bea2);
	D(___1a0180h) = allocMemSafe(0x1800);
	D(___1a0184h) = allocMemSafe(0x1800);
	D(___1a0188h) = allocMemSafe(0x1800);
	D(___1a018ch) = allocMemSafe(0x1800);
	D(___1a0190h) = allocMemSafe(0x1800);
	D(___1a0194h) = allocMemSafe(0x1800);
	D(___1a01a8h) = allocMemSafe(0xa235);
	D(___1a01ach) = allocMemSafe(0xae36);
	D(___1a01b0h) = allocMemSafe(0xb413);
	D(___1a01b4h) = allocMemSafe(0xd788);
	D(___1a0198h) = allocMemSafe(0x511c);
	D(___1a019ch) = allocMemSafe(0x52b8);
	D(___1a01a0h) = allocMemSafe(0x5724);
	D(___1a01a4h) = allocMemSafe(0x5f1e);
	D(___1a01d0h) = allocMemSafe(0x5ffb);
	D(___1a01d4h) = allocMemSafe(0x6dd9);
	D(___1a01d8h) = allocMemSafe(0x7922);
	D(___1a01dch) = allocMemSafe(0x7801);
	D(___1a1e8ch) = allocMemSafe(0x878b);
	D(___1a1ea0h) = allocMemSafe(0x8ae9);
	D(___1a1e7ch) = allocMemSafe(0x1800);
	D(___1a1ebch) = allocMemSafe(0xf0);
	D(___1a1eb4h) = allocMemSafe(0xf0);
	D(___1a1e88h) = allocMemSafe(0x1260);
	D(___1a1ea4h) = allocMemSafe(0x1020);
	D(___1a1ea8h) = allocMemSafe(0x2400);
	D(___1a1e6ch) = allocMemSafe(0x2400);
	D(___1a1e98h) = allocMemSafe(0x2400);
	D(___1a1each) = allocMemSafe(0x2400);
	D(___1a1e94h) = allocMemSafe(0x2400);
	D(___1a1e9ch) = allocMemSafe(0x2400);
	D(___1a1e70h) = allocMemSafe(0x2400);
	D(___1a1e5ch) = allocMemSafe(0x1b000);
	D(___1a1e58h) = allocMemSafe(0x2400);
	D(___1a1e54h) = allocMemSafe(0x2800);
	D(___1a1e64h) = allocMemSafe(0x2800);

	read__bpa(MENU_BPA, BPA_Buffer, ___181d24h);
	decode2__bpk(D(___1a1ed4h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181d34h);
	decode2__bpk(D(___1a1e90h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181d44h);
	decode2__bpk(D(___1a10b0h), BPA_Buffer);

	read__bpa(MENU_BPA, D(___1a01b8h), ___181d50h);
	read__bpa(MENU_BPA, D(___1a01bch), ___181d5ch);
	read__bpa(MENU_BPA, D(___1a01c0h), ___181d68h);
	read__bpa(MENU_BPA, D(___1a01c4h), ___181d74h);
	read__bpa(MENU_BPA, D(___1a01c8h), ___181d80h);
	read__bpa(MENU_BPA, D(___1a01cch), ___181d8ch);
	read__bpa(MENU_BPA, D(___1a01a8h), ___181d98h);
	read__bpa(MENU_BPA, D(___1a01ach), ___181da4h);
	read__bpa(MENU_BPA, D(___1a01b0h), ___181db0h);
	read__bpa(MENU_BPA, D(___1a01b4h), ___181dbch);
	read__bpa(MENU_BPA, D(___1a0198h), ___181dc8h);
	read__bpa(MENU_BPA, D(___1a019ch), ___181dd4h);
	read__bpa(MENU_BPA, D(___1a01a0h), ___181de0h);
	read__bpa(MENU_BPA, D(___1a01a4h), ___181dech);
	read__bpa(MENU_BPA, D(___1a01d0h), ___181df8h);
	read__bpa(MENU_BPA, D(___1a01d4h), ___181e04h);
	read__bpa(MENU_BPA, D(___1a01d8h), ___181e10h);
	read__bpa(MENU_BPA, D(___1a01dch), ___181e1ch);
	read__bpa(MENU_BPA, D(___1a1ea0h), ___181e28h);
	read__bpa(MENU_BPA, D(___1a1e8ch), ___181e34h);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e40h);
	decode2__bpk(D(___1a1e6ch), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e4ch);
	decode2__bpk(D(___1a1e74h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e58h);
	decode2__bpk(D(___1a1e80h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e68h);
	decode2__bpk(D(___1a1e84h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e74h);
	decode2__bpk(D(___1a1e60h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e84h);
	decode2__bpk(D(___1a1e54h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181e94h);
	decode2__bpk(D(___1a1e64h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181ea4h);
	decode2__bpk(D(___1a1e58h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181eb4h);
	decode2__bpk(D(___1a1e5ch), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181ec4h);
	decode4__bpk(0x2400, 0, D(___1a1e98h), BPA_Buffer);
	decode4__bpk(0x2400, 0x2400, D(___1a1each), BPA_Buffer);
	decode4__bpk(0x2400, 0x4800, D(___1a1e94h), BPA_Buffer);
	decode4__bpk(0x2400, 0x6c00, D(___1a1e9ch), BPA_Buffer);
	decode4__bpk(0x2400, 0x9000, D(___1a1e70h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181ed0h);
	decode4__bpk(0x1800, 0, D(___1a0180h), BPA_Buffer);
	decode4__bpk(0x1800, 0x1800, D(___1a0184h), BPA_Buffer);
	decode4__bpk(0x1800, 0x3000, D(___1a0188h), BPA_Buffer);
	decode4__bpk(0x1800, 0x4800, D(___1a018ch), BPA_Buffer);
	decode4__bpk(0x1800, 0x6000, D(___1a0190h), BPA_Buffer);
	decode4__bpk(0x1800, 0x7800, D(___1a0194h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181ee0h);
	decode2__bpk(D(___1a1eb0h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181eech);
	decode2__bpk(D(___1a1e78h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181efch);
	decode2__bpk(D(___1a1eb8h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181f08h);
	decode2__bpk(D(___1a1ea8h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181f14h);
	decode2__bpk(D(___1a1ea4h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181f24h);
	decode2__bpk(D(___1a1eb4h), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181f34h);
	decode2__bpk(D(___1a1ebch), BPA_Buffer);

	read__bpa(MENU_BPA, BPA_Buffer, ___181f40h);
	decode2__bpk(D(___1a1e88h), BPA_Buffer);
}
