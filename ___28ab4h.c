#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___24cc54h[];
	extern byte ___185a38h[];

void ___12cb8h__VESA101_PRESENTSCREEN(void);
char * itoa_watcom106(int value, char * buffer, int radix);
void ___13094h_cdecl(const char *, dword);
void dRally_Sound_pushEffect(byte, byte, dword, dword, dword, dword);

// MONEY ACCOUNT CHECK
dword ___28ab4h_cdecl(dword A1){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x34];

	eax = A1;

		esi = eax;
		ecx = D(___1a1ef8h);
		eax = 8*ecx;
		eax -= ecx;
		eax <<= 2;
		eax -= ecx;
		if((int)esi <= (int)D(eax*4+___1a01e0h+0x30)) goto ___28c0fh;
		ecx = 0x15e00;
		edi = 0x15b;
___28af3h:
		eax = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		edx = 0xc4;
		eax += ecx;
		ebx = edi;
		eax += 0xaa;
		ecx += 0x280;
		memset(eax, edx, ebx);
		if(ecx != 0x22600) goto ___28af3h;
		ecx = D(___1a1ef8h);
		eax = 8*ecx;
		eax -= ecx;
		eax <<= 2;
		eax -= ecx;
		edx = esp+0x20;
		ebx = D(eax*4+___1a01e0h+0x30);
		eax = esi;
		edi = esp;
		eax -= ebx;
		ebx = 0xa;
		esi = "honey. [You are $";
		eax = itoa_watcom106(eax, edx, ebx);
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		D(edi) = D(esi); edi += 4; esi += 4;
		W(edi) = W(esi); edi += 2; esi += 2;
		esi = esp+0x20;
		edi = esp;
		strcat(edi, esi);
		esi = " [short.";
		edi = esp;
		edx = 0x186aa;
		strcat(edi, esi);
		eax = "No dough, no go, bro. No money,";
		___13094h_cdecl(eax, edx);
		edx = 0x1aeaa;
		eax = esp;
		___13094h_cdecl(eax, edx);
		edx = 0x1d6aa;
		eax = "Gotta earn it. Go do it already.";
		ebx = 0;
		___13094h_cdecl(eax, edx);
		___12cb8h__VESA101_PRESENTSCREEN();
		edx = 0x17;
		eax = 0x2;
		ecx = D(___24cc54h);
		esi = 0x136;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x25500, 0x8000);
		eax = 0x1;
		D(___185a38h) = esi;
		return eax; 
___28c0fh:
		eax = 0;
		return eax;
}
