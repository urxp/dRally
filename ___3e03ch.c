#include "drally.h"

	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];

void ___3e03ch(void){

	dword	eax, ebx, ecx, edx, edi, esi, ebp;
	byte 	esp[4];


	D(esp) = ___1a116ch+0x96;
	ebp = 0;
	while(1){

		ebx = ___1a116ch;
		ecx = D(esp);
		edx = 0;

		while(1){

			strcpy(ebx, ecx);
			B(edx+___1a1f4eh) = B(edx+___1a1f4eh+1);
		
			ebx += 0x96;
			ecx += 0x96;
			edx++;
			if((int)edx >= 0x15) break;
		}

		ebp++;
		if((int)ebp >= 6) break;
	}

	strcpy(___1a116ch+0x9f6, "Ah, fortune and glory! You are special, True Tom tells no lies.");
	B(___1a1f4eh+0x11) = 1;
	strcpy(___1a116ch+0xa8c, "Sweet driver, it's been a long and winding road, but now you have");
	B(___1a1f4eh+0x12) = 1;
	strcpy(___1a116ch+0xb22, "finally arrived. The Adversary's evil reign is over. The demon-");
	B(___1a1f4eh+0x13) = 1;
	strcpy(___1a116ch+0xbb8, "king is dead, long live the king of Death Rally!");
	B(___1a1f4eh+0x14) = 1;
}
