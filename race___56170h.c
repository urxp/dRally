#include "drally.h"

	extern byte ___243cf4h[];
	extern byte ___1e6ed0h[];
	extern byte ___1de580h[];
	extern byte ___243ce4h[];
	extern byte ___243178h[];
	extern byte ___243c60h[];

void race___56170h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[0x8];


		edx = D(___243cf4h);
		ecx ^= ecx;
		if((int)edx <= 0) goto ___5622dh;
		D(esp+0x4) = ecx;
		D(esp) = ecx;
___5619ah:
		ebx = D(___243cf4h);
		eax ^= eax;
		if((int)ebx <= 0) goto ___56204h;
		esi = D(esp);
		ebp = D(esp+0x4);
		edx ^= edx;
		edi ^= edi;
___561b1h:
		if(eax == ecx) goto ___561edh;
		L(ebx) = B(esi+___1e6ed0h+0x109);
		if(L(ebx) <= B(edx+___1e6ed0h+0x109)) goto ___561edh;
		if((int)D(ebp+___1de580h+0x18) <= 0) goto ___561edh;
		if((int)D(edi+___1de580h+0x18) > 0) goto ___561edh;
		L(ebx) = B(esi+___1e6ed0h+0x109);
		H(ebx) = B(edx+___1e6ed0h+0x109);
		B(esi+___1e6ed0h+0x109) = H(ebx);
		B(edx+___1e6ed0h+0x109) = L(ebx);
___561edh:
		ebx = D(___243cf4h);
		edx += 0x35e;
		eax++;
		edi += 0x94;
		if((int)eax < (int)ebx) goto ___561b1h;
___56204h:
		ebx = D(esp);
		esi = D(esp+0x4);
		edi = D(___243cf4h);
		ecx++;
		ebx += 0x35e;
		esi += 0x94;
		D(esp) = ebx;
		D(esp+0x4) = esi;
		if((int)ecx < (int)edi) goto ___5619ah;
___5622dh:
		ebp = D(___243cf4h);
		ecx ^= ecx;
		if((int)ebp <= 0) goto ___56326h;
		ebp ^= ebp;
___5623fh:
		eax = D(ebp+___1de580h+0x18);

		if(eax == 0){

			edx = D(___243ce4h);
			ebx = 0;

			if((int)edx > 0){

				edi = 4*D(___243ce4h);

				edx = 0;
				while(1){

					esi = D(edx+___243178h);
					if(esi == ecx) ebx = 1;
					edx += 0x4;
					eax++;
					if((int)edx >= (int)edi) break;
				}
			}

			if(ebx == 0){
			
				eax = D(___243ce4h);
				D(4*eax+___243178h) = ecx;
				eax++;
				D(___243ce4h) = eax;
			}
		}

		if((int)D(ebp+___1de580h+0x18) <= 0) goto ___56311h;
		ebx = 0xffffffff;
		edx = D(___243ce4h);
		eax ^= eax;
		if((int)edx <= 0) goto ___562c7h;
		edx ^= edx;
___562adh:
		esi = D(edx+___243178h);
		if(esi != ecx) goto ___562b9h;
		ebx = eax;
___562b9h:
		esi = D(___243ce4h);
		eax++;
		edx += 0x4;
		if((int)eax < (int)esi) goto ___562adh;
___562c7h:
		if(ebx == 0xffffffff) goto ___56311h;
		edi = D(___243ce4h);
		edi--;
		eax = ebx;
		D(___243ce4h) = edi;
		if((int)ebx >= (int)edi) goto ___56301h;
		esi = 4*edi+0x0;
		edx = 4*ebx+0x0;
___562edh:
		ebx = D(edx+___243178h+4);
		eax++;
		D(edx+___243178h) = ebx;
		edx += 0x4;
		if((int)edx < (int)esi) goto ___562edh;
___56301h:
		eax = D(___243ce4h);
		D(4*eax+___243178h) = 0xffffffff;
___56311h:
		esi = D(___243cf4h);
		ecx++;
		ebp += 0x94;
		if((int)ecx < (int)esi) goto ___5623fh;
___56326h:
		edi = D(___243ce4h);
		eax ^= eax;
		if((int)edi <= 0) goto ___56360h;
		L(ebx) = L(eax);
		L(ebx) = 0-L(ebx);
		ebp = D(___243ce4h);
		H(ebx) = B(___243cf4h);
		edx ^= edx;
		L(ebx) += H(ebx);
___56346h:
		esi = 0x35e*D(edx+___243178h);
		edx += 0x4;
		eax++;
		B(esi+___1e6ed0h+0x109) = L(ebx);
		L(ebx)--;
		if((int)eax < (int)ebp) goto ___56346h;
___56360h:
		D(___243c60h) = ecx;
		return;
}
