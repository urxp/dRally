#include "drally.h"
#include "drally_structs_fixed.h"

	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];
	extern __DWORD__ ___1a0174h_PriceSpikedBumpers;
	extern __DWORD__ ___1a0178h_PriceRocketFuel;
	extern __DWORD__ ___1a017ch_PriceSabotage;
	extern __DWORD__ ___1a0170h_PriceMines;

__DWORD__ underground___28c1ch(void){

	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;

	switch(s_6c[D(___1a1ef8h)].car){
	case 0:
		___1a0170h_PriceMines = 150;
		___1a0174h_PriceSpikedBumpers = 200;
		___1a0178h_PriceRocketFuel = 275;
		___1a017ch_PriceSabotage = 250;
		break;
	case 1:
		___1a0170h_PriceMines = 200;
		___1a0174h_PriceSpikedBumpers = 225;
		___1a0178h_PriceRocketFuel = 350;
		___1a017ch_PriceSabotage = 325;
		break;
	case 2:
		___1a0170h_PriceMines = 450;
		___1a0174h_PriceSpikedBumpers = 500;
		___1a0178h_PriceRocketFuel = 675;
		___1a017ch_PriceSabotage = 550;
		break;
	case 3:
		___1a0170h_PriceMines = 500;
		___1a0174h_PriceSpikedBumpers = 550;
		___1a0178h_PriceRocketFuel = 625;
		___1a017ch_PriceSabotage = 570;
		break;
	case 4:
		___1a0170h_PriceMines = 1250;
		___1a0174h_PriceSpikedBumpers = 1750;
		___1a0178h_PriceRocketFuel = 2250;
		___1a017ch_PriceSabotage = 2125;
		break;
	case 5:
		___1a0170h_PriceMines = 2525;
		___1a0174h_PriceSpikedBumpers = 2750;
		___1a0178h_PriceRocketFuel = 3275;
		___1a017ch_PriceSabotage = 2625;
		break;
	default:
		break;
	}

	return 1;
}
