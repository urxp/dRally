#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___1e6ed0h[];
	extern byte ___243d78h[];
	extern byte ___243d30h[];
	extern byte ___243cech[];
	extern byte ___243c60h[];
	extern byte ___196dd4h[];
	extern byte ___1de580h[];
	extern byte ___243ce8h[];
	extern byte ___1a1134h[];
	extern byte ___196df0h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___1a1034h[];
	extern byte ___1a102ch[];
	extern byte ___1a108ch[];
	extern byte ___1a0ff4h[];
	extern byte ___2438bch[];
	extern byte ___2438b8h[];
	extern byte ___2438c0h[];
	extern char ___19bd64h[16];
	extern byte ___243ca0h[];
	extern byte ___243cb8h[];
	extern byte ___243cdch[];
	extern byte ___1de7d0h[];
	extern byte ___196ab0h[];
	extern byte ___19bd60h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);

// POSITION, LAP COUNTER
void race___55ae0h(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0xc];


		edi = D(___243cf4h);
		esi ^= esi;
		if((int)edi <= 0) goto ___55c1dh;
		edx = 0x35e*edi;
		eax ^= eax;
		D(esp) = edx;
___55b0eh:
		FPUSH(F32(eax+___1e6ed0h+0x10e));
		FPUSH(F32(eax+___1e6ed0h+0x112));
		edx = D(___243d78h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x8) = (int)FPOP();
		ebx = D(esp+0x8);
		ST(0) = (int)ST(0);
		ebx = (int)ebx>>0x2;
		D(esp+0x8) = (int)FPOP();
		ecx = edx+ebx;
		ebx = D(esp+0x8);
		ebp = D(___243d30h);
		ebx = (int)ebx>>0x2;
		ebx = ebx*ebp;
		L(ecx) = B(ecx+ebx);
		ebx = D(eax+___1e6ed0h);
		ecx &= 0xff;
		ebx++;
		if(ecx == ebx) goto ___55ba0h;
		FPUSH(F32(eax+___1e6ed0h+0x122));
		FPUSH(F32(eax+___1e6ed0h+0x11e));
		ST(0) = (int)ST(0);
		D(esp+0x8) = (int)FPOP();
		ecx = D(esp+0x8);
		ST(0) = (int)ST(0);
		ecx = (int)ecx>>0x2;
		D(esp+0x8) = (int)FPOP();
		ecx += edx;
		edx = D(esp+0x8);
		edx = (int)edx>>0x2;
		edx = edx*ebp;
		L(edx) = B(ecx+edx);
		edx &= 0xff;
		if(edx != ebx) goto ___55ba6h;
___55ba0h:
		D(eax+___1e6ed0h)++;
___55ba6h:
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ebx = D(___243d78h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = (int)ST(0);
		D(esp+0x8) = (int)FPOP();
		edx = D(esp+0x8);
		ST(0) = (int)ST(0);
		edx = (int)edx>>0x2;
		D(esp+0x8) = (int)FPOP();
		ebx += edx;
		edx = D(esp+0x8);
		ecx = D(___243d30h);
		edx = (int)edx>>0x2;
		edx = edx*ecx;
		L(edx) = B(edx+ebx);
		edx &= 0xff;
		ebp = D(___243cech);
		D(esp+0x4) = edx;
		if(edx != ebp) goto ___55c0ch;
		if((int)ebp <= (int)D(eax+___1e6ed0h)) goto ___55c0ch;
		ecx ^= ecx;
		D(eax+___1e6ed0h) = ecx;
___55c0ch:
		edx = D(esp);
		eax += 0x35e;
		esi++;
		if((int)eax < (int)edx) goto ___55b0eh;
___55c1dh:
		esi ^= esi;
		if((int)edi <= 0) goto ___55ca5h;
		ebp ^= ebp;
___55c29h:
		ecx ^= ecx;
		if((int)edi <= 0) goto ___55c9ah;
		edx = ebp;
		eax ^= eax;
___55c37h:
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___55c90h;
		if(ecx == esi) goto ___55c90h;
		ebx = D(edx+___1e6ed0h);
		if((int)ebx <= (int)D(eax+___1e6ed0h)) goto ___55c90h;
		L(ebx) = B(edx+___1e6ed0h+0x108);
		if(L(ebx) < B(eax+___1e6ed0h+0x108)) goto ___55c90h;
		L(ebx) = B(edx+___1e6ed0h+0x109);
		if(L(ebx) <= B(eax+___1e6ed0h+0x109)) goto ___55c90h;
		ebx ^= ebx;
		L(ebx) = B(edx+___1e6ed0h+0x109);
		D(esp+0x4) = ebx;
		L(ebx) = B(eax+___1e6ed0h+0x109);
		B(edx+___1e6ed0h+0x109) = L(ebx);
		L(ebx) = B(esp+4);
		B(eax+___1e6ed0h+0x109) = L(ebx);
___55c90h:
		ecx++;
		eax += 0x35e;
		if((int)ecx < (int)edi) goto ___55c37h;
___55c9ah:
		esi++;
		ebp += 0x35e;
		if((int)esi < (int)edi) goto ___55c29h;
___55ca5h:
		esi ^= esi;
		if((int)edi <= 0) goto ___55fb9h;
___55cafh:
		eax = 0x35e*esi;
		ebp = D(___243cech);
		D(___243cf4h) = edi;
		edx = D(eax+___1e6ed0h);
		D(___243c60h) = esi;
		if(edx != ebp) goto ___55fa4h;
		if(D(___196dd4h) == 0) goto ___55cf6h;
		D(eax+___1e6ed0h+0x10a) = 1;
		eax = 0x94*esi;
		ecx ^= ecx;
		D(eax+___1de580h+4) = ecx;
___55cf6h:
		if(D(___196dd4h) != 0) goto ___55ed2h;
		eax = 0x35e*esi;
		L(edx) = B(eax+___1e6ed0h+0x108);
		L(edx)++;
		ebx = D(___243ce8h);
		B(eax+___1e6ed0h+0x108) = L(edx);
		if(esi != ebx) goto ___55ed2h;
		L(eax) = L(edx);
		ecx = D(___1a1134h);
		eax &= 0xff;
		D(___243c60h) = ebx;
		D(___243cf4h) = edi;
		if(eax != ecx) goto ___55d6ah;
		ecx = 0x10000;
		edx = 0x2;
		ebx ^= ebx;
		eax = edx;
		ebp = 0xd2;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
		D(___196df0h) = ebp;
___55d6ah:
		edx = 0x1770*D(___1a1094h);
		eax = 0x64*D(___1a109ch);
		ecx = D(___1a1034h);
		eax += edx;
		edx = 0x1770*ecx;
		ebx = D(___1a102ch);
		ebp = D(___1a108ch);
		ebx += eax;
		eax = 0x64*ebp;
		eax += edx;
		edx = D(___1a0ff4h);
		edi = D(___243cf4h);
		eax += edx;
		esi = D(___243c60h);
		if((int)ebx < (int)eax) goto ___55dc0h;
		if(ecx) goto ___55ddeh;
		if(ebp) goto ___55ddeh;
		if(edx) goto ___55ddeh;
___55dc0h:
		eax = D(___1a1094h);
		D(___1a1034h) = eax;
		eax = D(___1a109ch);
		D(___1a108ch) = eax;
		eax = D(___1a102ch);
		D(___1a0ff4h) = eax;
___55ddeh:
		eax = 0x1770*D(___1a1094h);
		edx = 0x64*D(___1a109ch);
		ecx = D(___2438bch);
		eax += edx;
		edx = 0x1770*ecx;
		ebx = D(___1a102ch);
		ebp = D(___2438b8h);
		ebx += eax;
		eax = 0x64*ebp;
		eax += edx;
		edx = D(___2438c0h);
		eax += edx;
		if((int)ebx < (int)eax) goto ___55e30h;
		if(ecx) goto ___55e9ch;
		if(ebp) goto ___55e9ch;
		if(edx) goto ___55e9ch;
___55e30h:
		H(edx) = ___19bd64h[2];
		D(___243c60h) = esi;
		D(___243cf4h) = edi;
		if(H(edx) == 0x30) goto ___55e70h;
		if(D(___196df0h) != 0) goto ___55e70h;
		ecx = 0x10000;
		edx = 0x4;
		ebx = 0;
		dRally_Sound_pushEffect(0x2, edx, ebx, ecx, 0x50000, 0x8000);
___55e70h:
		eax = D(___1a1094h);
		D(___2438bch) = eax;
		eax = D(___1a109ch);
		edi = D(___243cf4h);
		D(___2438b8h) = eax;
		eax = D(___1a102ch);
		esi = D(___243c60h);
		D(___2438c0h) = eax;
		goto ___55ea3h;
___55e9ch:
		D(___196df0h) = 0;
___55ea3h:
		ebx = 0xd2;
		eax = D(___243ca0h);
		ecx ^= ecx;
		D(___243cb8h) = eax;
		D(___243cdch) = ebx;
		D(___1a102ch) = ecx;
		D(___1a109ch) = ecx;
		D(___1a1094h) = ecx;
		D(___243ca0h) = ecx;
___55ed2h:
		eax = 0x35e*esi;
		ecx = D(___1a1134h);
		D(___243cf4h) = edi;
		ebx ^= ebx;
		edx ^= edx;
		D(___243c60h) = esi;
		L(edx) = B(eax+___1e6ed0h+0x108);
		D(eax+___1e6ed0h) = ebx;
		if((int)edx <= (int)ecx) goto ___55fa4h;
		esi = 0x1;
		L(edx) = B(___1a1134h);
		ebp = D(___243ce8h);
		D(eax+___1e6ed0h+0x10a) = esi;
		esi = D(___243c60h);
		B(eax+___1e6ed0h+0x108) = L(edx);
		if(esi != ebp) goto ___55f3ah;
		edx = 0x270f;
		D(eax+___1e6ed0h+0x34e) = ebx;
		D(___243cdch) = edx;
___55f3ah:
		eax = 0x94*esi;
		ecx ^= ecx;
		D(eax+___1de580h+4) = ecx;
		eax = 0x54*esi;
		ebp = 0x1;
		edx = "DUKE NUKEM";
		D(___196dd4h) = ebp;
		eax = ___1de7d0h+eax;
		D(___243c60h) = esi;
		eax = strcmp(eax, edx);
		esi = D(___243c60h);
		if(eax) goto ___55fa4h;
		eax = 0x35e*esi;
		if(B(eax+___1e6ed0h+0x109) != 1) goto ___55fa4h;
		ecx = 0x10000;
		edx = 0x1f;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___55fa4h:
		esi = D(___243c60h);
		edi = D(___243cf4h);
		esi++;
		if((int)esi < (int)edi) goto ___55cafh;
___55fb9h:
		esi ^= esi;
		ebp ^= ebp;
		if((int)edi <= 0) goto ___55ff2h;
		ebx = D(___243cech);
		eax ^= eax;
___55fc9h:
		edx ^= edx;
		L(edx) = B(eax+___1e6ed0h+0x108);
		edx = edx*ebx;
		edx += D(eax+___1e6ed0h);
		if((int)edx <= (int)ebp) goto ___55fe8h;
		if(esi == D(___243ce8h)) goto ___55fe8h;
		ebp = edx;
___55fe8h:
		esi++;
		eax += 0x35e;
		if((int)esi < (int)edi) goto ___55fc9h;
___55ff2h:
		eax = 0x35e*D(___243ce8h);
		edx ^= edx;
		L(edx) = B(eax+___1e6ed0h+0x108);
		ebx = D(___243cech);
		edx++;
		edx = edx*ebx;
		eax = D(eax+___1e6ed0h);
		D(___243c60h) = esi;
		eax += edx;
		D(___243cf4h) = edi;
		if((int)ebp <= (int)eax) goto ___5606ch;
		if(D(___196ab0h) != 0) goto ___5606ch;
		if(D(___1de580h) == 6) goto ___5606ch;
		if(D(___19bd60h) != 0) goto ___5606ch;
		ebx = 0x1;
		ecx = 0x10000;
		edx = 0x16;
		eax = 0x2;
		D(___196ab0h) = ebx;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___5606ch:
		eax = 0x35e*D(___243ce8h);
		edx ^= edx;
		L(edx) = B(eax+___1e6ed0h+0x108);
		ebx = D(___243cech);
		edx++;
		edx = edx*ebx;
		eax = D(eax+___1e6ed0h);
		edi = D(___243cf4h);
		eax += edx;
		esi = D(___243c60h);
		if((int)ebp >= (int)eax) goto ___560c0h;
		if(D(___196ab0h) != 1) goto ___560c0h;
		if(D(___1de580h) == 6) goto ___560c0h;
		eax = D(___19bd60h);
		if(eax) goto ___560c0h;
		D(___196ab0h) = eax;
___560c0h:
		D(___243cf4h) = edi;
		D(___243c60h) = esi;
		return;
}
