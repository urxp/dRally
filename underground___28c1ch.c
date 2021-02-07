#include "drally.h"

	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___1a0174h_PriceSpikedBumpers[];
	extern byte ___1a0178h_PriceRocketFuel[];
	extern byte ___1a017ch_PriceSabotage[];
	extern byte ___1a0170h_PriceMines[];

dword underground___28c1ch(void){

	switch(D(0x6c*D(___1a1ef8h)+___1a01e0h+0x1c)){
	case 0:
		D(___1a0170h_PriceMines) = 0x96;
		D(___1a0174h_PriceSpikedBumpers) = 0xc8;
		D(___1a0178h_PriceRocketFuel) = 0x113;
		D(___1a017ch_PriceSabotage) = 0xfa;
		break;
	case 1:
		D(___1a0170h_PriceMines) = 0xc8;
		D(___1a0174h_PriceSpikedBumpers) = 0xe1;
		D(___1a0178h_PriceRocketFuel) = 0x15e;
		D(___1a017ch_PriceSabotage) = 0x145;
		break;
	case 2:
		D(___1a0170h_PriceMines) = 0x1c2;
		D(___1a0174h_PriceSpikedBumpers) = 0x1f4;
		D(___1a0178h_PriceRocketFuel) = 0x2a3;
		D(___1a017ch_PriceSabotage) = 0x226;
		break;
	case 3:
		D(___1a0170h_PriceMines) = 0x1f4;
		D(___1a0174h_PriceSpikedBumpers) = 0x226;
		D(___1a0178h_PriceRocketFuel) = 0x271;
		D(___1a017ch_PriceSabotage) = 0x23a;
		break;
	case 4:
		D(___1a0170h_PriceMines) = 0x4e2;
		D(___1a0174h_PriceSpikedBumpers) = 0x6d6;
		D(___1a0178h_PriceRocketFuel) = 0x8ca;
		D(___1a017ch_PriceSabotage) = 0x84d;
		break;
	case 5:
		D(___1a0170h_PriceMines) = 0x9dd;
		D(___1a0174h_PriceSpikedBumpers) = 0xabe;
		D(___1a0178h_PriceRocketFuel) = 0xccb;
		D(___1a017ch_PriceSabotage) = 0xa41;
		break;
	default:
		break;
	}

	return 1;
}
