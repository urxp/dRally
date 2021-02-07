#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0a50h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___1a1e5ch[];
	extern byte ___1a017ch_PriceSabotage[];
	extern byte ___19bd60h[];

void ___2d184h(void);
void ___2d20ch(void);
void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
dword ___25180h_cdecl(dword);
void ___12f60h_cdecl(dword, dword);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___2d054h_cdecl(dword);

// MARKER SABOTAGE
void ___2db88h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x28];


		ecx = D(___1a1ef8h);
		edx ^= edx;
		eax ^= eax;
		ebp ^= ebp;
___2dba7h:
		ebx = D(eax+___1a01e0h+0x44);
		if((int)ebp >= (int)ebx) goto ___2dbb7h;
		if(edx == ecx) goto ___2dbb7h;
		ebp = ebx;
___2dbb7h:
		edx++;
		eax += 0x6c;
		if((int)edx < 0x14) goto ___2dba7h;
		if(D(___1a0a50h+0xc) != 1) goto ___2dc74h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x279c8;
		esi += 0x6c00;
		edx = ecx;
		L(edx) >>= 2;
___2dbefh:
		H(ecx) = L(edx);
___2dbf1h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2dbf1h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2dbefh;
		eax = 0x3;
		ebx = 0xa;
		edx = esp+0x14;
		___2d054h_cdecl(eax);
		eax = D(___1a017ch_PriceSabotage);
		edi = esp;
		eax = itoa_watcom106(eax, edx, ebx);
		X(eax) = W("$");
		esi = esp+0x14;
		W(esp) = X(eax);
		strcat(edi, esi);
		eax = esp;
		eax = ___25180h_cdecl(eax);
		edx = eax+0x346c8;
		eax = esp;
		___12f60h_cdecl(eax, edx);
___2dc74h:
		if(D(___1a0a50h+0xc) != 0) goto ___2dd6bh;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x279c8;
		esi += 0x18c00;
		edx = ecx;
		L(edx) >>= 2;
___2dca3h:
		H(ecx) = L(edx);
___2dca5h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2dca5h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2dca3h;
		if(D(___19bd60h) != 0) goto ___2dd66h;
		edx = D(___1a1ef8h);
		eax = 8*edx;
		eax -= edx;
		eax <<= 0x2;
		eax -= edx;
		if((int)ebp >= (int)D(eax*4+___1a01e0h+0x44)) goto ___2dd66h;
		ecx = 0x77;
		ebx = 0x180;
		edx = 0x72;
		eax = 0x90;
		___13248h_cdecl(eax, edx, ebx, ecx, 1);
		___13094h_cdecl("[No sabotage. No way.", 0x136aa);
		___13094h_cdecl("", 0x15eaa);
		___13094h_cdecl("What? You crazy, man? Nobody", 0x186aa);
		___13094h_cdecl("touches the Adversary's auto-", 0x1aeaa);
		___13094h_cdecl("mobile and lives, nobody.", 0x1d6aa);
		___13094h_cdecl("", 0x1feaa);
		goto ___2dd6bh;
___2dd66h:
		___2d184h();
___2dd6bh:
		if(D(___1a0a50h+0xc) != 0xffffffff) goto ___2ddbdh;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e5ch);
		ebx += 0x279c8;
		esi += 0xfc00;
		edx = ecx;
		L(edx) >>= 2;
___2dd96h:
		H(ecx) = L(edx);
___2dd98h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2dd98h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2dd96h;
		___2d20ch();
___2ddbdh:
		return;
}
