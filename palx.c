#include "drally.h"

void dRally_Sound_setMasterVolume(dword);
void ___2b318h(void);
void ___58c60h(void);
void setIntensity___19eb50h(dword);


void ___3d1f0h(void){

	int 	i;

	i = 0;
	while(i < 0x64){

		___58c60h();
		setIntensity___19eb50h(i);
		i += 0x4;
	}
}

void ___3d2bch(void){

	int 	i;

	i = 0x64;
	while(i >= 0){

		___58c60h();
		setIntensity___19eb50h(i);
		i -= 0x4;
	}
}

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
