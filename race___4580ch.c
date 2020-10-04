#include "drally.h"

	extern byte ___1a4ebdh[];
	extern byte ___1a4ebeh[];
	extern byte ___1a4ebfh[];
	extern byte ___1a4ec0h[];
	extern byte ___183495h[];
	extern byte ___1a4ec1h[];
	extern byte ___1a4ec2h[];
	extern byte ___18348dh[];


void dRally_Sound_setMasterVolume(dword vol);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void DISPLAY_GET_PALETTE(unsigned char * dst);
void ___58c60h(void);

void race___4580ch(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, P1, P2, P3, P4;
	byte 	esp[0x20];
	double 	d_tmp;


		edx = 0;
		D(esp+0x8) = edx;
		DISPLAY_GET_PALETTE(___1a4ec0h);
		D(esp+0x1c) = 0x28;
___45874h:
		ebx = 0;
		esi = 0;
		D(esp+0x8) = ebx;
___4587ch:
		eax = 0;
		L(eax) = B(esp+8);
		P1 = eax;
		eax = 0;
		L(eax) = B(esi+___1a4ec0h);
		D(esp+0x10) = eax;
		FPUSH((short)W(esp+0x10));
		FPUSH((int)D(esp+0x1c));
		F64(esp+0x14) = ST(0);
		ST(0) = ST(0)/F64(___183495h);
		d_tmp = ST(0); ST(0) = ST(1); ST(1) = d_tmp;
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		L(eax) = B(esp+0xc);
		eax &= 0xff;
		P2 = eax;
		eax = 0;
		L(eax) = B(esi+___1a4ec1h);
		D(esp+0x10) = eax;
		FPUSH((short)W(esp+0x10));
		ST(0) = ST(0)*ST(1);
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		L(eax) = B(esp+0xc);
		eax &= 0xff;
		P3 = eax;
		eax = 0;
		L(eax) = B(esi+___1a4ec2h);
		D(esp+0x10) = eax;
		FPUSH((short)W(esp+0x10));
		ST(1) = ST(1)*ST(0); FPOP();
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		L(eax) = B(esp+0xc);
		eax &= 0xff;
		P4 = eax;
		__DISPLAY_SET_PALETTE_COLOR(P4, P3, P2, P1);
		ecx = D(esp+0x8);
		ecx++;
		esi += 3;
		D(esp+0x8) = ecx;
		if((int)ecx < 0x100) goto ___4587ch;
		___58c60h();
		FPUSH(F64(esp+0x14));
		ST(0) = ST(0)*F64(___18348dh);
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		eax = D(esp+0xc);
		dRally_Sound_setMasterVolume(eax);
		eax = D(esp+0x1c);
		eax--;
		D(esp+0x1c) = eax;
		if((int)eax >= 0) goto ___45874h;

		return;
}
