#include "drally.h"

	extern byte ___1f2488h[];
	extern byte ___243c60h[];
	extern byte ___1e6ed0h[];
	extern byte ___243d74h[];
	extern byte ___243ce8h[];
	extern byte ___243d28h[];
	extern byte ___243d58h[];
	extern byte ___1de580h[];
	extern byte ___1de7d0h[];
	extern byte ___196dd0h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
int rand_watcom106(void);
double dR_Math_sqrt(double);

// pickups
void race___526ach(void){

	double 	d_tmp;
	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x1c];

		eax = ___1f2488h;
		edx = 0;
		eax += 0x20;
		D(esp) = edx;
		D(esp+0xc) = eax;
___526d0h:
		eax = 0x35e*D(___243c60h);
		FPUSH(F32(eax+___1e6ed0h+0xb4));
		FPUSH(F32(eax+___1e6ed0h+0xb8));
		ebx = D(esp);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x18) = (int)FPOP();
		D(esp+8) = (int)FPOP();
		ecx = D(ebx+___1f2488h);
		esi = D(ebx+___1f2488h+4);
		edx = D(esp+0x18);
		eax = D(esp+8);
		edx -= ecx;
		eax -= esi;
		if((int)edx >= 0) goto ___52723h;
		ebx = edx;
		ebx = 0-ebx;
		goto ___52725h;
___52723h:
		ebx = edx;
___52725h:
		if((int)ebx >= 0x11) goto ___52a92h;
		if((int)eax >= 0) goto ___52738h;
		ebx = eax;
		ebx = 0-ebx;
		goto ___5273ah;
___52738h:
		ebx = eax;
___5273ah:
		if((int)ebx >= 0x11) goto ___52a92h;
		ecx = 0x35e*D(___243c60h);
		ebx = D(___243d74h);
		ebx += D(ecx+___1e6ed0h+0x10);
		edx += ebx;
		ebx = eax+0x12;
		ebx = 0x28*ebx;
		ebx += edx;
		if(B(ebx+0x12) > 3) goto ___52787h;
		if(B(ebx+0x16) > 3) goto ___52787h;
		eax += 0x16;
		eax = 0x28*eax;
		edx += eax;
		if(B(edx+0x12) > 3) goto ___52787h;
		if(B(edx+0x16) <= 3) goto ___52a92h;
___52787h:
		eax = D(esp);
		if((int)D(eax+___1f2488h+8) <= 0) goto ___52a92h;
		ebx = D(___243ce8h);
		eax = D(___243c60h);
		if(eax != ebx) goto ___527c4h;
		ecx = 0x9000;
		edx = 0x12;
		eax = 4;
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x21000, 0x8000);
		goto ___5284fh;
___527c4h:
		edx = 0x35e*eax;
		eax = 0x35e*ebx;
		FPUSH(F32(edx+___1e6ed0h+0xb4));
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb4);
		FPUSH(F32(edx+___1e6ed0h+0xb8));
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		D(esp+0x14) = (int)FPOP();
		edx = D(esp+0x14);
		edx = edx*edx;
		ST(0) = ST(0)-(double)F32(eax+___1e6ed0h+0xb8);
		D(esp+4) = (int)FPOP();
		eax = D(esp+4);
		eax = eax*eax;
		edx += eax;
		D(esp+0x18) = edx;
		FPUSH((int)D(esp+0x18));
		ST(0) = dR_Math_sqrt(ST(0));   
		D(esp+0x18) = (int)FPOP();
		ecx = 0x4b*D(esp+0x18);
		eax = 0x9000;
		eax -= ecx;
		ecx = eax;
		if((int)eax <= 0x1000) goto ___5284fh;
		edx = 0x12;
		eax = 0xa;
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x21000, 0x8000);
	goto ___5284fh;
___5284fh:
		ebp = D(esp);
		eax = D(esp+0xc);
		ebx = 0;
		edx = 0;
		D(esp+0x10) = eax;
___5285eh:
		edi = D(ebp+___1f2488h+4);
		edi += edx;
		eax = D(___243d28h);
		edi -= 8;
		eax = eax*edi;
		esi = D(esp+0x10);
		ecx = D(ebp+___1f2488h);
		edi = D(___243d58h);
		esi += ebx;
		edi += ecx;
		ebx += 0x10;
		edi -= 8;
		ecx = 0x10;
		edi += eax;
		edx++;
		memcpy(edi, esi, ecx);
		if((int)edx < 0x10) goto ___5285eh;
		eax = D(ebp+___1f2488h+8);
		eax--;

		switch(eax){
		case 0: goto ___528c0h;
		case 1: goto ___528f7h;
		case 2: goto ___5292eh;
		case 3: goto ___52943h;
		case 4: goto ___5298dh;
		case 5: goto ___529d2h;
		case 6: goto ___529ech;
		case 7: goto ___529ffh;
		default:
			goto ___52a39h;
		}

___528c0h:
		eax = 0x94*D(___243c60h);
		ecx = D(eax+___1de580h+0x30);
		ecx += 0x7800;
		D(eax+___1de580h+0x30) = ecx;
		if((int)ecx <= 0x19000) goto ___52a39h;
		D(eax+___1de580h+0x30) = 0x19000;
		goto ___52a39h;
___528f7h:
		eax = 0x94*D(___243c60h);
		edi = D(eax+___1de580h+0x34);
		edi += 0x3c00;
		D(eax+___1de580h+0x34) = edi;
		if((int)edi <= 0x19000) goto ___52a39h;
		D(eax+___1de580h+0x34) = 0x19000;
		goto ___52a39h;
___5292eh:
		eax = 0x94*D(___243c60h);
		D(eax+___1de580h+0x50)++;
		goto ___52a39h;
___52943h:
		edi = D(___243c60h);
		eax = 0x35e*edi;
		ebp = 0x230;
		edx = D(___243ce8h);
		D(eax+___1e6ed0h+0x34e) = ebp;
		if(edi != edx) goto ___52a39h;
		ecx = 0x10000;
		edx = 6;
		eax = 2;
		ebx = 0;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
		goto ___52a39h;
___5298dh:
		eax = rand_watcom106();
		ebx = 4;
		edx = eax%ebx;
		edx += 2;
		D(ebp+___1f2488h+0x1c) = edx;
		eax = 0x94*D(___243c60h);
		edx = D(ebp+___1f2488h+0x1c);
		ebx = D(eax+___1de580h+0x18);
		edx <<= 0xa;
		ebx += edx;
		D(eax+___1de580h+0x18) = ebx;
		if((int)ebx <= 0x19000) goto ___52a39h;
		goto ___52a2fh;
___529d2h:
		edi = D(___243ce8h);
		if(edi != D(___243c60h)) goto ___52a39h;
		D(___1de7d0h+0x4c) = 1;
		goto ___52a39h;
___529ech:
		eax = 0x94*D(___243c60h);
		D(eax+___1de580h+0x50) += 0xa;
		goto ___52a39h;
___529ffh:
		eax = 0x94*D(___243c60h);
		esi = 0x14;
		edx = esi;
		D(ebp+___1f2488h+0x1c) = esi;
		edx <<= 0xa;
		ebp = D(eax+___1de580h+0x18);
		ebp += edx;
		D(eax+___1de580h+0x18) = ebp;
		if((int)ebp <= 0x19000) goto ___52a39h;
___52a2fh:
		D(eax+___1de580h+0x18) = 0x19000;
___52a39h:
		eax = D(esp);
		D(eax+___1f2488h+0x14) = 0x8c;
		edx = D(esp);
		eax = D(eax+___1f2488h+8);
		ebx = 0xf0;
		D(edx+___1f2488h+0x18) = eax;
		eax = edx;
		edx = 0;
		D(___196dd0h) = ebx;
		D(eax+___1f2488h+8) = edx;
		eax = rand_watcom106();
		ebx = 0x96;
		edx = eax%ebx;
		eax = D(esp);
		edx += 0xc8;
		ecx = 0;
		D(eax+___1f2488h+0xc) = edx;
		D(eax+___1f2488h+0x10) = ecx;
___52a92h:
		edi = D(esp);
		esi = D(esp+0xc);
		edi += 0x120;
		esi += 0x120;
		D(esp) = edi;
		D(esp+0xc) = esi;
		if(edi != 0x1200) goto ___526d0h;
}
