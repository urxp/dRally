#include "drally.h"

	extern byte ___243ddeh[];
	extern byte ___243dddh[];
	extern byte ___243de9h[];
	extern byte ___243dech[];
	extern byte ___243deah[];
	extern byte ___243debh[];
	extern byte ___243ce8h[];
	extern byte ___1e721eh[];
	extern byte ___243de8h[];
	extern byte ___1de5a0h[];
	extern byte ___199f54h[];
	extern byte ___196dbch[];
	extern byte ___196dc0h[];
	extern byte ___196dc4h[];
	extern byte ___1de598h[];
	extern byte ___1de5b0h[];
	extern byte ___1de5b4h[];

byte ___5994ch(void);

// INRACE CHEATS
void race___56594h(void){

	dword 	eax, ebx, ecx, edx, edi, esi, ebp;


		eax = ___5994ch();
		H(edx) = L(eax);
		if(L(eax) == 0) goto ___566e8h;
		eax = 0;
___565b1h:
		eax++;
		L(edx) = B(eax+___243ddeh);
		B(eax+___243dddh) = L(edx);
		if((int)eax < 0xe) goto ___565b1h;
		H(eax) = B(___243de9h);
		B(___243dech) = H(edx);
		if(H(eax) != 0x20) goto ___565ffh;				// D
		if(B(___243deah) != 0x13) goto ___565ffh;		// R
		if(B(___243debh) != 0x16) goto ___565ffh;		// U
		if(H(edx) != 0x22) goto ___565ffh;				// G
		eax = 0x35e*D(___243ce8h);
		D(eax+___1e721eh) = 0xf423f;
___565ffh:
		if(B(___243de8h) != 0x20) goto ___5664bh;		// D
		if(B(___243de9h) != 0x13) goto ___5664bh;		// R
		if(B(___243deah) != 0x17) goto ___5664bh;		// I
		if(B(___243debh) != 0x31) goto ___5664bh;		// N
		if(B(___243dech) != 0x25) goto ___5664bh;		// K
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(4*eax+___1de5a0h) = 1;
___5664bh:
		if(B(___243de9h) != 0x20) goto ___5666fh;		// D
		if(B(___243deah) != 0x13) goto ___5666fh;		// R
		if(B(___243debh) != 0x16) goto ___5666fh;		// U
		if(B(___243dech) == 0x30) goto ___56678h;		// B
___5666fh:
		if(D(___199f54h) == 0) goto ___56682h;
___56678h:
		D(___196dbch) = 1;
___56682h:
		L(ecx) = B(___243de8h);
		if(L(ecx) != 0x20) goto ___566bah;				// D
		if(B(___243de9h) != 0x13) goto ___566bah;		// R
		if(B(___243deah) != 0x12) goto ___566bah;		// E
		if(B(___243debh) != 0x1e) goto ___566bah;		// A
		if(L(ecx) != B(___243dech)) goto ___566bah;		// D
		D(___196dc0h) = 1;
___566bah:
		if(B(___243de9h) != 0x20) goto ___566e8h;		// D
		if(B(___243deah) != 0x13) goto ___566e8h;		// R
		if(B(___243debh) != 0x1e) goto ___566e8h;		// A
		if(B(___243dech) != 0x22) goto ___566e8h;		// G
		D(___196dc4h) = 1;
___566e8h:
		if(D(___196dbch) == 0) goto ___56710h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(4*eax+___1de598h) = 0x19000;
___56710h:
		if(D(___196dc0h) == 0) goto ___56738h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(4*eax+___1de5b0h) = 0x19000;
___56738h:
		if(D(___196dc4h) == 0) goto ___56760h;
		edx = D(___243ce8h);
		eax = 8*edx;
		eax += edx;
		eax <<= 2;
		eax += edx;
		D(4*eax+___1de5b4h) = 0x19000;
___56760h:
		return;
}
