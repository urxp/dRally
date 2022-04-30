#include "drally.h"
#include "drally_fonts.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif //DR_MULTIPLAYER
	extern __POINTER__ ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a1e84h;
	extern __BYTE__ kmap[];

void ___13248h_cdecl(__DWORD__, __DWORD__ ,__DWORD__, __DWORD__, __DWORD__);

// NO MONEY TO REPAIR
void ___165ach(void){

	int 		i, j;
	__BYTE__ 	px;


	___13248h_cdecl(0x21, 0x83, 0x1e2, 0xe6, 1);

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0){

		j = -1;
		while(++j < 0x80){

			i = -1;
			while(++i < 0x68){

				if((px = B(___1a1e84h+0x68*j+i)) != 0) B(___1a112ch__VESA101_ACTIVESCREEN_PTR+0x1a42d+0x280*j+i) = px;
			}
		}

		VESA101_16X16_FORMAT_PRINT("",                                    161, 136);
		VESA101_16X16_FORMAT_PRINT("",                                    161, 152);
		VESA101_16X16_FORMAT_PRINT("[It ain't over till I say so!",       161, 168);
		VESA101_16X16_FORMAT_PRINT("",                                    161, 184);
		VESA101_16X16_FORMAT_PRINT("So they think they got you beaten,",  161, 200);
		VESA101_16X16_FORMAT_PRINT("eh? I think that this car-wreck has", 161, 216);
		VESA101_16X16_FORMAT_PRINT("only made you stronger, iron",        161, 232);
		VESA101_16X16_FORMAT_PRINT("tempered, wicked. So [get back out",  161, 248);
		VESA101_16X16_FORMAT_PRINT("[there{ and let them find out to",    161, 264);
		VESA101_16X16_FORMAT_PRINT("their cost. [This one's on me.",      161, 280);
	}
	else {
#endif // DR_MULTIPLAYER
		VESA101_16X16_FORMAT_PRINT("",                                                  60, 141);
		VESA101_16X16_FORMAT_PRINT("[End of the road, driver.",                         60, 157);
		VESA101_16X16_FORMAT_PRINT("",                                                  60, 173);
		VESA101_16X16_FORMAT_PRINT("[This then is how it ends{, not with a bang, but",  60, 189);
		VESA101_16X16_FORMAT_PRINT("with a whimper. You had your shot at glory",        60, 205);
		VESA101_16X16_FORMAT_PRINT("road, but [you blew it{. Life is hard and all",     60, 221);
		VESA101_16X16_FORMAT_PRINT("that. In [Death Rally{, you get only one go, only", 60, 237);
		VESA101_16X16_FORMAT_PRINT("the best can make it. But look at the bright",      60, 253);
		VESA101_16X16_FORMAT_PRINT("side, at least you lived to tell the tale.",        60, 269);
		VESA101_16X16_FORMAT_PRINT("",                                                  60, 285);
#if defined(DR_MULTIPLAYER)
	}
#endif // DR_MULTIPLAYER

	___12e78h_v3(___1a10cch___185ba9h, "CONTINUE", 192, 316);
	B(kmap+0x1c) = 0;
}
