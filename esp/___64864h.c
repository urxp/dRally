#include "x86.h"

#pragma enum int
typedef enum TrackerType {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

	extern dword AMP_Volume;
	extern dword MSX_Volume;
	extern dword SFX_Volume;
	extern dword ___24e5c0h[];

	void ___649a8h(void);
	void ___680c8h(void);
	void ___64a28h(void);
	void updateVolume(void);

	void ___67e48h__esp(TrackerType tMSX, const char * fMSX,
                    TrackerType tSFX, const char * fSFX, int nSFX);

	void __STOSD__clib3r(void *, dword, dword);
    #pragma aux __STOSD__clib3r parm [eax][edx][ecx]

	void ___5fff2h(void (*)(void));
	void ___6000fh(void (*)(void));

// 64864
void ___64864h__esp(TrackerType tMSX, const char * fMSX,
                    TrackerType tSFX, const char * fSFX, int nSFX){

	___649a8h();
	___680c8h();

	___6000fh(___64a28h);

	___67e48h__esp(tMSX, fMSX, tSFX, fSFX, nSFX);
	__STOSD__clib3r(___24e5c0h, 0x10000, 0x20);

	AMP_Volume = 0x10000;
	MSX_Volume = 0x10000;
	SFX_Volume = 0x10000;

	updateVolume();

	___5fff2h(___64a28h);
}
