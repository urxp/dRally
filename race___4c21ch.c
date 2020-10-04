#include "drally.h"

	const byte ___3f6ech[] = {
		0x29,0x5c,0x8f,0x3d,
		0x8f,0xc2,0xf5,0x3d,
		0xae,0x47,0xe1,0x3d,
		0xcd,0xcc,0x4c,0x3e,
		0xec,0x51,0x38,0x3e,
		0x0a,0xd7,0xa3,0x3e
	};


 	const byte ___3f704h[] = {
		0x8f,0xc2,0xf5,0x3d,
		0x5c,0x8f,0x42,0x3e,
		0x8f,0xc2,0x75,0x3d,
		0x8f,0xc2,0xf5,0x3d,
		0x8f,0xc2,0xf5,0x3c,
		0x8f,0xc2,0x75,0x3d
	};

	extern byte ___243cech[];
	extern byte ___243ce8h[];
	extern byte ___1de868h[];
	extern byte ___1de814h[];
	extern byte ___243cf4h[];
	extern byte ___243c60h[];
	extern byte ___243ce0h[];
	extern byte ___1de598h[];
	extern byte ___1e6fd8h[];
	extern byte ___1e6ed0h[];
	extern byte ___185a50h[];
	extern byte ___1de588h[];
	extern byte ___1de4f0h[];

// DIFFICULTY ADJUSTMENT
void race___4c21ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x40];


		ebx = D(___243cech);
		ecx = 0x6;
		edi = esp+0x18;
		esi = ___3f6ech;
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		ecx = 0x6;
		edi = esp;
		esi = ___3f704h;
		edx = D(___243ce8h);
		while(ecx--||++ecx){ D(edi) = D(esi); edi += 4; esi += 4; }
		if(edx != 0) goto ___4c26ah;
		esi = D(___1de868h);
		goto ___4c270h;
___4c26ah:
		esi = D(___1de814h);
___4c270h:
		ecx = 0;
		edi = D(___243cf4h);
		D(___243c60h) = ecx;
		if((int)edi <= 0) goto ___4c425h;
		edx = 0x35e*D(___243ce8h);
		esi <<= 3;
		eax = 0;
___4c295h:
		D(esp+0x3c) = 0x3f800000;
		edi = D(___243c60h);
		if(edi != D(___243ce8h)) goto ___4c2b8h;
		if(D(___243ce0h) == 0) goto ___4c3f1h;
___4c2b8h:
		if((int)D(ecx+___1de598h) <= 0) goto ___4c3f1h;
		edi = B(edx+___1e6fd8h);
		edi = edi*ebx;
		edi += D(edx+___1e6ed0h);
		D(esp+0x34) = edi;
		edi = B(eax+___1e6fd8h);
		edi = edi*ebx;
		edi += D(eax+___1e6ed0h);
		D(esp+0x38) = edi;
		edi = D(esp+0x34);
		edi--;
		D(esp+0x30) = edi;
		edi = D(esp+0x38);
		if(edi != D(esp+0x30)) goto ___4c30ch;
		FPUSH(F32(esp+esi+0x18));
		FPUSH(1.0);
		ST(1) = ST(1)+ST(0); FPOP();
		F32(esp+0x3c) = (float)FPOP();
___4c30ch:
		edi = B(edx+___1e6fd8h);
		edi = edi*ebx;
		edi += D(edx+___1e6ed0h);
		D(esp+0x38) = edi;
		edi = B(eax+___1e6fd8h);
		edi = edi*ebx;
		edi += D(eax+___1e6ed0h);
		D(esp+0x30) = edi;
		edi = D(esp+0x38);
		edi -= 2;
		D(esp+0x34) = edi;
		edi = D(esp+0x30);
		if((int)edi > (int)D(esp+0x34)) goto ___4c355h;
		FPUSH(F32(esp+esi+0x1c));
		FPUSH(1.0);
		ST(1) = ST(1)+ST(0); FPOP();
		F32(esp+0x3c) = (float)FPOP();
___4c355h:
		if(D(___185a50h) == 2) goto ___4c3f1h;
		edi = B(edx+___1e6fd8h);
		edi = edi*ebx;
		edi += D(edx+___1e6ed0h);
		D(esp+0x34) = edi;
		edi = B(eax+___1e6fd8h);
		edi = edi*ebx;
		edi += D(eax+___1e6ed0h);
		D(esp+0x38) = edi;
		edi = D(esp+0x34);
		edi++;
		D(esp+0x34) = edi;
		edi = D(esp+0x38);
		if(edi != D(esp+0x34)) goto ___4c3a8h;
		FPUSH(F32(esp+esi));
		FPUSH(1.0);
		ST(1) = ST(0)-ST(1); FPOP();
		F32(esp+0x3c) = (float)FPOP();
___4c3a8h:
		edi = B(edx+___1e6fd8h);
		edi = edi*ebx;
		edi += D(edx+___1e6ed0h);
		D(esp+0x38) = edi;
		edi = B(eax+___1e6fd8h);
		edi = edi*ebx;
		edi += D(eax+___1e6ed0h);
		D(esp+0x34) = edi;
		edi = D(esp+0x38);
		edi += 2;
		D(esp+0x38) = edi;
		edi = D(esp+0x34);
		if((int)edi < (int)D(esp+0x38)) goto ___4c3f1h;
		FPUSH(F32(esp+esi+4));
		FPUSH(1.0);
		ST(1) = ST(0)-ST(1); FPOP();
		F32(esp+0x3c) = (float)FPOP();
___4c3f1h:
		FPUSH(F32(ecx+___1de588h));
		ST(0) = ST(0)*(double)F32(esp+0x3c);
		edi = D(___243c60h);
		ecx += 0x94;
		eax += 0x35e;
		edi++;
		F32(ecx+___1de4f0h) = (float)FPOP();
		D(___243c60h) = edi;
		if((int)edi < (int)D(___243cf4h)) goto ___4c295h;
___4c425h:
		D(___243cech) = ebx;
		return;
}
