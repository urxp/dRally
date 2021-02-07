#include "drally.h"

	extern byte ___243894h[];
	extern byte ___243330h[];
	extern byte ___243334h[];
	extern byte ___243ca4h[];
	extern byte ___24332ch[];
	extern byte ___243ce8h[];
	extern byte ___1e6ed0h[];
	extern byte ___243cd4h[];
	extern byte ___243ca0h[];
	extern byte ___1a10a0h[];
	extern byte ___1a10a8h[];
	extern byte ___1a1094h[];
	extern byte ___1a109ch[];
	extern byte ___1a1090h[];
	extern byte ___1a102ch[];
	extern byte ___196d98h[];
	extern byte ___1c9f10h[];
	extern byte ___243d80h[];
	extern byte ___243cf4h[];
	extern byte ___243854h[];
	extern byte ___243d3ch[];
	extern byte ___1de210h[];
	extern byte ___1a1134h[];
	extern byte ___1de580h[];
	extern byte ___243d48h[];
	extern byte ___1c9ec0h[];
	extern byte ___1c9ee0h[];
	extern byte ___1c9ef0h[];
	extern byte ___1c9ed0h[];
	extern byte ___1c9f00h[];
	extern byte ___1d8a10h[];
	extern byte ___1d2710h[];
	extern byte ___243338h[];
	extern byte ___2435c4h[];
	extern byte ___243d34h[];
	extern byte ___243cdch[];
	extern byte ___243cb8h[];
	extern byte ___1d7810h[];
	extern byte ___1de530h[];
	extern byte ___196de8h[];
	extern byte ___196dech[];
	extern byte ___1de7d0h[];
	extern byte ___196df4h[];
	extern byte ___1d5890h[];
	extern byte ___243d84h[];


void race___40864h(void);
dword ___4256ch_cdecl(dword A1, dword A2, dword A3, dword A4, dword A5, dword A6, dword A7, dword A8);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void ___424c8h_cdecl(dword A1, const char * A2);
double dR_Math_ceil(double);

void race___40f48h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp, P1, P2, P3, P4;
	byte 	esp[0x38];
	int 	n;


		eax = D(___243894h);
		edx = D(___243330h);
		eax -= edx;
		D(___243334h) = eax;
		eax = D(___243894h);
		edx = D(___243334h);
		ebx = 0x20000;
		edx <<= 0x10;
		D(___243330h) = eax;
		eax ^= eax;
		eax = (eax >> 0x10)|(edx << 0x10);
		edx = (int)edx>>0x10;
		___idiv32(&eax, &edx, ebx);
		ebx = D(___243ca4h);
		D(___24332ch) = eax;
		if((int)ebx <= 0xbe) goto ___4107dh;
		eax = 0x35e*D(___243ce8h);
		if(D(eax+___1e6ed0h+0x10a) != 0) goto ___4107dh;
		ebx = 0x46;
		eax = D(___243334h);
		edi = D(___243cd4h);
		ebp = D(___243ca0h);
		edi += eax;
		ebp += eax;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ecx = 0x3c;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		D(___1a10a0h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x46;
		D(___1a10a8h) = edx;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		edx = (int)edx>>0x1f;
		ebx = eax;
		___idiv32(&eax, &edx, ecx);
		D(___1a1094h) = eax;
		edx = ebx;
		eax = ebx;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ecx);
		ebx = 0x46;
		D(___1a109ch) = edx;
		edx = ebp;
		eax = ebp;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		FPUSH(1.42);
		FPUSH((int)D(esp));
		ST(0) = ST(0)*ST(1);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(2) = ST(2)*ST(0); FPOP();
		D(___243cd4h) = edi;
		D(___243ca0h) = ebp;
		ST(0) = (int)ST(0);
		D(___1a1090h) = (int)FPOP();
		ST(0) = (int)ST(0);
		D(___1a102ch) = (int)FPOP();
___4107dh:
		if((int)D(___196d98h) < 0x40) race___40864h();
		
		n = -1;
		while(++n < 0xc8) memcpy(D(___243d80h)+0x200*n+0x20+D(___196d98h), ___1c9f10h+0x40*n, 0x40);

		esi = D(___243cf4h);
		ebp ^= ebp;

		if((int)esi > 0){

			D(esp+0x1c) = ebp;
			edi ^= edi;

			while(1){

				eax = 0x35e*D(edi+___243854h);

				if(D(eax+___1e6ed0h+0x10a) != 0){

					ecx = D(esp+0x1c);
					eax = 0x40;
					edx = 0x16;
					ebx = D(___243d80h);
					esi = D(___196d98h);
					ebx += 0x9c64;
					eax -= esi;
					esi = D(___243d3ch);
					ebx += ecx;
					ecx = 0x1c;
					ebx -= eax;

					while(1){

						H(ecx) = L(edx);

						while(1){

							L(eax) = B(esi);
							if(L(eax) != 0) B(ebx) = L(eax);
							ebx++;
							esi++;
							H(ecx)--;
							if(H(ecx) == 0) break;
						}

						ebx += 0x200;
						ebx -= edx;
						L(ecx)--;
						if(L(ecx) == 0) break;
					}
				}

				eax = D(esp+0x1c);
				edx = D(___243cf4h);
				edi += 0x4;
				eax += 0x4000;
				ebp++;
				D(esp+0x1c) = eax;
				if((int)ebp >= (int)edx) break;
			}
		}

		eax = D(___243cf4h);
		eax--;
		D(esp+0x10) = eax;
		if((int)eax >= 3) goto ___411f7h;
		eax <<= 0xe;
		eax += 0xd060;
		D(esp+0x30) = eax;
		ebp = 0x40;
___4117dh:
		edi ^= edi;
		esi = D(esp+0x30);
		D(esp+0x34) = edi;
___41187h:
		ebx = 0x2;
		edx = edi;
		eax = edi;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		if((int)edx >= 0x40) goto ___411c4h;
		ecx = D(esp+0x34);
___4119eh:
		ebx = D(___196d98h);
		eax = ebp;
		eax -= ebx;
		ebx = esi;
		ebx -= eax;
		eax = ebx;
		ebx = D(___243d80h);
		eax += ebx;
		eax += ecx;
		B(edx+eax) = 0;
		edx += 0x2;
		if((int)edx < 0x40) goto ___4119eh;
___411c4h:
		ecx = D(esp+0x34);
		ecx += 0x200;
		edi++;
		D(esp+0x34) = ecx;
		if((int)edi < 0x20) goto ___41187h;
		edi = D(esp+0x30);
		eax = D(esp+0x10);
		edi += 0x4000;
		eax++;
		D(esp+0x30) = edi;
		D(esp+0x10) = eax;
		if((int)edi < 0x19060) goto ___4117dh;
___411f7h:
		ebx = D(___243d80h)+0xb435+D(___196d98h);
		esi = ___1de210h+0x50*D(___1a1134h);
		ebp = 0x1;
		ecx = 0xa;
		edx = 0x8;
		edi = 0xf400;
		goto ___4126dh;
___41241h:
		eax = D(___243d80h);
		eax += edi;
		eax += 0x7a;
		eax -= ebx;
		ebx = eax;
		ecx = 0xa;
		edx = 0x8;
		esi = ___1de210h+0x50*D(___1a1134h);
		ebp++;
		edi += 0x4000;
___4126dh:
		H(ecx) = L(edx);
___4126fh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41277h;
		B(ebx) = L(eax);
___41277h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___4126fh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___4126dh;
		ebx = 0x40;
		edx = D(___196d98h);
		ecx = D(___243cf4h);
		ebx -= edx;
		if((int)ebp < (int)ecx) goto ___41241h;
		ebx = D(___243d80h)+0xb462-ebx;
		esi = ___1de210h+0x50*B(___1e6ed0h+0x108+0x35e*D(___243854h));
		ecx = 0xa;
		edx = 0x8;
		edi = 0x1;
___412e4h:
		H(ecx) = L(edx);
___412e6h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___412eeh;
		B(ebx) = L(eax);
___412eeh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___412e6h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___412e4h;
		ebp = D(___243cf4h);
		D(esp+0x24) = edi;
		if((int)ebp <= (int)edi) goto ___4139ah;
		ebp = 0xf400;
		edi = 0x4;
___4131ch:
		ebx = D(___243d80h)+ebp+0x24+D(___196d98h);
		esi = ___1de210h+0x50*B(0x35e*D(edi+___243854h)+___1e6ed0h+0x108);
		ecx = 0xa;
		edx = 0x8;
		edi += 0x4;
___41365h:
		H(ecx) = L(edx);
___41367h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___4136fh;
		B(ebx) = L(eax);
___4136fh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41367h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41365h;
		esi = D(esp+0x24);
		ebp += 0x4000;
		esi++;
		edx = D(___243cf4h);
		D(esp+0x24) = esi;
		if((int)esi < (int)edx) goto ___4131ch;
___4139ah:
		if((int)D(___243cf4h) <= 1) goto ___41444h;
		edx = D(___243854h+4);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de580h+0x18));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x50,0x3f);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/1.57;
		ebp = 0xd000;
		ST(0) = 64.0-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x2c) = (int)FPOP();
		ebx = 0x40;
___413f4h:
		ecx = D(esp+0x2c);
		esi = D(___243d48h);
		eax = D(___243d80h);
		edi = ebx;
		esi += edx;
		eax += ebp;
		esi += 0x40;
		eax += 0xa0;
		esi -= ecx;
		eax -= ecx;
		edi -= D(___196d98h);
		ebp += 0x200;
		eax -= edi;
		ecx = D(esp+0x2c);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___413f4h;
___41444h:
		if((int)D(___243cf4h) <= 2) goto ___414f0h;
		edx = D(___243854h+8);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de580h+0x18));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x50,0x3f);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/1.57;
		ebx = 0x11000;
		ST(0) = 64.0-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x28) = (int)FPOP();
		ebp = 0x40;
___4149eh:
		edi = D(esp+0x28);
		esi = D(___243d48h);
		eax = D(___243d80h);
		ecx = D(___196d98h);
		esi += edx;
		eax += ebx;
		esi += 0x40;
		eax += 0xa0;
		esi -= edi;
		eax -= edi;
		edi = ebp;
		edi -= ecx;
		ebx += 0x200;
		eax -= edi;
		ecx = D(esp+0x28);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___4149eh;
___414f0h:
		if((int)D(___243cf4h) <= 3) goto ___4159ch;
		edx = D(___243854h+0xc);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de580h+0x18));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x50,0x3f);
		ST(0) = dR_Math_ceil(ST(0));
		ST(0) = ST(0)/1.57;
		ebx = 0x15000;
		ST(0) = 64.0-ST(0);
		edx ^= edx;
		ST(0) = (int)ST(0);
		D(esp+0x20) = (int)FPOP();
		ebp = 0x40;
___4154ah:
		edi = D(esp+0x20);
		esi = D(___243d48h);
		eax = D(___243d80h);
		ecx = D(___196d98h);
		esi += edx;
		eax += ebx;
		esi += 0x40;
		eax += 0xa0;
		esi -= edi;
		eax -= edi;
		edi = ebp;
		edi -= ecx;
		ebx += 0x200;
		eax -= edi;
		ecx = D(esp+0x20);
		edi = eax;
		edx += 0x40;
		memcpy(edi, esi, ecx);
		if(edx != 0x240) goto ___4154ah;
___4159ch:
		edx = D(___243854h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		eax <<= 0x2;
		eax = ___1de580h+eax;
		edx = eax+0x44;
		esi = D(___196d98h);
		eax = 0x40;
		ebx = 0x463;
		eax -= esi;
		ebx -= eax;
		eax = ebx;
		___424c8h_cdecl(eax, edx);
		ebx = 0x1;
		if((int)ebx >= (int)D(___243cf4h)) goto ___4162bh;

		ecx = 0x4;
		esi = 0xd463;

		while(1){

			___424c8h_cdecl(esi+D(___196d98h)-0x40, ___1de580h+0x94*D(ecx+___243854h)+0x44);
			
			esi += 0x4000;
			ecx += 4;
			ebx++;
			ebp = D(___243cf4h);
			if((int)ebx >= (int)ebp) break;
		}

___4162bh:
		D(___1c9ec0h+0) = B(___1e6ed0h+0x109+0x35e*D(___243854h));
		D(___1c9ec0h+4) = B(___1e6ed0h+0x109+0x35e*D(___243854h+4));
		D(___1c9ec0h+8) = B(___1e6ed0h+0x109+0x35e*D(___243854h+8));
		eax = B(___1e6ed0h+0x109+0x35e*D(___243854h+0xc));
		esi = 0x8000;
		ecx = 0xffffffff;
		ebx = 0;
		D(___1c9ec0h+0xc) = eax;

		while(1){

			edi = D(ebx+___1c9ee0h);

			if((int)edi > (int)D(ebx+___1c9ec0h)){

				D(ebx+___1c9ef0h) = 0x70000*(edi+ecx);
				D(ebx+___1c9ed0h) = 7*(D(ebx+___1c9ec0h)+ecx);
				D(ebx+___1c9f00h) = 0x10000*(D(ebx+___1c9ec0h)-edi);
			}

			edx = D(ebx+___1c9ee0h);

			if((int)edx < (int)D(ebx+___1c9ec0h)){

				D(ebx+___1c9ef0h) = 0x70000*(edx+ecx);
				D(ebx+___1c9ed0h) = 7*(D(ebx+___1c9ec0h)+ecx);
				D(ebx+___1c9f00h) = 0x10000*(D(ebx+___1c9ec0h)-edx);
			}

			eax = D(ebx+___1c9f00h)+esi;
			eax = (int)eax>>0x10;

			if((int)eax <= 0){

				edx = D(___24332ch);
				eax = D(ebx+___1c9f00h);
				___imul32(&eax, &edx, edx);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				D(ebx+___1c9ef0h) += eax;
				eax = D(ebx+___1c9ef0h)+esi;
				eax = (int)eax>>0x10;

				if((int)eax < (int)D(ebx+___1c9ed0h)) D(ebx+___1c9ef0h) = 0x70000*(D(ebx+___1c9ec0h)+ecx);
			}
			else {

				edx = D(___24332ch);
				eax = D(ebx+___1c9f00h);
				___imul32(&eax, &edx, edx);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax >> 0x10)|(edx << 0x10);
				D(ebx+___1c9ef0h) += eax;
				eax = D(ebx+___1c9ef0h)+esi;
				eax = (int)eax>>0x10;

				if((int)eax > (int)D(ebx+___1c9ed0h)) D(ebx+___1c9ef0h) = 0x70000*(D(ebx+___1c9ec0h)+ecx);
			}

			ebx += 0x4;
			if(ebx == 0x10) break;
		}

		ebx = 0x40;
		eax = D(___243d80h);
		edx = D(___196d98h);
		eax += 0x9080;
		ebx -= edx;
		eax -= ebx;
		ebx = eax;
		eax = D(___1c9ef0h);
		eax += 0x8000;
		esi = ___1d8a10h;
		eax = (int)eax>>0x10;
		ecx = 0x20;
		eax <<= 0xa;
		edx = ecx;
		esi += eax;
		ebp = 0x1;
		L(edx) >>= 2;
___41809h:
		H(ecx) = L(edx);
___4180bh:
		eax = D(esi);
		D(ebx) = eax;
		ebx += 0x4;
		esi += 0x4;
		H(ecx)--;
		if(H(ecx)) goto ___4180bh;
		ebx += 0x200;
		L(edx) <<= 2;
		ebx -= edx;
		L(edx) >>= 2;
		L(ecx)--;
		if(L(ecx)) goto ___41809h;
		if((int)ebp >= (int)D(___243cf4h)) goto ___418cah;

		edi = 0x4;
		D(esp+0x18) = 0xe000;

		while(1){

			ebx = 0x40-D(___196d98h);
			esi = D(edi+___1c9ef0h)+0x8000;
			esi = (int)esi>>0x10;
			esi = 0x240*esi;
			ecx = D(esp+0x18);
			eax = D(___243d80h);
			eax += ecx;
			eax += 0x88;
			eax -= ebx;
			ebx = eax;
			// max esi 0x2f40
			esi = ___1d2710h+esi;
			edi += 0x4;

			ecx = -1;
			while(++ecx < 0x18){

				edx = -1;
				while(++edx < 0x18) B(ebx++) = B(esi++);

				ebx += 0x200;
				ebx -= 0x18;
			}

			edx = D(___243cf4h);
			D(esp+0x18) += 0x4000;
			ebp++;
			if((int)ebp >= (int)edx) break;
		}

___418cah:
		eax = 0x35e*D(___243854h);
		L(eax) = B(eax+___1e6ed0h+0x109);
		eax &= 0xff;
		ecx = D(___243854h+4);
		D(___1c9ee0h) = eax;
		eax = 0x35e*ecx;
		L(eax) = B(eax+___1e6ed0h+0x109);
		eax &= 0xff;
		esi = D(___243854h+8);
		D(___1c9ee0h+4) = eax;
		eax = 0x35e*esi;
		L(eax) = B(eax+___1e6ed0h+0x109);
		eax &= 0xff;
		edi = D(___243854h+0xc);
		D(___1c9ee0h+8) = eax;
		eax = 0x35e*edi;
		L(eax) = B(eax+___1e6ed0h+0x109);
		ebp = D(___243ce8h);
		ebx = 0x35e*ebp;
		eax &= 0xff;
		D(___1c9ee0h+0xc) = eax;
		eax = 8*ebp;
		eax += ebp;
		eax <<= 0x2;
		eax += ebp;
		FPUSH(F32(ebx+___1e6ed0h+0xb0));
		ST(0) = ST(0)/(double)F32(4*eax+___1de580h+4);
		ST(0) = ST(0)*162.0;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		eax = D(esp);
		eax++;
		if((int)eax >= 1) goto ___4197bh;
		eax = 0x1;
___4197bh:
		ebp = 4*eax;
		goto ___419f0h;
___41984h:
		ebx = 0x21;
		eax = D(ebp+___243338h);
		edi = D(___243d80h);
		ebx -= eax;
		eax <<= 0x9;
		edi += eax;
		edx = D(ebp+___2435c4h);
		edi += 0x60;
		edi += edx;
		eax = 0x20;
		edi -= ecx;
		ecx ^= ecx;
		ebp += 0x4;
		H(ecx) = L(ecx);
		L(ecx) = L(ebx);
		L(eax) -= L(edx);
		X(eax) <<= 8;
		X(edx) = (short)X(eax)>>0xf;
		___idiv16(&eax, &edx, X(ebx));
		X(esi) = X(eax);
		eax ^= eax;
___419c7h:
		X(eax) += X(esi);
		X(edx) = (short)X(eax)>>0xf;
		edx <<= 0x10;
		X(edx) = (short)X(eax)>>0xf;
		L(edx) = H(eax);
		if((signed char)B(edi+edx) < 0x40) goto ___419dch;
		B(edi+edx) = H(ecx);
___419dch:
		edi++;
		if((signed char)B(edi+edx) < 0x40) goto ___419e6h;
		B(edi+edx) = H(ecx);
___419e6h:
		edi += 0x1ff;
		L(ecx)--;
		if(L(ecx)) goto ___419c7h;
___419f0h:
		ecx = 0x40;
		ecx -= D(___196d98h);
		if((int)ebp < 0x288) goto ___41984h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		edx += eax;
		edx <<= 0x2;
		ebx = D(edx+___1de580h+0x2c);
		if((int)ebx == 0) goto ___41afdh;
		FPUSH((int)D(edx+___1de580h+0x30));
		ST(0) = ST(0)*create_double(0x9a,0x99,0x99,0x99,0x99,0x99,0x41,0x3f);
		ST(0) = (int)ST(0);
		D(esp+0xc) = (int)FPOP();
		if((int)D(esp+0xc) >= 0) goto ___41a4ah;
		ebp ^= ebp;
		D(esp+0xc) = ebp;
___41a4ah:
		edx = 0x37;
		ecx = 0x40;
		edi = 0x3;
		eax = D(___243d80h);
		esi = D(___196d98h);
		ebx ^= ebx;
		eax += 0x5e64;
		ecx -= esi;
		L(ebx) = B(esp+0xc);
		eax -= ecx;
		edx -= ebx;
		ebx += eax;
		eax ^= eax;
		ebp ^= ebp;
		if(edx == 0) goto ___41a92h;
___41a7fh:
		ecx = edx;
___41a81h:
		B(ebx) = L(eax);
		ebx++;
		ecx--;
		if(ecx) goto ___41a81h;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___41a7fh;
___41a92h:
		edi ^= edi;
		goto ___41ae5h;
___41a96h:
		edx = 0x8;
		eax = D(___243d80h);
		ecx = D(___196d98h);
		eax += 0x5200;
		esi = D(___243d34h);
		ebx = eax+ebp;
		edi++;
		eax = 0x40;
		ebx += 0x60;
		eax -= ecx;
		ecx = 0x6;
		ebx -= eax;
		ebp += 0x8;
___41ac9h:
		H(ecx) = L(edx);
___41acbh:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41ad3h;
		B(ebx) = L(eax);
___41ad3h:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41acbh;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41ac9h;
___41ae5h:
		eax = 0x94*D(___243ce8h);
		if((int)edi >= (int)D(eax+___1de580h+0x28)) goto ___41cebh;
		goto ___41a96h;
___41afdh:
		edx = 0x587b;
		edx -= ecx;
		if((int)D(___243cdch) <= 0) goto ___41c12h;
		P1 = ebx;
		P2 = 0xfffffffa;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		ebp = D(___196d98h);
		edx = 0x5889;
		eax -= ebp;
		P2 = 6;
		edx -= eax;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		eax = 0x40;
		edx = D(___196d98h);
		P1 = 0;
		eax -= edx;
		edx = 0x5897;
		P2 = 6;
		edx -= eax;
		eax = D(___243cb8h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*1.42;
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		eax = D(___243334h);
		ebx = D(___243cdch);
		ebx -= eax;
		D(___243cdch) = ebx;
		if((int)ebx >= 0) goto ___41cebh;
		esi ^= esi;
		D(___243cdch) = esi;
		goto ___41cebh;
___41c12h:
		P1 = ebx;
		P2 = 0xfffffffa;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		ecx = eax;
		eax = ___1d7810h;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		esi = D(___196d98h);
		edx = 0x5889;
		eax -= esi;
		P2 = 6;
		edx -= eax;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		edx = eax;
		ebx = 0x3c;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		ecx = edx;
		edx = ebx;
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
		P1 = 0;
		eax = 0x40;
		edi = D(___196d98h);
		edx = 0x5897;
		eax -= edi;
		P2 = 6;
		edx -= eax;
		eax = D(___243ca0h);
		P3 = edx;
		edx = eax;
		ebx = 0x46;
		edx = (int)edx>>0x1f;
		___idiv32(&eax, &edx, ebx);
		D(esp) = edx;
		FPUSH((int)D(esp));
		ST(0) = ST(0)*1.42;
		P4 = 0x10;
		ebx = 0x6;
		eax = ___1d7810h;
		edx = ebx;
		ST(0) = (int)ST(0);
		D(esp) = (int)FPOP();
		ecx = D(esp);
		eax = ___4256ch_cdecl(eax, edx, ebx, ecx, P4, P3, P2, P1);
___41cebh:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de580h+0x34));
		ST(0) = ST(0)*create_double(0x3d,0x0a,0xd7,0xa3,0x70,0x3d,0x42,0x3f);
		ST(0) = (int)ST(0);
		D(esp+4) = (int)FPOP();
		if((int)D(esp+4) >= 0) goto ___41d22h;
		edi ^= edi;
		D(esp+0x4) = edi;
___41d22h:
		edx = 0x3a;
		ecx = 0x40;
		edi = 0x7;
		ebx = D(___243d80h);
		ebp = D(___196d98h);
		eax ^= eax;
		ebx += 0x4464;
		ecx -= ebp;
		L(eax) = B(esp+4);
		ebx -= ecx;
		edx -= eax;
		ebx += eax;
		eax ^= eax;
		if(edx == 0) goto ___41d6fh;
___41d57h:
		ecx = edx;
___41d59h:
		if((signed char)B(ebx) < 0x40) goto ___41d60h;
		B(ebx) = L(eax);
___41d60h:
		ebx++;
		ecx--;
		if(ecx) goto ___41d59h;
		ebx += 0x200;
		ebx -= edx;
		edi--;
		if(edi) goto ___41d57h;
___41d6fh:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		FPUSH((int)D(4*eax+___1de580h+0x18));
		ST(0) = ST(0)*create_double(0,0,0,0,0,0,0x50,0x3f);
		ebx = 0xa;
		ST(0) = dR_Math_ceil(ST(0));
		P1 = 0xfffffff0;
		eax = 0x40;
		edx = D(___196d98h);
		ST(0) = 100.0-ST(0);
		P2 = 0xfffffff8;
		eax -= edx;
		edx = 0x8e6e;
		ST(0) = (int)ST(0);
		edx -= eax;
		D(esp) = (int)FPOP();
		P3 = edx;
		ecx = D(esp);
		P4 = 0;
		esi = ___1de530h;
		eax = ___4256ch_cdecl(___1de210h, 8, ebx, ecx, P4, P3, P2, P1);
		ecx = 0xa;
		ebx = D(___243d80h);
		edx = 0x8;
		ebx += eax;
___41df4h:
		H(ecx) = L(edx);
___41df6h:
		L(eax) = B(esi);
		if(L(eax) == 0) goto ___41dfeh;
		B(ebx) = L(eax);
___41dfeh:
		ebx++;
		esi++;
		H(ecx)--;
		if(H(ecx)) goto ___41df6h;
		ebx += 0x200;
		ebx -= edx;
		L(ecx)--;
		if(L(ecx)) goto ___41df4h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(4*eax+___1de580h+0x18) >= 0x5000) goto ___41e64h;
		if(D(___196de8h) != 0) goto ___41e5ah;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___41e5ah:
		D(___196de8h) = 1;
___41e64h:
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 0x2;
		eax += edx;
		if((int)D(4*eax+___1de580h+0x18) >= 0x2800) goto ___41eb8h;
		if(D(___196dech) != 0) goto ___41eaeh;
		ecx = 0x10000;
		edx = 0x1;
		eax = 0x2;
		ebx ^= ebx;
		dRally_Sound_pushEffect(eax, edx, ebx, ecx, 0x50000, 0x8000);
___41eaeh:
		D(___196dech) = 1;
___41eb8h:

	if(D(___1de580h+0x94*D(___243ce8h)+0x18) == 0){

		if(strcmp(___1de7d0h+0x54*D(___243ce8h), "DUKE NUKEM") == 0){

			if(D(___196df4h) == 0) dRally_Sound_pushEffect(2, 0x20, 0, 0x10000, 0x50000, 0x8000);

			D(___196df4h) = 1;
		}
	}

	edx = D(___243ce8h);
	eax = 8*edx;
	eax += edx;
	eax <<= 0x2;
	eax += edx;
	FPUSH((int)D(4*eax+___1de580h+0x18));
	ST(0) = ST(0)/20480.0;
	ST(0) = dR_Math_ceil(ST(0));
	ST(0) = (int)ST(0);
	D(esp+8) = (int)FPOP();

	if((int)D(esp+8) < 0) D(esp+0x8) = 0;

	ebx = D(___243d80h)+0x6420+D(___196d98h);
	esi = ___1d5890h+0x1a40-0x540*D(esp+0x8);

	ecx = -1;
	while(++ecx < 0x15){

		edx = -1;
		while(++edx < 0x40) B(ebx++) = B(esi++);

		ebx += 0x200;
		ebx -= 0x40;
	}

	eax = D(___243cf4h);
	edi = 0;

	if((int)eax > 0){
		
		ebp = 0x9000;
		D(esp+0x14) = edi;

		while(1){

			eax = D(esp+0x14);
			eax = 0x94*D(eax+___243854h);

			if((int)D(eax+___1de580h+0x18) <= 0){

				ebx = 0x40;
				edx = 0x40;
				eax = D(___243d80h);
				ecx = D(___196d98h);
				eax += ebp;
				ebx -= ecx;
				eax += 0x60;
				esi = D(___243d84h);
				eax -= ebx;
				ecx = 0x20;
				ebx = eax;

				while(1){

					H(ecx) = L(edx);

					while(1){

						L(eax) = B(esi);
						if(L(eax) != 0) B(ebx) = L(eax);
						ebx++;
						esi++;
						H(ecx)--;
						if(H(ecx) == 0) break;
					}

					ebx += 0x200;
					ebx -= edx;
					L(ecx)--;
					if(L(ecx) == 0) break;
				}
			}

			edx = D(esp+0x14);
			ebx = D(___243cf4h);
			ebp += 0x4000;
			edx += 0x4;
			edi++;
			D(esp+0x14) = edx;
			if((int)edi >= (int)ebx) break;
		}
	}
}
