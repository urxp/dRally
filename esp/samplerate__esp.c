#include "x86.h"

    extern word Sound_SampleRate;

// 65990h
dword setSampleRate__esp(dword rate){

	if(rate < 0x1f40) return Sound_SampleRate = 0x1f40;

    if(rate > 0xac44) return Sound_SampleRate = 0xac44;

	return Sound_SampleRate = rate;
}
