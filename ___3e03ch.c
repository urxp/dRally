#include "drally.h"

	extern byte ___1a116ch[];
	extern byte ___1a1f4eh[];

void ___3e03ch(void){

	int 	j, i;


	j = -1;
	while(++j < 6){

		i = -1;
		while(++i < 0x15){

			strcpy(___1a116ch+0x96*i, ___1a116ch+0x96*(i+1));
			B(___1a1f4eh+i) = B(___1a1f4eh+(i+1));
		}
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
