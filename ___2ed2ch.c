#include "drally.h"

	extern byte ___1a1138h__VESA101h_DefaultScreenBufferB[];
	extern byte ___1a112ch__VESA101_ACTIVESCREEN_PTR[];
	extern byte ___19bd60h[];
	extern byte ___1a1e54h[];
	extern byte ___1a1e64h[];
	extern byte ___1a1e58h[];
	extern void * ___1a1e98h;

void ___25330h(void);
void ___2d728h(void);
void ___2d898h(void);
void ___2da10h(void);
void ___2db88h(void);
void ___2ddc8h(void);

// MARKET BACKGROUND
void ___2ed2ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		ecx = 0x2a580;
		esi = D(___1a1138h__VESA101h_DefaultScreenBufferB);
		edi = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi += 0xe600;
		edi += 0xe600;
		memcpy(edi, esi, ecx);
		if(D(___19bd60h) != 0) goto ___2ed89h;
		ecx = 0x10;
		edx = 0x280;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e54h);
		goto ___2ed9fh;
___2ed89h:
		ecx = 0x10;
		edx = 0x280;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e64h);
___2ed9fh:
		ebx += 0xe600;
___2eda5h:
		edi = edx;
___2eda7h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___2edafh;
		B(ebx) = L(eax);
___2edafh:
		ebx++;
		esi++;
		edi--;
		if(edi) goto ___2eda7h;
		ebx += 0x280;
		ebx -= edx;
		ecx--;
		if(ecx) goto ___2eda5h;
		___25330h();
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = D(___1a1e58h);
		ebx += 0x13890;
		edx = ecx;
		L(edx) >>= 2;
___2ede0h:
		H(ecx) = L(edx);
___2ede2h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2ede2h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2ede0h;
		ecx = 0x60;
		ebx = D(___1a112ch__VESA101_ACTIVESCREEN_PTR);
		esi = ___1a1e98h+0x9000;
		ebx += 0x27a30;
		edx = ecx;
		L(edx) >>= 2;
___2ee1eh:
		H(ecx) = L(edx);
___2ee20h:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___2ee20h;
		ebx += 0x280;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___2ee1eh;
		___2d728h();
		___2d898h();
		___2da10h();
		___2db88h();
		___2ddc8h();
		return;
}
