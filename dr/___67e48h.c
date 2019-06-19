#include "x86.h"

typedef enum TrackerType {
	NONE, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

    dword ___5f080h(dword, dword);
    void ___677cch(dword, dword, dword);
    dword ___67bbch(dword, dword, dword, dword);
    void ___68398h(void);
    extern byte ___68c3ch[];
    extern byte ___68d58h[];
    dword ___716fch(dword, dword, dword);
    dword ___75840h(dword, dword, dword);
    extern byte ___19a279h[];
    extern byte ___19a27ch[];
    extern byte ___19a27eh[];
    extern byte ___24e790h[];
    extern byte ___24e794h[];
    extern byte ___24e79eh[];
    extern short ___24e7a0h;
    extern short ___24e7a2h;
    extern byte ___24e7a4h[];

    void * loadS3M(dword A, const char * cmf, dword * size, dword * instrumentCount);
    extern void * MSX_Ptr;
    extern void * SFX_Ptr;
    extern TrackerType MSX_Tracker;
    extern TrackerType SFX_Tracker;
    extern byte SFX_Number;
    void * loadXM(dword A, const char * cmf, dword * size, dword * instrumentCount);
    void freeMemory(dword);
    extern byte Sound_CardType;
    extern byte IsSoundEnabled;

// 67e48h
void ___67e48h__tbd(TrackerType tMSX, const char * fMSX,
                    TrackerType tSFX, const char * fSFX, int nSFX){

	dword   s0, s1, i0, i1;

	if(!(tSFX&&fSFX)){

		nSFX = 0;

		if(!(tMSX&&fMSX)) return;
	}
	else if(nSFX < 1) nSFX = 1;

	s0 = s1 = i0 = i1 = 0;

	MSX_Tracker = (tMSX&&fMSX) ? tMSX : NONE;

    switch(MSX_Tracker){
    case SCREAM_TRACKER_3:
        MSX_Ptr = loadS3M(1, fMSX, &s0, &i0);
        break;
    case FAST_TRACKER_2:
        MSX_Ptr = loadXM(1, fMSX, &s0, &i0);
        break;
    default:
	    MSX_Tracker = NONE;
    }

	SFX_Tracker = (tSFX&&fSFX) ? tSFX : NONE;

    switch(SFX_Tracker){
    case SCREAM_TRACKER_3:
        SFX_Ptr = loadS3M(0, fSFX, &s1, &i1);
        break;
    case FAST_TRACKER_2:
        SFX_Ptr = loadXM(0, fSFX, &s1, &i1);
        break;
    default:
	    SFX_Tracker = NONE;
    }

	___677cch(s0 + s1, i0 + i1, 0);

    switch(MSX_Tracker){
    case SCREAM_TRACKER_3:
        B(___19a27ch) = ___716fch(1, MSX_Ptr, s0) - 1;
        break;
    case FAST_TRACKER_2:
        B(___19a27ch) = ___75840h(1, MSX_Ptr, s0) - 1;
        break;
    default:
        B(___19a27ch) = -1;
    }

	W(___19a27eh) = B(___24e7a4h);
	___24e7a2h = B(___24e7a4h);
	SFX_Number = nSFX;

    switch(SFX_Tracker){
    case SCREAM_TRACKER_3:
        ___716fch(0, SFX_Ptr, s1);
        break;
    case FAST_TRACKER_2:
        ___75840h(0, SFX_Ptr, s1);
        break;
    default:
        break;
    }

	D(___68c3ch) = ((int)D(___19a279h) >> 0x18) + SFX_Number;

	___5f080h(D(___24e794h), D(___24e790h) - D(___24e794h));

	___24e7a0h = B(___24e7a4h) - ___24e7a2h;

	if(SFX_Ptr) freeMemory(SFX_Ptr);

    switch(Sound_CardType){
    case 0x20:      // GravisUltrasound
        break;
    case 1:
    case 2:
    case 0x11:
    case 0x12:
    case 0x13:      // SoundBlaster
    case 0x19:
    case 0x1a:
    case 0x21:
        if(B(___68d58h)) break;
    default:
        ___67bbch(1, 0, 0, ___24e7a0h + ___24e7a2h);
    }

	___68398h();
	IsSoundEnabled = 1;
}
