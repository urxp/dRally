#include "drally.h"

void dRally_Sound_setMasterVolume(dword vol);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___2b318h(void);
void ___58c60h(void);
void setIntensity___19eb50h(dword);


void ___3d79ch(void){
	
	int 	i;

	___2b318h();

	i = 0x64;
	while(i >= 0){

		___58c60h();
		dRally_Sound_setMasterVolume(0x28f*i);
		setIntensity___19eb50h(i);
		i -= 0x4;
	}  
}
