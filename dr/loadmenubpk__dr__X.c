#include "x86.h"

    extern byte MENU_BPA[];

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
    extern byte tex_kupla_p[];
    extern byte tex_pickup_p[];
    extern byte tex_sedan_p[];
    extern byte tex_camaro_p[];
    extern byte tex_porsche_p[];
    extern byte tex_lotus_p[];
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
    extern byte ___181d24h[];
    extern byte ___1a1e54h[];
    extern byte ___1a1e64h[];
    extern byte ___181d50h[];
    extern byte ___181d5ch[];
    extern byte ___181da4h[];
    extern byte ___181db0h[];
    extern byte ___181dbch[];
    extern byte ___181e04h[];
    extern byte ___181e68h[];
    extern byte ___181ec4h[];
    extern byte ___181ee0h[];
    extern byte ___181f14h[];
    extern byte ___181f24h[];
    extern byte ___181f34h[];
    extern byte ___181f40h[];
    extern byte BPA_Buffer[];
    extern byte ___181d34h[];
    extern byte ___181d44h[];
    extern byte ___181d68h[];
    extern byte ___181d74h[];
    extern byte ___181d80h[];
    extern byte ___181d8ch[];
    extern byte ___181d98h[];
    extern byte ___181dc8h[];
    extern byte ___181dd4h[];
    extern byte ___181de0h[];
    extern byte ___181dech[];
    extern byte ___181df8h[];
    extern byte ___181e10h[];
    extern byte ___181e1ch[];
    extern byte ___181e28h[];
    extern byte ___181e34h[];
    extern byte ___181e40h[];
    extern byte ___181e4ch[];
    extern byte ___181e58h[];
    extern byte ___181e74h[];
    extern byte ___181e84h[];
    extern byte ___181e94h[];
    extern byte ___181ea4h[];
    extern byte ___181eb4h[];
    extern byte ___181ed0h[];
    extern byte ___181eech[];
    extern byte ___181efch[];
    extern byte ___181f08h[];


    void * allocMemSafe(dword);

	void read__bpa(const char *, void *, const char *);

	#pragma aux decode2__bpk parm routine []
	void decode2__bpk(void * dst, void * src);

	#pragma aux decode4__bpk parm routine []
	void decode4__bpk(dword nbytes, dword dst_offset, void * dst, void * src);

// 24548h
void ___24548h(void){

    dword   eax, ebx, ecx, edx, esi, edi, ebp;

//		push    2ch
//		call    __CHK
//		push    ebx
//		push    ecx
//		push    edx
//		push    esi
//		push    edi
//		push    ebp
//		mov     edx, 64h
	edx = 0x64;
//		xor     ebx, ebx
	ebx = 0;
//		mov     [__CEXT_V(___1a1edch)], edx
	D(___1a1edch) = edx;
//		mov     [__CEXT_V(___1a1ecch)], ebx
	D(___1a1ecch) = ebx;
//		mov     [__CEXT_V(___1a1ee8h)], ebx
	D(___1a1ee8h) = ebx;
//		mov     edx, [__CEXT_V(___1a1ef8h)]
	edx = D(___1a1ef8h);
//		mov     [__CEXT_V(___1a1ee0h)], ebx
	D(___1a1ee0h) = ebx;
//		lea     eax, [edx*8+0]
	eax = edx*8;
//		mov     [__CEXT_V(___1a1eech)], ebx
	D(___1a1eech) = ebx;
//		sub     eax, edx
	eax -= edx;
//		mov     [__CEXT_V(___1a1ec0h)], ebx
	D(___1a1ec0h) = ebx;
//		shl     eax, 2
	eax <<= 2;
//		mov     [__CEXT_V(___1a1ec8h)], ebx
	D(___1a1ec8h) = ebx;
//		sub     eax, edx
	eax -= edx;
//		mov     [__CEXT_V(___1a1ed0h)], ebx
	D(___1a1ed0h) = ebx;
//		shl     eax, 2
	eax <<= 2;
//		mov     ebx, 5
	ebx = 5;
//		mov     ecx, [eax+__CEXT_V(___1a01fch)]
	ecx = D(eax+___1a01fch);
//		mov     [__CEXT_V(___1a1ec4h)], ebx
	D(___1a1ec4h) = ebx;
//		cmp     ecx, ebx
//		jge     ___245c5h
	if((int)ecx >= (int)ebx) goto ___245c5h;
//		lea     eax, [ecx+1]
	eax = ecx+1;
//		mov     [__CEXT_V(___1a1ee4h)], eax
	D(___1a1ee4h) = eax;
//		jmp     ___245cbh
	goto ___245cbh;
___245c5h:
//		mov     [__CEXT_V(___1a1ee4h)], ebx
	D(___1a1ee4h) = ebx;
___245cbh:
//		mov     eax, 4b000h
	eax = 0x4b000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1124h)], eax
	D(___1a1124h) = eax;
//		mov     [__CEXT_V(___1a10e4h)], eax
	D(___1a10e4h) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e80h)], eax
	D(___1a1e80h) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e74h)], eax
	D(___1a1e74h) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e84h)], eax
	D(___1a1e84h) = eax;
//		mov     eax, 3400h
	eax = 0x3400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e60h)], eax
	D(___1a1e60h) = eax;
//		mov     eax, 5400h
	eax = 0x5400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1ed4h)], eax
	D(___1a1ed4h) = eax;
//		mov     eax, 4b0h
	eax = 0x4b0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e90h)], eax
	D(___1a1e90h) = eax;
//		mov     eax, 8f0h
	eax = 0x8f0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a10b0h)], eax
	D(___1a10b0h) = eax;
//		mov     eax, 900h
	eax = 0x900;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1eb0h)], eax
	D(___1a1eb0h) = eax;
//		mov     eax, 1000h
	eax = 0x1000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e78h)], eax
	D(___1a1e78h) = eax;
//		mov     eax, 12000h
	eax = 0x12000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1eb8h)], eax
	D(___1a1eb8h) = eax;
//		mov     eax, 1af00h
	eax = 0x1af00;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_kupla_p)], eax
	D(tex_kupla_p) = eax;
//		mov     eax, 1a77bh
	eax = 0x1a77b;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_pickup_p)], eax
	D(tex_pickup_p) = eax;
//		mov     eax, 18f14h
	eax = 0x18f14;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_sedan_p)], eax
	D(tex_sedan_p) = eax;
//		mov     eax, 18f51h
	eax = 0x18f51;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_camaro_p)], eax
	D(tex_camaro_p) = eax;
//		mov     eax, 1a060h
	eax = 0x1a060;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_porsche_p)], eax
	D(tex_porsche_p) = eax;
//		mov     eax, 1bea2h
	eax = 0x1bea2;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(tex_lotus_p)], eax
	D(tex_lotus_p) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0180h)], eax
	D(___1a0180h) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0184h)], eax
	D(___1a0184h) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0188h)], eax
	D(___1a0188h) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a018ch)], eax
	D(___1a018ch) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0190h)], eax
	D(___1a0190h) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0194h)], eax
	D(___1a0194h) = eax;
//		mov     eax, 0a235h
	eax = 0xa235;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01a8h)], eax
	D(___1a01a8h) = eax;
//		mov     eax, 0ae36h
	eax = 0xae36;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01ach)], eax
	D(___1a01ach) = eax;
//		mov     eax, 0b413h
	eax = 0xb413;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01b0h)], eax
	D(___1a01b0h) = eax;
//		mov     eax, 0d788h
	eax = 0xd788;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01b4h)], eax
	D(___1a01b4h) = eax;
//		mov     eax, 511ch
	eax = 0x511c;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a0198h)], eax
	D(___1a0198h) = eax;
//		mov     eax, 52b8h
	eax = 0x52b8;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a019ch)], eax
	D(___1a019ch) = eax;
//		mov     eax, 5724h
	eax = 0x5724;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01a0h)], eax
	D(___1a01a0h) = eax;
//		mov     eax, 5f1eh
	eax = 0x5f1e;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01a4h)], eax
	D(___1a01a4h) = eax;
//		mov     eax, 5ffbh
	eax = 0x5ffb;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01d0h)], eax
	D(___1a01d0h) = eax;
//		mov     eax, 6dd9h
	eax = 0x6dd9;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01d4h)], eax
	D(___1a01d4h) = eax;
//		mov     eax, 7922h
	eax = 0x7922;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01d8h)], eax
	D(___1a01d8h) = eax;
//		mov     eax, 7801h
	eax = 0x7801;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a01dch)], eax
	D(___1a01dch) = eax;
//		mov     eax, 878bh
	eax = 0x878b;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e8ch)], eax
	D(___1a1e8ch) = eax;
//		mov     eax, 8ae9h
	eax = 0x8ae9;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1ea0h)], eax
	D(___1a1ea0h) = eax;
//		mov     eax, 1800h
	eax = 0x1800;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e7ch)], eax
	D(___1a1e7ch) = eax;
//		mov     eax, 0f0h
	eax = 0xf0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1ebch)], eax
	D(___1a1ebch) = eax;
//		mov     eax, 0f0h
	eax = 0xf0;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1eb4h)], eax
	D(___1a1eb4h) = eax;
//		mov     eax, 1260h
	eax = 0x1260;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e88h)], eax
	D(___1a1e88h) = eax;
//		mov     eax, 1020h
	eax = 0x1020;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1ea4h)], eax
	D(___1a1ea4h) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1ea8h)], eax
	D(___1a1ea8h) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e6ch)], eax
	D(___1a1e6ch) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e98h)], eax
	D(___1a1e98h) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1each)], eax
	D(___1a1each) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e94h)], eax
	D(___1a1e94h) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e9ch)], eax
	D(___1a1e9ch) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e70h)], eax
	D(___1a1e70h) = eax;
//		mov     eax, 1b000h
	eax = 0x1b000;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e5ch)], eax
	D(___1a1e5ch) = eax;
//		mov     eax, 2400h
	eax = 0x2400;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e58h)], eax
	D(___1a1e58h) = eax;
//		mov     eax, 2800h
	eax = 0x2800;
//		mov     ebx, __CEXT_V(___181d24h)
	ebx = ___181d24h;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e54h)], eax
	D(___1a1e54h) = eax;
//		mov     eax, 2800h
	eax = 0x2800;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		call    __CEXT_F(allocMemSafe)
	eax = allocMemSafe(eax);
//		mov     [__CEXT_V(___1a1e64h)], eax
	D(___1a1e64h) = eax;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(___1a1ed4h)]
	edi = D(___1a1ed4h);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181d34h)
	ebx = ___181d34h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(___1a1e90h)]
	ebp = D(___1a1e90h);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181d44h)
	ebx = ___181d44h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(___1a10b0h)]
	eax = D(___1a10b0h);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181d50h)
	ebx = ___181d50h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_kupla_p)]
	edx = D(tex_kupla_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d5ch)
	ebx = ___181d5ch;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_pickup_p)]
	edx = D(tex_pickup_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d68h)
	ebx = ___181d68h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_sedan_p)]
	edx = D(tex_sedan_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d74h)
	ebx = ___181d74h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_camaro_p)]
	edx = D(tex_camaro_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d80h)
	ebx = ___181d80h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_porsche_p)]
	edx = D(tex_porsche_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d8ch)
	ebx = ___181d8ch;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(tex_lotus_p)]
	edx = D(tex_lotus_p);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181d98h)
	ebx = ___181d98h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01a8h)]
	edx = D(___1a01a8h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181da4h)
	ebx = ___181da4h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01ach)]
	edx = D(___1a01ach);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181db0h)
	ebx = ___181db0h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01b0h)]
	edx = D(___1a01b0h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181dbch)
	ebx = ___181dbch;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01b4h)]
	edx = D(___1a01b4h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181dc8h)
	ebx = ___181dc8h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a0198h)]
	edx = D(___1a0198h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181dd4h)
	ebx = ___181dd4h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a019ch)]
	edx = D(___1a019ch);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181de0h)
	ebx = ___181de0h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01a0h)]
	edx = D(___1a01a0h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181dech)
	ebx = ___181dech;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01a4h)]
	edx = D(___1a01a4h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181df8h)
	ebx = ___181df8h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01d0h)]
	edx = D(___1a01d0h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e04h)
	ebx = ___181e04h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01d4h)]
	edx = D(___1a01d4h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e10h)
	ebx = ___181e10h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01d8h)]
	edx = D(___1a01d8h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e1ch)
	ebx = ___181e1ch;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a01dch)]
	edx = D(___1a01dch);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e28h)
	ebx = ___181e28h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a1ea0h)]
	edx = D(___1a1ea0h);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e34h)
	ebx = ___181e34h;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		mov     edx, [__CEXT_V(___1a1e8ch)]
	edx = D(___1a1e8ch);
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		mov     ebx, __CEXT_V(___181e40h)
	ebx = ___181e40h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(___1a1e6ch)]
	edx = D(___1a1e6ch);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e4ch)
	ebx = ___181e4ch;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(___1a1e74h)]
	ebx = D(___1a1e74h);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e58h)
	ebx = ___181e58h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(___1a1e80h)]
	ecx = D(___1a1e80h);
//		push    ecx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ecx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e68h)
	ebx = ___181e68h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(___1a1e84h)]
	esi = D(___1a1e84h);
//		push    esi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(esi, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e74h)
	ebx = ___181e74h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(___1a1e60h)]
	edi = D(___1a1e60h);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e84h)
	ebx = ___181e84h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(___1a1e54h)]
	ebp = D(___1a1e54h);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181e94h)
	ebx = ___181e94h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(___1a1e64h)]
	eax = D(___1a1e64h);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181ea4h)
	ebx = ___181ea4h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(___1a1e58h)]
	edx = D(___1a1e58h);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181eb4h)
	ebx = ___181eb4h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(___1a1e5ch)]
	ebx = D(___1a1e5ch);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181ec4h)
	ebx = ___181ec4h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(___1a1e98h)]
	ecx = D(___1a1e98h);
//		push    ecx
//		push    byte 0
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0, ecx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(___1a1each)]
	esi = D(___1a1each);
//		push    esi
//		push    2400h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x2400, esi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(___1a1e94h)]
	edi = D(___1a1e94h);
//		push    edi
//		push    4800h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x4800, edi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(___1a1e9ch)]
	ebp = D(___1a1e9ch);
//		push    ebp
//		push    6c00h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x6c00, ebp, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(___1a1e70h)]
	eax = D(___1a1e70h);
//		push    eax
//		push    9000h
//		push    2400h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x2400, 0x9000, eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181ed0h)
	ebx = ___181ed0h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(___1a0180h)]
	edx = D(___1a0180h);
//		push    edx
//		push    byte 0
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0, edx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(___1a0184h)]
	ebx = D(___1a0184h);
//		push    ebx
//		push    1800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x1800, ebx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(___1a0188h)]
	ecx = D(___1a0188h);
//		push    ecx
//		push    3000h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x3000, ecx, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(___1a018ch)]
	esi = D(___1a018ch);
//		push    esi
//		push    4800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x4800, esi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(___1a0190h)]
	edi = D(___1a0190h);
//		push    edi
//		push    6000h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x6000, edi, BPA_Buffer);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(___1a0194h)]
	ebp = D(___1a0194h);
//		push    ebp
//		push    7800h
//		push    1800h
//		call    __CEXT_F(decode4__bpk)
	decode4__bpk(0x1800, 0x7800, ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181ee0h)
	ebx = ___181ee0h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(___1a1eb0h)]
	eax = D(___1a1eb0h);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181eech)
	ebx = ___181eech;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edx, [__CEXT_V(___1a1e78h)]
	edx = D(___1a1e78h);
//		push    edx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181efch)
	ebx = ___181efch;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebx, [__CEXT_V(___1a1eb8h)]
	ebx = D(___1a1eb8h);
//		push    ebx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181f08h)
	ebx = ___181f08h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ecx, [__CEXT_V(___1a1ea8h)]
	ecx = D(___1a1ea8h);
//		push    ecx
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ecx, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181f14h)
	ebx = ___181f14h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     esi, [__CEXT_V(___1a1ea4h)]
	esi = D(___1a1ea4h);
//		push    esi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(esi, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181f24h)
	ebx = ___181f24h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     edi, [__CEXT_V(___1a1eb4h)]
	edi = D(___1a1eb4h);
//		push    edi
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(edi, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181f34h)
	ebx = ___181f34h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     ebp, [__CEXT_V(___1a1ebch)]
	ebp = D(___1a1ebch);
//		push    ebp
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(ebp, BPA_Buffer);
//		mov     ebx, __CEXT_V(___181f40h)
	ebx = ___181f40h;
//		mov     edx, __CEXT_V(BPA_Buffer)
	edx = BPA_Buffer;
//		mov     eax, __CEXT_V(MENU_BPA)
	eax = MENU_BPA;
//		call    __CEXT_F(read__bpa)
	read__bpa(eax, edx, ebx);
//		push    __CEXT_V(BPA_Buffer)
//		mov     eax, [__CEXT_V(___1a1e88h)]
	eax = D(___1a1e88h);
//		push    eax
//		call    __CEXT_F(decode2__bpk)
	decode2__bpk(eax, BPA_Buffer);
//		pop     ebp
//		pop     edi
//		pop     esi
//		pop     edx
//		pop     ecx
//		pop     ebx
//		retn   
	return;
}
