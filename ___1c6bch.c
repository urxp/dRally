#include "drally.h"

	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185b58h[];
	extern __BYTE__ ___1866b8h[];
	extern __BYTE__ ___185a5ch[];
	extern __BYTE__ ___196adch[];
	extern __BYTE__ ___1a103ch[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __BYTE__ ___196ad4h[];
	extern __BYTE__ ___196a84h[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___18e298h[];
	extern __BYTE__ ___1a1168h[];
	extern __BYTE__ ___1a116ch[];
	extern __BYTE__ ___1a1f4eh[];
	extern __BYTE__ ___1a2010h[];
	extern __BYTE__ ___18d492h[];

void ___2ec68h_cdecl(void);
void ___60a84h(void);
void ___2ab50h(void);
void ___23230h(void);
void ___12d6ch__VESA101_PRESENTBOTTOMSCREEN(void);
__DWORD__ ___60b60h(__DWORD__, __DWORD__, __POINTER__, __DWORD__);
__DWORD__ ___60b48h(__DWORD__ A1, __DWORD__ A2);
__DWORD__ ___611c0h(__DWORD__ A1, __POINTER__ * A2);

void ___1c6bch_cdecl(__DWORD__ A0){

	__DWORD__ 		eax, ebx, ecx, edx, edi, esi, ebp;
	__BYTE__ 		esp[0x14];
	__POINTER__ 	vp[4];
	int 			n;

	eax = A0;
	ebp = eax;
	L(edx) = 1;
	H(eax) = 0;
	ebx = 0;
	B(___185b58h) = H(eax);
	B(___185b58h+0x12) = L(edx);
	B(___185b58h+0x13) = L(edx);
	B(___185b58h+0x14) = H(eax);
	B(___185b58h+0x15) = H(eax);
	strcpy(___1866b8h+0x384, "Continue Current Game");
	B(___185b58h+0x16) = H(eax);
	edx = 0;
	B(___185b58h+0x17) = H(eax); 
	D(___185a5ch+0x50) = edx;
	strcpy(___1866b8h+0x3b6, "Abort Current Game");
	___2ec68h_cdecl();
	___60a84h();
	D(esp+0x10) = edx;
	esi = 4;
___1c73eh:
	___2ab50h();
	___2ab50h();
	eax = D(esp+0x10);
	edx = eax;
	edi = 0xa;
	edx = (int)edx>>0x1f;
	___idiv32((__POINTER__)&eax, (__POINTER__)&edx, edi);
	if(edx != 1) goto ___1c76ch;
	edx = D(___196adch);
	eax = esi;
	eax = ___60b48h(eax, edx);
	ebx = eax;
___1c76ch:
	D(esp+0x10)++;
	if(ebx != 0xff) goto ___1c73eh;
	eax = ___611c0h(0, 0);
	edx = eax;
	D(___1a103ch) = eax;
	eax = D(___1a1ef8h);
	if(edx == eax) goto ___1c7d2h;
	ebx = eax;
	eax <<= 3;
	eax -= ebx;
	eax <<= 2;
	eax -= ebx;
	memcpy(___1a01e0h+0x6c*edx, ___1a01e0h+4*eax, 0x6c);
___1c7d2h:
	D(___1a1ef8h) = D(___1a103ch);
	D(___196ad4h) = 0;
	D(___196a84h) = 0;
	D(___196a98h) = 0;
	D(___196a9ch) = 0;
	D(___196aa0h) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x44) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0xc) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x10) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x14) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x18) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x1c) = 0;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x30) = ebp;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x48) = 1;
	D(___1a01e0h+0x6c*D(___1a103ch)+0x3c) = D(___18e298h+0xc);

	n = -1;
	while(++n < 4) B(___1a1168h+n) = n;

	vp[0] = ___1a01e0h;
	vp[1] = ___1a01e0h+0x6c;
	vp[2] = ___1a01e0h+2*0x6c;
	vp[3] = ___1a01e0h+3*0x6c;
	___60a84h();

	ebx = 0;
	D(esp+0x10) = 0;
	while(1){

		___2ab50h();
		___2ab50h();
		eax = D(esp+0x10);
		edx = (int)eax>>0x1f;
		___idiv32((__POINTER__)&eax, (__POINTER__)&edx, 0xa);

		if(edx == 1) ebx = ___60b60h(1, D(___196adch), ___1a01e0h+0x6c*D(___1a1ef8h), 0x6c);

		D(esp+0x10)++;
		if(ebx == 0xff) break;
	}

	eax = ___611c0h(0x6c, vp);

	n = -1;
	while(++n < 0x15){

		strcpy(___1a116ch+0x96*n, ___1a116ch+0x96*(n+1));
		B(___1a1f4eh+n) = B(___1a1f4eh+(n+1));
	}

	edx = B(___1a2010h+D(___196ad4h)+1);
	strcpy(___1a116ch+0xc4e, "-- Prepare for the first track, ");
	strcat(___1a116ch+0xc4e, ___18d492h+0xf*edx);
	strcat(___1a116ch+0xc4e, ".");
	B(___1a1f4eh+0x15) = 0;
	___23230h();
	___12d6ch__VESA101_PRESENTBOTTOMSCREEN();
	return;
}
