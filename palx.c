#include "drally.h"

void dRally_Sound_setMasterVolume(__DWORD__);
void ___2b318h(void);
void ___58c60h(void);
void setIntensity___19eb50h(__DWORD__);

// FADE IN
void ___3d1f0h(void){

	int 	i;

	i = 0;
	while(i < 0x64){

		___58c60h();
		setIntensity___19eb50h(i);
		i += 0x4;
	}
}

// FADE OUT
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

	i = 100;
	while(i >= 0){

		___58c60h();
		dRally_Sound_setMasterVolume(655*i);
		setIntensity___19eb50h(i);
		i -= 4;
	}  
}
