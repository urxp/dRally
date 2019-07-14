#include "x86.h"

	extern dword MSX_Volume;
	extern dword SFX_Volume;
	extern dword AMP_Volume;
	extern byte ___19a27ch;

	extern byte Sound_CardType;
	extern byte IsSoundEnabled;

	extern void * SFX_Ptr;
	extern dword ___24e5c0h[];
	extern dword ___68bb0h[];

	void updateVolume(void);


// 65710h
void updateAMPVolume(dword vol){

	if(Sound_CardType&&IsSoundEnabled){

		AMP_Volume = vol;
		updateVolume();
	}
}

// 6572ch
void updateMSXVolume(dword vol){

	if(Sound_CardType&&IsSoundEnabled){

		MSX_Volume = vol;
		updateVolume();
	}
}

// 65770h
void updateSFXVolume(dword vol){

	if(Sound_CardType&&IsSoundEnabled){

		SFX_Volume = vol;
		updateVolume();
	}
}

// 65788h
void updateVolume(void){

	dword 	max, n;


	max = SFX_Ptr&&(___19a27ch < 0x20) ? ___19a27ch : 0x1f;

	for(n = 0; n <= max; n++){

		___68bb0h[n] = ___24e5c0h[n];

		if((AMP_Volume != 0x10000)||(MSX_Volume != 0x10000)){

			___68bb0h[n] *= (AMP_Volume * MSX_Volume) >> 0x10;
			___68bb0h[n] >>= 0x10;
		}
	}

	for(n; n < 0x20; n++){

		___68bb0h[n] = 0x10000;

		if((AMP_Volume != 0x10000)||(SFX_Volume != 0x10000)){

			___68bb0h[n] = (AMP_Volume * SFX_Volume) >> 0x10;
		}
	}
}
