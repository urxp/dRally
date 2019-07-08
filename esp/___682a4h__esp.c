#include "x86.h"

#pragma enum int
typedef enum TrackerType {
	NO_TRACKER, SCREAM_TRACKER_3, FAST_TRACKER_2
} TrackerType;

    extern TrackerType MSX_Tracker;
    extern byte Sound_CardType;
    extern byte IsSoundEnabled;
    extern byte ___19a46ch[];
    extern byte ___19a690h[];


static dword ___71a88h(dword A0){

	if(Sound_CardType&&IsSoundEnabled){

	    D(___19a46ch) = A0;
	    
        return 1;
    }

	return 0;
}

static dword ___75d44h(dword A0){

	if(Sound_CardType&&IsSoundEnabled){

	    D(___19a690h) = A0;
	    
        return 1;
    }

	return 0;
}


dword ___682a4h(dword A0){

    switch(MSX_Tracker){
    case SCREAM_TRACKER_3:  return ___71a88h(A0);
    case FAST_TRACKER_2:    return ___75d44h(A0);
    default:                return 0;
    }
}
