#include "drally.h"

	extern byte ___199f4ch[];
	extern byte ___199f48h[];
	extern byte ___24cc6ch[];
	extern byte ___199f50h[];
	extern byte ___199f54h[];
	extern byte ___19bd58h[];
	extern byte ___199f74h[];
	extern byte ___199f78h[];
	extern byte ___199f3ch[];
	extern byte ___199f60h[];

dword __GET_TIMER_TICKS(void);
byte inp_(dword port);
void ___59db8h(void);
byte dRally_Keyboard_popLastChar(void);

byte ___59b3ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;

	
		L(eax) = dRally_Keyboard_popLastChar();
		edx = D(___199f4ch);
		H(ebx) = L(eax);
		if(edx == 0) goto ___59b75h;
		edx = D(___199f48h);
		ecx = D(___24cc6ch);
		esi = edx+1;
		B(ecx+edx) = L(eax);
		D(___199f48h) = esi;
___59b75h:
		if(D(___199f50h) == 0) goto ___59bbch;
		esi = D(___199f48h);
		edx = D(___24cc6ch);
		edx += esi;
		if(B(edx) != 0x45) goto ___59ba5h;
		if(B(edx+1) != 0x4e) goto ___59ba5h;
		if(B(edx+2) != 0x44) goto ___59ba5h;
		edi ^= edi;
		D(___199f50h) = edi;
___59ba5h:
		eax = D(___199f48h);
		edx = D(___24cc6ch);
		ecx = eax+1;
		H(ebx) = B(edx+eax);
		D(___199f48h) = ecx;
___59bbch:
		if(D(___199f54h) == 0) goto ___59bc7h;
		H(ebx) = 0xd;
___59bc7h:
		if((int)D(___19bd58h) <= 0) goto ___59bd5h;
		___59db8h();
___59bd5h:
		if((int)D(___19bd58h) <= 0) goto ___59ccch;
		ecx = D(___199f74h);
		eax = __GET_TIMER_TICKS();
		edx = eax;
		if(ecx) goto ___59bfbh;
		eax = edx-0xa;
		D(___199f74h) = eax;
___59bfbh:
		if(D(___199f78h) != 0) goto ___59c0ch;
		eax = edx-0xa;
		D(___199f78h) = eax;
___59c0ch:
		L(ecx) = B(___199f3ch);
		L(ebx) = 0;
		if(L(ecx)) goto ___59c58h;
		eax = 0x201;
		L(eax) = inp_(eax);
		if(L(eax)&0x10) goto ___59c28h;
		L(ebx) = 0xd;
___59c28h:
		eax = 0x201;
		L(eax) = inp_(eax);
		if(L(eax)&0x20) goto ___59c38h;
		L(ebx) = 0x1b;
___59c38h:
		eax = 0x201;
		L(eax) = inp_(eax);
		if(L(eax)&0x40) goto ___59c48h;
		L(ebx) = 0xd;
___59c48h:
		eax = 0x201;
		L(eax) = inp_(eax);
		if(L(eax)&0x80) goto ___59c58h;
		L(ebx) = 0x1b;
___59c58h:
		edi = D(___199f60h);
		eax = edx-4;
		if((int)edx < (int)edi) goto ___59ca0h;
		if(L(ebx) == 0) goto ___59c99h;
		ebp = D(___199f74h);
		eax = edx;
		eax -= ebp;
		if((int)eax < 4) goto ___59c8fh;
		ecx = D(___199f78h);
		eax = edx;
		eax -= ecx;
		if((int)eax >= 4) goto ___59c8fh;
		eax = edx+7;
		D(___199f60h) = eax;
___59c8fh:
		H(ebx) = L(ebx);
		D(___199f74h) = edx;
		goto ___59cc6h;
___59c99h:
		D(___199f74h) = eax;
		goto ___59cc6h;
___59ca0h:
		if(L(ebx) == 0) goto ___59cbbh;
		D(___199f74h) = edx;
		H(ebx) = 0;
		D(___199f78h) = edx;
		L(eax) = H(ebx);
		return L(eax);
___59cbbh:
		D(___199f74h) = eax;
		D(___199f60h) = edx;
___59cc6h:
		D(___199f78h) = edx;
___59ccch:
		L(eax) = H(ebx);
		return L(eax);
}
