#include "drally.h"

	extern byte ___1a1ee4h[];
	extern byte ___185cbch[];
	extern byte ___1a01b8h[];
	extern byte ___1a1ed0h[];

void ___2ab50h(void);
void ___259e0h_cdecl(dword, dword, dword, dword, dword);

// SHOP PREV/NEXT CAR FRAME ARROW ANIMATION
void ___28470h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, p5;


		___2ab50h();
		___2ab50h();
		ebx = D(___1a1ee4h);
		edx = 0x8d;
		ebx <<= 0x8;
		ecx = D(___1a1ee4h);
		ebx = ___185cbch+ebx;
		eax = 0x10;
		p5 = ebx;
		ecx = D(ecx*4+___1a01b8h);
		ebx = D(___1a1ed0h);
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		edx = D(___1a1ed0h);
		edx++;
		D(___1a1ed0h) = edx;
		if((int)edx <= 0x3f) goto ___284d6h;
		ecx = 0;
		D(___1a1ed0h) = ecx;
___284d6h:
		___2ab50h();
		___2ab50h();
		ebx = D(___1a1ee4h);
		edx = 0x8d;
		ebx <<= 0x8;
		ecx = D(___1a1ee4h);
		ebx = ___185cbch+ebx;
		eax = 0x10;
		p5 = ebx;
		ecx = D(ecx*4+___1a01b8h);
		ebx = D(___1a1ed0h);
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		esi = D(___1a1ed0h);
		esi++;
		D(___1a1ed0h) = esi;
		if((int)esi <= 0x3f) goto ___2852ch;
		ebp = 0;
		D(___1a1ed0h) = ebp;
___2852ch:
		___2ab50h();
		___2ab50h();
		ebx = D(___1a1ee4h);
		edx = 0x8d;
		ebx <<= 0x8;
		ecx = D(___1a1ee4h);
		ebx = ___185cbch+ebx;
		eax = 0x10;
		p5 = ebx;
		ecx = D(ecx*4+___1a01b8h);
		ebx = D(___1a1ed0h);
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		eax = D(___1a1ed0h);
		eax++;
		D(___1a1ed0h) = eax;
		if((int)eax <= 0x3f) goto ___28580h;
		ebx = 0;
		D(___1a1ed0h) = ebx;
___28580h:
		___2ab50h();
		___2ab50h();
		ebx = D(___1a1ee4h);
		edx = 0x8d;
		ebx <<= 0x8;
		ecx = D(___1a1ee4h);
		ebx = ___185cbch+ebx;
		eax = 0x10;
		p5 = ebx;
		ecx = D(ecx*4+___1a01b8h);
		ebx = D(___1a1ed0h);
		___259e0h_cdecl(eax, edx, ebx, ecx, p5);
		ecx = D(___1a1ed0h);
		ecx++;
		D(___1a1ed0h) = ecx;
		if((int)ecx <= 0x3f) goto ___285d6h;
		edi = 0;
		D(___1a1ed0h) = edi;
___285d6h:
		return;
}
