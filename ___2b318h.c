#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a020ch[];
	extern byte ___1a0fb8h[];
	extern byte ___196ad8h[];
	extern byte ___1a10c8h[];
	extern byte ___1821e2h[];
	extern byte ___19eb50h[];
	extern byte ___19eb54h[];
	extern byte ___19eb4ch[];
	extern byte ___1a1edch[];
	extern byte ___19df50h[];

void ___12940h(void);
void ___11564h_cdecl(dword, dword, dword);
void ___24010h(dword, dword, dword);

byte dummy_pal[0x300];

void ___2b318h(void){
	
	long long 	ll_tmp;
	dword 	eax, ebx, ecx, edx, esi, edi, ebp;
	byte 	esp[0x14];


	___12940h();
	edx = D(___1a1ef8h);
	eax = 27*edx;
	edx = D(eax*4+___1a020ch);
	eax = 3*edx;
	edx = D(___1a0fb8h);

	if(!edx) edx = dummy_pal;

	edx += eax;

		___11564h_cdecl(B(edx), B(edx+1), B(edx+2));

		edx = D(___1a1ef8h);
		eax = 27*edx;
		edx = D(eax*4+___1a020ch);
		eax = 3*edx;
		edx = D(___1a0fb8h);

		if(!edx) edx = dummy_pal;

		edx += eax;
		___24010h(B(edx), B(edx+1), B(edx+2));
		ecx = 0x900;
		D(esp+0x10) = 0;
		esi = 0x640000;
___2b416h:
		eax = D(___196ad8h);
		edx = D(___1a10c8h);

		if(!edx) edx = dummy_pal;

		eax = eax*3;
		edx += eax;
		eax = 0;
		L(eax) = B(edx);
		D(esp+0xc) = eax;
		FPUSH(W(esp+0xc));
		ST(0) = ST(0)*F64(___1821e2h);
		FPUSH((int)D(esp+0x10));
		F64(esp) = FPOP();
		ST(0) = ST(0)*F64(esp);
		ST(0) = (int)ST(0);
		D(esp+8) = (int)FPOP();
		edx = D(esp+8);
		ebx = esi;
		edx <<= 0x10;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		edx = D(___196ad8h);
		D(ecx+___19eb50h) = eax;
		eax = D(___1a10c8h);

		if(!eax) eax = dummy_pal;

		edx = edx*3;
		edx += eax;
		eax = 0;
		L(eax) = B(edx+1);
		D(esp+0xc) = eax;
		FPUSH(W(esp+0xc));
		ST(0) = ST(0)*F64(___1821e2h);
		ST(0) = ST(0)*F64(esp);
		ST(0) = (int)ST(0);
		D(esp+8) = (int)FPOP();
		edx = D(esp+8);
		ebx = esi;
		edx <<= 0x10;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		D(ecx+___19eb54h) = eax;
		eax = D(___196ad8h);
		edx = D(___1a10c8h);

		if(!edx) edx = dummy_pal;

		eax = eax*3;
		edx += eax;
		eax = 0;
		L(eax) = B(edx+2);
		D(esp+0xc) = eax;
		FPUSH(W(esp+0xc));
		ST(0) = ST(0)*F64(___1821e2h);
		ST(0) = ST(0)*F64(esp);
		ST(0) = (int)ST(0);
		D(esp+8) = (int)FPOP();
		edx = D(esp+8);
		ebx = esi;
		edx <<= 0x10;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		ebx = D(esp+0x10);
		ecx += 0xc;
		ebx++;
		D(ecx+___19eb4ch) = eax;
		D(esp+0x10) = ebx;
		if((int)ebx < 0x20) goto ___2b416h;

		ecx = 0xc0;
		esi = 0x640000;
___2b516h:
		edx = D(___1a1edch);
		eax = D(ecx+___19df50h);
		edx <<= 0x10;
		ll_tmp = (long long)eax*(long long)edx;
		ll_tmp += 0x8000;
		ll_tmp >>= 0x10;
		eax = ll_tmp;
		eax += 0x8000;
		eax = (int)eax >> 0x10;
		edx = eax;
		ebx = esi;
		edx <<= 0x10;
		D(esp+8) = eax;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		edx = D(___1a1edch);
		D(ecx+___19eb50h) = eax;
		edx <<= 0x10;
		eax = D(ecx+___19df50h+4);
		ll_tmp = (long long)eax*(long long)edx;
		ll_tmp += 0x8000;
		ll_tmp >>= 0x10;
		eax = ll_tmp;
		eax += 0x8000;
		eax = (int)eax >> 0x10;
		edx = eax;
		ebx = esi;
		edx <<= 0x10;
		D(esp+8) = eax;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		edx = D(___1a1edch);
		D(ecx+___19eb54h) = eax;
		edx <<= 0x10;
		eax = D(ecx+___19df50h+8);
		ll_tmp = (long long)eax*(long long)edx;
		ll_tmp += 0x8000;
		ll_tmp >>= 0x10;
		eax = ll_tmp;
		eax += 0x8000;
		eax = (int)eax >> 0x10;
		ecx += 0xc;
		edx = eax;
		ebx = esi;
		edx <<= 0x10;
		D(esp+8) = eax;
		eax = 0;
		ll_tmp = edx;
		ll_tmp <<= 0x20;
		ll_tmp >>= 0x10;
		eax = ll_tmp/(int)ebx;
		D(ecx+___19eb4ch) = eax;
		if(ecx != 0x180) goto ___2b516h;
}
